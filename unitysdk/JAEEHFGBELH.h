#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/BuddyFightModeType.h"

namespace System { class String; }

#define JAEEHFGBELH_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x197F03B0)
#define JAEEHFGBELH_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x197F0370)
#define JAEEHFGBELH_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x197F0440)
#define JAEEHFGBELH_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x197F02E0)
#define JAEEHFGBELH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x197F0150)
#define JAEEHFGBELH__CCTOR_OFFSET UNITYSDK_OFFSET(0x197F0260)
#define JAEEHFGBELH__CTOR_OFFSET UNITYSDK_OFFSET(0x197F02D0)

inline static constexpr unsigned int JAEEHFGBELH_TypeDefinitionIndex = 39825;

class JAEEHFGBELH : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x30; // 0x0
	::MoleMole::Config::BuddyFightModeType COONCFIEKOE; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAEEHFGBELH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAEEHFGBELH__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAEEHFGBELH_TOSTRING_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAEEHFGBELH_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAEEHFGBELH_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::MoleMole::Config::BuddyFightModeType OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BuddyFightModeType))((::PBYTE)hIl2Cpp + JAEEHFGBELH_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, OBNIAHNMHPF);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAEEHFGBELH_FIGPAOKNJLN_OFFSET))(this);
	}
};
