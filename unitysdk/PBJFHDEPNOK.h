#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBPHLDCINCH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PBJFHDEPNOK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B346500)
#define PBJFHDEPNOK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B346220)
#define PBJFHDEPNOK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B3465F0)
#define PBJFHDEPNOK_MEBGDNEEJCL_OFFSET UNITYSDK_OFFSET(0x1B346230)
#define PBJFHDEPNOK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B346210)

inline static constexpr unsigned int PBJFHDEPNOK_TypeDefinitionIndex = 16163;

class PBJFHDEPNOK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* MLLELAHHFPI; // 0x10
	::FBPHLDCINCH HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::FBPHLDCINCH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FBPHLDCINCH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PBJFHDEPNOK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBJFHDEPNOK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MEBGDNEEJCL()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBJFHDEPNOK_MEBGDNEEJCL_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBJFHDEPNOK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBJFHDEPNOK_LJANCIBECFG_OFFSET))(this);
	}
};
