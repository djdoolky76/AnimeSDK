#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KALJDFGPMHA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12973570)
#define KALJDFGPMHA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x129734A0)
#define KALJDFGPMHA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x129732D0)
#define KALJDFGPMHA__CTOR_OFFSET UNITYSDK_OFFSET(0x12973560)

inline static constexpr unsigned int KALJDFGPMHA_TypeDefinitionIndex = 75923;

class KALJDFGPMHA : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x18
	::FGCOIBFFCHB* HLCDLFHMHDF; // 0x20
	::LGINJIKKBJA* BKDDKDMILCA; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* IEOJFFPCGGN; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* BCJFGOAGODL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALJDFGPMHA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KALJDFGPMHA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KALJDFGPMHA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALJDFGPMHA_KGEBDLGBGNM_OFFSET))(this);
	}
};
