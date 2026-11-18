#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PFGBHHGCMPN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18465EA0)
#define PFGBHHGCMPN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18465E10)
#define PFGBHHGCMPN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18465CA0)
#define PFGBHHGCMPN__CTOR_OFFSET UNITYSDK_OFFSET(0x18465E90)

inline static constexpr unsigned int PFGBHHGCMPN_TypeDefinitionIndex = 38734;

class PFGBHHGCMPN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* JIAPDEAHAMM; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* MMNNLOMMNGL; // 0x20
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGBHHGCMPN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PFGBHHGCMPN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PFGBHHGCMPN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGBHHGCMPN_KGEBDLGBGNM_OFFSET))(this);
	}
};
