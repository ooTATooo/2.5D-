﻿#include "AssetManager.h"

void AssetManager::Init()
{
	KdSquarePolygon::PivotType pivot = KdSquarePolygon::PivotType::Center_Bottom;
	LoadMaterial("enemy01Idol", "Asset/Textures/Enemy01/slime01.png");
	SetMaterial("enemy01Idol", 1.0f, pivot, 12, 1);

	LoadMaterial("enemy01Attack", "Asset/Textures/Enemy01/slime01.png");
	SetMaterial("enemy01Attack", 1.0f, pivot, 12, 1);

	LoadMaterial("enemy01Run", "Asset/Textures/Enemy01/slime01.png");
	SetMaterial("enemy01Run", 1.0f, pivot, 12, 1);

}

KdSquarePolygon AssetManager::GetMaterial(std::string _name)
{
	if (m_materialList.find(_name) != m_materialList.end())
	{
		return m_materialList.at(_name);
	}
}

KdModelData AssetManager::GetModel(std::string _name)
{
	if (m_modelList.find(_name) != m_modelList.end())
	{
		return m_modelList.at(_name);
	}
}

KdTexture* AssetManager::GetTex(std::string _name)
{
	if (m_texList.find(_name) != m_texList.end())
	{
		return &m_texList.at(_name);
	}
}

void AssetManager::SetMaterial(std::string _name, float _scale, KdSquarePolygon::PivotType _pivot, int _splitX, int _splitY)
{
	m_materialList[_name].SetScale(_scale);
	m_materialList[_name].SetPivot(_pivot);
	m_materialList[_name].SetSplit(_splitX, _splitY);
}