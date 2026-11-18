#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EINCBMJHCLG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14A9D870)
#define EINCBMJHCLG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14A9D770)
#define EINCBMJHCLG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14A9D530)
#define EINCBMJHCLG__CTOR_OFFSET UNITYSDK_OFFSET(0x14A9D860)

inline static constexpr unsigned int EINCBMJHCLG_TypeDefinitionIndex = 87074;

class EINCBMJHCLG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* EHMLMJKEJMM; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x20
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x28
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x30
	::FGCOIBFFCHB* CMHCFHJBGOP; // 0x38
	::UnityEngine::Transform* GDLCCFGKNBD; // 0x40
	::UnityEngine::Transform* HIKNPAOENBG; // 0x48
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x50
	::FGCOIBFFCHB* KKMCLPDAJKJ; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EINCBMJHCLG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EINCBMJHCLG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EINCBMJHCLG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EINCBMJHCLG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
