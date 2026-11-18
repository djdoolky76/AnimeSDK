#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole::Config { class UIAchievementAnimConfig; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LPEPCMPCMDI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D4B820)
#define LPEPCMPCMDI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12D4B750)
#define LPEPCMPCMDI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D4B5A0)
#define LPEPCMPCMDI__CTOR_OFFSET UNITYSDK_OFFSET(0x12D4B810)

inline static constexpr unsigned int LPEPCMPCMDI_TypeDefinitionIndex = 46009;

class LPEPCMPCMDI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* ANDFIBAKEAE; // 0x18
	::UnityEngine::RectTransform* KEHPAOOHNOI; // 0x20
	::UnityEngine::Animation* OIKFFMHNCHB; // 0x28
	::MoleMole::Config::UIAchievementAnimConfig* EPDDOBLIFEC; // 0x30
	::FGCOIBFFCHB* GMKDPPJJILC; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* KHGAMMIOCMB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPEPCMPCMDI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LPEPCMPCMDI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPEPCMPCMDI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LPEPCMPCMDI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
