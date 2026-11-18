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

#define OPKNNCIIEMG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1AFC8520)
#define OPKNNCIIEMG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1AFC8470)
#define OPKNNCIIEMG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1AFC8240)
#define OPKNNCIIEMG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC8510)

inline static constexpr unsigned int OPKNNCIIEMG_TypeDefinitionIndex = 80047;

class OPKNNCIIEMG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* KFBJHIGMPIC; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* NGNCPKELCEL; // 0x20
	::LGINJIKKBJA* EDNDBAOGBCD; // 0x28
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x30
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x38
	::UnityEngine::RectTransform* ONAGJELCGAP; // 0x40
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x48
	::UnityEngine::RectTransform* CCJALJMHJFC; // 0x50
	::FGCOIBFFCHB* OCFIPLIMNMG; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPKNNCIIEMG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OPKNNCIIEMG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OPKNNCIIEMG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPKNNCIIEMG_KGEBDLGBGNM_OFFSET))(this);
	}
};
