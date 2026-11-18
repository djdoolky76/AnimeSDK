#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLJGPKJJPIL.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EHFGJDMODDC_GBPKDCGNAOF_AJFFCMNAIEN_OFFSET UNITYSDK_OFFSET(0x158AE160)
#define EHFGJDMODDC_GBPKDCGNAOF_BDJLFIGAABO_OFFSET UNITYSDK_OFFSET(0x158AE170)
#define EHFGJDMODDC_GBPKDCGNAOF_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x158AE000)
#define EHFGJDMODDC_GBPKDCGNAOF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x158ADF60)
#define EHFGJDMODDC_GBPKDCGNAOF__CTOR_OFFSET UNITYSDK_OFFSET(0x158AE0D0)

inline static constexpr unsigned int EHFGJDMODDC_GBPKDCGNAOF_TypeDefinitionIndex = 38766;

class EHFGJDMODDC_GBPKDCGNAOF : public ::MLJGPKJJPIL
{
public:
	// static const ::System::String* FHPFMKKILDF; // 0x0
	::UnityEngine::UI::Extension::UILocalizationText* _EGLGMLGIPAK_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFGJDMODDC_GBPKDCGNAOF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EHFGJDMODDC_GBPKDCGNAOF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::UnityEngine::UI::Extension::UILocalizationText* AJFFCMNAIEN()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFGJDMODDC_GBPKDCGNAOF_AJFFCMNAIEN_OFFSET))(this);
	}

	::System::Void BDJLFIGAABO(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + EHFGJDMODDC_GBPKDCGNAOF_BDJLFIGAABO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFGJDMODDC_GBPKDCGNAOF_EFKGNFCEENK_OFFSET))(this);
	}
};
