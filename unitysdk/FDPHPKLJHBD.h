#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define FDPHPKLJHBD_BJPBEHDKCPK_OFFSET UNITYSDK_OFFSET(0x191B1B60)
#define FDPHPKLJHBD_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x191B1980)
#define FDPHPKLJHBD_MOOPAAJLEHM_OFFSET UNITYSDK_OFFSET(0x191B1B70)
#define FDPHPKLJHBD_NGDDKIBPNIE_OFFSET UNITYSDK_OFFSET(0x191B1B50)
#define FDPHPKLJHBD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x191B18D0)
#define FDPHPKLJHBD_PFAOIBDHBHP_OFFSET UNITYSDK_OFFSET(0x191B1B80)
#define FDPHPKLJHBD__CTOR_OFFSET UNITYSDK_OFFSET(0x191B1AC0)

inline static constexpr unsigned int FDPHPKLJHBD_TypeDefinitionIndex = 93174;

class FDPHPKLJHBD : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::Transform* _DLCMFLBACHM_k__BackingField; // 0x28
	::UnityEngine::Transform* _FDFOFPPNPBF_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPHPKLJHBD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FDPHPKLJHBD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void NGDDKIBPNIE(::UnityEngine::Transform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FDPHPKLJHBD_NGDDKIBPNIE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPHPKLJHBD_EFKGNFCEENK_OFFSET))(this);
	}

	::UnityEngine::Transform* BJPBEHDKCPK()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPHPKLJHBD_BJPBEHDKCPK_OFFSET))(this);
	}

	::UnityEngine::Transform* MOOPAAJLEHM()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPHPKLJHBD_MOOPAAJLEHM_OFFSET))(this);
	}

	::System::Void PFAOIBDHBHP(::UnityEngine::Transform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FDPHPKLJHBD_PFAOIBDHBHP_OFFSET))(this, EGEGIMGMJHN);
	}
};
