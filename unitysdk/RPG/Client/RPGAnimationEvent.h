#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RPGAnimationEvent_InvokeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::Client { class RPGAnimationEvent_AnimationEventCallBack; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimationEvent; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_RPGANIMATIONEVENT_ADDANIMATIONEVENTBYCLIP_OFFSET UNITYSDK_OFFSET(0x19053820)
#define RPG_CLIENT_RPGANIMATIONEVENT_ADDANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x190532A0)
#define RPG_CLIENT_RPGANIMATIONEVENT_ADDEVENTFORALLCLIPS_OFFSET UNITYSDK_OFFSET(0x19052E10)
#define RPG_CLIENT_RPGANIMATIONEVENT_CLEAREVENT_OFFSET UNITYSDK_OFFSET(0x19053890)
#define RPG_CLIENT_RPGANIMATIONEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x19054110)
#define RPG_CLIENT_RPGANIMATIONEVENT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x19053F60)
#define RPG_CLIENT_RPGANIMATIONEVENT_GET_OFFSET UNITYSDK_OFFSET(0x19052D20)
#define RPG_CLIENT_RPGANIMATIONEVENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19053E70)
#define RPG_CLIENT_RPGANIMATIONEVENT_ONRPGANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x19053C40)
#define RPG_CLIENT_RPGANIMATIONEVENT_REMOVEANIMATIONEVENTBYCLIP_OFFSET UNITYSDK_OFFSET(0x19053920)
#define RPG_CLIENT_RPGANIMATIONEVENT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x19053F20)
#define RPG_CLIENT_RPGANIMATIONEVENT__ADDRPGANIMATIONEVENTTOCLIP_OFFSET UNITYSDK_OFFSET(0x190535F0)
#define RPG_CLIENT_RPGANIMATIONEVENT__CHECKANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x19054010)
#define RPG_CLIENT_RPGANIMATIONEVENT__GETANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x19053320)
#define RPG_CLIENT_RPGANIMATIONEVENT__INVOKECALLBACK_OFFSET UNITYSDK_OFFSET(0x19053C90)
#define RPG_CLIENT_RPGANIMATIONEVENT__SETSTRINGANIMATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x19053990)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGAnimationEvent_TypeDefinitionIndex = 74966;

	class RPGAnimationEvent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::RPGAnimationEvent_InvokeType CallbackInvokeType; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _StringAnimationCallback; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RPGAnimationEvent* Get(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::RPGAnimationEvent*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_GET_OFFSET))(a1);
		}

		::System::Void AddEventForAllClips(::UnityEngine::Animation* a1, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_ADDEVENTFORALLCLIPS_OFFSET))(this, a1, a2);
		}

		::System::Void AddAnimationEvent(::System::String* a1, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_ADDANIMATIONEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void AddAnimationEventByClip(::UnityEngine::AnimationClip* a1, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_ADDANIMATIONEVENTBYCLIP_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AnimationClip* _GetAnimationClip(::System::String* a1)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT__GETANIMATIONCLIP_OFFSET))(this, a1);
		}

		::System::Void ClearEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_CLEAREVENT_OFFSET))(this);
		}

		::System::Void RemoveAnimationEventByClip(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_REMOVEANIMATIONEVENTBYCLIP_OFFSET))(this, a1);
		}

		::System::Void _AddRPGAnimationEventToClip(::UnityEngine::AnimationClip* a1, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT__ADDRPGANIMATIONEVENTTOCLIP_OFFSET))(this, a1, a2);
		}

		::System::Void OnRPGAnimationEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_ONRPGANIMATIONEVENT_OFFSET))(this, a1);
		}

		::System::Void _InvokeCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT__INVOKECALLBACK_OFFSET))(this, a1);
		}

		::System::Void _SetStringAnimationCallback(::System::String* a1, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT__SETSTRINGANIMATIONCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_DESPAWNED_OFFSET))(this);
		}

		::System::Void _CheckAnimationEvent(::UnityEngine::AnimationEvent* a1, ::UnityEngine::AnimationClip* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationEvent*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT__CHECKANIMATIONEVENT_OFFSET))(this, a1, a2);
		}

	};
}
