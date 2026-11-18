#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JKJBAJIDNDF_AJFFCMNAIEN_OFFSET UNITYSDK_OFFSET(0x1C3649C0)
#define JKJBAJIDNDF_BDJLFIGAABO_OFFSET UNITYSDK_OFFSET(0x1C3649B0)
#define JKJBAJIDNDF_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x1C364850)
#define JKJBAJIDNDF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C3647B0)
#define JKJBAJIDNDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C364920)

inline static constexpr unsigned int JKJBAJIDNDF_TypeDefinitionIndex = 41839;

class JKJBAJIDNDF : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* _EGLGMLGIPAK_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJBAJIDNDF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JKJBAJIDNDF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void BDJLFIGAABO(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + JKJBAJIDNDF_BDJLFIGAABO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJBAJIDNDF_EFKGNFCEENK_OFFSET))(this);
	}

	::UnityEngine::UI::Extension::UILocalizationText* AJFFCMNAIEN()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJBAJIDNDF_AJFFCMNAIEN_OFFSET))(this);
	}
};
