#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define JCPFACEOKAE_BHJLGKIFAJL_OFFSET UNITYSDK_OFFSET(0x14A54960)
#define JCPFACEOKAE_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x14A54790)
#define JCPFACEOKAE_HDDHCIOMPCJ_OFFSET UNITYSDK_OFFSET(0x14A54970)
#define JCPFACEOKAE_IACAIHNHNEE_OFFSET UNITYSDK_OFFSET(0x14A54980)
#define JCPFACEOKAE_NLJHECMJHMO_OFFSET UNITYSDK_OFFSET(0x14A54990)
#define JCPFACEOKAE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14A546E0)
#define JCPFACEOKAE__CTOR_OFFSET UNITYSDK_OFFSET(0x14A548D0)

inline static constexpr unsigned int JCPFACEOKAE_TypeDefinitionIndex = 83549;

class JCPFACEOKAE : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::GameObject* _KNJLIOHLGAL_k__BackingField; // 0x28
	::MoleMole::NotificationBadgeEx* _KJOAJPGNEHL_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPFACEOKAE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JCPFACEOKAE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void BHJLGKIFAJL(::MoleMole::NotificationBadgeEx* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadgeEx*))((::PBYTE)hIl2Cpp + JCPFACEOKAE_BHJLGKIFAJL_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::GameObject* HDDHCIOMPCJ()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPFACEOKAE_HDDHCIOMPCJ_OFFSET))(this);
	}

	::MoleMole::NotificationBadgeEx* IACAIHNHNEE()
	{
		return ((::MoleMole::NotificationBadgeEx*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPFACEOKAE_IACAIHNHNEE_OFFSET))(this);
	}

	::System::Void NLJHECMJHMO(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + JCPFACEOKAE_NLJHECMJHMO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPFACEOKAE_EFKGNFCEENK_OFFSET))(this);
	}
};
