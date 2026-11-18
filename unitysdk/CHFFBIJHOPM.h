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

#define CHFFBIJHOPM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19A04590)
#define CHFFBIJHOPM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19A04420)
#define CHFFBIJHOPM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19A04170)
#define CHFFBIJHOPM__CTOR_OFFSET UNITYSDK_OFFSET(0x19A04580)

inline static constexpr unsigned int CHFFBIJHOPM_TypeDefinitionIndex = 80739;

class CHFFBIJHOPM : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DNBDNKHOJAK; // 0x18
	::FGCOIBFFCHB* IFMLACKNMAD; // 0x20
	::UnityEngine::GameObject* MCGPPADHCLJ; // 0x28
	::FGCOIBFFCHB* HJAEDIALBMF; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* JHCNGNMIHDI; // 0x38
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* PLANCHAGKOE; // 0x48
	::UnityEngine::UI::Extension::UITimeWidget* HEEGMLBJJJI; // 0x50
	::MoleMole::NotificationBadgeEx* AIIBCKFHDPC; // 0x58
	::MoleMole::NotificationBadgeEx* MMAKEPMDJAL; // 0x60
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x68
	::FGCOIBFFCHB* NCFBFDJCDIE; // 0x70
	::UnityEngine::GameObject* FKHNKIOFEPM; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFFBIJHOPM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CHFFBIJHOPM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFFBIJHOPM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CHFFBIJHOPM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
