#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define FEMHEGPGBOE_BJPBEHDKCPK_OFFSET UNITYSDK_OFFSET(0x11D71A40)
#define FEMHEGPGBOE_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x11D71860)
#define FEMHEGPGBOE_MOOPAAJLEHM_OFFSET UNITYSDK_OFFSET(0x11D71A30)
#define FEMHEGPGBOE_NGDDKIBPNIE_OFFSET UNITYSDK_OFFSET(0x11D71A50)
#define FEMHEGPGBOE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11D717B0)
#define FEMHEGPGBOE_PFAOIBDHBHP_OFFSET UNITYSDK_OFFSET(0x11D71A60)
#define FEMHEGPGBOE__CTOR_OFFSET UNITYSDK_OFFSET(0x11D719A0)

inline static constexpr unsigned int FEMHEGPGBOE_TypeDefinitionIndex = 54439;

class FEMHEGPGBOE : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::Transform* _DLCMFLBACHM_k__BackingField; // 0x28
	::UnityEngine::Transform* _FDFOFPPNPBF_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMHEGPGBOE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FEMHEGPGBOE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::UnityEngine::Transform* MOOPAAJLEHM()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMHEGPGBOE_MOOPAAJLEHM_OFFSET))(this);
	}

	::UnityEngine::Transform* BJPBEHDKCPK()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMHEGPGBOE_BJPBEHDKCPK_OFFSET))(this);
	}

	::System::Void NGDDKIBPNIE(::UnityEngine::Transform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FEMHEGPGBOE_NGDDKIBPNIE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMHEGPGBOE_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void PFAOIBDHBHP(::UnityEngine::Transform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FEMHEGPGBOE_PFAOIBDHBHP_OFFSET))(this, EGEGIMGMJHN);
	}
};
