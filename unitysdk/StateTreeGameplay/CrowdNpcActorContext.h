#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeGameplay/ActorContext.h"
#include "unitysdk/StateTreeGameplay/NpcAnimationContextState.h"
#include "unitysdk/StateTreeGameplay/NpcMovementContextState.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"

#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_DISPOSEGENIMPL_OFFSET UNITYSDK_OFFSET(0x1BF456E0)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_DISPOSEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1BF456F0)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_INITIALIZEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1BF456D0)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_ISANIMATIONPLAYING_OFFSET UNITYSDK_OFFSET(0x1BF45680)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_ISMOVING_OFFSET UNITYSDK_OFFSET(0x1BF455B0)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_MOVETOPOSITION_OFFSET UNITYSDK_OFFSET(0x1BF454D0)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1BF455F0)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF456C0)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT___BASE_ISANIMATIONPLAYING_OFFSET UNITYSDK_OFFSET(0x1BF45700)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT___BASE_ISMOVING_OFFSET UNITYSDK_OFFSET(0x1BF45740)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT___BASE_MOVETOPOSITION_OFFSET UNITYSDK_OFFSET(0x1BF45780)
#define STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT___BASE_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1BF457F0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int CrowdNpcActorContext_TypeDefinitionIndex = 93092;

	class CrowdNpcActorContext : public ::StateTreeGameplay::ActorContext
	{
	public:
		::StateTreeGameplay::NpcAnimationContextState Animation; // 0x58
		::StateTreeGameplay::NpcMovementContextState Movement; // 0x60

		::System::Void _ctor(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT__CTOR_OFFSET))(this, initializer);
		}

		::System::Boolean MoveToPosition(::UnityEngine::Vector3 position, ::System::Boolean stopAtTarget)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_MOVETOPOSITION_OFFSET))(this, position, stopAtTarget);
		}

		::System::Boolean IsMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_ISMOVING_OFFSET))(this);
		}

		::System::Boolean PlayAnimation(::System::Int32 animationID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_PLAYANIMATION_OFFSET))(this, animationID);
		}

		::System::Boolean IsAnimationPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_ISANIMATIONPLAYING_OFFSET))(this);
		}

		::System::Void InitializeProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_INITIALIZEPROPERTIES_OFFSET))(this);
		}

		::System::Void DisposeGenImpl(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_DISPOSEGENIMPL_OFFSET))(this, disposing);
		}

		::System::Void DisposeProperties(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT_DISPOSEPROPERTIES_OFFSET))(this, disposing);
		}

		::System::Boolean __base_IsAnimationPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT___BASE_ISANIMATIONPLAYING_OFFSET))(this);
		}

		::System::Boolean __base_IsMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT___BASE_ISMOVING_OFFSET))(this);
		}

		::System::Boolean __base_MoveToPosition(::UnityEngine::Vector3 P0, ::System::Boolean P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT___BASE_MOVETOPOSITION_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_PlayAnimation(::System::Int32 P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDNPCACTORCONTEXT___BASE_PLAYANIMATION_OFFSET))(this, P0);
		}
	};
}
