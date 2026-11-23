#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Texture2D; }

#define ABC_CUSTOMRENDERPIPELINE_TERRAINPROXYMANAGER_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x27FB590)
#define ABC_CUSTOMRENDERPIPELINE_TERRAINPROXYMANAGER_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x27FB670)
#define ABC_CUSTOMRENDERPIPELINE_TERRAINPROXYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int TerrainProxyManager_TypeDefinitionIndex = 16777;

	class TerrainProxyManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 TerrainLoc; // 0x20
		::UnityEngine::Vector3 TerrainSize; // 0x2C
		::System::Int32 hmResolution; // 0x38
		::System::Byte _padding0[0x4];
		::UnityEngine::Texture2D* BasemapAlbedoTex; // 0x40
		::UnityEngine::Texture2D* BasemapNormalTex; // 0x48
		::UnityEngine::Texture2D* CompressedNormalMap; // 0x50
		::System::Int32 MatIDResolutionBase; // 0x58
		::System::Int32 MatIDResolutionProxy; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINPROXYMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINPROXYMANAGER_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINPROXYMANAGER_BF13C91AD80643D2_OFFSET))(this);
		}
	};
}
