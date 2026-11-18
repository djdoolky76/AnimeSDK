#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PCCHMANJAGF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18460120)
#define PCCHMANJAGF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18460030)
#define PCCHMANJAGF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1845FE40)
#define PCCHMANJAGF__CTOR_OFFSET UNITYSDK_OFFSET(0x18460110)

inline static constexpr unsigned int PCCHMANJAGF_TypeDefinitionIndex = 68582;

class PCCHMANJAGF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* OCOFHEMFJOJ; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* JDJKPGMLGDN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* EPMEILNJMFF; // 0x28
	::LGINJIKKBJA* KFOCLICIAHO; // 0x30
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x38
	::UnityEngine::RectTransform* PMOLINPIKJC; // 0x40
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x48
	::UnityEngine::RectTransform* FLHFHGEHGFH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCHMANJAGF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCCHMANJAGF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCCHMANJAGF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCHMANJAGF_KGEBDLGBGNM_OFFSET))(this);
	}
};
