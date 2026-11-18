#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UISuibianDirectionIconWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define ADCHMIJMAJI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1420EF00)
#define ADCHMIJMAJI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1420EE50)
#define ADCHMIJMAJI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1420EC90)
#define ADCHMIJMAJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1420EEF0)

inline static constexpr unsigned int ADCHMIJMAJI_TypeDefinitionIndex = 85327;

class ADCHMIJMAJI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BIGMAIMFEOB; // 0x18
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UISuibianDirectionIconWidgetController*>* MDBIDOBCIHO; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UISuibianDirectionIconWidgetController*>* BIGHAGGEFMJ; // 0x38
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCHMIJMAJI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ADCHMIJMAJI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ADCHMIJMAJI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCHMIJMAJI_KGEBDLGBGNM_OFFSET))(this);
	}
};
