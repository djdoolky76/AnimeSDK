#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPKACNLBFAB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BMFKFIEBPNC_ADDAIGNEAEO_OFFSET UNITYSDK_OFFSET(0x17EF6720)
#define BMFKFIEBPNC_ALLLANGAPJA_OFFSET UNITYSDK_OFFSET(0x17EF63A0)
#define BMFKFIEBPNC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17EF64D0)
#define BMFKFIEBPNC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17EF64B0)
#define BMFKFIEBPNC_GMLOOBNIHPK_OFFSET UNITYSDK_OFFSET(0x17EF6180)
#define BMFKFIEBPNC_JKIKMPIKIJG_OFFSET UNITYSDK_OFFSET(0x17EF6290)
#define BMFKFIEBPNC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17EF64C0)
#define BMFKFIEBPNC_LKPAHDMKDDD_OFFSET UNITYSDK_OFFSET(0x17EF65C0)
#define BMFKFIEBPNC_MEBILJEFDDH_OFFSET UNITYSDK_OFFSET(0x17EF6070)
#define BMFKFIEBPNC__CTOR_OFFSET UNITYSDK_OFFSET(0x17EF6060)

inline static constexpr unsigned int BMFKFIEBPNC_TypeDefinitionIndex = 12831;

class BMFKFIEBPNC : public ::System::Object
{
public:
	::EPKACNLBFAB HBDPAIKANDB; // 0x10
	::System::String* IMLIAPEALGC; // 0x20
	::System::String* HNPBMHIPNEH; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* EFIHHBPEFNH; // 0x38
	::System::String* AMDFPFAPCKH; // 0x40
	::System::String* EHHNGDKEABA; // 0x48
	::System::Boolean GMNOOCCICHB; // 0x50
	::System::Byte GCHCDJCFCEG; // 0x51
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x52
	::System::Byte ACIOBDEBDNK; // 0x53
	::System::Byte CNIAANMNOCF; // 0x54

	::System::Void _ctor(::EPKACNLBFAB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EPKACNLBFAB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BMFKFIEBPNC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* MEBILJEFDDH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFKFIEBPNC_MEBILJEFDDH_OFFSET))(this);
	}

	::System::String* GMLOOBNIHPK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFKFIEBPNC_GMLOOBNIHPK_OFFSET))(this);
	}

	::System::String* JKIKMPIKIJG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFKFIEBPNC_JKIKMPIKIJG_OFFSET))(this);
	}

	::System::String* ALLLANGAPJA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFKFIEBPNC_ALLLANGAPJA_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BMFKFIEBPNC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFKFIEBPNC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFKFIEBPNC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LKPAHDMKDDD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFKFIEBPNC_LKPAHDMKDDD_OFFSET))(this);
	}

	::System::String* ADDAIGNEAEO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFKFIEBPNC_ADDAIGNEAEO_OFFSET))(this);
	}
};
