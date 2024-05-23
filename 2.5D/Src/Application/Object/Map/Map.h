﻿#pragma once

class Map :public KdGameObject
{
public:

	Map() { Init(); }
	~Map()override {}

	void Init()override;
	void DrawLit()override;

private:

	// モデル
	KdModelData m_model;

	Math::Matrix rotMat;
};