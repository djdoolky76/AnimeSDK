#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OANAHLHNHDK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define AIGBJMKAEFD_AIBJDPAHEKI_OFFSET UNITYSDK_OFFSET(0x19F0E160)
#define AIGBJMKAEFD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19F0E060)
#define AIGBJMKAEFD_FBCPINCKHBD_OFFSET UNITYSDK_OFFSET(0x19F0E3C0)
#define AIGBJMKAEFD_FMKDFIGMLMH_OFFSET UNITYSDK_OFFSET(0x19F0E2A0)
#define AIGBJMKAEFD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19F0E150)
#define AIGBJMKAEFD_JAEHFEGFJOO_OFFSET UNITYSDK_OFFSET(0x19F0E4D0)
#define AIGBJMKAEFD_LJAJKEDFMML_OFFSET UNITYSDK_OFFSET(0x19F0E5E0)
#define AIGBJMKAEFD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19F0E3B0)
#define AIGBJMKAEFD_MKPACJPFIIO_OFFSET UNITYSDK_OFFSET(0x19F0DD00)
#define AIGBJMKAEFD_PEFLCCDCFHB_OFFSET UNITYSDK_OFFSET(0x19F0DE40)
#define AIGBJMKAEFD_PEGKIDPLJPD_OFFSET UNITYSDK_OFFSET(0x19F0DF50)
#define AIGBJMKAEFD__CTOR_OFFSET UNITYSDK_OFFSET(0x19F0DCF0)

inline static constexpr unsigned int AIGBJMKAEFD_TypeDefinitionIndex = 16691;

class AIGBJMKAEFD : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::OANAHLHNHDK HBDPAIKANDB; // 0x18
	::System::String* MKPBGBEIDND; // 0x28
	::System::String* FANFMKKCNDH; // 0x30
	::System::String* GOAFGDMCAHE; // 0x38
	::System::String* CCCFMAGDCIG; // 0x40
	::System::String* OJBEJEBGMBM; // 0x48
	::System::Int32 BCKLNNHCNFM; // 0x50
	::System::Byte CNIAANMNOCF; // 0x54
	::System::Byte GCHCDJCFCEG; // 0x55
	::System::Byte ACIOBDEBDNK; // 0x56
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x57
	::System::Int32 JOHGPFHBFMP; // 0x58
	::System::Int32 FKBABFJDILG; // 0x5C

	::System::Void _ctor(::OANAHLHNHDK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OANAHLHNHDK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AIGBJMKAEFD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 MKPACJPFIIO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGBJMKAEFD_MKPACJPFIIO_OFFSET))(this);
	}

	::System::String* PEFLCCDCFHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGBJMKAEFD_PEFLCCDCFHB_OFFSET))(this);
	}

	::System::String* PEGKIDPLJPD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGBJMKAEFD_PEGKIDPLJPD_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGBJMKAEFD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIGBJMKAEFD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 AIBJDPAHEKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGBJMKAEFD_AIBJDPAHEKI_OFFSET))(this);
	}

	::System::String* FMKDFIGMLMH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGBJMKAEFD_FMKDFIGMLMH_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGBJMKAEFD_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* FBCPINCKHBD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGBJMKAEFD_FBCPINCKHBD_OFFSET))(this);
	}

	::System::String* JAEHFEGFJOO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGBJMKAEFD_JAEHFEGFJOO_OFFSET))(this);
	}

	::System::Int32 LJAJKEDFMML()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGBJMKAEFD_LJAJKEDFMML_OFFSET))(this);
	}
};
