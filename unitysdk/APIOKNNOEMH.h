#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OLKPENDFONE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define APIOKNNOEMH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C50E680)
#define APIOKNNOEMH_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1C50E420)
#define APIOKNNOEMH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C50E530)
#define APIOKNNOEMH_HJEFCNNHHEO_OFFSET UNITYSDK_OFFSET(0x1C50E540)
#define APIOKNNOEMH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C50E410)
#define APIOKNNOEMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C50E400)

inline static constexpr unsigned int APIOKNNOEMH_TypeDefinitionIndex = 9619;

class APIOKNNOEMH : public ::System::Object
{
public:
	::System::String* IENCBDEPMFJ; // 0x10
	::OLKPENDFONE HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 ONPMJGJBNOA; // 0x34

	::System::Void _ctor(::OLKPENDFONE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OLKPENDFONE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + APIOKNNOEMH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APIOKNNOEMH_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APIOKNNOEMH_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + APIOKNNOEMH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 HJEFCNNHHEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APIOKNNOEMH_HJEFCNNHHEO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APIOKNNOEMH_COFGIJJOFLP_OFFSET))(this);
	}
};
