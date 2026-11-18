#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_RayAxis.h"
#include "unitysdk/PKMJPMFCNBK.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Transform; }

#define FOINPLMIAMM_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x11C75330)
#define FOINPLMIAMM_GMJNNHHDPEK_OFFSET UNITYSDK_OFFSET(0x11C75880)
#define FOINPLMIAMM_JDFECBKAFIL_OFFSET UNITYSDK_OFFSET(0x11C75440)
#define FOINPLMIAMM_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x11C75D50)
#define FOINPLMIAMM__CTOR_OFFSET UNITYSDK_OFFSET(0x11C753D0)

inline static constexpr unsigned int FOINPLMIAMM_TypeDefinitionIndex = 60299;

class FOINPLMIAMM : public ::PKMJPMFCNBK
{
public:
	::MoleMole::Battle::Entity* HHDLKGCKKPE; // 0x80
	::UnityEngine::Transform* JDIDMIDLHKJ; // 0x88
	::UnityEngine::Transform* KAIFPAGMFEC; // 0x90
	::UnityEngine::Transform* JKJJHACLPOM; // 0x98
	::MoleMole::Config::AnimatorZoneHitWallEffect_RayAxis KANJDCAECLM; // 0xA0
	::System::Single IMNEHLOHEJJ; // 0xA4
	::System::Boolean FHPBAOIJDPO; // 0xA8
	::System::Byte _padding0[0x3];
	::System::Int32 ACNDDCKNDLL; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOINPLMIAMM__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOINPLMIAMM_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Boolean JDFECBKAFIL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOINPLMIAMM_JDFECBKAFIL_OFFSET))(this);
	}

	::System::Boolean GMJNNHHDPEK(::UnityEngine::Vector3& GIAEPMKCBIB, ::UnityEngine::Vector3& DOBFFIICAII)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FOINPLMIAMM_GMJNNHHDPEK_OFFSET))(this, GIAEPMKCBIB, DOBFFIICAII);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOINPLMIAMM_KHJELIBOECB_OFFSET))(this);
	}
};
