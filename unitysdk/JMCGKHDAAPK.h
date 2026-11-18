#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JMCGKHDAAPK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13C39D90)
#define JMCGKHDAAPK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13C39C70)
#define JMCGKHDAAPK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13C39A20)
#define JMCGKHDAAPK__CTOR_OFFSET UNITYSDK_OFFSET(0x13C39D80)

inline static constexpr unsigned int JMCGKHDAAPK_TypeDefinitionIndex = 69296;

class JMCGKHDAAPK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* CMHCFHJBGOP; // 0x18
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x20
	::UnityEngine::Transform* HIKNPAOENBG; // 0x28
	::FGCOIBFFCHB* KKMCLPDAJKJ; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x38
	::FGCOIBFFCHB* CDCMPGNIEMK; // 0x40
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x48
	::UnityEngine::Transform* GDLCCFGKNBD; // 0x50
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMCGKHDAAPK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JMCGKHDAAPK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMCGKHDAAPK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JMCGKHDAAPK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
