#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UICinemaRewardLevelRowWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define GLIELLLHDPG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15B294B0)
#define GLIELLLHDPG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15B293B0)
#define GLIELLLHDPG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15B29130)
#define GLIELLLHDPG__CTOR_OFFSET UNITYSDK_OFFSET(0x15B294A0)

inline static constexpr unsigned int GLIELLLHDPG_TypeDefinitionIndex = 50241;

class GLIELLLHDPG : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* CGBOLFKFHGD; // 0x18
	::UnityEngine::RectTransform* IFEOADCPBFE; // 0x20
	::UnityEngine::RectTransform* FGPAICEMBNH; // 0x28
	::LGINJIKKBJA* OEEDEBIOPBL; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* NFDKGIIJFAP; // 0x40
	::MEKABAIJMNM_1<::MoleMole::UICinemaRewardLevelRowWidgetController*>* OMFNGIBDEBK; // 0x48
	::MEKABAIJMNM_1<::MoleMole::UICinemaRewardLevelRowWidgetController*>* OCDLLPPILEM; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* EPDJDKJFBHP; // 0x58
	::MonoUITableScrollV2* ILNGHOGDPCJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIELLLHDPG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLIELLLHDPG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLIELLLHDPG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIELLLHDPG_KGEBDLGBGNM_OFFSET))(this);
	}
};
