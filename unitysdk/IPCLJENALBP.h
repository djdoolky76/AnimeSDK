#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAPCLAKGKEG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define IPCLJENALBP_CDIAKFDMEBJ_OFFSET UNITYSDK_OFFSET(0x15A9DFE0)
#define IPCLJENALBP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15A9D880)
#define IPCLJENALBP_ELJJPCDMICI_OFFSET UNITYSDK_OFFSET(0x15A9DEA0)
#define IPCLJENALBP_FDJFAIMKJDC_OFFSET UNITYSDK_OFFSET(0x15A9D970)
#define IPCLJENALBP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15A9E260)
#define IPCLJENALBP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15A9DBF0)
#define IPCLJENALBP_LKOKKGKNGFN_OFFSET UNITYSDK_OFFSET(0x15A9DD60)
#define IPCLJENALBP_MEMJDFNMPKB_OFFSET UNITYSDK_OFFSET(0x15A9DAB0)
#define IPCLJENALBP_OBHHGHGGACK_OFFSET UNITYSDK_OFFSET(0x15A9DC00)
#define IPCLJENALBP_PEDPEJMMHII_OFFSET UNITYSDK_OFFSET(0x15A9E120)
#define IPCLJENALBP__CTOR_OFFSET UNITYSDK_OFFSET(0x15A9D870)

inline static constexpr unsigned int IPCLJENALBP_TypeDefinitionIndex = 15531;

class IPCLJENALBP : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::PAPCLAKGKEG HBDPAIKANDB; // 0x18
	::System::Int32 GCAKHOFNHKF; // 0x28
	::System::Single JMKBCHNMMOJ; // 0x2C
	::System::Int32 OKHJPELELMC; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 LBPHMILAHLO; // 0x38
	::System::Int32 MICFOPBAECF; // 0x3C
	::System::Int32 HAFOMIAJBJI; // 0x40
	::System::Int32 KNFGMCDEGKA; // 0x44

	::System::Void _ctor(::PAPCLAKGKEG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PAPCLAKGKEG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IPCLJENALBP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCLJENALBP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 FDJFAIMKJDC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCLJENALBP_FDJFAIMKJDC_OFFSET))(this);
	}

	::System::Int32 MEMJDFNMPKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCLJENALBP_MEMJDFNMPKB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCLJENALBP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Single OBHHGHGGACK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCLJENALBP_OBHHGHGGACK_OFFSET))(this);
	}

	::System::Int32 LKOKKGKNGFN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCLJENALBP_LKOKKGKNGFN_OFFSET))(this);
	}

	::System::Int32 ELJJPCDMICI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCLJENALBP_ELJJPCDMICI_OFFSET))(this);
	}

	::System::Int32 CDIAKFDMEBJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCLJENALBP_CDIAKFDMEBJ_OFFSET))(this);
	}

	::System::Int32 PEDPEJMMHII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCLJENALBP_PEDPEJMMHII_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IPCLJENALBP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
