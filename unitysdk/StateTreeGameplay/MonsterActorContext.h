#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeGameplay/ActorContext.h"
#include "unitysdk/StateTreeGameplay/MonsterMovementContextState.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"

#define STATETREEGAMEPLAY_MONSTERACTORCONTEXT_DISPOSEGENIMPL_OFFSET UNITYSDK_OFFSET(0x1374DFF0)
#define STATETREEGAMEPLAY_MONSTERACTORCONTEXT_DISPOSEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1374E000)
#define STATETREEGAMEPLAY_MONSTERACTORCONTEXT_INITIALIZEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1374DFE0)
#define STATETREEGAMEPLAY_MONSTERACTORCONTEXT_ISMOVING_OFFSET UNITYSDK_OFFSET(0x1374DF90)
#define STATETREEGAMEPLAY_MONSTERACTORCONTEXT_MOVETOPOSITION_OFFSET UNITYSDK_OFFSET(0x1374DD70)
#define STATETREEGAMEPLAY_MONSTERACTORCONTEXT_STOPMOVE_OFFSET UNITYSDK_OFFSET(0x1374DE50)
#define STATETREEGAMEPLAY_MONSTERACTORCONTEXT_UPDATETARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1374DED0)
#define STATETREEGAMEPLAY_MONSTERACTORCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1374DFD0)
#define STATETREEGAMEPLAY_MONSTERACTORCONTEXT___BASE_ISMOVING_OFFSET UNITYSDK_OFFSET(0x1374E010)
#define STATETREEGAMEPLAY_MONSTERACTORCONTEXT___BASE_MOVETOPOSITION_OFFSET UNITYSDK_OFFSET(0x1374E0A0)
#define STATETREEGAMEPLAY_MONSTERACTORCONTEXT___BASE_STOPMOVE_OFFSET UNITYSDK_OFFSET(0x1374E160)
#define STATETREEGAMEPLAY_MONSTERACTORCONTEXT___BASE_UPDATETARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1374E1F0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int MonsterActorContext_TypeDefinitionIndex = 65660;

	class MonsterActorContext : public ::StateTreeGameplay::ActorContext
	{
	public:
		::StateTreeGameplay::MonsterMovementContextState Movement; // 0x58

		::System::Void _ctor(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERACTORCONTEXT__CTOR_OFFSET))(this, initializer);
		}

		::System::Boolean MoveToPosition(::UnityEngine::Vector3 position, ::System::Boolean stopAtTarget)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERACTORCONTEXT_MOVETOPOSITION_OFFSET))(this, position, stopAtTarget);
		}

		::System::Void StopMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERACTORCONTEXT_STOPMOVE_OFFSET))(this);
		}

		::System::Void UpdateTargetPosition(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERACTORCONTEXT_UPDATETARGETPOSITION_OFFSET))(this, position);
		}

		::System::Boolean IsMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERACTORCONTEXT_ISMOVING_OFFSET))(this);
		}

		::System::Void InitializeProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERACTORCONTEXT_INITIALIZEPROPERTIES_OFFSET))(this);
		}

		::System::Void DisposeGenImpl(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERACTORCONTEXT_DISPOSEGENIMPL_OFFSET))(this, disposing);
		}

		::System::Void DisposeProperties(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERACTORCONTEXT_DISPOSEPROPERTIES_OFFSET))(this, disposing);
		}

		::System::Boolean __base_IsMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERACTORCONTEXT___BASE_ISMOVING_OFFSET))(this);
		}

		::System::Boolean __base_MoveToPosition(::UnityEngine::Vector3 P0, ::System::Boolean P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERACTORCONTEXT___BASE_MOVETOPOSITION_OFFSET))(this, P0, P1);
		}

		::System::Void __base_StopMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERACTORCONTEXT___BASE_STOPMOVE_OFFSET))(this);
		}

		::System::Void __base_UpdateTargetPosition(::UnityEngine::Vector3 P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERACTORCONTEXT___BASE_UPDATETARGETPOSITION_OFFSET))(this, P0);
		}
	};
}
