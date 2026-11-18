#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ILDHMNHHMGI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13C9AB40)
#define ILDHMNHHMGI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13C9AA30)
#define ILDHMNHHMGI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13C9A840)
#define ILDHMNHHMGI__CTOR_OFFSET UNITYSDK_OFFSET(0x13C9AB30)

inline static constexpr unsigned int ILDHMNHHMGI_TypeDefinitionIndex = 40226;

class ILDHMNHHMGI : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::LGINJIKKBJA* KEMJHCLLAMH; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* JLLEPILNAOE; // 0x30
	::FGCOIBFFCHB* DEAPLILJLJD; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDHMNHHMGI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ILDHMNHHMGI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDHMNHHMGI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ILDHMNHHMGI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
