#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JLANOBPGKNH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17B48790)
#define JLANOBPGKNH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17B48620)
#define JLANOBPGKNH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17B48390)
#define JLANOBPGKNH__CTOR_OFFSET UNITYSDK_OFFSET(0x17B48780)

inline static constexpr unsigned int JLANOBPGKNH_TypeDefinitionIndex = 49506;

class JLANOBPGKNH : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HBNJMALOIPA; // 0x18
	::FGCOIBFFCHB* DDKKICMIPEG; // 0x20
	::LGINJIKKBJA* PLEJKLONEJO; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* MBNBJGOAANO; // 0x30
	::FGCOIBFFCHB* KMICEHAFPJL; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* KLCBBLCIOIF; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* LKFMOPLLHDK; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* FBEKFBEOALL; // 0x50
	::LGINJIKKBJA* ILCCICMAFHP; // 0x58
	::LGINJIKKBJA* KFOKPEHEAPI; // 0x60
	::FGCOIBFFCHB* LFJAAFCLDIO; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLANOBPGKNH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLANOBPGKNH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLANOBPGKNH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLANOBPGKNH_KGEBDLGBGNM_OFFSET))(this);
	}
};
