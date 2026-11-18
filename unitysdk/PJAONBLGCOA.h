#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PJAONBLGCOA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A7F4B20)
#define PJAONBLGCOA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A7F4A10)
#define PJAONBLGCOA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A7F4840)
#define PJAONBLGCOA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F4B10)

inline static constexpr unsigned int PJAONBLGCOA_TypeDefinitionIndex = 52627;

class PJAONBLGCOA : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* CFCGPBJCNMC; // 0x18
	::MonoUITableScrollV2* PKHAMIAEKNF; // 0x20
	::LGINJIKKBJA* BCPJHNGIAKL; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* POJHFIIPFAL; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* DNGFLIEGFIL; // 0x38
	::LGINJIKKBJA* EDDDLDDBAII; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAONBLGCOA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJAONBLGCOA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAONBLGCOA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJAONBLGCOA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
