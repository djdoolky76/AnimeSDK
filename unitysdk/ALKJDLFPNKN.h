#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ALKJDLFPNKN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x143B4080)
#define ALKJDLFPNKN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x143B3FB0)
#define ALKJDLFPNKN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x143B3CE0)
#define ALKJDLFPNKN__CTOR_OFFSET UNITYSDK_OFFSET(0x143B4070)

inline static constexpr unsigned int ALKJDLFPNKN_TypeDefinitionIndex = 90118;

class ALKJDLFPNKN : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* NBFCNDIFJHF; // 0x18
	::LGINJIKKBJA* MFEKIGIPFBJ; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HMJEIJKLDAL; // 0x28
	::UnityEngine::RectTransform* PFNOLCJNFKP; // 0x30
	::UnityEngine::RectTransform* ONDCEOKGKCK; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* DCDNEMMDAHE; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x48
	::LGINJIKKBJA* PMBLECALCKB; // 0x50
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* PMGDHHFKCMM; // 0x60
	::UnityEngine::RectTransform* OEPLBDDLGOM; // 0x68
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x70
	::FGCOIBFFCHB* LNBMNLKFFDJ; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* HPPHLFDAFKC; // 0x80
	::UnityEngine::RectTransform* CNHIDAPDIHE; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKJDLFPNKN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ALKJDLFPNKN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ALKJDLFPNKN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKJDLFPNKN_KGEBDLGBGNM_OFFSET))(this);
	}
};
