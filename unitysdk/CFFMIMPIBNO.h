#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CFFMIMPIBNO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18DCD8A0)
#define CFFMIMPIBNO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18DCD7D0)
#define CFFMIMPIBNO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18DCD660)
#define CFFMIMPIBNO__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCD890)

inline static constexpr unsigned int CFFMIMPIBNO_TypeDefinitionIndex = 79991;

class CFFMIMPIBNO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x20
	::LGINJIKKBJA* BNJDDPBPKCD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFMIMPIBNO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CFFMIMPIBNO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CFFMIMPIBNO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFMIMPIBNO_KGEBDLGBGNM_OFFSET))(this);
	}
};
