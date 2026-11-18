#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralRewardListBtnWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class MEKABAIJMNM_1;

#define NGKDDFANBNP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12101790)
#define NGKDDFANBNP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12101610)
#define NGKDDFANBNP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12101340)
#define NGKDDFANBNP__CTOR_OFFSET UNITYSDK_OFFSET(0x12101780)

inline static constexpr unsigned int NGKDDFANBNP_TypeDefinitionIndex = 86712;

class NGKDDFANBNP : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* EHFJNPGFKKJ; // 0x18
	::UnityEngine::RectTransform* DILKHKCJALD; // 0x20
	::FGCOIBFFCHB* LKNNBMDGBPP; // 0x28
	::MonoUITableScrollV2* KGEHFMCBLEP; // 0x30
	::UnityEngine::Transform* HFFCMAGGLIH; // 0x38
	::MonoUITableScrollV2* DIEOIDBNKPE; // 0x40
	::UnityEngine::UI::Extension::UITimeWidget* HMAKBDHJCBM; // 0x48
	::LGINJIKKBJA* LBPFBNGINFL; // 0x50
	::UnityEngine::Transform* KIJALFIOMNA; // 0x58
	::UnityEngine::Transform* LKFINCPLMGF; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* EJHKIJAFKFO; // 0x68
	::LGINJIKKBJA* FGGKBEEGICI; // 0x70
	::MEKABAIJMNM_1<::MoleMole::UIGeneralRewardListBtnWidgetController*>* MOGCHJHEEAN; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKDDFANBNP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NGKDDFANBNP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NGKDDFANBNP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKDDFANBNP_KGEBDLGBGNM_OFFSET))(this);
	}
};
