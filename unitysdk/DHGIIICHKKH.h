#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/KBIHLEAJJCO.h"

namespace MoleMole::Config { class ConfigEntitySkill; }
namespace System { class String; }

#define DHGIIICHKKH_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1329C620)
#define DHGIIICHKKH_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1329C680)
#define DHGIIICHKKH_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1329C590)
#define DHGIIICHKKH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1329C510)
#define DHGIIICHKKH__CTOR_OFFSET UNITYSDK_OFFSET(0x1329C580)

inline static constexpr unsigned int DHGIIICHKKH_TypeDefinitionIndex = 44957;

class DHGIIICHKKH : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xE6; // 0x0
	::MoleMole::Config::ConfigEntitySkill* OGJKJAPOMHO; // 0x20
	::System::String* KDADINNPFAK; // 0x28
	::KBIHLEAJJCO NOPHPFLEPDO; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHGIIICHKKH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGIIICHKKH__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGIIICHKKH_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::String* AADJPMHPNAH, ::MoleMole::Config::ConfigEntitySkill* NICOKFMIMJH, ::KBIHLEAJJCO JIBDFMFLJHA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntitySkill*, ::KBIHLEAJJCO))((::PBYTE)hIl2Cpp + DHGIIICHKKH_CNHBDOMKKDE_OFFSET))(this, AADJPMHPNAH, NICOKFMIMJH, JIBDFMFLJHA);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGIIICHKKH_FIGPAOKNJLN_OFFSET))(this);
	}
};
