#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoAnimatorStateSimpleEvent_Event.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoAnimatorStateSimpleEvent; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_TRIGGEREFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xD725A00)
#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_TRIGGEREFFECT_OIBKPJEGPOK_OFFSET UNITYSDK_OFFSET(0xD725650)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAnimatorStateSimpleEvent_Event_TriggerEffect_TypeDefinitionIndex = 68525;

	class MonoAnimatorStateSimpleEvent_Event_TriggerEffect : public ::RPG::Client::MonoAnimatorStateSimpleEvent_Event
	{
	public:
		::System::String* EffectPrefabPath; // 0x10
		::UnityEngine::Transform* AttachPoint; // 0x18
		::UnityEngine::Vector3 PositionOffset; // 0x20
		::UnityEngine::Quaternion RotationOffset; // 0x2C
		::UnityEngine::Vector3 Scale; // 0x3C
		::System::Boolean Follow; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_TRIGGEREFFECT_CTOR_OFFSET))(this);
		}

		::System::Void OIBKPJEGPOK(::RPG::Client::MonoAnimatorStateSimpleEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoAnimatorStateSimpleEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_TRIGGEREFFECT_OIBKPJEGPOK_OFFSET))(this, a1);
		}

	};
}
