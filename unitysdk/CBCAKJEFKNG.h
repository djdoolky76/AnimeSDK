#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole::Config { class UIAchievementAnimConfig; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CBCAKJEFKNG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10E2B080)
#define CBCAKJEFKNG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10E2AFD0)
#define CBCAKJEFKNG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10E2AD30)
#define CBCAKJEFKNG__CTOR_OFFSET UNITYSDK_OFFSET(0x10E2B070)

inline static constexpr unsigned int CBCAKJEFKNG_TypeDefinitionIndex = 47326;

class CBCAKJEFKNG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x28
	::UnityEngine::RectTransform* IDFFPOKOCOM; // 0x30
	::MoleMole::Config::UIAchievementAnimConfig* OMGHGIMNICJ; // 0x38
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x40
	::UnityEngine::RectTransform* KEHPAOOHNOI; // 0x48
	::UnityEngine::RectTransform* ANDFIBAKEAE; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* GKBPKMLBHLB; // 0x58
	::UnityEngine::GameObject* KKNNBNKPFHH; // 0x60
	::LGINJIKKBJA* BLADAPNLFKM; // 0x68
	::GCIMMDDIFBJ* AFPNENOGGLH; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBCAKJEFKNG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CBCAKJEFKNG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CBCAKJEFKNG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBCAKJEFKNG_KGEBDLGBGNM_OFFSET))(this);
	}
};
