#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NOLKJIDLBFO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16B97550)
#define NOLKJIDLBFO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16B97480)
#define NOLKJIDLBFO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16B97300)
#define NOLKJIDLBFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16B97540)

inline static constexpr unsigned int NOLKJIDLBFO_TypeDefinitionIndex = 72832;

class NOLKJIDLBFO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* JICFMEHLCLA; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* EHALDAHKAGN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLKJIDLBFO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NOLKJIDLBFO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NOLKJIDLBFO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLKJIDLBFO_KGEBDLGBGNM_OFFSET))(this);
	}
};
