#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FIGEOPHEGEJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14AD6000)
#define FIGEOPHEGEJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14AD5EF0)
#define FIGEOPHEGEJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14AD5CD0)
#define FIGEOPHEGEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD5FF0)

inline static constexpr unsigned int FIGEOPHEGEJ_TypeDefinitionIndex = 63300;

class FIGEOPHEGEJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* OCBNLOAGKNC; // 0x18
	::UnityEngine::GameObject* CKEKMDOEMPC; // 0x20
	::FGCOIBFFCHB* ANCGLBHLEME; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* BFEKNHCDDGK; // 0x40
	::LGINJIKKBJA* GPLJEKNNGLO; // 0x48
	::FGCOIBFFCHB* FNNFFOGGJJK; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIGEOPHEGEJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FIGEOPHEGEJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FIGEOPHEGEJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIGEOPHEGEJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
