#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralSortWidgetController; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define CNPBKJPBJBP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13271BE0)
#define CNPBKJPBJBP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13271AC0)
#define CNPBKJPBJBP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13271800)
#define CNPBKJPBJBP__CTOR_OFFSET UNITYSDK_OFFSET(0x13271BD0)

inline static constexpr unsigned int CNPBKJPBJBP_TypeDefinitionIndex = 74438;

class CNPBKJPBJBP : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadNavigatableList* HMIBLBNACMC; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIGeneralSortWidgetController*>* NCINIIBLMNJ; // 0x20
	::LGINJIKKBJA* JGBLLAEKDLO; // 0x28
	::MEKABAIJMNM_1<::MoleMole::UIGeneralToggleWidgetController*>* NAHNKFIGMGB; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* GECACAHIMAB; // 0x38
	::MonoUITableScrollV2* EOMFDCFLCDK; // 0x40
	::UnityEngine::RectTransform* OFNDMBEELON; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* JGLLPJLIGDN; // 0x50
	::LGINJIKKBJA* DFMEBNOEHLB; // 0x58
	::FGCOIBFFCHB* GFIPBLEEAIP; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* KCHMKNCCCOL; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNPBKJPBJBP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNPBKJPBJBP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNPBKJPBJBP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNPBKJPBJBP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
