#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/Client/StateCommonIdleTimer.h"
#include "unitysdk/RPG/Client/StateIdleTimer_IdleShowForbidReason.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
namespace RPG::Client { class EntityGameObjectConnection; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATEIDLETIMER_CTOR_OFFSET UNITYSDK_OFFSET(0x1A911A10)
#define RPG_CLIENT_STATEIDLETIMER_DHLPAGIGBOA_OFFSET UNITYSDK_OFFSET(0x1A910CD0)
#define RPG_CLIENT_STATEIDLETIMER_KFFBGNMGOOK_1_OFFSET UNITYSDK_OFFSET(0x1A910A60)
#define RPG_CLIENT_STATEIDLETIMER_KFFBGNMGOOK_OFFSET UNITYSDK_OFFSET(0x1A9109D0)
#define RPG_CLIENT_STATEIDLETIMER_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1A910E80)
#define RPG_CLIENT_STATEIDLETIMER_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1A911300)
#define RPG_CLIENT_STATEIDLETIMER_ONSTATEIK_OFFSET UNITYSDK_OFFSET(0x1A9119A0)
#define RPG_CLIENT_STATEIDLETIMER_ONSTATEMOVE_OFFSET UNITYSDK_OFFSET(0x1A911930)
#define RPG_CLIENT_STATEIDLETIMER_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A9113C0)
#define RPG_CLIENT_STATEIDLETIMER_PLDEAGHKJKO_1_OFFSET UNITYSDK_OFFSET(0x1A910AC0)
#define RPG_CLIENT_STATEIDLETIMER_PLDEAGHKJKO_OFFSET UNITYSDK_OFFSET(0x1A910C70)

namespace RPG::Client
{
	inline static constexpr unsigned int StateIdleTimer_TypeDefinitionIndex = 70779;

	class StateIdleTimer : public ::RPG::Client::StateCommonIdleTimer
	{
	public:
		::System::Boolean ResetTimeOnStoryMode; // 0x40
		::System::Byte _padding0[0x7];
		::RPG::Client::EntityGameObjectConnection* Connection; // 0x48
		::System::WeakReference_1<::RPG::GameCore::GameEntity*>* EntityRef; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::ReasonBool_1<::System::Object*>>* _IdleValueForbidReasons; // 0x58
		// static const ::System::Object CommonIdleValue; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_CTOR_OFFSET))(this);
		}

		::System::Void KFFBGNMGOOK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_KFFBGNMGOOK_OFFSET))(this, a1);
		}

		::System::Void KFFBGNMGOOK_1(::System::Boolean a1, ::RPG::Client::StateIdleTimer_IdleShowForbidReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::StateIdleTimer_IdleShowForbidReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_KFFBGNMGOOK_1_OFFSET))(this, a1, a2);
		}

		::System::Void PLDEAGHKJKO(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_PLDEAGHKJKO_OFFSET))(this, a1, a2);
		}

		::System::Void PLDEAGHKJKO_1(::System::Int32 a1, ::System::Boolean a2, ::RPG::Client::StateIdleTimer_IdleShowForbidReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::Client::StateIdleTimer_IdleShowForbidReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_PLDEAGHKJKO_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateMove(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_ONSTATEMOVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateIK(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_ONSTATEIK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DHLPAGIGBOA(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_DHLPAGIGBOA_OFFSET))(this, a1, a2);
		}

	};
}
