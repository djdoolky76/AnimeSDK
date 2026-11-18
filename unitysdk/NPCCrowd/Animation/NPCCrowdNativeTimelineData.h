#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdTimelineClipConfig.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdTimelineCommand.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdTimelineEventConfig.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdTimelineSnapshot.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdTimelineState.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdTimelineZoneConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Collections/NativeQueue_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_ADDCLIPCONFIG_OFFSET UNITYSDK_OFFSET(0xF14CD10)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_ADDEVENTCONFIGS_OFFSET UNITYSDK_OFFSET(0xF14CF00)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_ADDZONECONFIGS_OFFSET UNITYSDK_OFFSET(0xF14D100)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_ADVANCEPENDINGSNAPSHOTVERSION_OFFSET UNITYSDK_OFFSET(0xF14C890)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_ALLOCATEARRAYS_OFFSET UNITYSDK_OFFSET(0xF14B850)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_ALLOCATEPERSISTENTCONTAINERS_OFFSET UNITYSDK_OFFSET(0xF14B9E0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_ALLOCATE_OFFSET UNITYSDK_OFFSET(0xF14B5C0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_BEGINDISPATCH_OFFSET UNITYSDK_OFFSET(0xF14C750)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_CLEARACTIVEZONERANGE_OFFSET UNITYSDK_OFFSET(0xF14C3F0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_CLEARCOMMANDS_OFFSET UNITYSDK_OFFSET(0xF14CB50)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_CLEARPENDINGSNAPSHOTS_OFFSET UNITYSDK_OFFSET(0xF14C920)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_CLEARRUNTIMESTATE_OFFSET UNITYSDK_OFFSET(0xF14CA30)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_CLEARSLOT_OFFSET UNITYSDK_OFFSET(0xF14C2C0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_COPYACTIVEZONES_OFFSET UNITYSDK_OFFSET(0xF14BEB0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_COPYSLOT_OFFSET UNITYSDK_OFFSET(0xF14C060)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF14B640)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_ENSUREACTIVEZONECAPACITY_OFFSET UNITYSDK_OFFSET(0xF14D300)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0xF14B520)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_GET_DISPATCHATTEMPTEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0xF14B580)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_GET_DISPATCHSNAPSHOTCOUNT_OFFSET UNITYSDK_OFFSET(0xF14B560)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_GET_MAXACTIVEZONESPERSLOT_OFFSET UNITYSDK_OFFSET(0xF14B540)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_GET_PREPAREDTHISFRAME_OFFSET UNITYSDK_OFFSET(0xF14B5A0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_ISVALIDARRAYINDEX_OFFSET UNITYSDK_OFFSET(0xF14C260)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_ISVALIDCLIPCONFIGINDEX_OFFSET UNITYSDK_OFFSET(0xF14C6F0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_MARKPREPARED_OFFSET UNITYSDK_OFFSET(0xF14CCC0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_RESETFRAMESTATE_OFFSET UNITYSDK_OFFSET(0xF14CC70)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_RESIZE_OFFSET UNITYSDK_OFFSET(0xF14BBC0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0xF14B530)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_SET_DISPATCHATTEMPTEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0xF14B590)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_SET_DISPATCHSNAPSHOTCOUNT_OFFSET UNITYSDK_OFFSET(0xF14B570)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_SET_MAXACTIVEZONESPERSLOT_OFFSET UNITYSDK_OFFSET(0xF14B550)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_SET_PREPAREDTHISFRAME_OFFSET UNITYSDK_OFFSET(0xF14B5B0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_TRYWRITESNAPSHOT_OFFSET UNITYSDK_OFFSET(0xF14C480)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xF14D4A0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdNativeTimelineData_TypeDefinitionIndex = 62978;

	class NPCCrowdNativeTimelineData : public ::System::Object
	{
	public:
		::Unity::Collections::NativeList_1<::System::Int32> PendingSnapshotIndices; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeQueue_1<::NPCCrowd::Animation::FNPCCrowdTimelineCommand> Commands; // 0x20
		::System::Byte _padding1[0x10];
		::System::Int32 _DispatchSnapshotCount_k__BackingField; // 0x38
		::System::Boolean _DispatchAttemptedThisFrame_k__BackingField; // 0x3C
		::System::Boolean _PreparedThisFrame_k__BackingField; // 0x3D
		::System::Byte _padding2[0x2];
		::System::Int32 _Capacity_k__BackingField; // 0x40
		::System::Byte _padding3[0x4];
		::Unity::Collections::NativeArray_1<::System::Int32> PendingSnapshotVersions; // 0x48
		::System::Byte _padding4[0x8];
		::System::Int32 _MaxActiveZonesPerSlot_k__BackingField; // 0x58
		::System::Int32 _pendingSnapshotVersion; // 0x5C
		::Unity::Collections::NativeList_1<::NPCCrowd::Animation::FNPCCrowdTimelineEventConfig> EventConfigs; // 0x60
		::System::Byte _padding5[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::FNPCCrowdTimelineState> States; // 0x70
		::System::Byte _padding6[0x8];
		::Unity::Collections::NativeList_1<::NPCCrowd::Animation::FNPCCrowdTimelineZoneConfig> ZoneConfigs; // 0x80
		::System::Byte _padding7[0x8];
		::Unity::Collections::NativeList_1<::System::Int32> DispatchSnapshotIndices; // 0x90
		::System::Byte _padding8[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::FNPCCrowdTimelineSnapshot> Snapshots; // 0xA0
		::System::Byte _padding9[0x8];
		::Unity::Collections::NativeArray_1<::System::Int32> ActiveZoneIndices; // 0xB0
		::System::Byte _padding10[0x8];
		::Unity::Collections::NativeList_1<::NPCCrowd::Animation::FNPCCrowdTimelineClipConfig> ClipConfigs; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_GET_CAPACITY_OFFSET))(this);
		}

		::System::Void set_Capacity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_SET_CAPACITY_OFFSET))(this, value);
		}

		::System::Int32 get_MaxActiveZonesPerSlot()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_GET_MAXACTIVEZONESPERSLOT_OFFSET))(this);
		}

		::System::Void set_MaxActiveZonesPerSlot(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_SET_MAXACTIVEZONESPERSLOT_OFFSET))(this, value);
		}

		::System::Int32 get_DispatchSnapshotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_GET_DISPATCHSNAPSHOTCOUNT_OFFSET))(this);
		}

		::System::Void set_DispatchSnapshotCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_SET_DISPATCHSNAPSHOTCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_DispatchAttemptedThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_GET_DISPATCHATTEMPTEDTHISFRAME_OFFSET))(this);
		}

		::System::Void set_DispatchAttemptedThisFrame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_SET_DISPATCHATTEMPTEDTHISFRAME_OFFSET))(this, value);
		}

		::System::Boolean get_PreparedThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_GET_PREPAREDTHISFRAME_OFFSET))(this);
		}

		::System::Void set_PreparedThisFrame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_SET_PREPAREDTHISFRAME_OFFSET))(this, value);
		}

		::System::Void Allocate(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_ALLOCATE_OFFSET))(this, capacity);
		}

		::System::Void Resize(::System::Int32 newCapacity, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_RESIZE_OFFSET))(this, newCapacity, count);
		}

		::System::Void CopySlot(::System::Int32 src, ::System::Int32 dst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_COPYSLOT_OFFSET))(this, src, dst);
		}

		::System::Void ClearSlot(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_CLEARSLOT_OFFSET))(this, index);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Boolean TryWriteSnapshot(::System::Int32 index, ::System::UInt32 entityId, ::System::Int32 clipId, ::System::Int32 clipConfigIndex, ::System::Single normalizedTime, ::System::Single speed, ::System::Single animLength, ::System::UInt32 frameId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_TRYWRITESNAPSHOT_OFFSET))(this, index, entityId, clipId, clipConfigIndex, normalizedTime, speed, animLength, frameId);
		}

		::System::Int32 BeginDispatch()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_BEGINDISPATCH_OFFSET))(this);
		}

		::System::Void ClearPendingSnapshots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_CLEARPENDINGSNAPSHOTS_OFFSET))(this);
		}

		::System::Void ClearRuntimeState(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_CLEARRUNTIMESTATE_OFFSET))(this, count);
		}

		::System::Void ClearCommands()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_CLEARCOMMANDS_OFFSET))(this);
		}

		::System::Void ResetFrameState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_RESETFRAMESTATE_OFFSET))(this);
		}

		::System::Void MarkPrepared()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_MARKPREPARED_OFFSET))(this);
		}

		::System::Int32 AddClipConfig(::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdTimelineEventConfig>* enterEvents, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdTimelineEventConfig>* exitEvents, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdTimelineEventConfig>* normalEvents, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdTimelineZoneConfig>* zones)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdTimelineEventConfig>*, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdTimelineEventConfig>*, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdTimelineEventConfig>*, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdTimelineZoneConfig>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_ADDCLIPCONFIG_OFFSET))(this, enterEvents, exitEvents, normalEvents, zones);
		}

		::System::Boolean IsValidArrayIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_ISVALIDARRAYINDEX_OFFSET))(this, index);
		}

		::System::Boolean IsValidClipConfigIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_ISVALIDCLIPCONFIGINDEX_OFFSET))(this, index);
		}

		::System::Int32 AddEventConfigs(::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdTimelineEventConfig>* configs)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdTimelineEventConfig>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_ADDEVENTCONFIGS_OFFSET))(this, configs);
		}

		::System::Int32 AddZoneConfigs(::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdTimelineZoneConfig>* configs)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdTimelineZoneConfig>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_ADDZONECONFIGS_OFFSET))(this, configs);
		}

		::System::Void AllocateArrays(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_ALLOCATEARRAYS_OFFSET))(this, capacity);
		}

		::System::Void AllocatePersistentContainers(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_ALLOCATEPERSISTENTCONTAINERS_OFFSET))(this, capacity);
		}

		::System::Void EnsureActiveZoneCapacity(::System::Int32 zoneCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_ENSUREACTIVEZONECAPACITY_OFFSET))(this, zoneCount);
		}

		::System::Void ClearActiveZoneRange(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_CLEARACTIVEZONERANGE_OFFSET))(this, index);
		}

		::System::Void CopyActiveZones(::Unity::Collections::NativeArray_1<::System::Int32> srcArray, ::System::Int32 srcStride, ::System::Int32 srcSlot, ::Unity::Collections::NativeArray_1<::System::Int32> dstArray, ::System::Int32 dstStride, ::System::Int32 dstSlot)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Int32>, ::System::Int32, ::System::Int32, ::Unity::Collections::NativeArray_1<::System::Int32>, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_COPYACTIVEZONES_OFFSET))(this, srcArray, srcStride, srcSlot, dstArray, dstStride, dstSlot);
		}

		::System::Void AdvancePendingSnapshotVersion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVETIMELINEDATA_ADVANCEPENDINGSNAPSHOTVERSION_OFFSET))(this);
		}
	};
}
