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

#define IPNOBGAFBGN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13AB7AD0)
#define IPNOBGAFBGN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13AB79B0)
#define IPNOBGAFBGN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13AB77A0)
#define IPNOBGAFBGN__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB7AC0)

inline static constexpr unsigned int IPNOBGAFBGN_TypeDefinitionIndex = 49271;

class IPNOBGAFBGN : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x18
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x20
	::LGINJIKKBJA* ANOCCCJPLFL; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* HFILCGNGJBK; // 0x38
	::UnityEngine::UI::Extension::UITimeWidget* CJLPFJGCAAI; // 0x40
	::MEKABAIJMNM_1<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* NHOPFJNDAHA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNOBGAFBGN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IPNOBGAFBGN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNOBGAFBGN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IPNOBGAFBGN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
