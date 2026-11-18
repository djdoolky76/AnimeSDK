#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

class AGJFDPBLDDF;
class CAPAFILOMGC;
class KBHJAAOJPGI;
namespace MoleMole::Config { class ConfigLockTarget; }

#define GEMGECAAPJD_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x15F16D30)
#define GEMGECAAPJD_GCPDPBAMNGC_OFFSET UNITYSDK_OFFSET(0x15F16EA0)
#define GEMGECAAPJD_KCHLJMFPMLA_OFFSET UNITYSDK_OFFSET(0x15F16F70)
#define GEMGECAAPJD_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x15F17040)
#define GEMGECAAPJD__CTOR_OFFSET UNITYSDK_OFFSET(0x15F16E30)

inline static constexpr unsigned int GEMGECAAPJD_TypeDefinitionIndex = 54544;

class GEMGECAAPJD : public ::PKMJPMFCNBK
{
public:
	::AGJFDPBLDDF* HACJFKBLODH; // 0x80
	::KBHJAAOJPGI* AAILEAOCJHB; // 0x88
	::CAPAFILOMGC* BJLIDAGEFAO; // 0x90
	::MoleMole::Config::ConfigLockTarget* PLMEAADMGLF; // 0x98
	::System::Int32 PJDNBEKKHHF; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMGECAAPJD__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMGECAAPJD_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void GCPDPBAMNGC(::System::Single NAOMMOIOPIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEMGECAAPJD_GCPDPBAMNGC_OFFSET))(this, NAOMMOIOPIC);
	}

	::System::Boolean KCHLJMFPMLA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMGECAAPJD_KCHLJMFPMLA_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMGECAAPJD_KHJELIBOECB_OFFSET))(this);
	}
};
