#pragma once
#include "Main.h"
#include "Object.h"
#include "Enemy.h"

class CEnemy;

class CEnemyManager : public Object
{

public :
	CEnemyManager();
	~CEnemyManager();



	void Update();
	void Draw();
	void Main();

	float enemymanagercount;
	static CEnemy *Enemy;

};