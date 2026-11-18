#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGKOMKHADDG.h"
#include "unitysdk/PBDLOKDCHLG.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FHJCNCKLGOO_AKDGJKOJFIK_OFFSET UNITYSDK_OFFSET(0x152BF8D0)
#define FHJCNCKLGOO_BGIEHBBAELK_OFFSET UNITYSDK_OFFSET(0x19C1E2A0)
#define FHJCNCKLGOO_CDEJOIPABHK_OFFSET UNITYSDK_OFFSET(0x152BF5F0)
#define FHJCNCKLGOO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19C1E070)
#define FHJCNCKLGOO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19C1E060)
#define FHJCNCKLGOO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x152BF8C0)
#define FHJCNCKLGOO_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19C1E160)
#define FHJCNCKLGOO__CTOR_OFFSET UNITYSDK_OFFSET(0x19C1E050)

inline static constexpr unsigned int FHJCNCKLGOO_TypeDefinitionIndex = 17253;

class FHJCNCKLGOO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* LGACFEILLIB; // 0x10
	::System::Nullable_1<::PBDLOKDCHLG> LCPPGFEKCAE; // 0x18
	::System::Byte _padding0[0x10];
	::System::Collections::Generic::List_1<::System::Int32>* MJGHIFCLDKM; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::BGKOMKHADDG HBDPAIKANDB; // 0x40
	::System::Int32 PCMOJLNOPPM; // 0x50
	::System::Byte ACIOBDEBDNK; // 0x54
	::System::Byte CNIAANMNOCF; // 0x55
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x56

	::System::Void _ctor(::BGKOMKHADDG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BGKOMKHADDG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FHJCNCKLGOO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FHJCNCKLGOO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJCNCKLGOO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJCNCKLGOO_PPIFNHNGCGO_OFFSET))(this);
	}

	::PBDLOKDCHLG BGIEHBBAELK()
	{
		return ((::PBDLOKDCHLG(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJCNCKLGOO_BGIEHBBAELK_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* CDEJOIPABHK()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJCNCKLGOO_CDEJOIPABHK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJCNCKLGOO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* AKDGJKOJFIK()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJCNCKLGOO_AKDGJKOJFIK_OFFSET))(this);
	}
};
