#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }

#define NPCCROWD_ABILITY_NPCANIMATIONCOLLECTDIRTYDETECTPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x13788C40)
#define NPCCROWD_ABILITY_NPCANIMATIONCOLLECTDIRTYDETECTPROCESSOR_PREPAREDISPATCH_OFFSET UNITYSDK_OFFSET(0x13788B80)
#define NPCCROWD_ABILITY_NPCANIMATIONCOLLECTDIRTYDETECTPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x13788ED0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAnimationCollectDirtyDetectProcessor_TypeDefinitionIndex = 69357;

	class NPCAnimationCollectDirtyDetectProcessor : public ::System::Object
	{
	public:
		::System::Boolean _dispatchPrepared; // 0x10
		::System::Byte _padding0[0x7];
		::System::Object* _transformWriter; // 0x18
		::System::Byte _padding1[0x10];
		::System::Object* _animationWriter; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCANIMATIONCOLLECTDIRTYDETECTPROCESSOR__CTOR_OFFSET))(this);
		}

		::System::Void PrepareDispatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCANIMATIONCOLLECTDIRTYDETECTPROCESSOR_PREPAREDISPATCH_OFFSET))(this);
		}

		::Unity::Jobs::JobHandle Execute(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCANIMATIONCOLLECTDIRTYDETECTPROCESSOR_EXECUTE_OFFSET))(this, runtime, deltaTime, dependsOn);
		}
	};
}
