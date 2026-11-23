#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/A3B17C172EC49C40.h"
#include "unitysdk/UnityEngine/Hash128.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace ABC::CustomRenderPipeline { class TerrainVTManager; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Terrain; }
namespace UnityEngine { class Texture2D; }

#define ABC_CUSTOMRENDERPIPELINE_TERRAINTOOLS_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x27958D0)
#define ABC_CUSTOMRENDERPIPELINE_TERRAINTOOLS_A414C29C23DB83FB_OFFSET UNITYSDK_OFFSET(0x2795CA0)
#define ABC_CUSTOMRENDERPIPELINE_TERRAINTOOLS_A887820110777C22_OFFSET UNITYSDK_OFFSET(0x2795AA0)
#define ABC_CUSTOMRENDERPIPELINE_TERRAINTOOLS_ACCC0EEAE279AF94_OFFSET UNITYSDK_OFFSET(0x2795D20)
#define ABC_CUSTOMRENDERPIPELINE_TERRAINTOOLS_BF096D0449AC10D4_OFFSET UNITYSDK_OFFSET(0x2795D30)
#define ABC_CUSTOMRENDERPIPELINE_TERRAINTOOLS_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2795A00)
#define ABC_CUSTOMRENDERPIPELINE_TERRAINTOOLS_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x2795FD0)
#define ABC_CUSTOMRENDERPIPELINE_TERRAINTOOLS_E9E271314F3E6AF6_OFFSET UNITYSDK_OFFSET(0x2796070)
#define ABC_CUSTOMRENDERPIPELINE_TERRAINTOOLS__CTOR_OFFSET UNITYSDK_OFFSET(0x2796010)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int TerrainTools_TypeDefinitionIndex = 16557;

	class TerrainTools : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Material** StaticGet_E792C22E373A4BE0()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(TerrainTools_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::GameObject* UnitTessellationPlace; // 0x20
		::System::Int32 BasemapResolution; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::Texture2D* m_BasemapAlbedoTex; // 0x30
		::UnityEngine::Texture2D* m_BasemapNormalTex; // 0x38
		::UnityEngine::Texture2D* m_CompressedNormalMap; // 0x40
		::UnityEngine::Material* HlodMat; // 0x48
		::System::Int32 ClipScale; // 0x50
		::System::Int32 ClipHlodLevel; // 0x54
		::UnityEngine::A3B17C172EC49C40 ClipCell; // 0x58
		::UnityEngine::Vector3 OriginalTerrainLoc; // 0x60
		::UnityEngine::Vector3 OriginalTerrainSize; // 0x6C
		::UnityEngine::Hash128 CurrentHeightHash; // 0x78
		::UnityEngine::Hash128 CurrentMaterialIDHash; // 0x88
		::UnityEngine::Hash128 RecordedHeightHash; // 0x98
		::UnityEngine::Hash128 RecordedMaterialIDHash; // 0xA8
		::UnityEngine::Terrain* E3FE62879D0EDA9F; // 0xB8
		::ABC::CustomRenderPipeline::TerrainVTManager* B273A81732B8CEAB; // 0xC0
		::System::Int32 FDCA7285281FD31B; // 0xC8
		::System::Boolean A930CE445E5CCB37; // 0xCC
		::System::Boolean F3D95183AAD265AD; // 0xCD
		::System::Boolean B129B473103AB670; // 0xCE

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINTOOLS_E02954280801633F_OFFSET))(this);
		}

		::System::Void BF096D0449AC10D4(::System::Boolean ADD5E9E5BC5B5BB5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINTOOLS_BF096D0449AC10D4_OFFSET))(this, ADD5E9E5BC5B5BB5);
		}

		::System::Void ACCC0EEAE279AF94(::System::Boolean B975DB7246D89AA7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINTOOLS_ACCC0EEAE279AF94_OFFSET))(this, B975DB7246D89AA7);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINTOOLS_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINTOOLS__CTOR_OFFSET))(this);
		}

		::System::Void A887820110777C22()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINTOOLS_A887820110777C22_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINTOOLS_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void A414C29C23DB83FB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINTOOLS_A414C29C23DB83FB_OFFSET))(this);
		}

		static ::UnityEngine::Material* E9E271314F3E6AF6()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINTOOLS_E9E271314F3E6AF6_OFFSET))();
		}
	};
}
