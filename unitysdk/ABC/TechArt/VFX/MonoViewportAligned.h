#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/TechArt/VFX/MonoViewportAligned_ECE01503A668174B.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/ParticleSystem_AF362526E5AFF6EF.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class ParticleSystem; }

#define ABC_TECHART_VFX_MONOVIEWPORTALIGNED_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x28A7520)
#define ABC_TECHART_VFX_MONOVIEWPORTALIGNED_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x28A7570)
#define ABC_TECHART_VFX_MONOVIEWPORTALIGNED_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x28A7630)
#define ABC_TECHART_VFX_MONOVIEWPORTALIGNED_E0A8D62BC88A8D66_OFFSET UNITYSDK_OFFSET(0x28A7250)
#define ABC_TECHART_VFX_MONOVIEWPORTALIGNED_F8EAA0709D53DF56_OFFSET UNITYSDK_OFFSET(0x28A6CB0)
#define ABC_TECHART_VFX_MONOVIEWPORTALIGNED__CTOR_OFFSET UNITYSDK_OFFSET(0x28A7730)

namespace ABC::TechArt::VFX
{
	inline static constexpr unsigned int MonoViewportAligned_TypeDefinitionIndex = 16211;

	class MonoViewportAligned : public ::UnityEngine::MonoBehaviour
	{
	public:
		::ABC::TechArt::VFX::MonoViewportAligned_ECE01503A668174B AlignMode; // 0x20
		::System::Boolean UseDuration; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single AlignDurationTime; // 0x28
		::System::Boolean LockYAxis; // 0x2C
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector3 OffsetRotation; // 0x30
		::System::Byte _padding2[0x4];
		::UnityEngine::ParticleSystem* AA4AF8098ABAD8CB; // 0x40
		::UnityEngine::ParticleSystem_AF362526E5AFF6EF E199671CA67BD712; // 0x48
		::UnityEngine::Camera* E023400F6025FE91; // 0x50
		::System::Single A9AE66459E79172D; // 0x58

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOVIEWPORTALIGNED_E02954280801633F_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOVIEWPORTALIGNED_BF13C91AD80643D2_OFFSET))(this);
		}

		::UnityEngine::Vector3 E0A8D62BC88A8D66()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOVIEWPORTALIGNED_E0A8D62BC88A8D66_OFFSET))(this);
		}

		::System::Void F8EAA0709D53DF56(::UnityEngine::Vector3 A199913F8B1E98E6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOVIEWPORTALIGNED_F8EAA0709D53DF56_OFFSET))(this, A199913F8B1E98E6);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOVIEWPORTALIGNED_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOVIEWPORTALIGNED__CTOR_OFFSET))(this);
		}
	};
}
