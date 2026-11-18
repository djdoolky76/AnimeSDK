#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KLPGAGMCJMA_AJFFCMNAIEN_OFFSET UNITYSDK_OFFSET(0x17666420)
#define KLPGAGMCJMA_BDJLFIGAABO_OFFSET UNITYSDK_OFFSET(0x17666430)
#define KLPGAGMCJMA_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x176662C0)
#define KLPGAGMCJMA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17666220)
#define KLPGAGMCJMA__CTOR_OFFSET UNITYSDK_OFFSET(0x17666390)

inline static constexpr unsigned int KLPGAGMCJMA_TypeDefinitionIndex = 62037;

class KLPGAGMCJMA : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* _EGLGMLGIPAK_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPGAGMCJMA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KLPGAGMCJMA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::UnityEngine::UI::Extension::UILocalizationText* AJFFCMNAIEN()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPGAGMCJMA_AJFFCMNAIEN_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPGAGMCJMA_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void BDJLFIGAABO(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + KLPGAGMCJMA_BDJLFIGAABO_OFFSET))(this, EGEGIMGMJHN);
	}
};
