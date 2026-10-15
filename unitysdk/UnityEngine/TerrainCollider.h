#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider.h"
namespace UnityEngine { class TerrainData; }

#define UNITYENGINE_TERRAINCOLLIDER_SET_TERRAINDATA_OFFSET UNITYSDK_OFFSET(0x1F4A2B20)

namespace UnityEngine
{
	class TerrainCollider : public ::UnityEngine::Collider
	{
	public:
		::System::Void set_terrainData(::UnityEngine::TerrainData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TerrainData*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINCOLLIDER_SET_TERRAINDATA_OFFSET))(this, a1);
		}

	};
}
