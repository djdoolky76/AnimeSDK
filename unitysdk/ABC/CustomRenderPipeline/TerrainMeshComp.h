#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Texture2D; }

#define ABC_CUSTOMRENDERPIPELINE_TERRAINMESHCOMP_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x277C670)
#define ABC_CUSTOMRENDERPIPELINE_TERRAINMESHCOMP_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x277C750)
#define ABC_CUSTOMRENDERPIPELINE_TERRAINMESHCOMP__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int TerrainMeshComp_TypeDefinitionIndex = 16463;

	class TerrainMeshComp : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 terrainLoc; // 0x20
		::UnityEngine::Vector3 terrainSize; // 0x2C
		::UnityEngine::Texture2D* m_BasemapAlbedoTex; // 0x38
		::UnityEngine::Texture2D* m_BasemapNormalTex; // 0x40

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINMESHCOMP_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINMESHCOMP__CTOR_OFFSET))(this);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINMESHCOMP_A28D6A0C3E793E7D_OFFSET))(this);
		}
	};
}
