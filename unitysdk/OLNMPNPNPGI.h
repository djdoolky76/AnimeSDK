#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IADBHDGDKOE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define OLNMPNPNPGI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C1A1440)
#define OLNMPNPNPGI_DLOPLJFNAHO_OFFSET UNITYSDK_OFFSET(0x1C1A1300)
#define OLNMPNPNPGI_DPKDACNHEOH_OFFSET UNITYSDK_OFFSET(0x1C1A11C0)
#define OLNMPNPNPGI_FHKCGPHEFKE_OFFSET UNITYSDK_OFFSET(0x1C1A1540)
#define OLNMPNPNPGI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C1A11B0)
#define OLNMPNPNPGI_IPBDBKFKJPA_OFFSET UNITYSDK_OFFSET(0x1C1A1650)
#define OLNMPNPNPGI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C1A1530)
#define OLNMPNPNPGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A11A0)

inline static constexpr unsigned int OLNMPNPNPGI_TypeDefinitionIndex = 11037;

class OLNMPNPNPGI : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::IADBHDGDKOE HBDPAIKANDB; // 0x18
	::System::String* OLPBFKHFIGK; // 0x28
	::System::String* DJFEJGGOAAG; // 0x30
	::System::Int32 NKBDCPMNMMD; // 0x38
	::System::Int32 FLJKHHBKDKB; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x42

	::System::Void _ctor(::IADBHDGDKOE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IADBHDGDKOE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OLNMPNPNPGI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OLNMPNPNPGI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DPKDACNHEOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNMPNPNPGI_DPKDACNHEOH_OFFSET))(this);
	}

	::System::Int32 DLOPLJFNAHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNMPNPNPGI_DLOPLJFNAHO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNMPNPNPGI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNMPNPNPGI_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* FHKCGPHEFKE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNMPNPNPGI_FHKCGPHEFKE_OFFSET))(this);
	}

	::System::String* IPBDBKFKJPA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNMPNPNPGI_IPBDBKFKJPA_OFFSET))(this);
	}
};
