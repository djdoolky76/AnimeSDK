#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }

#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPREEXECUTEPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10693B30)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPREEXECUTEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x10693D20)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityPathFollowPreExecuteProcessor_TypeDefinitionIndex = 41365;

	class NPCAbilityPathFollowPreExecuteProcessor : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPREEXECUTEPROCESSOR__CTOR_OFFSET))(this);
		}

		::Unity::Jobs::JobHandle Execute(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPREEXECUTEPROCESSOR_EXECUTE_OFFSET))(this, runtime, deltaTime, dependsOn);
		}
	};
}
