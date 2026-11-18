#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralRewardListBtnWidgetController; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace MoleMole { class UIGeneralTopCafeBuffDetailWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class MEKABAIJMNM_1;

#define NBJGPAIJCFE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12888400)
#define NBJGPAIJCFE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12888230)
#define NBJGPAIJCFE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12887ED0)
#define NBJGPAIJCFE__CTOR_OFFSET UNITYSDK_OFFSET(0x128883F0)

inline static constexpr unsigned int NBJGPAIJCFE_TypeDefinitionIndex = 76499;

class NBJGPAIJCFE : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* MFLEBPBJGLH; // 0x18
	::UnityEngine::RectTransform* FOJPKLGJFBO; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x28
	::LGINJIKKBJA* LFEIMHJDCAL; // 0x30
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x38
	::MEKABAIJMNM_1<::MoleMole::UIGeneralTopCafeBuffDetailWidgetController*>* EDLFMIBONEL; // 0x40
	::MEKABAIJMNM_1<::MoleMole::UIGeneralRewardListBtnWidgetController*>* MOGCHJHEEAN; // 0x48
	::FILNFMCNCFE* BBDBMOCJCJI; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x58
	::MEKABAIJMNM_1<::MoleMole::UIGeneralToggleWidgetController*>* JEMJKKIHBPJ; // 0x60
	::UnityEngine::RectTransform* HEDMNNNNIHE; // 0x68
	::MoleMole::MonoGamepadNavigatableList* HDCAKKPKCDG; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* MFKBCHAJOGK; // 0x78
	::LGINJIKKBJA* BKDDKDMILCA; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* OAKAIIJLMIL; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJGPAIJCFE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NBJGPAIJCFE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJGPAIJCFE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NBJGPAIJCFE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
