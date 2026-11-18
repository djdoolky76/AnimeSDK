#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMNBFBCJEOC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MHHCCMNNIEI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B316710)
#define MHHCCMNNIEI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B316700)
#define MHHCCMNNIEI_IPJONOOFHFO_OFFSET UNITYSDK_OFFSET(0x1B316800)
#define MHHCCMNNIEI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B316B90)
#define MHHCCMNNIEI_NPAFPHDAPMI_OFFSET UNITYSDK_OFFSET(0x1B316A80)
#define MHHCCMNNIEI_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B316940)
#define MHHCCMNNIEI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3166F0)

inline static constexpr unsigned int MHHCCMNNIEI_TypeDefinitionIndex = 13748;

class MHHCCMNNIEI : public ::System::Object
{
public:
	::System::String* BDGOJFFEBOP; // 0x10
	::FMNBFBCJEOC HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 ALNEMGPKLLL; // 0x38

	::System::Void _ctor(::FMNBFBCJEOC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FMNBFBCJEOC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MHHCCMNNIEI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MHHCCMNNIEI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHCCMNNIEI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 IPJONOOFHFO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHCCMNNIEI_IPJONOOFHFO_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHCCMNNIEI_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* NPAFPHDAPMI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHCCMNNIEI_NPAFPHDAPMI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHCCMNNIEI_LJANCIBECFG_OFFSET))(this);
	}
};
