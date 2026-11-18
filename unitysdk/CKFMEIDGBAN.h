#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CKFMEIDGBAN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1455AEB0)
#define CKFMEIDGBAN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1455AE00)
#define CKFMEIDGBAN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1455AC70)
#define CKFMEIDGBAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1455AEA0)

inline static constexpr unsigned int CKFMEIDGBAN_TypeDefinitionIndex = 51910;

class CKFMEIDGBAN : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::LGINJIKKBJA* EALINFDFFJE; // 0x20
	::LGINJIKKBJA* BCPJHNGIAKL; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFMEIDGBAN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CKFMEIDGBAN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFMEIDGBAN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CKFMEIDGBAN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
