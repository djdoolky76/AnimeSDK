#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCPhysicsManager_PhysicsRegistryOperation.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Ability { class NPCAbility; }

#define NPCCROWD_NPCPHYSICSMANAGER_PENDINGPHYSICSREGISTRYCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x36F120)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPhysicsManager_PendingPhysicsRegistryCommand_TypeDefinitionIndex = 67733;

	struct alignas(8) NPCPhysicsManager_PendingPhysicsRegistryCommand
	{
		::NPCCrowd::Ability::NPCAbility* Ability; // 0x10
		::NPCCrowd::NPCPhysicsManager_PhysicsRegistryOperation Operation; // 0x18

		::System::Void _ctor(::NPCCrowd::Ability::NPCAbility* ability, ::NPCCrowd::NPCPhysicsManager_PhysicsRegistryOperation operation)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*, ::NPCCrowd::NPCPhysicsManager_PhysicsRegistryOperation))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_PENDINGPHYSICSREGISTRYCOMMAND__CTOR_OFFSET))(this, ability, operation);
		}
	};
}
