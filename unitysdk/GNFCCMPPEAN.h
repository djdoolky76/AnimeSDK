#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBHJPJNKEFB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GNFCCMPPEAN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x152D1AF0)
#define GNFCCMPPEAN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x152D1950)
#define GNFCCMPPEAN_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x152D1960)
#define GNFCCMPPEAN_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x152D1740)
#define GNFCCMPPEAN_LENCEGIELFL_OFFSET UNITYSDK_OFFSET(0x152D1BE0)
#define GNFCCMPPEAN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x152D1AE0)
#define GNFCCMPPEAN__CTOR_OFFSET UNITYSDK_OFFSET(0x152D1730)

inline static constexpr unsigned int GNFCCMPPEAN_TypeDefinitionIndex = 13216;

class GNFCCMPPEAN : public ::System::Object
{
public:
	::System::String* JKPGPKFPBJN; // 0x10
	::System::String* EOALHEEBMKM; // 0x18
	::HBHJPJNKEFB HBDPAIKANDB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 POKJNGILNLB; // 0x3C

	::System::Void _ctor(::HBHJPJNKEFB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HBHJPJNKEFB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GNFCCMPPEAN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFCCMPPEAN_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNFCCMPPEAN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFCCMPPEAN_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFCCMPPEAN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFCCMPPEAN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* LENCEGIELFL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFCCMPPEAN_LENCEGIELFL_OFFSET))(this);
	}
};
