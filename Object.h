#pragma once

class Object
{

public:
	float x;			//x座標
	float y;			//y座標
	float width;		//幅
	float height;		//高さ

	enum class CState
	{
		NORMAL,
		DIE
	};

	CState State;

};