#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MJCGAOIBAPG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13D33B10)
#define MJCGAOIBAPG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13D33A60)
#define MJCGAOIBAPG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13D33820)
#define MJCGAOIBAPG__CTOR_OFFSET UNITYSDK_OFFSET(0x13D33B00)

inline static constexpr unsigned int MJCGAOIBAPG_TypeDefinitionIndex = 38379;

class MJCGAOIBAPG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* DKMMLHHHHBK; // 0x18
	::MonoUITableScrollV2* PGGPACGPJBF; // 0x20
	::MonoUITableScrollV2* ADIHEDCMBHA; // 0x28
	::UnityEngine::RectTransform* NDPFKBKABLI; // 0x30
	::LGINJIKKBJA* PCEKNEIAKMJ; // 0x38
	::FGCOIBFFCHB* HJMIIMAOHOE; // 0x40
	::MonoUITableScrollV2* KIBLHKKKNCB; // 0x48
	::UnityEngine::RectTransform* MGGKGBNCAGJ; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* MMNNLOMMNGL; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* JIAPDEAHAMM; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCGAOIBAPG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MJCGAOIBAPG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCGAOIBAPG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MJCGAOIBAPG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
