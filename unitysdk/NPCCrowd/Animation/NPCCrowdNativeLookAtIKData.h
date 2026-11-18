#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdLookAtIKAppliedState.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdLookAtIKCommand.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdLookAtIKDecisionFragment.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdLookAtIKGlobalConfig.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdLookAtIKInputFragment.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2.h"
#include "unitysdk/Unity/Collections/NativeQueue_1.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdLookAtIKDirtyEntity.h"

class COCJHGGDBCA;
namespace NPCCrowd::Animation { class NPCCrowdLookAtIKDirtyRegistry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_ALLOCATEARRAYS_OFFSET UNITYSDK_OFFSET(0x14F2C6A0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x137AAF30)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_CLEARCOMMANDS_OFFSET UNITYSDK_OFFSET(0x137AB6B0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_CLEARINPUTFORCEAPPLY_OFFSET UNITYSDK_OFFSET(0x137ABCD0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_CLEARNATIVESTATE_OFFSET UNITYSDK_OFFSET(0x137AB7E0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_CLEARSLOT_OFFSET UNITYSDK_OFFSET(0x137AB4E0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_COLLECTDIRTY_OFFSET UNITYSDK_OFFSET(0x137AC120)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_COPYSLOT_OFFSET UNITYSDK_OFFSET(0x137AB420)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x137AAFA0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x137AAEF0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_GET_PREPAREDFRAME_OFFSET UNITYSDK_OFFSET(0x137AAF10)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_ISPREPAREDFORFRAME_OFFSET UNITYSDK_OFFSET(0x137AB610)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_ISVALIDINDEX_OFFSET UNITYSDK_OFFSET(0x14F2C980)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_MARKALLDIRTY_OFFSET UNITYSDK_OFFSET(0x14F2C510)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_MARKCONTROLDIRTY_OFFSET UNITYSDK_OFFSET(0x14F2C460)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_MARKPREPARED_OFFSET UNITYSDK_OFFSET(0x137AB5C0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_MARKSTATICCONFIGDIRTY_OFFSET UNITYSDK_OFFSET(0x137AC1D0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_REMOVEENTITYTRACKING_OFFSET UNITYSDK_OFFSET(0x14F2C5F0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_REPLACECONFIGTAGS_OFFSET UNITYSDK_OFFSET(0x137ABED0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_RESETAPPLIEDSTATE_OFFSET UNITYSDK_OFFSET(0x137ABE30)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_RESETFRAMESTATE_OFFSET UNITYSDK_OFFSET(0x137AB660)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_RESIZE_OFFSET UNITYSDK_OFFSET(0x137AB1D0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_SETAPPLIEDSTATE_OFFSET UNITYSDK_OFFSET(0x137ABD80)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_SETINACTIVE_OFFSET UNITYSDK_OFFSET(0x137ABC00)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x137AAF00)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_SET_PREPAREDFRAME_OFFSET UNITYSDK_OFFSET(0x137AAF20)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_WRITEINPUT_OFFSET UNITYSDK_OFFSET(0x137ABB10)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F2CA00)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14F2C9E0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdNativeLookAtIKData_TypeDefinitionIndex = 50678;

	class NPCCrowdNativeLookAtIKData : public ::System::Object
	{
	public:
		static ::NPCCrowd::Animation::NPCCrowdLookAtIKDirtyRegistry** StaticGet_s_dirtyRegistry()
		{
			return (::NPCCrowd::Animation::NPCCrowdLookAtIKDirtyRegistry**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdNativeLookAtIKData_TypeDefinitionIndex)->GetStaticField(0x490C0);
		}
		::Unity::Collections::NativeHashMap_2<::System::Int32, ::System::Byte> ConfigTags; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::FNPCCrowdLookAtIKDecisionFragment> DecisionFragments; // 0x20
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::FNPCCrowdLookAtIKAppliedState> AppliedStates; // 0x30
		::System::Byte _padding2[0x8];
		::System::Int32 _Capacity_k__BackingField; // 0x40
		::System::Int32 _configTagCapacity; // 0x44
		::NPCCrowd::Animation::FNPCCrowdLookAtIKGlobalConfig GlobalConfig; // 0x48
		::System::Int32 _PreparedFrame_k__BackingField; // 0x80
		::System::Byte _padding3[0x4];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::FNPCCrowdLookAtIKInputFragment> InputFragments; // 0x88
		::System::Byte _padding4[0x8];
		::Unity::Collections::NativeQueue_1<::NPCCrowd::Animation::FNPCCrowdLookAtIKCommand> Commands; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA__CCTOR_OFFSET))();
		}

		::System::Int32 get_Capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_GET_CAPACITY_OFFSET))(this);
		}

		::System::Void set_Capacity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_SET_CAPACITY_OFFSET))(this, value);
		}

		::System::Int32 get_PreparedFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_GET_PREPAREDFRAME_OFFSET))(this);
		}

		::System::Void set_PreparedFrame(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_SET_PREPAREDFRAME_OFFSET))(this, value);
		}

		::System::Void Allocate(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_ALLOCATE_OFFSET))(this, capacity);
		}

		::System::Void Resize(::System::Int32 newCapacity, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_RESIZE_OFFSET))(this, newCapacity, count);
		}

		::System::Void CopySlot(::System::Int32 src, ::System::Int32 dst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_COPYSLOT_OFFSET))(this, src, dst);
		}

		::System::Void ClearSlot(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_CLEARSLOT_OFFSET))(this, index);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void MarkPrepared(::System::Int32 frame)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_MARKPREPARED_OFFSET))(this, frame);
		}

		::System::Boolean IsPreparedForFrame(::System::Int32 frame)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_ISPREPAREDFORFRAME_OFFSET))(this, frame);
		}

		::System::Void ResetFrameState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_RESETFRAMESTATE_OFFSET))(this);
		}

		::System::Void ClearCommands()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_CLEARCOMMANDS_OFFSET))(this);
		}

		::System::Void ClearNativeState(::System::Int32 count, ::System::Boolean clearAppliedStates)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_CLEARNATIVESTATE_OFFSET))(this, count, clearAppliedStates);
		}

		::System::Void WriteInput(::System::Int32 index, ::NPCCrowd::Animation::FNPCCrowdLookAtIKInputFragment input)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::FNPCCrowdLookAtIKInputFragment))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_WRITEINPUT_OFFSET))(this, index, input);
		}

		::System::Void SetInactive(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_SETINACTIVE_OFFSET))(this, index);
		}

		::System::Void ClearInputForceApply(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_CLEARINPUTFORCEAPPLY_OFFSET))(this, index);
		}

		::System::Void SetAppliedState(::System::Int32 index, ::NPCCrowd::Animation::FNPCCrowdLookAtIKAppliedState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::FNPCCrowdLookAtIKAppliedState))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_SETAPPLIEDSTATE_OFFSET))(this, index, state);
		}

		::System::Void ResetAppliedState(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_RESETAPPLIEDSTATE_OFFSET))(this, index);
		}

		::System::Void ReplaceConfigTags(::System::Collections::Generic::List_1<::System::Int32>* tags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_REPLACECONFIGTAGS_OFFSET))(this, tags);
		}

		::System::Void CollectDirty(::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdLookAtIKDirtyEntity>* output)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdLookAtIKDirtyEntity>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_COLLECTDIRTY_OFFSET))(this, output);
		}

		static ::System::Void MarkStaticConfigDirty(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_MARKSTATICCONFIGDIRTY_OFFSET))(entityId);
		}

		static ::System::Void MarkControlDirty(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_MARKCONTROLDIRTY_OFFSET))(entityId);
		}

		static ::System::Void MarkAllDirty(::System::Collections::Generic::List_1<::COCJHGGDBCA*>* components, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::COCJHGGDBCA*>*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_MARKALLDIRTY_OFFSET))(components, count);
		}

		static ::System::Void RemoveEntityTracking(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_REMOVEENTITYTRACKING_OFFSET))(entityId);
		}

		::System::Void AllocateArrays(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_ALLOCATEARRAYS_OFFSET))(this, capacity);
		}

		::System::Boolean IsValidIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKDATA_ISVALIDINDEX_OFFSET))(this, index);
		}
	};
}
