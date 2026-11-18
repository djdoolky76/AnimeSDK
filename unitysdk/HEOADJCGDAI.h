#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HEOADJCGDAI_AJFFCMNAIEN_OFFSET UNITYSDK_OFFSET(0x19E0AB50)
#define HEOADJCGDAI_BDJLFIGAABO_OFFSET UNITYSDK_OFFSET(0x19E0AB20)
#define HEOADJCGDAI_BJACBMEHNKD_OFFSET UNITYSDK_OFFSET(0x19E0AB40)
#define HEOADJCGDAI_EDBMCLELHLK_OFFSET UNITYSDK_OFFSET(0x19E0AB30)
#define HEOADJCGDAI_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x19E0A950)
#define HEOADJCGDAI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19E0A8A0)
#define HEOADJCGDAI__CTOR_OFFSET UNITYSDK_OFFSET(0x19E0AA90)

inline static constexpr unsigned int HEOADJCGDAI_TypeDefinitionIndex = 58794;

class HEOADJCGDAI : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* _EGLGMLGIPAK_k__BackingField; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* _KHNJFPMPDGC_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOADJCGDAI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HEOADJCGDAI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void BDJLFIGAABO(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + HEOADJCGDAI_BDJLFIGAABO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EDBMCLELHLK(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + HEOADJCGDAI_EDBMCLELHLK_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::UI::Extension::UILocalizationText* BJACBMEHNKD()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOADJCGDAI_BJACBMEHNKD_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOADJCGDAI_EFKGNFCEENK_OFFSET))(this);
	}

	::UnityEngine::UI::Extension::UILocalizationText* AJFFCMNAIEN()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOADJCGDAI_AJFFCMNAIEN_OFFSET))(this);
	}
};
