#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2, texture3;
	float angle = 0;
	float angle1 = 0;
	float angle2 = 0;
	float ss1 = 0;
	float ss3 = 0;
	float scale = 4;
	float speed = 0.7f;
	float p0x = 50;
	float p0z = 0;
	float p1x = 6.8;
	float p1z = 80.1;
	float p2x = 40.7;
	float p2z = 10;
	float x = 0;
	float z = 0;
	float t = 0;
	float tempX = 0;
	float tempZ = 0;
	float pX[750];
	float pZ[750];
	int p = 0;

	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);
	void BuildColoredCube();
	void BuildColoredCube2();
	void BuildColoredPlane();
	void DrawColoredCube();
	void DrawColoredCube2();
	//void DrawColoredCube(int type, float s1, float s2, float s3, float sc1, float sc2, float sc3);
	void DrawColoredPlane();
	void bezierInit();

	
};

