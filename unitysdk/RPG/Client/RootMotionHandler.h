#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/FFHBHCGJMHL.h"
class ENLPLPMGOBM;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RuntimeAnimatorController; }

#define RPG_CLIENT_ROOTMOTIONHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xE06D920)
#define RPG_CLIENT_ROOTMOTIONHANDLER_CTOR_OFFSET UNITYSDK_OFFSET(0xE06E320)
#define RPG_CLIENT_ROOTMOTIONHANDLER_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0xE06DAA0)
#define RPG_CLIENT_ROOTMOTIONHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE06DE00)
#define RPG_CLIENT_ROOTMOTIONHANDLER_REGISTERMOVEHANDLER_OFFSET UNITYSDK_OFFSET(0xE06DEB0)
#define RPG_CLIENT_ROOTMOTIONHANDLER_START_OFFSET UNITYSDK_OFFSET(0xE06DA30)
#define RPG_CLIENT_ROOTMOTIONHANDLER_UNREGISTERMOVEHANDLER_OFFSET UNITYSDK_OFFSET(0xE06E290)

namespace RPG::Client
{
	class RootMotionHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean DIOEAJEHHND; // 0x18
		::System::Boolean EnableRootMotion; // 0x19
		::System::Boolean ApplyRootMotion; // 0x1A
		::System::Byte _padding0[0x5];
		::UnityEngine::Animator* APPGGMLEPLN; // 0x20
		::System::Collections::Generic::List_1<::ENLPLPMGOBM*>* DGFJPLIODDK; // 0x28
		::UnityEngine::RuntimeAnimatorController* OHBKPGJFBPN; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONHANDLER_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONHANDLER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONHANDLER_START_OFFSET))(this);
		}

		::System::Void OnAnimatorMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONHANDLER_ONANIMATORMOVE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONHANDLER_ONDESTROY_OFFSET))(this);
		}

		::FFHBHCGJMHL RegisterMoveHandler(::ENLPLPMGOBM* a1)
		{
			return ((::FFHBHCGJMHL(*)(::PVOID, ::ENLPLPMGOBM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONHANDLER_REGISTERMOVEHANDLER_OFFSET))(this, a1);
		}

		::System::Void UnregisterMoveHandler(::ENLPLPMGOBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENLPLPMGOBM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONHANDLER_UNREGISTERMOVEHANDLER_OFFSET))(this, a1);
		}

	};
}
