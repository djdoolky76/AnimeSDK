#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOPCENMJGBJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NOCOMPDLGKO_AJFFCMNAIEN_OFFSET UNITYSDK_OFFSET(0x1CCEFF30)
#define NOCOMPDLGKO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1CCEFE40)
#define NOCOMPDLGKO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1CCF0040)
#define NOCOMPDLGKO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1CCEFE30)
#define NOCOMPDLGKO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEFE20)

inline static constexpr unsigned int NOCOMPDLGKO_TypeDefinitionIndex = 16846;

class NOCOMPDLGKO : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::GOPCENMJGBJ HBDPAIKANDB; // 0x18
	::System::String* BADBBCLNFDO; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32

	::System::Void _ctor(::GOPCENMJGBJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GOPCENMJGBJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NOCOMPDLGKO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCOMPDLGKO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCOMPDLGKO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* AJFFCMNAIEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCOMPDLGKO_AJFFCMNAIEN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOCOMPDLGKO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
