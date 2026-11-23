#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ACF10FE87B4C5617.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class E2E2311225330715; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Transform; }

#define ABC_TECHART_VFX_MONOEFFECTPARTICLETRANSFORM_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x28A63C0)
#define ABC_TECHART_VFX_MONOEFFECTPARTICLETRANSFORM_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x28A6480)
#define ABC_TECHART_VFX_MONOEFFECTPARTICLETRANSFORM_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x28A6570)
#define ABC_TECHART_VFX_MONOEFFECTPARTICLETRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x28A6BD0)

namespace ABC::TechArt::VFX
{
	inline static constexpr unsigned int MonoEffectParticleTransform_TypeDefinitionIndex = 16233;

	class MonoEffectParticleTransform : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* A22854383FCF98FB; // 0x20
		::UnityEngine::ParticleSystemRenderer* FCB3BE3FCA888D6E; // 0x28
		::UnityEngine::E2E2311225330715* A1386835173FB267; // 0x30
		::UnityEngine::E8984F4E44AE20E5 E46D834FA50C6A25; // 0x38
		::UnityEngine::Vector3 A2447B974572B173; // 0x48
		::UnityEngine::ACF10FE87B4C5617 F617E1D6DB7123A0; // 0x54
		::UnityEngine::ACF10FE87B4C5617 E243A1C9CE54E6F8; // 0x94
		::System::Int32 B95EA28B3892394E; // 0xD4
		::System::Int32 E11FC7373244D4C1; // 0xD8
		::System::Int32 ADC3018855925810; // 0xDC
		::System::Int32 BDEDE91602AD5FEF; // 0xE0
		::System::Int32 BCDBA430689598DD; // 0xE4
		::System::Int32 ABE3A07735BD5F33; // 0xE8

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOEFFECTPARTICLETRANSFORM_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOEFFECTPARTICLETRANSFORM_E02954280801633F_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOEFFECTPARTICLETRANSFORM_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOEFFECTPARTICLETRANSFORM__CTOR_OFFSET))(this);
		}
	};
}
