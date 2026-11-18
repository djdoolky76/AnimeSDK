#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define FPENEKKIACO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1750FA80)
#define FPENEKKIACO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1750F9D0)
#define FPENEKKIACO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1750F830)
#define FPENEKKIACO__CTOR_OFFSET UNITYSDK_OFFSET(0x1750FA70)

inline static constexpr unsigned int FPENEKKIACO_TypeDefinitionIndex = 73798;

class FPENEKKIACO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x18
	::UnityEngine::UI::Extension::UITimeWidget* MMNNLOMMNGL; // 0x20
	::UnityEngine::CanvasGroup* ADOMBENGNJF; // 0x28
	::LGINJIKKBJA* FNMMBEMEDBO; // 0x30
	::UnityEngine::RectTransform* PPFNGENDAKD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPENEKKIACO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPENEKKIACO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPENEKKIACO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPENEKKIACO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
