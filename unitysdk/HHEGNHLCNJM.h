#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HHEGNHLCNJM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15DABD80)
#define HHEGNHLCNJM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15DABCB0)
#define HHEGNHLCNJM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15DABB30)
#define HHEGNHLCNJM__CTOR_OFFSET UNITYSDK_OFFSET(0x15DABD70)

inline static constexpr unsigned int HHEGNHLCNJM_TypeDefinitionIndex = 86816;

class HHEGNHLCNJM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* DPOGAHGECEL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* PLAEINEAEGI; // 0x20
	::LGINJIKKBJA* BCJFGOAGODL; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* DNLBGMAOAGJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEGNHLCNJM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HHEGNHLCNJM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEGNHLCNJM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HHEGNHLCNJM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
