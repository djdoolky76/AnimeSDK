#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectForUIScale.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_GLITCH01FORUISCALE_ADAPTATION_OFFSET UNITYSDK_OFFSET(0x12B483C0)
#define MOLEMOLE_GLITCH01FORUISCALE_FEBBHFKOCHK_OFFSET UNITYSDK_OFFSET(0x12B49230)
#define MOLEMOLE_GLITCH01FORUISCALE_GETDURATION_OFFSET UNITYSDK_OFFSET(0x12B48B70)
#define MOLEMOLE_GLITCH01FORUISCALE_NDCOBAIIOAM_OFFSET UNITYSDK_OFFSET(0x12B48870)
#define MOLEMOLE_GLITCH01FORUISCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B491E0)

namespace MoleMole
{
	inline static constexpr unsigned int Glitch01ForUIScale_TypeDefinitionIndex = 44665;

	class Glitch01ForUIScale : public ::MoleMole::EffectForUIScale
	{
	public:
		::System::Single xsize; // 0x18
		::System::Single ysize; // 0x1C
		::UnityEngine::Transform* Root; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLITCH01FORUISCALE__CTOR_OFFSET))(this);
		}

		::System::Void Adaptation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLITCH01FORUISCALE_ADAPTATION_OFFSET))(this);
		}

		::System::Single GetDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLITCH01FORUISCALE_GETDURATION_OFFSET))(this);
		}

		::System::Single FEBBHFKOCHK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLITCH01FORUISCALE_FEBBHFKOCHK_OFFSET))(this);
		}

		::System::Void NDCOBAIIOAM(::UnityEngine::ParticleSystem* JJFHCDEFFPD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + MOLEMOLE_GLITCH01FORUISCALE_NDCOBAIIOAM_OFFSET))(this, JJFHCDEFFPD);
		}
	};
}
