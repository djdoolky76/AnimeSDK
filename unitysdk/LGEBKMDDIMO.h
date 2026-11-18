#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define LGEBKMDDIMO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15DF7BB0)
#define LGEBKMDDIMO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15DF7B20)
#define LGEBKMDDIMO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15DF7980)
#define LGEBKMDDIMO__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF7BA0)

inline static constexpr unsigned int LGEBKMDDIMO_TypeDefinitionIndex = 91154;

class LGEBKMDDIMO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* GHMHNHFAOND; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIGeneralToggleWidgetController*>* NIENBJEFKAF; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::UnityEngine::RectTransform* KGPFGMNJCJB; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEBKMDDIMO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LGEBKMDDIMO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LGEBKMDDIMO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEBKMDDIMO_KGEBDLGBGNM_OFFSET))(this);
	}
};
