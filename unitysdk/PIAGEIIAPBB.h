#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/FightModeType.h"

namespace System { class String; }

#define PIAGEIIAPBB_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1C65AC40)
#define PIAGEIIAPBB_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1C65AC00)
#define PIAGEIIAPBB_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1C65AB70)
#define PIAGEIIAPBB_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1C65AAE0)
#define PIAGEIIAPBB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C65A950)
#define PIAGEIIAPBB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C65AA60)
#define PIAGEIIAPBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C65AAD0)

inline static constexpr unsigned int PIAGEIIAPBB_TypeDefinitionIndex = 60820;

class PIAGEIIAPBB : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x18; // 0x0
	::MoleMole::Config::FightModeType COONCFIEKOE; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIAGEIIAPBB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIAGEIIAPBB__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIAGEIIAPBB_TOSTRING_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIAGEIIAPBB_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIAGEIIAPBB_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIAGEIIAPBB_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::MoleMole::Config::FightModeType OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::FightModeType))((::PBYTE)hIl2Cpp + PIAGEIIAPBB_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, OBNIAHNMHPF);
	}
};
