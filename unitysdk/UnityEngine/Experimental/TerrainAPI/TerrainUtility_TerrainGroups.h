#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINGROUPS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FECD940)

namespace UnityEngine::Experimental::TerrainAPI
{
	inline static constexpr unsigned int TerrainUtility_TerrainGroups_TypeDefinitionIndex = 32583;

	class TerrainUtility_TerrainGroups
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINGROUPS__CTOR_OFFSET))(this);
		}
	};
}
