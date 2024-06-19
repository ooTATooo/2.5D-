﻿#pragma once

class EnemyManager
{
public:

	enum class SpawnType
	{
		Top_Left,		// 上段左
		Top_Center,		// 上段中央
		Top_Right,		// 上段右
		Bottom_Left,	// 下段左
		Bottom_Center,	// 下段中央
		Bottom_Right,	// 下段右
		Left_Top,		// 左上段
		Left_Center,	// 左中段
		Left_Bottom,	// 左下段
		Right_Top,		// 右上段
		Right_Center,	// 右中段
		Right_Bottom,	// 右下段
	};

	void Init();

	void AddEnemy(SpawnType _type, KdGameObject::ObjType _enemyType, int _num);

	void Load(std::string a_filePath);

private:

	std::unordered_map<SpawnType, Math::Vector3> m_spawnPosList;
private:

	EnemyManager() { Init(); }
	~EnemyManager() {}

public:

	static EnemyManager& Instance()
	{
		static EnemyManager instance;
		return instance;
	}
};