#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LEHFGFPKBHL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BGMOELOIFKL_BDBMCCFGABJ_OFFSET UNITYSDK_OFFSET(0x15728FA0)
#define BGMOELOIFKL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15728DA0)
#define BGMOELOIFKL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x157290B0)
#define BGMOELOIFKL_GIJNJGBGGEE_OFFSET UNITYSDK_OFFSET(0x15728E90)
#define BGMOELOIFKL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x157290C0)
#define BGMOELOIFKL__CTOR_OFFSET UNITYSDK_OFFSET(0x15728D90)

inline static constexpr unsigned int BGMOELOIFKL_TypeDefinitionIndex = 14763;

class BGMOELOIFKL : public ::System::Object
{
public:
	::LEHFGFPKBHL HBDPAIKANDB; // 0x10
	::System::String* BJKFBOJBEPL; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* AJBODFGLCLN; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A

	::System::Void _ctor(::LEHFGFPKBHL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LEHFGFPKBHL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BGMOELOIFKL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMOELOIFKL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* GIJNJGBGGEE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMOELOIFKL_GIJNJGBGGEE_OFFSET))(this);
	}

	::System::String* BDBMCCFGABJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMOELOIFKL_BDBMCCFGABJ_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BGMOELOIFKL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMOELOIFKL_LJANCIBECFG_OFFSET))(this);
	}
};
