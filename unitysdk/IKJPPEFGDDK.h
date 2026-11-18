#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IKJPPEFGDDK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13812230)
#define IKJPPEFGDDK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13812130)
#define IKJPPEFGDDK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13811E90)
#define IKJPPEFGDDK__CTOR_OFFSET UNITYSDK_OFFSET(0x13812220)

inline static constexpr unsigned int IKJPPEFGDDK_TypeDefinitionIndex = 79472;

class IKJPPEFGDDK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* OCBNLOAGKNC; // 0x18
	::UnityEngine::RectTransform* ELKKGHADNLB; // 0x20
	::LGINJIKKBJA* MNEGMMCIHHM; // 0x28
	::UnityEngine::RectTransform* BLKJFKMNHDE; // 0x30
	::UnityEngine::RectTransform* IMDLHCPGEDN; // 0x38
	::MoleMole::NotificationBadgeEx* JFDOOELFAOA; // 0x40
	::UnityEngine::RectTransform* GNHOHLEIPAB; // 0x48
	::UnityEngine::GameObject* MCGDGBOHHKE; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* IEGIALBIODP; // 0x58
	::UnityEngine::RectTransform* GJOILNGLOII; // 0x60
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x68
	::FGCOIBFFCHB* LLOILDGHOAE; // 0x70
	::FGCOIBFFCHB* CKEKMDOEMPC; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJPPEFGDDK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKJPPEFGDDK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKJPPEFGDDK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJPPEFGDDK_KGEBDLGBGNM_OFFSET))(this);
	}
};
