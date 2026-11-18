#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICOAEJFDPOK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IKKJIBCKBEE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17C1DC80)
#define IKKJIBCKBEE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17C1E250)
#define IKKJIBCKBEE_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x17C1DEC0)
#define IKKJIBCKBEE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17C1DEB0)
#define IKKJIBCKBEE_LNHGCCNPKCD_OFFSET UNITYSDK_OFFSET(0x17C1E140)
#define IKKJIBCKBEE_OCICODHEAON_OFFSET UNITYSDK_OFFSET(0x17C1E000)
#define IKKJIBCKBEE_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17C1DD70)
#define IKKJIBCKBEE__CTOR_OFFSET UNITYSDK_OFFSET(0x17C1DC70)

inline static constexpr unsigned int IKKJIBCKBEE_TypeDefinitionIndex = 13158;

class IKKJIBCKBEE : public ::System::Object
{
public:
	::System::String* MBBMEBFBGHJ; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::ICOAEJFDPOK HBDPAIKANDB; // 0x20
	::System::Int32 MEJMFEFMNLN; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x34
	::System::Int32 POKJNGILNLB; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Byte ACIOBDEBDNK; // 0x3E

	::System::Void _ctor(::ICOAEJFDPOK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ICOAEJFDPOK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IKKJIBCKBEE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJIBCKBEE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJIBCKBEE_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJIBCKBEE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJIBCKBEE_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 OCICODHEAON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJIBCKBEE_OCICODHEAON_OFFSET))(this);
	}

	::System::String* LNHGCCNPKCD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJIBCKBEE_LNHGCCNPKCD_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IKKJIBCKBEE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
