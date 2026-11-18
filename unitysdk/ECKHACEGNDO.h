#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIPhotoWallEditModeWidgetController; }
namespace MoleMole { class UIPhotoWallWatchModeWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define ECKHACEGNDO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15890630)
#define ECKHACEGNDO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15890490)
#define ECKHACEGNDO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15890130)
#define ECKHACEGNDO__CTOR_OFFSET UNITYSDK_OFFSET(0x15890620)

inline static constexpr unsigned int ECKHACEGNDO_TypeDefinitionIndex = 62493;

class ECKHACEGNDO : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIPhotoWallEditModeWidgetController*>* FMPMOEIHCHG; // 0x18
	::LGINJIKKBJA* BGADFNNJHKE; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* GMDFILNOMJG; // 0x28
	::FGCOIBFFCHB* LKPICEPBIKE; // 0x30
	::LGINJIKKBJA* BKDDKDMILCA; // 0x38
	::LGINJIKKBJA* ILFJBJGDOIN; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* NHEALJKBPML; // 0x48
	::MoleMole::MonoGamepadModule* LCAFDIBAPDA; // 0x50
	::UnityEngine::GameObject* LFGGDEFLIFF; // 0x58
	::MEKABAIJMNM_1<::MoleMole::UIPhotoWallWatchModeWidgetController*>* BKGCAPKCJIH; // 0x60
	::LGINJIKKBJA* OKGBOAENDNC; // 0x68
	::UnityEngine::GameObject* JIKEHPNIEBP; // 0x70
	::UnityEngine::GameObject* BEFIFNDEPEG; // 0x78
	::UnityEngine::UI::Extension::UIImgEventTrigger* KNHLOHIEIIL; // 0x80
	::UnityEngine::GameObject* JMLCPKCMKJB; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* EJIBHODBPCG; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKHACEGNDO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ECKHACEGNDO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKHACEGNDO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ECKHACEGNDO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
