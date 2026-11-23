#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ACF10FE87B4C5617.h"
#include "unitysdk/UnityEngine/B3A7F113FE1DE383.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Material; }

#define ABC_CUSTOMRENDERPIPELINE_TERRAINDECALCOMP_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x27FB140)
#define ABC_CUSTOMRENDERPIPELINE_TERRAINDECALCOMP_AAA8B6197490C7FB_OFFSET UNITYSDK_OFFSET(0x27FB080)
#define ABC_CUSTOMRENDERPIPELINE_TERRAINDECALCOMP_AE5B361E31C82539_OFFSET UNITYSDK_OFFSET(0x27FAB10)
#define ABC_CUSTOMRENDERPIPELINE_TERRAINDECALCOMP_BB3FA1E3702D8E07_OFFSET UNITYSDK_OFFSET(0x27FB010)
#define ABC_CUSTOMRENDERPIPELINE_TERRAINDECALCOMP_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x27FB2F0)
#define ABC_CUSTOMRENDERPIPELINE_TERRAINDECALCOMP_E5C21FC51BD6FB5F_OFFSET UNITYSDK_OFFSET(0x27FB420)
#define ABC_CUSTOMRENDERPIPELINE_TERRAINDECALCOMP_F2A00A2C458A500F_OFFSET UNITYSDK_OFFSET(0x27FB060)
#define ABC_CUSTOMRENDERPIPELINE_TERRAINDECALCOMP_FE0125CDE457C86A_OFFSET UNITYSDK_OFFSET(0x27FB190)
#define ABC_CUSTOMRENDERPIPELINE_TERRAINDECALCOMP__CTOR_OFFSET UNITYSDK_OFFSET(0x27FB4F0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int TerrainDecalComp_TypeDefinitionIndex = 16768;

	class TerrainDecalComp : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::B3A7F113FE1DE383 B34F1F4F3657848C; // 0x20
		::UnityEngine::Material* material; // 0x38
		::System::Boolean overrideAlbedo; // 0x40
		::System::Boolean overrideNormal; // 0x41
		::System::Boolean needSourceVT; // 0x42
		::System::Byte _padding0[0x1];
		::System::Int32 AlbedoPass; // 0x44
		::System::Int32 NormalPass; // 0x48
		::UnityEngine::E8984F4E44AE20E5 DecalUVCenterScale; // 0x4C
		::System::Single DecalUVRot; // 0x5C
		::UnityEngine::Vector2 p0; // 0x60
		::UnityEngine::Vector2 p1; // 0x68
		::UnityEngine::Vector2 p2; // 0x70
		::UnityEngine::Vector2 p3; // 0x78
		::UnityEngine::Vector2 l01; // 0x80
		::UnityEngine::Vector2 l12; // 0x88
		::UnityEngine::Vector2 l23; // 0x90
		::UnityEngine::Vector2 l30; // 0x98
		::System::Boolean isPropDirty; // 0xA0
		::System::Byte _padding1[0x3];
		::UnityEngine::ACF10FE87B4C5617 AA52CFC54BFA5653; // 0xA4

		::System::Boolean BB3FA1E3702D8E07()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINDECALCOMP_BB3FA1E3702D8E07_OFFSET))(this);
		}

		::UnityEngine::Vector2 E5C21FC51BD6FB5F(::UnityEngine::Vector2 F5F662A8A313EA82)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINDECALCOMP_E5C21FC51BD6FB5F_OFFSET))(this, F5F662A8A313EA82);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINDECALCOMP_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Boolean F2A00A2C458A500F()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINDECALCOMP_F2A00A2C458A500F_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINDECALCOMP__CTOR_OFFSET))(this);
		}

		::System::Void FE0125CDE457C86A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINDECALCOMP_FE0125CDE457C86A_OFFSET))(this);
		}

		::System::Void AE5B361E31C82539()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINDECALCOMP_AE5B361E31C82539_OFFSET))(this);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINDECALCOMP_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::System::Boolean AAA8B6197490C7FB(::System::Boolean B54329C0EA0820FE)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINDECALCOMP_AAA8B6197490C7FB_OFFSET))(this, B54329C0EA0820FE);
		}
	};
}
