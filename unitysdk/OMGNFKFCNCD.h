#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole::Config { class UIAchievementAnimConfig; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OMGNFKFCNCD_CEMGPKNDOON_OFFSET UNITYSDK_OFFSET(0x11B46E60)
#define OMGNFKFCNCD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11B46F80)
#define OMGNFKFCNCD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11B46D80)
#define OMGNFKFCNCD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11B46B20)
#define OMGNFKFCNCD_POIFGHCCMKN_OFFSET UNITYSDK_OFFSET(0x11B46EE0)
#define OMGNFKFCNCD__CTOR_OFFSET UNITYSDK_OFFSET(0x11B46ED0)

inline static constexpr unsigned int OMGNFKFCNCD_TypeDefinitionIndex = 66720;

class OMGNFKFCNCD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* KKNNBNKPFHH; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* GKBPKMLBHLB; // 0x20
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x28
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x38
	::MoleMole::Config::UIAchievementAnimConfig* OMGHGIMNICJ; // 0x40
	::LGINJIKKBJA* BLADAPNLFKM; // 0x48
	::UnityEngine::Animation* AFPNENOGGLH; // 0x50
	::UnityEngine::RectTransform* ANDFIBAKEAE; // 0x58
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x60
	::UnityEngine::RectTransform* KEHPAOOHNOI; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGNFKFCNCD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OMGNFKFCNCD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Boolean CEMGPKNDOON(::MoleMole::UIControlCollection* FJHDNIKAKLO, ::HNLACBJDCGI* FOLOGOFJHED)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + OMGNFKFCNCD_CEMGPKNDOON_OFFSET))(this, FJHDNIKAKLO, FOLOGOFJHED);
	}

	::System::Boolean POIFGHCCMKN(::MoleMole::UIControlCollection* MIALFKCCCPI, ::HNLACBJDCGI* KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + OMGNFKFCNCD_POIFGHCCMKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OMGNFKFCNCD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGNFKFCNCD_KGEBDLGBGNM_OFFSET))(this);
	}
};
