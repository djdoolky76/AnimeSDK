#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define KNMADPNIPNB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13C861F0)
#define KNMADPNIPNB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13C86140)
#define KNMADPNIPNB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13C85FA0)
#define KNMADPNIPNB__CTOR_OFFSET UNITYSDK_OFFSET(0x13C861E0)

inline static constexpr unsigned int KNMADPNIPNB_TypeDefinitionIndex = 51686;

class KNMADPNIPNB : public ::GIBMJLOJLKD
{
public:
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x18
	::UnityEngine::CanvasGroup* KKMCLPDAJKJ; // 0x20
	::FGCOIBFFCHB* DJKOBDEJNME; // 0x28
	::UnityEngine::UI::Extension::UITabButton* OEPAJHOAAAI; // 0x30
	::FGCOIBFFCHB* AJIBHBJNOCE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMADPNIPNB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KNMADPNIPNB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMADPNIPNB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KNMADPNIPNB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
