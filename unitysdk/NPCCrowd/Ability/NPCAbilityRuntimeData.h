#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/Foundation/Container/NativeHashSetElementId.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/NPCCrowd/Ability/AnimationCollectMovementSnapshot.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityGhostLocationFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilitySplineFollowFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityStandingSteeringFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilitySteeringFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAttractorControlFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCCPUAnimatorFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCDitherStateFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCGameplayTagActionRuntimeFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCMontageDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavigationObstacleGridCellLocationFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshData.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshQueryDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCPathMaskTagRuntimeFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/StateTreeCore/StateTreeInstanceData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace NPCCrowd::Ability { class NPCAbility; }
namespace NPCCrowd::Ability { class NPCAbilityParameters; }
namespace NPCCrowd::Ability { class NPCAbilityTransformAdaptor; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_CREATEBUFFER_OFFSET UNITYSDK_OFFSET(0xE105DC0)
#define NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_DISPOSENAVMESHQUERIES_OFFSET UNITYSDK_OFFSET(0xE108A20)
#define NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_ENSURENAVMESHQUERIES_OFFSET UNITYSDK_OFFSET(0xE108BF0)
#define NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_GET_ACCESSORYBRIDGEREVISION_OFFSET UNITYSDK_OFFSET(0xE105B30)
#define NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_GET_ENTITYMAP_OFFSET UNITYSDK_OFFSET(0xE105C50)
#define NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_GET_OBSTACLEGRID_OFFSET UNITYSDK_OFFSET(0xE105B50)
#define NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_INITENTITY_OFFSET UNITYSDK_OFFSET(0xE106880)
#define NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_INIT_OFFSET UNITYSDK_OFFSET(0xE105D50)
#define NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_RELEASE_OFFSET UNITYSDK_OFFSET(0xE108E10)
#define NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_SET_ACCESSORYBRIDGEREVISION_OFFSET UNITYSDK_OFFSET(0xE105B40)
#define NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_SWITCHANDREMOVELAST_OFFSET UNITYSDK_OFFSET(0xE107BF0)
#define NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE109620)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityRuntimeData_TypeDefinitionIndex = 56695;

