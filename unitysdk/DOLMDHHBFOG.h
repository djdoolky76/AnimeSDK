#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UITutorialScrollWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class MEKABAIJMNM_1;

#define DOLMDHHBFOG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x148BE260)
#define DOLMDHHBFOG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x148BE120)
#define DOLMDHHBFOG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x148BDED0)
#define DOLMDHHBFOG__CTOR_OFFSET UNITYSDK_OFFSET(0x148BE250)

inline static constexpr unsigned int DOLMDHHBFOG_TypeDefinitionIndex = 87704;

class DOLMDHHBFOG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UITabButtonGroup* HDBJPLDPFEM; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* NIFCHKDNHPC; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x30
	::LGINJIKKBJA* FCMOGBOKMLI; // 0x38
	::FILNFMCNCFE* MNHOFEMCLNH; // 0x40
	::UnityEngine::RectTransform* FEKAMKHOIMK; // 0x48
	::MEKABAIJMNM_1<::MoleMole::UITutorialScrollWidgetController*>* BCAKKODDFPG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLMDHHBFOG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DOLMDHHBFOG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLMDHHBFOG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DOLMDHHBFOG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
