#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAOHCPDEFKP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JBAPAJGKGED_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B4F3750)
#define JBAPAJGKGED_DHKCCIDKFAH_OFFSET UNITYSDK_OFFSET(0x1B4F3A80)
#define JBAPAJGKGED_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B4F3960)
#define JBAPAJGKGED_JMBLEJJDJAK_OFFSET UNITYSDK_OFFSET(0x1B4F3970)
#define JBAPAJGKGED_KEPNENDPLME_OFFSET UNITYSDK_OFFSET(0x1B4F3B90)
#define JBAPAJGKGED_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B4F3840)
#define JBAPAJGKGED_LOHADBOEFKG_OFFSET UNITYSDK_OFFSET(0x1B4F3850)
#define JBAPAJGKGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F3740)

inline static constexpr unsigned int JBAPAJGKGED_TypeDefinitionIndex = 11237;

class JBAPAJGKGED : public ::System::Object
{
public:
	::NAOHCPDEFKP HBDPAIKANDB; // 0x10
	::System::String* ALBGACGANKL; // 0x20
	::System::String* KGEMPPEIMCG; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* FNMEGDPIGPN; // 0x38
	::System::String* EEHNOLCHJEE; // 0x40
	::System::Byte CNIAANMNOCF; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x49
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4A

	::System::Void _ctor(::NAOHCPDEFKP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NAOHCPDEFKP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JBAPAJGKGED__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAPAJGKGED_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAPAJGKGED_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* LOHADBOEFKG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAPAJGKGED_LOHADBOEFKG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JBAPAJGKGED_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* JMBLEJJDJAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAPAJGKGED_JMBLEJJDJAK_OFFSET))(this);
	}

	::System::String* DHKCCIDKFAH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAPAJGKGED_DHKCCIDKFAH_OFFSET))(this);
	}

	::System::String* KEPNENDPLME()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAPAJGKGED_KEPNENDPLME_OFFSET))(this);
	}
};
