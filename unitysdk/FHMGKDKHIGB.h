#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class DJJNDMGMLLB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FHMGKDKHIGB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x140F9150)
#define FHMGKDKHIGB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x140F9080)
#define FHMGKDKHIGB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x140F8EB0)
#define FHMGKDKHIGB__CTOR_OFFSET UNITYSDK_OFFSET(0x140F9140)

inline static constexpr unsigned int FHMGKDKHIGB_TypeDefinitionIndex = 79958;

class FHMGKDKHIGB : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* BBNKAHDAOJI; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::DJJNDMGMLLB* OMBNGNDMLON; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* AANGODPPICF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMGKDKHIGB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FHMGKDKHIGB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FHMGKDKHIGB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMGKDKHIGB_KGEBDLGBGNM_OFFSET))(this);
	}
};
