#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MEEHFFDDENP_AJFFCMNAIEN_OFFSET UNITYSDK_OFFSET(0x1404BC30)
#define MEEHFFDDENP_BDJLFIGAABO_OFFSET UNITYSDK_OFFSET(0x1404BC20)
#define MEEHFFDDENP_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x1404B9A0)
#define MEEHFFDDENP_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x1404BC00)
#define MEEHFFDDENP_IPMIGCKECGK_OFFSET UNITYSDK_OFFSET(0x1404BC10)
#define MEEHFFDDENP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1404B900)
#define MEEHFFDDENP_KKKFLAEMIOB_OFFSET UNITYSDK_OFFSET(0x1404BBF0)
#define MEEHFFDDENP_ODBDPEEPINO_OFFSET UNITYSDK_OFFSET(0x1404BBE0)
#define MEEHFFDDENP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1404B760)
#define MEEHFFDDENP__CTOR_OFFSET UNITYSDK_OFFSET(0x1404BB50)

inline static constexpr unsigned int MEEHFFDDENP_TypeDefinitionIndex = 65000;

class MEEHFFDDENP : public ::IOOIHHOJOPI
{
public:
	::FGCOIBFFCHB* _EOMOJEGEGKM_k__BackingField; // 0x28
	::LGINJIKKBJA* _HLOFPNDCFDM_k__BackingField; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* _EGLGMLGIPAK_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEHFFDDENP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MEEHFFDDENP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ODBDPEEPINO(::FGCOIBFFCHB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + MEEHFFDDENP_ODBDPEEPINO_OFFSET))(this, EGEGIMGMJHN);
	}

	::LGINJIKKBJA* KKKFLAEMIOB()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEHFFDDENP_KKKFLAEMIOB_OFFSET))(this);
	}

	::FGCOIBFFCHB* ENJENAJGHFI()
	{
		return ((::FGCOIBFFCHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEHFFDDENP_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEHFFDDENP_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEHFFDDENP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void IPMIGCKECGK(::LGINJIKKBJA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + MEEHFFDDENP_IPMIGCKECGK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BDJLFIGAABO(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + MEEHFFDDENP_BDJLFIGAABO_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::UI::Extension::UILocalizationText* AJFFCMNAIEN()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEHFFDDENP_AJFFCMNAIEN_OFFSET))(this);
	}
};
