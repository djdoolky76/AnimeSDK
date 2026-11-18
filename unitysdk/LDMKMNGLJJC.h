#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Button; }

#define LDMKMNGLJJC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15BD43A0)
#define LDMKMNGLJJC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15BD4310)
#define LDMKMNGLJJC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15BD4110)
#define LDMKMNGLJJC__CTOR_OFFSET UNITYSDK_OFFSET(0x15BD4390)

inline static constexpr unsigned int LDMKMNGLJJC_TypeDefinitionIndex = 69925;

class LDMKMNGLJJC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Button* ICPJFJLCCHB; // 0x18
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x20
	::MoleMole::NotificationBadgeEx* JFDOOELFAOA; // 0x28
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x30
	::MoleMole::MonoGamepadSelectable* DANNBOGNOEH; // 0x38
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x40
	::UnityEngine::GameObject* ANEEEIBEEPJ; // 0x48
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x50
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMKMNGLJJC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LDMKMNGLJJC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMKMNGLJJC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LDMKMNGLJJC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
