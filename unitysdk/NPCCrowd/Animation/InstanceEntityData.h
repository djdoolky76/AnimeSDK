#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/LogicArchetypeKey.h"
#include "unitysdk/System/ValueType.h"

class COCJHGGDBCA;

#define NPCCROWD_ANIMATION_INSTANCEENTITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x709660)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int InstanceEntityData_TypeDefinitionIndex = 79244;

	struct alignas(8) InstanceEntityData
	{
		::System::UInt32 EntityId; // 0x10
		::System::Byte _padding0[0x4];
		::COCJHGGDBCA* NpcComponent; // 0x18
		::NPCCrowd::Animation::LogicArchetypeKey LogicArchetypeKey; // 0x20

		::System::Void _ctor(::System::UInt32 entityId, ::COCJHGGDBCA* npcComponent, ::NPCCrowd::Animation::LogicArchetypeKey logicArchetypeKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::COCJHGGDBCA*, ::NPCCrowd::Animation::LogicArchetypeKey))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_INSTANCEENTITYDATA__CTOR_OFFSET))(this, entityId, npcComponent, logicArchetypeKey);
		}
	};
}
