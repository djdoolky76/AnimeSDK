#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NMKIGHOPCOL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE1AAAF0)
#define NMKIGHOPCOL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE1AA9B0)
#define NMKIGHOPCOL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE1AA7C0)
#define NMKIGHOPCOL__CTOR_OFFSET UNITYSDK_OFFSET(0xE1AAAE0)

inline static constexpr unsigned int NMKIGHOPCOL_TypeDefinitionIndex = 43318;

class NMKIGHOPCOL : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::FGCOIBFFCHB* HAIEACODJEM; // 0x20
	::FGCOIBFFCHB* PPGKJOEFAMF; // 0x28
	::FGCOIBFFCHB* NHEJEOHNKPE; // 0x30
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* KFBJHIGMPIC; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKIGHOPCOL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NMKIGHOPCOL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NMKIGHOPCOL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKIGHOPCOL_KGEBDLGBGNM_OFFSET))(this);
	}
};
