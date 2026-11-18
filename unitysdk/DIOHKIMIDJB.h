#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define DIOHKIMIDJB_CBIBIFBAIFA_OFFSET UNITYSDK_OFFSET(0x12087F40)
#define DIOHKIMIDJB_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x12087D40)
#define DIOHKIMIDJB_HPPMGGEPPHL_OFFSET UNITYSDK_OFFSET(0x12087F10)
#define DIOHKIMIDJB_IGBPPBLBHPF_OFFSET UNITYSDK_OFFSET(0x12087F20)
#define DIOHKIMIDJB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12087CC0)
#define DIOHKIMIDJB_OHHBAPCMJAE_OFFSET UNITYSDK_OFFSET(0x12087F30)
#define DIOHKIMIDJB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12087B60)
#define DIOHKIMIDJB__CTOR_OFFSET UNITYSDK_OFFSET(0x12087E80)

inline static constexpr unsigned int DIOHKIMIDJB_TypeDefinitionIndex = 59047;

class DIOHKIMIDJB : public ::IOOIHHOJOPI
{
public:
	::MonoUITableScrollV2* _LFAJCKFBGFP_k__BackingField; // 0x28
	::LGINJIKKBJA* _APKOBACNDOI_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOHKIMIDJB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DIOHKIMIDJB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::LGINJIKKBJA* HPPMGGEPPHL()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOHKIMIDJB_HPPMGGEPPHL_OFFSET))(this);
	}

	::System::Void IGBPPBLBHPF(::LGINJIKKBJA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + DIOHKIMIDJB_IGBPPBLBHPF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOHKIMIDJB_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void OHHBAPCMJAE(::MonoUITableScrollV2* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + DIOHKIMIDJB_OHHBAPCMJAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::MonoUITableScrollV2* CBIBIFBAIFA()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOHKIMIDJB_CBIBIFBAIFA_OFFSET))(this);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOHKIMIDJB_KGEBDLGBGNM_OFFSET))(this);
	}
};
