#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FGIIFHILMMC_CBIBIFBAIFA_OFFSET UNITYSDK_OFFSET(0x140F44A0)
#define FGIIFHILMMC_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x140F4220)
#define FGIIFHILMMC_GJGDAGLFAFP_OFFSET UNITYSDK_OFFSET(0x140F4460)
#define FGIIFHILMMC_IPFGEIDINMP_OFFSET UNITYSDK_OFFSET(0x140F4470)
#define FGIIFHILMMC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x140F41A0)
#define FGIIFHILMMC_MNBGAIEPADE_OFFSET UNITYSDK_OFFSET(0x140F44B0)
#define FGIIFHILMMC_OHHBAPCMJAE_OFFSET UNITYSDK_OFFSET(0x140F4490)
#define FGIIFHILMMC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x140F4030)
#define FGIIFHILMMC_PBPDLBDHHHF_OFFSET UNITYSDK_OFFSET(0x140F4480)
#define FGIIFHILMMC__CTOR_OFFSET UNITYSDK_OFFSET(0x140F43D0)

inline static constexpr unsigned int FGIIFHILMMC_TypeDefinitionIndex = 68764;

class FGIIFHILMMC : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* _DLLGHOCLHNL_k__BackingField; // 0x28
	::MonoUITableScrollV2* _LFAJCKFBGFP_k__BackingField; // 0x30
	::LGINJIKKBJA* _HAPMDHLJNKG_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIIFHILMMC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FGIIFHILMMC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void GJGDAGLFAFP(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + FGIIFHILMMC_GJGDAGLFAFP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIIFHILMMC_EFKGNFCEENK_OFFSET))(this);
	}

	::LGINJIKKBJA* IPFGEIDINMP()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIIFHILMMC_IPFGEIDINMP_OFFSET))(this);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIIFHILMMC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void PBPDLBDHHHF(::LGINJIKKBJA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + FGIIFHILMMC_PBPDLBDHHHF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OHHBAPCMJAE(::MonoUITableScrollV2* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + FGIIFHILMMC_OHHBAPCMJAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::MonoUITableScrollV2* CBIBIFBAIFA()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIIFHILMMC_CBIBIFBAIFA_OFFSET))(this);
	}

	::UnityEngine::UI::Extension::UILocalizationText* MNBGAIEPADE()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIIFHILMMC_MNBGAIEPADE_OFFSET))(this);
	}
};
