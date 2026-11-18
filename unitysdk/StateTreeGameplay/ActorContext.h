#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeGameplay/DebugContextState.h"
#include "unitysdk/StateTreeGameplay/GraphEventContextState.h"
#include "unitysdk/StateTreeGameplay/TransformContextState.h"
#include "unitysdk/UnrealTypes/Object.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"

#define STATETREEGAMEPLAY_ACTORCONTEXT_DISPOSEGENIMPL_OFFSET UNITYSDK_OFFSET(0x1BF454B0)
#define STATETREEGAMEPLAY_ACTORCONTEXT_DISPOSEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1BF454C0)
#define STATETREEGAMEPLAY_ACTORCONTEXT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1BF45160)
#define STATETREEGAMEPLAY_ACTORCONTEXT_INITIALIZEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1BF454A0)
#define STATETREEGAMEPLAY_ACTORCONTEXT_ISANIMATIONPLAYING_OFFSET UNITYSDK_OFFSET(0x1BF45350)
#define STATETREEGAMEPLAY_ACTORCONTEXT_ISMOVING_OFFSET UNITYSDK_OFFSET(0x1BF452C0)
#define STATETREEGAMEPLAY_ACTORCONTEXT_MOVETOPOSITION_OFFSET UNITYSDK_OFFSET(0x1BF451C0)
#define STATETREEGAMEPLAY_ACTORCONTEXT_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1BF45300)
#define STATETREEGAMEPLAY_ACTORCONTEXT_SENDGRAPHEVENT_OFFSET UNITYSDK_OFFSET(0x1BF45390)
#define STATETREEGAMEPLAY_ACTORCONTEXT_STOPMOVE_OFFSET UNITYSDK_OFFSET(0x1BF45220)
#define STATETREEGAMEPLAY_ACTORCONTEXT_UPDATETARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1BF45260)
#define STATETREEGAMEPLAY_ACTORCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF45490)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int ActorContext_TypeDefinitionIndex = 41892;

	class ActorContext : public ::UnrealTypes::Object
	{
	public:
		::StateTreeGameplay::TransformContextState Transform; // 0x38
		::StateTreeGameplay::DebugContextState DebugInfo; // 0x44
		::StateTreeGameplay::GraphEventContextState GraphEvent; // 0x48

		::System::Void _ctor(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORCONTEXT__CTOR_OFFSET))(this, initializer);
		}

		::UnityEngine::Vector3 GetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORCONTEXT_GETPOSITION_OFFSET))(this);
		}

		::System::Boolean MoveToPosition(::UnityEngine::Vector3 position, ::System::Boolean stopAtTarget)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORCONTEXT_MOVETOPOSITION_OFFSET))(this, position, stopAtTarget);
		}

		::System::Void StopMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORCONTEXT_STOPMOVE_OFFSET))(this);
		}

		::System::Void UpdateTargetPosition(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORCONTEXT_UPDATETARGETPOSITION_OFFSET))(this, position);
		}

		::System::Boolean IsMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORCONTEXT_ISMOVING_OFFSET))(this);
		}

		::System::Boolean PlayAnimation(::System::Int32 animationID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORCONTEXT_PLAYANIMATION_OFFSET))(this, animationID);
		}

		::System::Boolean IsAnimationPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORCONTEXT_ISANIMATIONPLAYING_OFFSET))(this);
		}

		::System::Boolean SendGraphEvent(::Foundation::Unreal::FGameplayTag eventTag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORCONTEXT_SENDGRAPHEVENT_OFFSET))(this, eventTag);
		}

		::System::Void InitializeProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORCONTEXT_INITIALIZEPROPERTIES_OFFSET))(this);
		}

		::System::Void DisposeGenImpl(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORCONTEXT_DISPOSEGENIMPL_OFFSET))(this, disposing);
		}

		::System::Void DisposeProperties(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORCONTEXT_DISPOSEPROPERTIES_OFFSET))(this, disposing);
		}
	};
}
