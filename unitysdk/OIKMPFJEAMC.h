#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OIKMPFJEAMC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16F7F500)
#define OIKMPFJEAMC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16F7F430)
#define OIKMPFJEAMC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F7F1D0)
#define OIKMPFJEAMC__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7F4F0)

inline static constexpr unsigned int OIKMPFJEAMC_TypeDefinitionIndex = 68639;

class OIKMPFJEAMC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* KEIBMOPNNMB; // 0x18
	::UnityEngine::GameObject* CLLNDJAJHCD; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* KCCAJNCEPJB; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x30
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x38
	::UnityEngine::Transform* MNPAKJLEMKH; // 0x40
	::FGCOIBFFCHB* LKPICEPBIKE; // 0x48
	::UnityEngine::GameObject* PKMNDOHLJLB; // 0x50
	::FGCOIBFFCHB* JDJFNABCCNP; // 0x58
	::UnityEngine::GameObject* CNKJHFLLPDI; // 0x60
	::LGINJIKKBJA* HPFDFAKOAGN; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKMPFJEAMC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OIKMPFJEAMC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OIKMPFJEAMC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKMPFJEAMC_KGEBDLGBGNM_OFFSET))(this);
	}
};
