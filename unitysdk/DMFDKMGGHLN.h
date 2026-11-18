#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NCMHMCGLDKA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DMFDKMGGHLN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x187A0490)
#define DMFDKMGGHLN_DOHANFCIALC_OFFSET UNITYSDK_OFFSET(0x187A06C0)
#define DMFDKMGGHLN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x187A0480)
#define DMFDKMGGHLN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x187A07D0)
#define DMFDKMGGHLN_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x187A0580)
#define DMFDKMGGHLN__CTOR_OFFSET UNITYSDK_OFFSET(0x187A0470)

inline static constexpr unsigned int DMFDKMGGHLN_TypeDefinitionIndex = 14385;

class DMFDKMGGHLN : public ::System::Object
{
public:
	::NCMHMCGLDKA HBDPAIKANDB; // 0x10
	::System::String* BIIHOFJDFAD; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36

	::System::Void _ctor(::NCMHMCGLDKA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NCMHMCGLDKA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DMFDKMGGHLN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DMFDKMGGHLN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFDKMGGHLN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFDKMGGHLN_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* DOHANFCIALC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFDKMGGHLN_DOHANFCIALC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFDKMGGHLN_LJANCIBECFG_OFFSET))(this);
	}
};
