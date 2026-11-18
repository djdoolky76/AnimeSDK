#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AIEIAFPOFPM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x143A5430)
#define AIEIAFPOFPM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x143A53A0)
#define AIEIAFPOFPM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x143A51D0)
#define AIEIAFPOFPM__CTOR_OFFSET UNITYSDK_OFFSET(0x143A5420)

inline static constexpr unsigned int AIEIAFPOFPM_TypeDefinitionIndex = 88421;

class AIEIAFPOFPM : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::LGINJIKKBJA* MKDMBACNKOK; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* ADEPIHHHGEP; // 0x30
	::GCIMMDDIFBJ* FCAPGILOFFL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIEIAFPOFPM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AIEIAFPOFPM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIEIAFPOFPM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AIEIAFPOFPM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
