#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AHBDFLLHFKB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14212800)
#define AHBDFLLHFKB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14212750)
#define AHBDFLLHFKB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x142125A0)
#define AHBDFLLHFKB__CTOR_OFFSET UNITYSDK_OFFSET(0x142127F0)

inline static constexpr unsigned int AHBDFLLHFKB_TypeDefinitionIndex = 63043;

class AHBDFLLHFKB : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x18
	::MonoUITableScrollV2* BPDEPNCJIPC; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x28
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBDFLLHFKB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHBDFLLHFKB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHBDFLLHFKB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBDFLLHFKB_KGEBDLGBGNM_OFFSET))(this);
	}
};
