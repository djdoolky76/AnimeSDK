#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIActivityWaterFinalRewardWidgetController; }
namespace MoleMole { class UIActivityWaterNormalRewardWidgetController; }
namespace MoleMole { class UIActivityWaterProgressBarWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define KLPFMNDIADE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17666180)
#define KLPFMNDIADE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x176660D0)
#define KLPFMNDIADE_KGENAAAJKND_OFFSET UNITYSDK_OFFSET(0x17665EF0)
#define KLPFMNDIADE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17665CE0)
#define KLPFMNDIADE__CTOR_OFFSET UNITYSDK_OFFSET(0x17666170)

inline static constexpr unsigned int KLPFMNDIADE_TypeDefinitionIndex = 84952;

class KLPFMNDIADE : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIActivityWaterProgressBarWidgetController*>* MJMGANKGIFM; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* FBPCMIOGDGJ; // 0x28
	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIActivityWaterNormalRewardWidgetController*>*>* LHEBLJNOILI; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UIActivityWaterFinalRewardWidgetController*>* BJAJCBNMNLD; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* MFGPCFNAPHA; // 0x40
	::UnityEngine::RectTransform* LHBIEDEMGNP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPFMNDIADE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KLPFMNDIADE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIActivityWaterNormalRewardWidgetController*>*>* KGENAAAJKND(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIActivityWaterNormalRewardWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KLPFMNDIADE_KGENAAAJKND_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPFMNDIADE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KLPFMNDIADE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
