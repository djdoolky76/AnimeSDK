#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define NDIBBNEHCIB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13B5BDE0)
#define NDIBBNEHCIB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13B5BCA0)
#define NDIBBNEHCIB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13B5BA40)
#define NDIBBNEHCIB__CTOR_OFFSET UNITYSDK_OFFSET(0x13B5BDD0)

inline static constexpr unsigned int NDIBBNEHCIB_TypeDefinitionIndex = 59253;

class NDIBBNEHCIB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* JANGPMHPOIL; // 0x18
	::LGINJIKKBJA* CPHEMOICNIN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* LLCNGJDMDIJ; // 0x30
	::UnityEngine::UI::Extension::UITimeWidget* APKICMCEPHK; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* NHFGBLBKOMF; // 0x40
	::UnityEngine::CanvasGroup* AMLGJLFOLKE; // 0x48
	::UnityEngine::Animation* CKDLDBLNNCB; // 0x50
	::FGCOIBFFCHB* LLEPLCNIGKE; // 0x58
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x60
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIBBNEHCIB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NDIBBNEHCIB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIBBNEHCIB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NDIBBNEHCIB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
