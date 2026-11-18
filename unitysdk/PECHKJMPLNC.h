#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHDGMKGKDBP.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/UnityEngine/Vector2.h"

class AODIFLIBBJA;
namespace MoleMole::Config { class PhotoCameraModeOverride; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define PECHKJMPLNC_CLPNEPAFCNK_OFFSET UNITYSDK_OFFSET(0x16FA0F30)
#define PECHKJMPLNC_DIHCGHDHPJP_OFFSET UNITYSDK_OFFSET(0x16FA0FD0)
#define PECHKJMPLNC_FNKLMHEFMHH_OFFSET UNITYSDK_OFFSET(0x16FA0F90)
#define PECHKJMPLNC_IDNCOKIKHFK_OFFSET UNITYSDK_OFFSET(0x16FA0E90)
#define PECHKJMPLNC_KEFMBIMDCNB_OFFSET UNITYSDK_OFFSET(0x16FA0EE0)
#define PECHKJMPLNC_MHHJPBJILBJ_OFFSET UNITYSDK_OFFSET(0x16FA0E50)
#define PECHKJMPLNC_NAMCJIPBNLE_OFFSET UNITYSDK_OFFSET(0x16FA1080)
#define PECHKJMPLNC_ONDRAG_OFFSET UNITYSDK_OFFSET(0x16FA1030)
#define PECHKJMPLNC__CTOR_OFFSET UNITYSDK_OFFSET(0x16FA10E0)

inline static constexpr unsigned int PECHKJMPLNC_TypeDefinitionIndex = 40750;

class PECHKJMPLNC : public ::KHDGMKGKDBP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECHKJMPLNC__CTOR_OFFSET))(this);
	}

	::System::Void MHHJPBJILBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECHKJMPLNC_MHHJPBJILBJ_OFFSET))(this);
	}

	::System::Void IDNCOKIKHFK(::AODIFLIBBJA* GEJCKFFFKCL)
	{
		return ((::System::Void(*)(::PVOID, ::AODIFLIBBJA*))((::PBYTE)hIl2Cpp + PECHKJMPLNC_IDNCOKIKHFK_OFFSET))(this, GEJCKFFFKCL);
	}

	::System::Void KEFMBIMDCNB(::MoleMole::Config::PhotoCameraModeOverride* EKPAIOGJEPO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PhotoCameraModeOverride*))((::PBYTE)hIl2Cpp + PECHKJMPLNC_KEFMBIMDCNB_OFFSET))(this, EKPAIOGJEPO);
	}

	::System::Void CLPNEPAFCNK(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PECHKJMPLNC_CLPNEPAFCNK_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void FNKLMHEFMHH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECHKJMPLNC_FNKLMHEFMHH_OFFSET))(this);
	}

	::System::Boolean DIHCGHDHPJP(::MoleMole::InputActionEvent MLNBANAGAEE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + PECHKJMPLNC_DIHCGHDHPJP_OFFSET))(this, MLNBANAGAEE);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD, ::UnityEngine::Vector2 NHODGOCLALJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PECHKJMPLNC_ONDRAG_OFFSET))(this, DIHNFECKHMD, NHODGOCLALJ);
	}

	::System::Void NAMCJIPBNLE(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD, ::System::Single HKICGJDBPDP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Single))((::PBYTE)hIl2Cpp + PECHKJMPLNC_NAMCJIPBNLE_OFFSET))(this, DIHNFECKHMD, HKICGJDBPDP);
	}
};
