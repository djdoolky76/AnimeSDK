#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GMOCCPGGIME_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17A167B0)
#define GMOCCPGGIME_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17A166C0)
#define GMOCCPGGIME_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17A16530)
#define GMOCCPGGIME__CTOR_OFFSET UNITYSDK_OFFSET(0x17A167A0)

inline static constexpr unsigned int GMOCCPGGIME_TypeDefinitionIndex = 53705;

class GMOCCPGGIME : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* PEECACPPINP; // 0x18
	::LGINJIKKBJA* BIGMLHLJHFF; // 0x20
	::LGINJIKKBJA* BBBPMALGBMK; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* FJLJEGEBLPG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOCCPGGIME__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GMOCCPGGIME_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOCCPGGIME_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GMOCCPGGIME_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
