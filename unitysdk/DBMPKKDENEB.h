#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DBMPKKDENEB_AJFFCMNAIEN_OFFSET UNITYSDK_OFFSET(0x1A1CEF30)
#define DBMPKKDENEB_BDJLFIGAABO_OFFSET UNITYSDK_OFFSET(0x1A1CEF40)
#define DBMPKKDENEB_BOMCGNMJKID_OFFSET UNITYSDK_OFFSET(0x1A1CEF10)
#define DBMPKKDENEB_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x1A1CED40)
#define DBMPKKDENEB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A1CECC0)
#define DBMPKKDENEB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A1CEB60)
#define DBMPKKDENEB_PAMBFPEFNKL_OFFSET UNITYSDK_OFFSET(0x1A1CEF20)
#define DBMPKKDENEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1CEE80)

inline static constexpr unsigned int DBMPKKDENEB_TypeDefinitionIndex = 71981;

class DBMPKKDENEB : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* _EGLGMLGIPAK_k__BackingField; // 0x28
	::FGCOIBFFCHB* _IMMHILOGDKG_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMPKKDENEB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DBMPKKDENEB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::FGCOIBFFCHB* BOMCGNMJKID()
	{
		return ((::FGCOIBFFCHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMPKKDENEB_BOMCGNMJKID_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMPKKDENEB_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMPKKDENEB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void PAMBFPEFNKL(::FGCOIBFFCHB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + DBMPKKDENEB_PAMBFPEFNKL_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::UI::Extension::UILocalizationText* AJFFCMNAIEN()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMPKKDENEB_AJFFCMNAIEN_OFFSET))(this);
	}

	::System::Void BDJLFIGAABO(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + DBMPKKDENEB_BDJLFIGAABO_OFFSET))(this, EGEGIMGMJHN);
	}
};
