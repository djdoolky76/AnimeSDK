#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KABMEPOLMFN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define CMCIBGCKINE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15792EE0)
#define CMCIBGCKINE_DOGDEBIANIP_OFFSET UNITYSDK_OFFSET(0x15792DD0)
#define CMCIBGCKINE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15792FD0)
#define CMCIBGCKINE_IJBGEKCMADI_OFFSET UNITYSDK_OFFSET(0x15792C90)
#define CMCIBGCKINE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15792B70)
#define CMCIBGCKINE_PJOKHDECFKD_OFFSET UNITYSDK_OFFSET(0x15792B80)
#define CMCIBGCKINE__CTOR_OFFSET UNITYSDK_OFFSET(0x15792B60)

inline static constexpr unsigned int CMCIBGCKINE_TypeDefinitionIndex = 15383;

class CMCIBGCKINE : public ::System::Object
{
public:
	::System::String* FIHCCIBHJKC; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::KABMEPOLMFN HBDPAIKANDB; // 0x20
	::System::String* BGHNIOHMPCH; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 PKDLMNNMFHH; // 0x3C

	::System::Void _ctor(::KABMEPOLMFN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KABMEPOLMFN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CMCIBGCKINE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCIBGCKINE_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* PJOKHDECFKD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCIBGCKINE_PJOKHDECFKD_OFFSET))(this);
	}

	::System::Int32 IJBGEKCMADI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCIBGCKINE_IJBGEKCMADI_OFFSET))(this);
	}

	::System::String* DOGDEBIANIP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCIBGCKINE_DOGDEBIANIP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCIBGCKINE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CMCIBGCKINE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
