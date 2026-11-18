#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABBFLKNLBEJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MOIIGPNFJGO_AFOGBDCMPNF_OFFSET UNITYSDK_OFFSET(0x1D0BBA10)
#define MOIIGPNFJGO_CCIGIACLLPF_OFFSET UNITYSDK_OFFSET(0x1D0BB7E0)
#define MOIIGPNFJGO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1D0BB5E0)
#define MOIIGPNFJGO_DDKKJOFODIP_OFFSET UNITYSDK_OFFSET(0x1D0BB6D0)
#define MOIIGPNFJGO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1D0BB5D0)
#define MOIIGPNFJGO_GIJINLEADED_OFFSET UNITYSDK_OFFSET(0x1D0BB900)
#define MOIIGPNFJGO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1D0BB8F0)
#define MOIIGPNFJGO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BB5C0)

inline static constexpr unsigned int MOIIGPNFJGO_TypeDefinitionIndex = 10337;

class MOIIGPNFJGO : public ::System::Object
{
public:
	::ABBFLKNLBEJ HBDPAIKANDB; // 0x10
	::System::String* LHDNHIKAPLI; // 0x20
	::System::String* ODHNDDHBBPI; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* HAACEAALFAM; // 0x38
	::System::String* PHNJKOBNDNK; // 0x40
	::System::Byte CNIAANMNOCF; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x49
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4A

	::System::Void _ctor(::ABBFLKNLBEJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ABBFLKNLBEJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MOIIGPNFJGO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOIIGPNFJGO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIIGPNFJGO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* DDKKJOFODIP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIIGPNFJGO_DDKKJOFODIP_OFFSET))(this);
	}

	::System::String* CCIGIACLLPF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIIGPNFJGO_CCIGIACLLPF_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIIGPNFJGO_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* GIJINLEADED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIIGPNFJGO_GIJINLEADED_OFFSET))(this);
	}

	::System::String* AFOGBDCMPNF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIIGPNFJGO_AFOGBDCMPNF_OFFSET))(this);
	}
};
