#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IHBBMLIPIEP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16F69810)
#define IHBBMLIPIEP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16F69740)
#define IHBBMLIPIEP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F695D0)
#define IHBBMLIPIEP__CTOR_OFFSET UNITYSDK_OFFSET(0x16F69800)

inline static constexpr unsigned int IHBBMLIPIEP_TypeDefinitionIndex = 82034;

class IHBBMLIPIEP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* MAMNIGKOFLN; // 0x18
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBBMLIPIEP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IHBBMLIPIEP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IHBBMLIPIEP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBBMLIPIEP_KGEBDLGBGNM_OFFSET))(this);
	}
};
