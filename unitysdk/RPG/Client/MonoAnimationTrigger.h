#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MONOANIMATIONTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x19876520)
#define RPG_CLIENT_MONOANIMATIONTRIGGER_REGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x19876430)
#define RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERANIMATIONEVENTNOTIFY_OFFSET UNITYSDK_OFFSET(0x198762C0)
#define RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERAUDIOEVENT2D_OFFSET UNITYSDK_OFFSET(0x19876070)
#define RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERAUDIOEVENT_OFFSET UNITYSDK_OFFSET(0x19875F60)
#define RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGEREFFECTEVENT_OFFSET UNITYSDK_OFFSET(0x19876170)
#define RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERREGISTEREDCALLBACK_OFFSET UNITYSDK_OFFSET(0x19876320)
#define RPG_CLIENT_MONOANIMATIONTRIGGER_UNREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x19876390)
#define RPG_CLIENT_MONOANIMATIONTRIGGER_UNREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x198764D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAnimationTrigger_TypeDefinitionIndex = 70912;

	class MonoAnimationTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::System::String*>* _AnimationCallback; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void TriggerAudioEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERAUDIOEVENT_OFFSET))(this, a1);
		}

		::System::Void TriggerAudioEvent2D(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERAUDIOEVENT2D_OFFSET))(this, a1);
		}

		::System::Void TriggerEffectEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGEREFFECTEVENT_OFFSET))(this, a1);
		}

		::System::Void TriggerAnimationEventNotify(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERANIMATIONEVENTNOTIFY_OFFSET))(this, a1);
		}

		::System::Void TriggerRegisteredCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_TRIGGERREGISTEREDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnRegisterCallback(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_UNREGISTERCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RegisterCallback(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_REGISTERCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnregisterCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATIONTRIGGER_UNREGISTERCALLBACK_OFFSET))(this);
		}

	};
}
