#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/CrowdSplineSnapshot.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilitySplineFollowFragment.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Ability { class CrowdSplineBakeCacheManager; }
namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_CLEARSTEERINGDIRTY_OFFSET UNITYSDK_OFFSET(0x172C3590)
#define NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_DRAINSTEERINGDIRTY_OFFSET UNITYSDK_OFFSET(0x172C33E0)
#define NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_EXECUTEATINDEX_OFFSET UNITYSDK_OFFSET(0x172C2B50)
#define NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x172C3910)
#define NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_FINDSAMPLEINDEX_OFFSET UNITYSDK_OFFSET(0x172C3180)
#define NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_MARKSTEERINGDIRTY_OFFSET UNITYSDK_OFFSET(0x172C3260)
#define NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_UPDATECACHESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x172C3710)
#define NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x172C3B50)
#define NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x172C3B40)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CrowdSplineFollowProcessor_TypeDefinitionIndex = 83553;

	class CrowdSplineFollowProcessor : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_SteeringDirtyEntities()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(CrowdSplineFollowProcessor_TypeDefinitionIndex)->GetStaticField(0x4DC40);
		}
		static ::System::Object** StaticGet_SteeringDirtyLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CrowdSplineFollowProcessor_TypeDefinitionIndex)->GetStaticField(0x4DC48);
		}
		::NPCCrowd::Ability::CrowdSplineSnapshot _snapshot; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR__CCTOR_OFFSET))();
		}

		static ::System::Void ExecuteAtIndex(::System::Int32 idx, ::System::Single deltaTime, ::System::Single currentTime, ::System::UInt32 entityId, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySplineFollowFragment>& runtimeSplineFollow, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment>& runtimeMoveTarget, ::NPCCrowd::Ability::CrowdSplineSnapshot& snapshot)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single, ::System::Single, ::System::UInt32, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySplineFollowFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment>&, ::NPCCrowd::Ability::CrowdSplineSnapshot&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_EXECUTEATINDEX_OFFSET))(idx, deltaTime, currentTime, entityId, runtimeSplineFollow, runtimeMoveTarget, snapshot);
		}

		static ::System::Void MarkSteeringDirty(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_MARKSTEERINGDIRTY_OFFSET))(entityId);
		}

		static ::System::Void DrainSteeringDirty(::System::Collections::Generic::List_1<::System::UInt32>* output)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_DRAINSTEERINGDIRTY_OFFSET))(output);
		}

		static ::System::Void ClearSteeringDirty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_CLEARSTEERINGDIRTY_OFFSET))();
		}

		static ::System::Int32 FindSampleIndex(::System::Int32 index, ::System::Single progressedDistance, ::System::Int32 offset, ::System::Int32 count, ::Unity::Collections::NativeArray_1<::System::Single> distances)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Single, ::System::Int32, ::System::Int32, ::Unity::Collections::NativeArray_1<::System::Single>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_FINDSAMPLEINDEX_OFFSET))(index, progressedDistance, offset, count, distances);
		}

		::System::Void UpdateCacheSnapshot(::NPCCrowd::Ability::CrowdSplineBakeCacheManager* cacheManager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::CrowdSplineBakeCacheManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_UPDATECACHESNAPSHOT_OFFSET))(this, cacheManager);
		}

		::Unity::Jobs::JobHandle Execute(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_EXECUTE_OFFSET))(this, runtime, deltaTime, dependsOn);
		}
	};
}
