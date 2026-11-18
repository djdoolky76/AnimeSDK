#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BMEEMGKCKMI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1857F8B0)
#define BMEEMGKCKMI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1857F770)
#define BMEEMGKCKMI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1857F560)
#define BMEEMGKCKMI__CTOR_OFFSET UNITYSDK_OFFSET(0x1857F8A0)

inline static constexpr unsigned int BMEEMGKCKMI_TypeDefinitionIndex = 57586;

class BMEEMGKCKMI : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* CMHCFHJBGOP; // 0x18
	::UnityEngine::Transform* HIKNPAOENBG; // 0x20
	::FGCOIBFFCHB* KKMCLPDAJKJ; // 0x28
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x30
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x40
	::UnityEngine::Transform* GDLCCFGKNBD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEEMGKCKMI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BMEEMGKCKMI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEEMGKCKMI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BMEEMGKCKMI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
