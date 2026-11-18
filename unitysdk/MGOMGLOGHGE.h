#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MGOMGLOGHGE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14D82850)
#define MGOMGLOGHGE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14D82780)
#define MGOMGLOGHGE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14D82520)
#define MGOMGLOGHGE__CTOR_OFFSET UNITYSDK_OFFSET(0x14D82840)

inline static constexpr unsigned int MGOMGLOGHGE_TypeDefinitionIndex = 62120;

class MGOMGLOGHGE : public ::GIBMJLOJLKD
{
public:
	::MoleMole::NotificationBadgeEx* LHOADKMDIDG; // 0x18
	::UnityEngine::GameObject* NDPFKBKABLI; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* FLOCKMKCHNB; // 0x28
	::LGINJIKKBJA* NEDFNNIEHDB; // 0x30
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x38
	::FGCOIBFFCHB* AFCIJDGECGN; // 0x40
	::UnityEngine::GameObject* MCGPPADHCLJ; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* OEDOKBJLPJI; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* KLEAEBCODPG; // 0x58
	::UnityEngine::GameObject* KEHPAOOHNOI; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* PMCNDKMMFDG; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOMGLOGHGE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MGOMGLOGHGE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MGOMGLOGHGE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOMGLOGHGE_KGEBDLGBGNM_OFFSET))(this);
	}
};
