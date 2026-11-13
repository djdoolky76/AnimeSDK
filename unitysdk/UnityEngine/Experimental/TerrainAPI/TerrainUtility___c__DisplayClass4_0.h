#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x2092B640)

namespace UnityEngine::Experimental::TerrainAPI
{
	inline static constexpr unsigned int TerrainUtility___c__DisplayClass4_0_TypeDefinitionIndex = 5352;

	class TerrainUtility___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Boolean onlyAutoConnectedTerrains; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

	};
}
