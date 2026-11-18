#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }

#define NPCCROWD_ABILITY_NPCSTATETREEPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE785250)
#define NPCCROWD_ABILITY_NPCSTATETREEPROCESSOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xE7857E0)
#define NPCCROWD_ABILITY_NPCSTATETREEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE7857D0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCStateTreeProcessor_TypeDefinitionIndex = 60693;

	class NPCStateTreeProcessor : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_EnableParallelJob()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCStateTreeProcessor_TypeDefinitionIndex)->GetStaticField(0xEAA0);
		}
		static ::System::Int32* StaticGet_ParallelJobBatchCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCStateTreeProcessor_TypeDefinitionIndex)->GetStaticField(0xEAA4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEPROCESSOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEPROCESSOR__CCTOR_OFFSET))();
		}

		::Unity::Jobs::JobHandle Execute(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEPROCESSOR_EXECUTE_OFFSET))(this, runtime, deltaTime, dependsOn);
		}
	};
}
