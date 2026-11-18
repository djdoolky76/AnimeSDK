#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class MEKABAIJMNM_1;

#define HNPMAGBAACF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1819A370)
#define HNPMAGBAACF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1819A230)
#define HNPMAGBAACF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18199F80)
#define HNPMAGBAACF__CTOR_OFFSET UNITYSDK_OFFSET(0x1819A360)

inline static constexpr unsigned int HNPMAGBAACF_TypeDefinitionIndex = 44216;

class HNPMAGBAACF : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ACBHLJPFBBC; // 0x18
	::UnityEngine::GameObject* DAJBFHNEDJG; // 0x20
	::UnityEngine::GameObject* AGFKPKLMJEL; // 0x28
	::MonoUITableScrollV2* NKPDNGENNDN; // 0x30
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x38
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x40
	::UnityEngine::RectTransform* HJIKFFIOAAM; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* GECACAHIMAB; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* FEGMEHBCNAM; // 0x58
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x60
	::MEKABAIJMNM_1<::MoleMole::UIGeneralToggleWidgetController*>* NAHNKFIGMGB; // 0x68
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x70
	::UnityEngine::GameObject* DJCBFNMKDOF; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPMAGBAACF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HNPMAGBAACF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPMAGBAACF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HNPMAGBAACF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
