#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PEFDEBICGCH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x136F5BA0)
#define PEFDEBICGCH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x136F5AF0)
#define PEFDEBICGCH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x136F5930)
#define PEFDEBICGCH__CTOR_OFFSET UNITYSDK_OFFSET(0x136F5B90)

inline static constexpr unsigned int PEFDEBICGCH_TypeDefinitionIndex = 88809;

class PEFDEBICGCH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* NKADAPNGKAI; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* AAJIHFCEABI; // 0x30
	::LGINJIKKBJA* ACAAAJMHIFH; // 0x38
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFDEBICGCH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PEFDEBICGCH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PEFDEBICGCH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFDEBICGCH_KGEBDLGBGNM_OFFSET))(this);
	}
};
