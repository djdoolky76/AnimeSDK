#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralTokenRowWidgetController; }
namespace MoleMole { class UIScaryNightRoundWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class GridLayoutGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define JLOMIIBNNPK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17B48FA0)
#define JLOMIIBNNPK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17B48E60)
#define JLOMIIBNNPK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17B48B60)
#define JLOMIIBNNPK__CTOR_OFFSET UNITYSDK_OFFSET(0x17B48F90)

inline static constexpr unsigned int JLOMIIBNNPK_TypeDefinitionIndex = 64809;

class JLOMIIBNNPK : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIScaryNightRoundWidgetController*>* LDFODODCPNJ; // 0x18
	::MoleMole::MonoGamepadCustomList* JOKIFCDCLHL; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIGeneralTokenRowWidgetController*>* NPAIABIOOOE; // 0x28
	::LGINJIKKBJA* FDHICDPOGGP; // 0x30
	::UnityEngine::UI::GridLayoutGroup* BHNDMNFNPOF; // 0x38
	::UnityEngine::RectTransform* KDPDBMNFKKN; // 0x40
	::UnityEngine::RectTransform* HGKANNMDNMI; // 0x48
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x50
	::LGINJIKKBJA* CCMANIKLGLA; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* LOIOIHLICPA; // 0x60
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x68
	::LGINJIKKBJA* BKDDKDMILCA; // 0x70
	::UnityEngine::RectTransform* KBLOOEKBBNL; // 0x78
	::UnityEngine::RectTransform* BGGOPDBGBLG; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOMIIBNNPK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLOMIIBNNPK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOMIIBNNPK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLOMIIBNNPK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
