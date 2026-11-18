#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIZenkovAltarBuffWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define DGCCNLAJPHC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19A41420)
#define DGCCNLAJPHC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19A41390)
#define DGCCNLAJPHC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19A41210)
#define DGCCNLAJPHC__CTOR_OFFSET UNITYSDK_OFFSET(0x19A41410)

inline static constexpr unsigned int DGCCNLAJPHC_TypeDefinitionIndex = 85619;

class DGCCNLAJPHC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x18
	::UnityEngine::RectTransform* GEOJMPCKKJN; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIZenkovAltarBuffWidgetController*>* LBKLLGINBJO; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCCNLAJPHC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DGCCNLAJPHC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DGCCNLAJPHC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCCNLAJPHC_KGEBDLGBGNM_OFFSET))(this);
	}
};
