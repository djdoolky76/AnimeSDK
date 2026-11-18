#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int SceneObjectType_TypeDefinitionIndex = 63516;

enum class SceneObjectType : ::System::Int32
{
	None = 12,
	ComputerGroup = 0,
	TV_Wall = 1,
	SceneObjectProxySetting = 7,
	Single_Screen = 2,
	PlatModel = 9,
	LightGroup = 3,
	AreaCheckEnableGameObject = 11,
	AreaCheckPlayAni = 10,
	SequencePlay = 5,
	MainCityObject = 4,
	ModifyMaterialProperty = 6,
	TrafficLight = 8,
};
