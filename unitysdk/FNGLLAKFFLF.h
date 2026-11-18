#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KOMMGGIFGOC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define FNGLLAKFFLF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x16640350)
#define FNGLLAKFFLF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x16640560)
#define FNGLLAKFFLF_IFOHJNHGHBK_OFFSET UNITYSDK_OFFSET(0x16640440)
#define FNGLLAKFFLF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x16640550)
#define FNGLLAKFFLF__CTOR_OFFSET UNITYSDK_OFFSET(0x16640340)

inline static constexpr unsigned int FNGLLAKFFLF_TypeDefinitionIndex = 9456;

class FNGLLAKFFLF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::KOMMGGIFGOC HBDPAIKANDB; // 0x18
	::System::String* HKKJIFGKKEH; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32

	::System::Void _ctor(::KOMMGGIFGOC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KOMMGGIFGOC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FNGLLAKFFLF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGLLAKFFLF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* IFOHJNHGHBK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGLLAKFFLF_IFOHJNHGHBK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGLLAKFFLF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FNGLLAKFFLF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
