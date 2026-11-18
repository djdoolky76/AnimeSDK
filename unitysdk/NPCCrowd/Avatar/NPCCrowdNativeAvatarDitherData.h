#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarDitherCommand.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarDitherDecisionFragment.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarDitherInputFragment.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeQueue_1.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarDirtyEntity.h"

class COCJHGGDBCA;
namespace NPCCrowd::Avatar { class NPCCrowdAvatarDirtyEntityList; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_ALLOCATEARRAYS_OFFSET UNITYSDK_OFFSET(0xE0D28C0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_ALLOCATE_OFFSET UNITYSDK_OFFSET(0xE0D2680)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_CLEARALLDIRTYENTITYIDS_OFFSET UNITYSDK_OFFSET(0xE0D2D60)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_CLEARCOMMANDS_OFFSET UNITYSDK_OFFSET(0xE0D2E50)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_CLEARSLOT_OFFSET UNITYSDK_OFFSET(0xE0D2C50)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_COLLECTDIRTYENTITIES_OFFSET UNITYSDK_OFFSET(0xE0D3260)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_COPYSLOT_OFFSET UNITYSDK_OFFSET(0xE0D2BD0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE0D26F0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0xE0D2620)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_GET_DISPATCHATTEMPTEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0xE0D2640)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_GET_PREPAREDTHISFRAME_OFFSET UNITYSDK_OFFSET(0xE0D2660)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_ISVALIDARRAYINDEX_OFFSET UNITYSDK_OFFSET(0xE0D2D00)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_MARKALLCONFIGDIRTY_OFFSET UNITYSDK_OFFSET(0xE0D3100)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_MARKALLCONFIGENTITYDIRTY_OFFSET UNITYSDK_OFFSET(0xE0D31A0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_MARKCONFIGDIRTY_OFFSET UNITYSDK_OFFSET(0xE0D2FC0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_MARKCONFIGENTITYDIRTY_OFFSET UNITYSDK_OFFSET(0xE0D3050)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_MARKINPUTENTITYDIRTY_OFFSET UNITYSDK_OFFSET(0xE0D3310)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_MARKPREPARED_OFFSET UNITYSDK_OFFSET(0xE0D2F70)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_RESETFRAMESTATE_OFFSET UNITYSDK_OFFSET(0xE0D2E00)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_RESIZE_OFFSET UNITYSDK_OFFSET(0xE0D2A50)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_SETCOLLISIONDITHERSTATE_OFFSET UNITYSDK_OFFSET(0xE0D37C0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_SETINACTIVE_OFFSET UNITYSDK_OFFSET(0xE0D34A0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_SETINPUTINACTIVE_OFFSET UNITYSDK_OFFSET(0xE0D3550)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_SETSTARTFADEOUTSTATE_OFFSET UNITYSDK_OFFSET(0xE0D3720)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0xE0D2630)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_SET_DISPATCHATTEMPTEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0xE0D2650)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_SET_PREPAREDTHISFRAME_OFFSET UNITYSDK_OFFSET(0xE0D2670)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_WRITECONFIG_OFFSET UNITYSDK_OFFSET(0xE0D3610)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_WRITEINPUT_OFFSET UNITYSDK_OFFSET(0xE0D33C0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xE0D3870)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE0D3860)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdNativeAvatarDitherData_TypeDefinitionIndex = 84724;

	class NPCCrowdNativeAvatarDitherData : public ::System::Object
	{
	public:
		static ::NPCCrowd::Avatar::NPCCrowdAvatarDirtyEntityList** StaticGet_s_dirtyEntities()
		{
			return (::NPCCrowd::Avatar::NPCCrowdAvatarDirtyEntityList**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdNativeAvatarDitherData_TypeDefinitionIndex)->GetStaticField(0x50F90);
		}
		::Unity::Collections::NativeArray_1<::NPCCrowd::Avatar::FNPCCrowdAvatarDitherDecisionFragment> DecisionFragments; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeQueue_1<::NPCCrowd::Avatar::FNPCCrowdAvatarDitherCommand> Commands; // 0x20
		::System::Byte _padding1[0x10];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Avatar::FNPCCrowdAvatarDitherInputFragment> InputFragments; // 0x38
		::System::Byte _padding2[0x8];
		::System::Int32 _Capacity_k__BackingField; // 0x48
		::System::Boolean _DispatchAttemptedThisFrame_k__BackingField; // 0x4C
		::System::Boolean _PreparedThisFrame_k__BackingField; // 0x4D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA__CCTOR_OFFSET))();
		}

		::System::Int32 get_Capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_GET_CAPACITY_OFFSET))(this);
		}

		::System::Void set_Capacity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_SET_CAPACITY_OFFSET))(this, value);
		}

		::System::Boolean get_DispatchAttemptedThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_GET_DISPATCHATTEMPTEDTHISFRAME_OFFSET))(this);
		}

		::System::Void set_DispatchAttemptedThisFrame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_SET_DISPATCHATTEMPTEDTHISFRAME_OFFSET))(this, value);
		}

		::System::Boolean get_PreparedThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_GET_PREPAREDTHISFRAME_OFFSET))(this);
		}

		::System::Void set_PreparedThisFrame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_SET_PREPAREDTHISFRAME_OFFSET))(this, value);
		}

		::System::Void Allocate(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_ALLOCATE_OFFSET))(this, capacity);
		}

		::System::Void Resize(::System::Int32 newCapacity, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_RESIZE_OFFSET))(this, newCapacity, count);
		}

		::System::Void CopySlot(::System::Int32 src, ::System::Int32 dst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_COPYSLOT_OFFSET))(this, src, dst);
		}

		::System::Void ClearSlot(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_CLEARSLOT_OFFSET))(this, index);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void ClearCommands()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_CLEARCOMMANDS_OFFSET))(this);
		}

		::System::Void ResetFrameState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_RESETFRAMESTATE_OFFSET))(this);
		}

		::System::Void MarkPrepared()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_MARKPREPARED_OFFSET))(this);
		}

		::System::Void MarkConfigDirty(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_MARKCONFIGDIRTY_OFFSET))(this, entityId);
		}

		::System::Void MarkAllConfigDirty(::System::Collections::Generic::List_1<::COCJHGGDBCA*>* npcComponents, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::COCJHGGDBCA*>*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_MARKALLCONFIGDIRTY_OFFSET))(this, npcComponents, count);
		}

		::System::Void CollectDirtyEntities(::System::Collections::Generic::List_1<::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyEntity>* dirtyEntities)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyEntity>*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_COLLECTDIRTYENTITIES_OFFSET))(this, dirtyEntities);
		}

		static ::System::Void MarkConfigEntityDirty(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_MARKCONFIGENTITYDIRTY_OFFSET))(entityId);
		}

		static ::System::Void MarkInputEntityDirty(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_MARKINPUTENTITYDIRTY_OFFSET))(entityId);
		}

		static ::System::Void MarkAllConfigEntityDirty(::System::Collections::Generic::List_1<::COCJHGGDBCA*>* npcComponents, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::COCJHGGDBCA*>*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_MARKALLCONFIGENTITYDIRTY_OFFSET))(npcComponents, count);
		}

		static ::System::Void ClearAllDirtyEntityIds()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_CLEARALLDIRTYENTITYIDS_OFFSET))();
		}

		::System::Void WriteInput(::System::Int32 index, ::NPCCrowd::Avatar::FNPCCrowdAvatarDitherInputFragment input)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Avatar::FNPCCrowdAvatarDitherInputFragment))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_WRITEINPUT_OFFSET))(this, index, input);
		}

		::System::Void SetInactive(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_SETINACTIVE_OFFSET))(this, index);
		}

		::System::Void SetInputInactive(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_SETINPUTINACTIVE_OFFSET))(this, index);
		}

		::System::Void WriteConfig(::System::Int32 index, ::NPCCrowd::Avatar::FNPCCrowdAvatarDitherInputFragment config)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Avatar::FNPCCrowdAvatarDitherInputFragment))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_WRITECONFIG_OFFSET))(this, index, config);
		}

		::System::Void SetStartFadeOutState(::System::Int32 index, ::System::Boolean startFadeOut)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_SETSTARTFADEOUTSTATE_OFFSET))(this, index, startFadeOut);
		}

		::System::Void SetCollisionDitherState(::System::Int32 index, ::System::Boolean collisionDither)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_SETCOLLISIONDITHERSTATE_OFFSET))(this, index, collisionDither);
		}

		::System::Boolean IsValidArrayIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_ISVALIDARRAYINDEX_OFFSET))(this, index);
		}

		::System::Void AllocateArrays(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERDATA_ALLOCATEARRAYS_OFFSET))(this, capacity);
		}
	};
}
