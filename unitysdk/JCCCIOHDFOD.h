#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JCCCIOHDFOD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1872E030)
#define JCCCIOHDFOD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1872DF40)
#define JCCCIOHDFOD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1872DCD0)
#define JCCCIOHDFOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1872E020)

inline static constexpr unsigned int JCCCIOHDFOD_TypeDefinitionIndex = 41188;

class JCCCIOHDFOD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* CKEKMDOEMPC; // 0x18
	::UnityEngine::GameObject* MCNIHBDGDIN; // 0x20
	::LGINJIKKBJA* GPLJEKNNGLO; // 0x28
	::UnityEngine::GameObject* OCBNLOAGKNC; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* GPIOJBLKFAJ; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x40
	::UnityEngine::GameObject* COIOKOOEMMH; // 0x48
	::UnityEngine::GameObject* DCMPEKLIIKH; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* EJFDBIFBIDK; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* BAHHDMJPDPP; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* APGHOANPHPO; // 0x68
	::FGCOIBFFCHB* FNNFFOGGJJK; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCCIOHDFOD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JCCCIOHDFOD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JCCCIOHDFOD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCCIOHDFOD_KGEBDLGBGNM_OFFSET))(this);
	}
};
