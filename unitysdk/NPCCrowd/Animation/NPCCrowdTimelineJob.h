#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdTimelineClipConfig.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdTimelineCommandType.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdTimelineEventConfig.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdTimelineSnapshot.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdTimelineState.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdTimelineZoneConfig.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"

namespace System { class Object; }

#define NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_ADDACTIVEZONE_OFFSET UNITYSDK_OFFSET(0x709800)
#define NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_CALCULATELASTEVENTINDEX_OFFSET UNITYSDK_OFFSET(0x7097C0)
#define NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_CLEARACTIVEZONERANGE_OFFSET UNITYSDK_OFFSET(0x7098F0)
#define NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_EMITEVENTRANGE_OFFSET UNITYSDK_OFFSET(0x709810)
#define NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_EMITEVENT_OFFSET UNITYSDK_OFFSET(0x709820)
#define NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_EMITZONE_OFFSET UNITYSDK_OFFSET(0x709890)
#define NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_ENTERREADYZONES_OFFSET UNITYSDK_OFFSET(0x7097F0)
#define NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7096A0)
#define NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_EXITALLZONES_OFFSET UNITYSDK_OFFSET(0x7097D0)
#define NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_GETACTIVEZONESTART_OFFSET UNITYSDK_OFFSET(0x709900)
#define NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_GETCURRENTFRAME_OFFSET UNITYSDK_OFFSET(0x13641070)
#define NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_ISVALIDCLIPCONFIG_OFFSET UNITYSDK_OFFSET(0x709920)
#define NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_ISVALIDCROWDINDEX_OFFSET UNITYSDK_OFFSET(0x709910)
#define NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_ISVALIDEVENTCONFIG_OFFSET UNITYSDK_OFFSET(0x709930)
#define NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_ISVALIDZONECONFIG_OFFSET UNITYSDK_OFFSET(0x709940)
#define NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_PROCESSACTIVEZONES_OFFSET UNITYSDK_OFFSET(0x7097E0)
#define NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_PROCESSNORMALEVENTS_OFFSET UNITYSDK_OFFSET(0x709750)
#define NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_PROCESSSAMECLIP_OFFSET UNITYSDK_OFFSET(0x709720)
#define NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_PROCESSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x7096B0)
#define NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_SWITCHCLIP_OFFSET UNITYSDK_OFFSET(0x7096E0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdTimelineJob_TypeDefinitionIndex = 54214;

	struct alignas(8) NPCCrowdTimelineJob
	{
		// static const ::System::Int32 FrameRate = 0x3C; // 0x0
		// static const ::System::Int32 EventTriggerModeAll = 0x0; // 0x0
		// static const ::System::Int32 EventTriggerModeTransitionOut = 0x2; // 0x0
		// static const ::System::Int32 EventTriggerModeTransitionIn = 0x3; // 0x0
		::Unity::Collections::NativeArray_1<::System::Boolean> IsUsing; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::System::UInt32> EntityIds; // 0x20
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeList_1<::System::Int32> SnapshotIndices; // 0x30
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::FNPCCrowdTimelineSnapshot> Snapshots; // 0x40
		::System::Byte _padding3[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::FNPCCrowdTimelineState> States; // 0x50
		::System::Byte _padding4[0x8];
		::Unity::Collections::NativeArray_1<::System::Int32> ActiveZoneIndices; // 0x60
		::System::Byte _padding5[0x8];
		::Unity::Collections::NativeList_1<::NPCCrowd::Animation::FNPCCrowdTimelineClipConfig> ClipConfigs; // 0x70
		::System::Byte _padding6[0x8];
		::Unity::Collections::NativeList_1<::NPCCrowd::Animation::FNPCCrowdTimelineEventConfig> EventConfigs; // 0x80
		::System::Byte _padding7[0x8];
		::Unity::Collections::NativeList_1<::NPCCrowd::Animation::FNPCCrowdTimelineZoneConfig> ZoneConfigs; // 0x90
		::System::Byte _padding8[0x8];
		::System::Object* Commands; // 0xA0
		::System::Byte _padding9[0x10];
		::System::Int32 MaxActiveZonesPerSlot; // 0xB8

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_EXECUTE_OFFSET))(this);
		}

		::System::Void ProcessSnapshot(::System::Int32 crowdIndex, ::NPCCrowd::Animation::FNPCCrowdTimelineSnapshot snapshot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::FNPCCrowdTimelineSnapshot))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_PROCESSSNAPSHOT_OFFSET))(this, crowdIndex, snapshot);
		}

		::System::Void SwitchClip(::System::Int32 crowdIndex, ::NPCCrowd::Animation::FNPCCrowdTimelineState& state, ::NPCCrowd::Animation::FNPCCrowdTimelineSnapshot snapshot, ::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::FNPCCrowdTimelineState&, ::NPCCrowd::Animation::FNPCCrowdTimelineSnapshot, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_SWITCHCLIP_OFFSET))(this, crowdIndex, state, snapshot, isInit);
		}

		::System::Void ProcessSameClip(::System::Int32 crowdIndex, ::NPCCrowd::Animation::FNPCCrowdTimelineState& state, ::NPCCrowd::Animation::FNPCCrowdTimelineSnapshot snapshot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::FNPCCrowdTimelineState&, ::NPCCrowd::Animation::FNPCCrowdTimelineSnapshot))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_PROCESSSAMECLIP_OFFSET))(this, crowdIndex, state, snapshot);
		}

		::System::Void ProcessNormalEvents(::System::Int32 crowdIndex, ::System::UInt32 entityId, ::NPCCrowd::Animation::FNPCCrowdTimelineState& state, ::NPCCrowd::Animation::FNPCCrowdTimelineClipConfig clipConfig, ::NPCCrowd::Animation::FNPCCrowdTimelineSnapshot snapshot, ::System::Boolean newLoop)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::NPCCrowd::Animation::FNPCCrowdTimelineState&, ::NPCCrowd::Animation::FNPCCrowdTimelineClipConfig, ::NPCCrowd::Animation::FNPCCrowdTimelineSnapshot, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_PROCESSNORMALEVENTS_OFFSET))(this, crowdIndex, entityId, state, clipConfig, snapshot, newLoop);
		}

		::System::Int32 CalculateLastEventIndex(::System::Int32 clipConfigIndex, ::System::Single normalizedTime, ::System::Single animLength)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_CALCULATELASTEVENTINDEX_OFFSET))(this, clipConfigIndex, normalizedTime, animLength);
		}

		::System::Void ExitAllZones(::System::Int32 crowdIndex, ::System::UInt32 entityId, ::NPCCrowd::Animation::FNPCCrowdTimelineState& state, ::System::Single normalizedTime, ::System::Single animLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::NPCCrowd::Animation::FNPCCrowdTimelineState&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_EXITALLZONES_OFFSET))(this, crowdIndex, entityId, state, normalizedTime, animLength);
		}

		::System::Void ProcessActiveZones(::System::Int32 crowdIndex, ::System::UInt32 entityId, ::NPCCrowd::Animation::FNPCCrowdTimelineState& state, ::System::Single normalizedTime, ::System::Single animLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::NPCCrowd::Animation::FNPCCrowdTimelineState&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_PROCESSACTIVEZONES_OFFSET))(this, crowdIndex, entityId, state, normalizedTime, animLength);
		}

		::System::Void EnterReadyZones(::System::Int32 crowdIndex, ::System::UInt32 entityId, ::NPCCrowd::Animation::FNPCCrowdTimelineState& state, ::System::Single normalizedTime, ::System::Single animLength, ::System::Boolean restartFromBeginning)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::NPCCrowd::Animation::FNPCCrowdTimelineState&, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_ENTERREADYZONES_OFFSET))(this, crowdIndex, entityId, state, normalizedTime, animLength, restartFromBeginning);
		}

		::System::Void AddActiveZone(::System::Int32 crowdIndex, ::NPCCrowd::Animation::FNPCCrowdTimelineState& state, ::System::Int32 zoneConfigIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::FNPCCrowdTimelineState&, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_ADDACTIVEZONE_OFFSET))(this, crowdIndex, state, zoneConfigIndex);
		}

		::System::Void EmitEventRange(::System::Int32 crowdIndex, ::System::UInt32 entityId, ::System::Int32 start, ::System::Int32 count, ::System::Single from, ::System::Single to, ::System::Single stateLength, ::System::Int32 eventTriggerMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_EMITEVENTRANGE_OFFSET))(this, crowdIndex, entityId, start, count, from, to, stateLength, eventTriggerMode);
		}

		::System::Void EmitEvent(::System::Int32 crowdIndex, ::System::UInt32 entityId, ::NPCCrowd::Animation::FNPCCrowdTimelineEventConfig eventConfig, ::System::Single from, ::System::Single to, ::System::Single stateLength, ::System::Int32 eventTriggerMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::NPCCrowd::Animation::FNPCCrowdTimelineEventConfig, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_EMITEVENT_OFFSET))(this, crowdIndex, entityId, eventConfig, from, to, stateLength, eventTriggerMode);
		}

		::System::Void EmitZone(::System::Int32 crowdIndex, ::System::UInt32 entityId, ::NPCCrowd::Animation::FNPCCrowdTimelineZoneConfig zoneConfig, ::System::Single normalizedTime, ::System::Single animLength, ::NPCCrowd::Animation::FNPCCrowdTimelineCommandType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::NPCCrowd::Animation::FNPCCrowdTimelineZoneConfig, ::System::Single, ::System::Single, ::NPCCrowd::Animation::FNPCCrowdTimelineCommandType))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_EMITZONE_OFFSET))(this, crowdIndex, entityId, zoneConfig, normalizedTime, animLength, type);
		}

		::System::Void ClearActiveZoneRange(::System::Int32 crowdIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_CLEARACTIVEZONERANGE_OFFSET))(this, crowdIndex);
		}

		::System::Int32 GetActiveZoneStart(::System::Int32 crowdIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_GETACTIVEZONESTART_OFFSET))(this, crowdIndex);
		}

		::System::Boolean IsValidCrowdIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_ISVALIDCROWDINDEX_OFFSET))(this, index);
		}

		::System::Boolean IsValidClipConfig(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_ISVALIDCLIPCONFIG_OFFSET))(this, index);
		}

		::System::Boolean IsValidEventConfig(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_ISVALIDEVENTCONFIG_OFFSET))(this, index);
		}

		::System::Boolean IsValidZoneConfig(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_ISVALIDZONECONFIG_OFFSET))(this, index);
		}

		static ::System::Single GetCurrentFrame(::System::Single normalizedTime, ::System::Single animLength)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDTIMELINEJOB_GETCURRENTFRAME_OFFSET))(normalizedTime, animLength);
		}
	};
}
