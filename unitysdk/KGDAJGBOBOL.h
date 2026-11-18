#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCJBOANHGAO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KGDAJGBOBOL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x153001D0)
#define KGDAJGBOBOL_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x153000A0)
#define KGDAJGBOBOL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x153001C0)
#define KGDAJGBOBOL_LIOBKEMNMKP_OFFSET UNITYSDK_OFFSET(0x152FFDD0)
#define KGDAJGBOBOL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x153001B0)
#define KGDAJGBOBOL__CTOR_OFFSET UNITYSDK_OFFSET(0x152FFDC0)

inline static constexpr unsigned int KGDAJGBOBOL_TypeDefinitionIndex = 17653;

class KGDAJGBOBOL : public ::System::Object
{
public:
	::System::String* JLMCADLHIBG; // 0x10
	::BCJBOANHGAO HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* HLECIFKLJAG; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* IENCBDEPMFJ; // 0x38
	::System::String* EOALHEEBMKM; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* DMEJBKLIDOE; // 0x48
	::System::String* IMAFCDDJOME; // 0x50
	::System::Int32 PCMOJLNOPPM; // 0x58
	::System::Byte ACIOBDEBDNK; // 0x5C
	::System::Byte CNIAANMNOCF; // 0x5D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x5E
	::System::Byte GCHCDJCFCEG; // 0x5F
	::System::Int32 POKJNGILNLB; // 0x60
	::System::Int32 JMCDNAHGIGC; // 0x64

	::System::Void _ctor(::BCJBOANHGAO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BCJBOANHGAO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KGDAJGBOBOL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LIOBKEMNMKP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDAJGBOBOL_LIOBKEMNMKP_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDAJGBOBOL_DECMGICKDLH_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDAJGBOBOL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KGDAJGBOBOL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDAJGBOBOL_COFGIJJOFLP_OFFSET))(this);
	}
};