	class NPCAbilityRuntimeData : public ::System::Object
	{
	public:
		static ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>* StaticGet_DummyData()
		{
			return (::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityRuntimeData_TypeDefinitionIndex)->GetStaticField(0xD580);
		}
		static ::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc>* StaticGet_Dummy()
		{
			return (::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc>*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityRuntimeData_TypeDefinitionIndex)->GetStaticField(0xD5A0);
		}
		::NPCCrowd::Ability::NPCAbilityParameters* parameters; // 0x10
		::NPCCrowd::Ability::NPCAbilityTransformAdaptor* transformAdaptor; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::Ability::NPCAbility*>* handles; // 0x20
		::System::Collections::Generic::List_1<::NPCCrowd::Ability::FNPCNavmeshData>* navmeshDatas; // 0x28
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCMontageDataFragment> montageData; // 0x30
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCGameplayTagActionRuntimeFragment> gameplayTagActionRuntime; // 0x40
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCPathMaskTagRuntimeFragment> pathMaskTagRuntime; // 0x50
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySteeringFragment> steering; // 0x60
		::System::Byte _padding3[0x8];
		::Unity::Collections::NativeArray_1<::System::Boolean> pathFollowPhysicsEnable; // 0x70
		::System::Byte _padding4[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment> blackBoard; // 0x80
		::System::Byte _padding5[0x8];
		::Unity::Collections::NativeArray_1<::Foundation::Container::NativeHashSetElementId> EntityMapIds; // 0x90
		::System::Byte _padding6[0x8];
		::Unity::Collections::NativeArray_1<::System::UInt32> EntityIds; // 0xA0
		::System::Byte _padding7[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment> ObstacleLocation; // 0xB0
		::System::Byte _padding8[0x8];
		::Unity::Collections::NativeArray_1<::StateTreeCore::StateTreeInstanceData> stateTreeInstances; // 0xC0
		::System::Byte _padding9[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathFollowV2; // 0xD0
		::System::Byte _padding10[0x8];
		::System::UInt32 _AccessoryBridgeRevision_k__BackingField; // 0xE0
		::ENPCAvatarGender gender; // 0xE4
		::Unity::Collections::NativeArray_1<::System::Boolean> bIsUsing; // 0xE8
		::System::Byte _padding11[0x8];
		::Unity::Collections::NativeArray_1<::System::Int32> stateTreeIndices; // 0xF8
		::System::Byte _padding12[0x8];
		::System::Int32 Count; // 0x108
		::ENPCAvatarSize size; // 0x10C
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySplineFollowFragment> splineFollow; // 0x110
		::System::Byte _padding13[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> lastFrameTransform; // 0x120
		::System::Byte _padding14[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::AnimationCollectMovementSnapshot> animationCollectMovementSnapshots; // 0x130
		::System::Byte _padding15[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMovementFragment> movement; // 0x140
		::System::Byte _padding16[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityGhostLocationFragment> ghost; // 0x150
		::System::Byte _padding17[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment> moveTarget; // 0x160
		::System::Byte _padding18[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshQueryDataFragment> navmeshQueryData; // 0x170
		::System::Byte _padding19[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCDitherStateFragment> DitherState; // 0x180
		::System::Byte _padding20[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshFragment> navmesh; // 0x190
		::System::Byte _padding21[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCCPUAnimatorFragment> animatorBufferData; // 0x1A0
		::System::Byte _padding22[0x8];
		::System::Int32 capcity; // 0x1B0
		::System::Byte _padding23[0x4];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCBaseDataFragment> baseData; // 0x1B8
		::System::Byte _padding24[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAttractorControlFragment> attractorControlData; // 0x1C8
		::System::Byte _padding25[0x8];
		::Unity::Collections::NativeArray_1<::System::Int32> PopulationIds; // 0x1D8
		::System::Byte _padding26[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> transform; // 0x1E8
		::System::Byte _padding27[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityStandingSteeringFragment> standingSteering; // 0x1F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AccessoryBridgeRevision()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_GET_ACCESSORYBRIDGEREVISION_OFFSET))(this);
		}

		::System::Void set_AccessoryBridgeRevision(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_SET_ACCESSORYBRIDGEREVISION_OFFSET))(this, value);
		}

		::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc>& get_ObstacleGrid()
		{
			return ((::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc>&(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_GET_OBSTACLEGRID_OFFSET))(this);
		}

		::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>& get_EntityMap()
		{
			return ((::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>&(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_GET_ENTITYMAP_OFFSET))(this);
		}

		::System::Void Init(::NPCCrowd::Ability::NPCAbilityParameters* inParameters, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityParameters*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_INIT_OFFSET))(this, inParameters, size);
		}

		::System::Void CreateBuffer(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_CREATEBUFFER_OFFSET))(this, size);
		}

		::NPCCrowd::Ability::NPCAbility* InitEntity(::System::UInt32 entityId, ::System::Int32 tagID, ::System::Int32 populationId, ::UnityEngine::Transform* goTransform)
		{
			return ((::NPCCrowd::Ability::NPCAbility*(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_INITENTITY_OFFSET))(this, entityId, tagID, populationId, goTransform);
		}

		::System::Void SwitchAndRemoveLast(::NPCCrowd::Ability::NPCAbility* ability)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_SWITCHANDREMOVELAST_OFFSET))(this, ability);
		}

		::System::Void DisposeNavMeshQueries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_DISPOSENAVMESHQUERIES_OFFSET))(this);
		}

		::System::Void EnsureNavMeshQueries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_ENSURENAVMESHQUERIES_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYRUNTIMEDATA_RELEASE_OFFSET))(this);
		}
	};
}
