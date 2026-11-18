#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define APMFFKEFFHD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14236F80)
#define APMFFKEFFHD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14236E20)
#define APMFFKEFFHD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14236B70)
#define APMFFKEFFHD__CTOR_OFFSET UNITYSDK_OFFSET(0x14236F70)

inline static constexpr unsigned int APMFFKEFFHD_TypeDefinitionIndex = 43637;

class APMFFKEFFHD : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x18
	::UnityEngine::Transform* IAHPILBJLBF; // 0x20
	::UnityEngine::CanvasGroup* IODBDPOLPKA; // 0x28
	::FGCOIBFFCHB* COPDFBNIJKL; // 0x30
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x38
	::UnityEngine::GameObject* DEIPJONPFNG; // 0x40
	::UnityEngine::GameObject* CHNHMIDILAN; // 0x48
	::FGCOIBFFCHB* LEEJEBIJDPL; // 0x50
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* ECKOCKKFHLO; // 0x60
	::UnityEngine::Transform* FDJHEBHLJLD; // 0x68
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x70
	::FGCOIBFFCHB* KEHPAOOHNOI; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMFFKEFFHD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + APMFFKEFFHD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMFFKEFFHD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + APMFFKEFFHD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
