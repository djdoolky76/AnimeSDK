#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NEOKPBGNDPA_CDPMBEBOMDK_OFFSET UNITYSDK_OFFSET(0x808A30)
#define NEOKPBGNDPA_OEIHPIMHJHI_OFFSET UNITYSDK_OFFSET(0x8089F0)
#define NEOKPBGNDPA__CTOR_OFFSET UNITYSDK_OFFSET(0x808940)

inline static constexpr unsigned int NEOKPBGNDPA_TypeDefinitionIndex = 70773;

struct alignas(4) NEOKPBGNDPA
{
	::System::Boolean CCGOFPELLMO; // 0x10
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 LCOCNDHCNHB; // 0x14
	::System::Single CILENJJACMM; // 0x20
	::UnityEngine::Vector3 PDKGAJNBLKO; // 0x24
	::UnityEngine::RaycastHit AIJKIFIEKFJ; // 0x30

	::System::Void _ctor(::System::Boolean DDAJAEJAAKJ, ::UnityEngine::Vector3 JEGOPMMENMI, ::System::Single HLGJCEEAOCG, ::UnityEngine::Vector3 HKOFHOFPKBM, ::UnityEngine::RaycastHit PLJONGOPALM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + NEOKPBGNDPA__CTOR_OFFSET))(this, DDAJAEJAAKJ, JEGOPMMENMI, HLGJCEEAOCG, HKOFHOFPKBM, PLJONGOPALM);
	}

	::UnityEngine::Vector3 OEIHPIMHJHI()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOKPBGNDPA_OEIHPIMHJHI_OFFSET))(this);
	}

	/*
	::NEOKPBGNDPA CDPMBEBOMDK(::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::NEOKPBGNDPA(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NEOKPBGNDPA_CDPMBEBOMDK_OFFSET))(this, OHOGDOMNHNK);
	}
	*/
};
