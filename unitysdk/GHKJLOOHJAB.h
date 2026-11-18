#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLDDFONBNBO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GHKJLOOHJAB_CKBJABCIEFK_OFFSET UNITYSDK_OFFSET(0x1B86E5A0)
#define GHKJLOOHJAB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B86E6B0)
#define GHKJLOOHJAB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B86E580)
#define GHKJLOOHJAB_IKIAAIOKMHE_OFFSET UNITYSDK_OFFSET(0x1B86E8B0)
#define GHKJLOOHJAB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B86E590)
#define GHKJLOOHJAB_LOOJKEPLFJL_OFFSET UNITYSDK_OFFSET(0x1B86E7A0)
#define GHKJLOOHJAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B86E570)

inline static constexpr unsigned int GHKJLOOHJAB_TypeDefinitionIndex = 14195;

class GHKJLOOHJAB : public ::System::Object
{
public:
	::System::String* DFNBOMCBELM; // 0x10
	::System::String* LFNJABOJGHH; // 0x18
	::System::String* LODMPGCOKPL; // 0x20
	::DLDDFONBNBO HBDPAIKANDB; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::Int32 OLCJDJLJJCM; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x44
	::System::Byte CNIAANMNOCF; // 0x45
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x46

	::System::Void _ctor(::DLDDFONBNBO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DLDDFONBNBO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GHKJLOOHJAB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GHKJLOOHJAB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKJLOOHJAB_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* CKBJABCIEFK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKJLOOHJAB_CKBJABCIEFK_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKJLOOHJAB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* LOOJKEPLFJL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKJLOOHJAB_LOOJKEPLFJL_OFFSET))(this);
	}

	::System::String* IKIAAIOKMHE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKJLOOHJAB_IKIAAIOKMHE_OFFSET))(this);
	}
};
