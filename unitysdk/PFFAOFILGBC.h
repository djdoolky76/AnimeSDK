#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCLPCKLILLC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define PFFAOFILGBC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1D0DA600)
#define PFFAOFILGBC_DKNEFMDCANB_OFFSET UNITYSDK_OFFSET(0x1D0DA4C0)
#define PFFAOFILGBC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1D0DA4B0)
#define PFFAOFILGBC_GBDHPMDIJDK_OFFSET UNITYSDK_OFFSET(0x1D0DA6F0)
#define PFFAOFILGBC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1D0DA800)
#define PFFAOFILGBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0DA4A0)

inline static constexpr unsigned int PFFAOFILGBC_TypeDefinitionIndex = 12768;

class PFFAOFILGBC : public ::System::Object
{
public:
	::System::String* JBFMBNFEEAO; // 0x10
	::HCLPCKLILLC HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 GAAEEJAGKMG; // 0x34

	::System::Void _ctor(::HCLPCKLILLC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HCLPCKLILLC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PFFAOFILGBC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PFFAOFILGBC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DKNEFMDCANB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFAOFILGBC_DKNEFMDCANB_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFAOFILGBC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* GBDHPMDIJDK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFAOFILGBC_GBDHPMDIJDK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFAOFILGBC_LJANCIBECFG_OFFSET))(this);
	}
};
