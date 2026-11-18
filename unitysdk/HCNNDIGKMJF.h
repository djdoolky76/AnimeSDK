#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFHCEOFGDMB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define HCNNDIGKMJF_BPLJNPODKIK_OFFSET UNITYSDK_OFFSET(0x1BAD6C10)
#define HCNNDIGKMJF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BAD6FD0)
#define HCNNDIGKMJF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BAD6C00)
#define HCNNDIGKMJF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BAD70C0)
#define HCNNDIGKMJF_ODCNKCKAEKF_OFFSET UNITYSDK_OFFSET(0x1BAD6E90)
#define HCNNDIGKMJF_OFILOADKGPC_OFFSET UNITYSDK_OFFSET(0x1BAD6D50)
#define HCNNDIGKMJF__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD6BF0)

inline static constexpr unsigned int HCNNDIGKMJF_TypeDefinitionIndex = 14937;

class HCNNDIGKMJF : public ::System::Object
{
public:
	::FFHCEOFGDMB HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x29
	::System::Byte CNIAANMNOCF; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 GACBCFKHHLI; // 0x2C
	::System::Int32 ILLAANNOMJI; // 0x30
	::System::Int32 IACPNIPJAJD; // 0x34

	::System::Void _ctor(::FFHCEOFGDMB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FFHCEOFGDMB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HCNNDIGKMJF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HCNNDIGKMJF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 BPLJNPODKIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNNDIGKMJF_BPLJNPODKIK_OFFSET))(this);
	}

	::System::Int32 OFILOADKGPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNNDIGKMJF_OFILOADKGPC_OFFSET))(this);
	}

	::System::Int32 ODCNKCKAEKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNNDIGKMJF_ODCNKCKAEKF_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNNDIGKMJF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNNDIGKMJF_LJANCIBECFG_OFFSET))(this);
	}
};
