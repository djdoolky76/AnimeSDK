#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

class AGJFDPBLDDF;
class KBHJAAOJPGI;
namespace MoleMole::Config { class ConfigLockTarget; }
namespace System { class String; }

#define FDGIKPNDCGA_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x1617B0E0)
#define FDGIKPNDCGA_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1617B5A0)
#define FDGIKPNDCGA_GCPDPBAMNGC_OFFSET UNITYSDK_OFFSET(0x1617B400)
#define FDGIKPNDCGA_KCHLJMFPMLA_OFFSET UNITYSDK_OFFSET(0x1617B4C0)
#define FDGIKPNDCGA_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x1617B590)
#define FDGIKPNDCGA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1617B1E0)
#define FDGIKPNDCGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1617B390)

inline static constexpr unsigned int FDGIKPNDCGA_TypeDefinitionIndex = 71693;

class FDGIKPNDCGA : public ::PKMJPMFCNBK
{
public:
	::MoleMole::Config::ConfigLockTarget* HAKGCICNCGF; // 0x80
	::MoleMole::Config::ConfigLockTarget* CLDEODPFPOJ; // 0x88
	::AGJFDPBLDDF* HACJFKBLODH; // 0x90
	::KBHJAAOJPGI* AAILEAOCJHB; // 0x98
	::System::Int32 PJDNBEKKHHF; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGIKPNDCGA__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGIKPNDCGA_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGIKPNDCGA_TOSTRING_OFFSET))(this);
	}

	::System::Void GCPDPBAMNGC(::System::Single NAOMMOIOPIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FDGIKPNDCGA_GCPDPBAMNGC_OFFSET))(this, NAOMMOIOPIC);
	}

	::System::Boolean KCHLJMFPMLA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGIKPNDCGA_KCHLJMFPMLA_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGIKPNDCGA_KHJELIBOECB_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGIKPNDCGA_DPIHOJBBGLA_OFFSET))(this);
	}
};
