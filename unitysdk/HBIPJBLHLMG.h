#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOKPKFDLENO.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"

#define HBIPJBLHLMG_BPKPNFLAMBJ_OFFSET UNITYSDK_OFFSET(0x13D81570)
#define HBIPJBLHLMG_CBLHIEGANFH_OFFSET UNITYSDK_OFFSET(0x13D81270)
#define HBIPJBLHLMG_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x13D80CA0)
#define HBIPJBLHLMG__CTOR_OFFSET UNITYSDK_OFFSET(0x13D814C0)

inline static constexpr unsigned int HBIPJBLHLMG_TypeDefinitionIndex = 43106;

class HBIPJBLHLMG : public ::DOKPKFDLENO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIPJBLHLMG__CTOR_OFFSET))(this);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIPJBLHLMG_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void CBLHIEGANFH(::MoleMole::InputLogicEventType OKIJEFNKANO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + HBIPJBLHLMG_CBLHIEGANFH_OFFSET))(this, OKIJEFNKANO);
	}

	::System::Void BPKPNFLAMBJ(::MoleMole::InputLogicEventType OIFDPEICMAP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + HBIPJBLHLMG_BPKPNFLAMBJ_OFFSET))(this, OIFDPEICMAP);
	}
};
