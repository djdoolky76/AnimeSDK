#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINGROUPS_CTOR_OFFSET UNITYSDK_OFFSET(0x1F471470)

namespace UnityEngine::Experimental::TerrainAPI
{
	inline static constexpr unsigned int TerrainUtility_TerrainGroups_TypeDefinitionIndex = 5346;

	class TerrainUtility_TerrainGroups
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINGROUPS_CTOR_OFFSET))(this);
		}

	};
}
