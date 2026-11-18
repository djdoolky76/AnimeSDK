#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BLDPFPKBBMO_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1397B310)
#define BLDPFPKBBMO_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x1397B1A0)
#define BLDPFPKBBMO_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x1397B300)
#define BLDPFPKBBMO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1397B100)
#define BLDPFPKBBMO__CTOR_OFFSET UNITYSDK_OFFSET(0x1397B270)

inline static constexpr unsigned int BLDPFPKBBMO_TypeDefinitionIndex = 43225;

class BLDPFPKBBMO : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* _BLBIAMKGHJL_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDPFPKBBMO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BLDPFPKBBMO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KFHPPBIFOMG(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + BLDPFPKBBMO_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDPFPKBBMO_EFKGNFCEENK_OFFSET))(this);
	}

	::UnityEngine::UI::Extension::UILocalizationText* DECMGICKDLH()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDPFPKBBMO_DECMGICKDLH_OFFSET))(this);
	}
};
