#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PLBIPAGFCBA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOFAFIHNBIE_BKBMFBPFMGP_OFFSET UNITYSDK_OFFSET(0x17C120D0)
#define HOFAFIHNBIE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17C124B0)
#define HOFAFIHNBIE_FJNDPALNMOG_OFFSET UNITYSDK_OFFSET(0x17C123A0)
#define HOFAFIHNBIE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17C125A0)
#define HOFAFIHNBIE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17C120C0)
#define HOFAFIHNBIE_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17C11F80)
#define HOFAFIHNBIE__CTOR_OFFSET UNITYSDK_OFFSET(0x17C11F70)

inline static constexpr unsigned int HOFAFIHNBIE_TypeDefinitionIndex = 11007;

class HOFAFIHNBIE : public ::System::Object
{
public:
	::System::String* AFBGBPDHLPO; // 0x10
	::PLBIPAGFCBA HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* JJKALDFAPFG; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x3C

	::System::Void _ctor(::PLBIPAGFCBA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PLBIPAGFCBA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HOFAFIHNBIE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOFAFIHNBIE_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOFAFIHNBIE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BKBMFBPFMGP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOFAFIHNBIE_BKBMFBPFMGP_OFFSET))(this);
	}

	::System::String* FJNDPALNMOG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOFAFIHNBIE_FJNDPALNMOG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOFAFIHNBIE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOFAFIHNBIE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
