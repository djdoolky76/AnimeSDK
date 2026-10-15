#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Action; }
namespace UnityEngine { class Collision; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENGAMEBALL_CTOR_OFFSET UNITYSDK_OFFSET(0xC43DA00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENGAMEBALL_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0xC43D8B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENGAMEBALL_REGISTERONCOLLISIONCALLBACK_OFFSET UNITYSDK_OFFSET(0xC43D920)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENGAMEBALL_UNREGISTERONCOLLISIONCALLBACK_OFFSET UNITYSDK_OFFSET(0xC43D990)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int MonoHipplenGameBall_TypeDefinitionIndex = 75599;

	class MonoHipplenGameBall : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* CMPKHIJJFOH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENGAMEBALL_CTOR_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENGAMEBALL_ONCOLLISIONENTER_OFFSET))(this, a1);
		}

		::System::Void RegisterOnCollisionCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENGAMEBALL_REGISTERONCOLLISIONCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnregisterOnCollisionCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENGAMEBALL_UNREGISTERONCOLLISIONCALLBACK_OFFSET))(this, a1);
		}

	};
}
