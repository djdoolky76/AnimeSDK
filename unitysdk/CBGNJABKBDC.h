#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class MEKABAIJMNM_1;

#define CBGNJABKBDC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1477DC40)
#define CBGNJABKBDC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1477DB20)
#define CBGNJABKBDC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1477D910)
#define CBGNJABKBDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1477DC30)

inline static constexpr unsigned int CBGNJABKBDC_TypeDefinitionIndex = 90082;

class CBGNJABKBDC : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* NHOPFJNDAHA; // 0x18
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* CJLPFJGCAAI; // 0x30
	::LGINJIKKBJA* ANOCCCJPLFL; // 0x38
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* HFILCGNGJBK; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGNJABKBDC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CBGNJABKBDC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGNJABKBDC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CBGNJABKBDC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
