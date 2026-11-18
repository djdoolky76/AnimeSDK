#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define JOGOAOJENGG_CBIBIFBAIFA_OFFSET UNITYSDK_OFFSET(0x152B4680)
#define JOGOAOJENGG_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x152B4490)
#define JOGOAOJENGG_HPPMGGEPPHL_OFFSET UNITYSDK_OFFSET(0x152B4670)
#define JOGOAOJENGG_IGBPPBLBHPF_OFFSET UNITYSDK_OFFSET(0x152B4660)
#define JOGOAOJENGG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x152B4410)
#define JOGOAOJENGG_OHHBAPCMJAE_OFFSET UNITYSDK_OFFSET(0x152B4690)
#define JOGOAOJENGG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x152B42B0)
#define JOGOAOJENGG__CTOR_OFFSET UNITYSDK_OFFSET(0x152B45D0)

inline static constexpr unsigned int JOGOAOJENGG_TypeDefinitionIndex = 79119;

class JOGOAOJENGG : public ::IOOIHHOJOPI
{
public:
	::LGINJIKKBJA* _APKOBACNDOI_k__BackingField; // 0x28
	::MonoUITableScrollV2* _LFAJCKFBGFP_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGOAOJENGG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JOGOAOJENGG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void IGBPPBLBHPF(::LGINJIKKBJA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + JOGOAOJENGG_IGBPPBLBHPF_OFFSET))(this, EGEGIMGMJHN);
	}

	::LGINJIKKBJA* HPPMGGEPPHL()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGOAOJENGG_HPPMGGEPPHL_OFFSET))(this);
	}

	::MonoUITableScrollV2* CBIBIFBAIFA()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGOAOJENGG_CBIBIFBAIFA_OFFSET))(this);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGOAOJENGG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void OHHBAPCMJAE(::MonoUITableScrollV2* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + JOGOAOJENGG_OHHBAPCMJAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGOAOJENGG_EFKGNFCEENK_OFFSET))(this);
	}
};
