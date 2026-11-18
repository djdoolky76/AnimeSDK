#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HKEGDHFODPB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15B62400)
#define HKEGDHFODPB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15B62330)
#define HKEGDHFODPB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15B620D0)
#define HKEGDHFODPB__CTOR_OFFSET UNITYSDK_OFFSET(0x15B623F0)

inline static constexpr unsigned int HKEGDHFODPB_TypeDefinitionIndex = 58128;

class HKEGDHFODPB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* ABJJMCIEOJE; // 0x20
	::UnityEngine::CanvasGroup* EHMLMJKEJMM; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* KEIPHPINIMK; // 0x30
	::FGCOIBFFCHB* GFLEPFOCFKF; // 0x38
	::UnityEngine::RectTransform* ODKGAHDFMAP; // 0x40
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x48
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x50
	::LGINJIKKBJA* JBAGBGPNPDL; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* CCIILJMPGGJ; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEGDHFODPB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HKEGDHFODPB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEGDHFODPB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HKEGDHFODPB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
