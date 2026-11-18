#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JAFNECKKDEP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18717EA0)
#define JAFNECKKDEP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18717D60)
#define JAFNECKKDEP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18717B50)
#define JAFNECKKDEP__CTOR_OFFSET UNITYSDK_OFFSET(0x18717E90)

inline static constexpr unsigned int JAFNECKKDEP_TypeDefinitionIndex = 47807;

class JAFNECKKDEP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* HIKNPAOENBG; // 0x18
	::FGCOIBFFCHB* CMHCFHJBGOP; // 0x20
	::UnityEngine::Transform* GDLCCFGKNBD; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x30
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x38
	::FGCOIBFFCHB* KKMCLPDAJKJ; // 0x40
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFNECKKDEP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JAFNECKKDEP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JAFNECKKDEP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFNECKKDEP_KGEBDLGBGNM_OFFSET))(this);
	}
};
