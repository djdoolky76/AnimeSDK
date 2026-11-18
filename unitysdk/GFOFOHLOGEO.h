#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PLNEDOHBMBN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GFOFOHLOGEO_BCEOJCOOOLE_OFFSET UNITYSDK_OFFSET(0x17BEC460)
#define GFOFOHLOGEO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17BEC110)
#define GFOFOHLOGEO_FBMIEJIGIED_OFFSET UNITYSDK_OFFSET(0x17BEC200)
#define GFOFOHLOGEO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17BEC100)
#define GFOFOHLOGEO_IPDIAPFGABC_OFFSET UNITYSDK_OFFSET(0x17BEC320)
#define GFOFOHLOGEO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17BEC310)
#define GFOFOHLOGEO__CTOR_OFFSET UNITYSDK_OFFSET(0x17BEC0F0)

inline static constexpr unsigned int GFOFOHLOGEO_TypeDefinitionIndex = 15355;

class GFOFOHLOGEO : public ::System::Object
{
public:
	::System::String* DDGJJGPDFFD; // 0x10
	::PLNEDOHBMBN HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 ICPLKENAACC; // 0x30
	::System::Int32 MCMMLLGNMOL; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A

	::System::Void _ctor(::PLNEDOHBMBN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PLNEDOHBMBN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GFOFOHLOGEO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GFOFOHLOGEO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOFOHLOGEO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* FBMIEJIGIED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOFOHLOGEO_FBMIEJIGIED_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOFOHLOGEO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 IPDIAPFGABC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOFOHLOGEO_IPDIAPFGABC_OFFSET))(this);
	}

	::System::Int32 BCEOJCOOOLE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOFOHLOGEO_BCEOJCOOOLE_OFFSET))(this);
	}
};
