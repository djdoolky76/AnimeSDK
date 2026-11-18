#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define AFHNEHLPIEE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12CF0080)
#define AFHNEHLPIEE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12CEFF80)
#define AFHNEHLPIEE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12CEFC70)
#define AFHNEHLPIEE__CTOR_OFFSET UNITYSDK_OFFSET(0x12CF0070)

inline static constexpr unsigned int AFHNEHLPIEE_TypeDefinitionIndex = 85068;

class AFHNEHLPIEE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* PGIODCIKHMM; // 0x18
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x20
	::MoleMole::UIGeneralButtonController* HJDAMCBKNEI; // 0x28
	::UnityEngine::RectTransform* FOGDDMCKIMH; // 0x30
	::GCIMMDDIFBJ* KDOFOMOEMFH; // 0x38
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x48
	::FGCOIBFFCHB* AJMHGBBKNJO; // 0x50
	::UnityEngine::RectTransform* MCGPPADHCLJ; // 0x58
	::UnityEngine::UI::Extension::UITimeWidget* HEEGMLBJJJI; // 0x60
	::UnityEngine::RectTransform* ENLDPNDHJDA; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* PLHFEEBKFJF; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* DDMGJNMMKDK; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* LGBJEHGGGFP; // 0x80
	::MoleMole::MonoGamepadCustomList* GGJDBMNCFBH; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* HKBPAKFODFE; // 0x90
	::MoleMole::NotificationBadgeEx* JFDOOELFAOA; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHNEHLPIEE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AFHNEHLPIEE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHNEHLPIEE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AFHNEHLPIEE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
