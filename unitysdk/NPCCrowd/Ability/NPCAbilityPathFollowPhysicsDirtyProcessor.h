#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilitySplineFollowFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityPathFollowPhysicsDirtyProcessor_PathFollowPhysicsDirty.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPHYSICSDIRTYPROCESSOR_CLEARPHYSICSDIRTY_OFFSET UNITYSDK_OFFSET(0xE1BDF40)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPHYSICSDIRTYPROCESSOR_DETECTANDMARKPHYSICSDIRTY_OFFSET UNITYSDK_OFFSET(0xE1BD9F0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPHYSICSDIRTYPROCESSOR_DRAINPHYSICSDIRTY_OFFSET UNITYSDK_OFFSET(0xE1BDD90)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPHYSICSDIRTYPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE1BE0C0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPHYSICSDIRTYPROCESSOR_MARKPHYSICSDIRTY_OFFSET UNITYSDK_OFFSET(0xE1BDC20)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPHYSICSDIRTYPROCESSOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xE1BE350)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPHYSICSDIRTYPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE1BE340)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityPathFollowPhysicsDirtyProcessor_TypeDefinitionIndex = 85606;

	class NPCAbilityPathFollowPhysicsDirtyProcessor : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_PhysicsDirtyList()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityPathFollowPhysicsDirtyProcessor_TypeDefinitionIndex)->GetStaticField(0x47590);
		}
		static ::System::Object** StaticGet_PhysicsDirtyLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityPathFollowPhysicsDirtyProcessor_TypeDefinitionIndex)->GetStaticField(0x47598);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPHYSICSDIRTYPROCESSOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPHYSICSDIRTYPROCESSOR__CCTOR_OFFSET))();
		}

		static ::System::Void DetectAndMarkPhysicsDirty(::System::Int32 idx, ::System::Boolean enablePhysicsGroundedOnStair, ::Unity::Collections::NativeArray_1<::System::UInt32> entityIds, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshFragment> runtimeNavmesh, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySplineFollowFragment> runtimeSplineFollow, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> runtimePathFollow, ::Unity::Collections::NativeArray_1<::System::Boolean> runtimePathFollowPhysicsEnable)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::Unity::Collections::NativeArray_1<::System::UInt32>, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshFragment>, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySplineFollowFragment>, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2>, ::Unity::Collections::NativeArray_1<::System::Boolean>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPHYSICSDIRTYPROCESSOR_DETECTANDMARKPHYSICSDIRTY_OFFSET))(idx, enablePhysicsGroundedOnStair, entityIds, runtimeNavmesh, runtimeSplineFollow, runtimePathFollow, runtimePathFollowPhysicsEnable);
		}

		static ::System::Void MarkPhysicsDirty(::NPCCrowd::Ability::NPCAbilityPathFollowPhysicsDirtyProcessor_PathFollowPhysicsDirty dirty)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::NPCAbilityPathFollowPhysicsDirtyProcessor_PathFollowPhysicsDirty))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPHYSICSDIRTYPROCESSOR_MARKPHYSICSDIRTY_OFFSET))(dirty);
		}

		static ::System::Void DrainPhysicsDirty(::System::Collections::Generic::List_1<::System::Object*>* output)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPHYSICSDIRTYPROCESSOR_DRAINPHYSICSDIRTY_OFFSET))(output);
		}

		static ::System::Void ClearPhysicsDirty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPHYSICSDIRTYPROCESSOR_CLEARPHYSICSDIRTY_OFFSET))();
		}

		::Unity::Jobs::JobHandle Execute(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPHYSICSDIRTYPROCESSOR_EXECUTE_OFFSET))(this, runtime, deltaTime, dependsOn);
		}
	};
}
