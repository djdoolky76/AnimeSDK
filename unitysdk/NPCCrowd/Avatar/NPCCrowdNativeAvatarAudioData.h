#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarAudioCommand.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarAudioDecisionFragment.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarAudioInputFragment.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeQueue_1.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarDirtyEntity.h"
#include "unitysdk/NPCCrowd/Avatar/NPCCrowdNativeAvatarAudioData_AudioTriggerDistanceState.h"
#include "unitysdk/NPCCrowd/Lod/ConditionData.h"
#include "unitysdk/UnityEngine/Vector3.h"

class COCJHGGDBCA;
namespace NPCCrowd::Ability { class NPCAbility; }
namespace NPCCrowd::Avatar { class NPCCrowdAvatarDirtyEntityList; }
namespace NPCCrowd::Lod { class INPCCrowdDistanceCheckInterface; }
namespace NPCCrowd::Lod { class NPCCrowdDistanceManager_NpcCrowdDistanceCheck; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_ALLOCATEARRAYS_OFFSET UNITYSDK_OFFSET(0xED752E0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_ALLOCATE_OFFSET UNITYSDK_OFFSET(0xED750A0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_CLEARALLDIRTYENTITYIDS_OFFSET UNITYSDK_OFFSET(0xED75BB0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_CLEARAUDIOTRIGGERDISTANCES_OFFSET UNITYSDK_OFFSET(0xED76DE0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_CLEARAUDIOTRIGGERINRANGEFLAGS_OFFSET UNITYSDK_OFFSET(0xED76E90)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_CLEARCOMMANDS_OFFSET UNITYSDK_OFFSET(0xED75CA0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_CLEARINPUTDIRTYSPEEDCACHE_OFFSET UNITYSDK_OFFSET(0xED76210)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_CLEARSLOT_OFFSET UNITYSDK_OFFSET(0xED759D0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_COLLECTDIRTYENTITIES_OFFSET UNITYSDK_OFFSET(0xED760B0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_COPYSLOT_OFFSET UNITYSDK_OFFSET(0xED75770)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xED75110)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_GETAUDIOTRIGGERDISTANCESTATE_OFFSET UNITYSDK_OFFSET(0xED774E0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0xED74FF0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_GET_DISPATCHATTEMPTEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0xED75010)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_GET_PREPAREDTHISFRAME_OFFSET UNITYSDK_OFFSET(0xED75030)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_ISVALIDARRAYINDEX_OFFSET UNITYSDK_OFFSET(0xED75A90)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_LOGDISTANCEREGISTERFAILURE_OFFSET UNITYSDK_OFFSET(0xED77390)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_MARKALLCONFIGDIRTY_OFFSET UNITYSDK_OFFSET(0xED75F50)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_MARKALLCONFIGENTITYDIRTY_OFFSET UNITYSDK_OFFSET(0xED75FF0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_MARKCONFIGDIRTY_OFFSET UNITYSDK_OFFSET(0xED75E10)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_MARKCONFIGENTITYDIRTY_OFFSET UNITYSDK_OFFSET(0xED75EA0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_MARKINPUTENTITYDIRTY_OFFSET UNITYSDK_OFFSET(0xED76160)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_MARKPREPARED_OFFSET UNITYSDK_OFFSET(0xED75DC0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_MOVEAUDIOTRIGGERDISTANCE_OFFSET UNITYSDK_OFFSET(0xED75920)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_ONAUDIOTRIGGERDISTANCECHANGED_OFFSET UNITYSDK_OFFSET(0xED77560)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_RELEASEALLAUDIOTRIGGERDISTANCES_OFFSET UNITYSDK_OFFSET(0xED75AF0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_RELEASEAUDIOTRIGGERDISTANCE_OFFSET UNITYSDK_OFFSET(0xED75830)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_RESETAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0xED76B20)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_RESETFRAMESTATE_OFFSET UNITYSDK_OFFSET(0xED75C50)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_RESIZE_OFFSET UNITYSDK_OFFSET(0xED754B0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_SETAUDIOLASTTRIGGERTIME_OFFSET UNITYSDK_OFFSET(0xED76C70)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_SETAUDIORTPCSTATE_OFFSET UNITYSDK_OFFSET(0xED76BC0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_SETAUDIOTRIGGERINRANGE_OFFSET UNITYSDK_OFFSET(0xED76D20)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_SETINACTIVE_OFFSET UNITYSDK_OFFSET(0xED76A60)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0xED75000)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_SET_DISPATCHATTEMPTEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0xED75020)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_SET_PREPAREDTHISFRAME_OFFSET UNITYSDK_OFFSET(0xED75040)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_SHOULDMARKINPUTDIRTYBYSPEED_OFFSET UNITYSDK_OFFSET(0xED763D0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_SYNCAUDIOTRIGGERDISTANCE_OFFSET UNITYSDK_OFFSET(0xED76970)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_TRYGETABILITYENTITYID_OFFSET UNITYSDK_OFFSET(0xED777E0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_TRYREGISTERORUPDATEAUDIOTRIGGERDISTANCE_OFFSET UNITYSDK_OFFSET(0xED76F10)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_WRITEINPUT_OFFSET UNITYSDK_OFFSET(0xED76790)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xED77890)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA__CTOR_OFFSET UNITYSDK_OFFSET(0xED75050)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdNativeAvatarAudioData_TypeDefinitionIndex = 79156;

	class NPCCrowdNativeAvatarAudioData : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_inputDirtySpeedLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdNativeAvatarAudioData_TypeDefinitionIndex)->GetStaticField(0x4EE60);
		}
		static ::NPCCrowd::Avatar::NPCCrowdAvatarDirtyEntityList** StaticGet_s_dirtyEntities()
		{
			return (::NPCCrowd::Avatar::NPCCrowdAvatarDirtyEntityList**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdNativeAvatarAudioData_TypeDefinitionIndex)->GetStaticField(0x4EE68);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>** StaticGet_s_lastInputDirtySpeeds()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdNativeAvatarAudioData_TypeDefinitionIndex)->GetStaticField(0x4EE70);
		}
		static ::System::Int32* StaticGet_s_lastDistanceRegisterFailureFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdNativeAvatarAudioData_TypeDefinitionIndex)->GetStaticField(0x12B10);
		}
		static ::System::Single* StaticGet_InputDirtySpeedThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdNativeAvatarAudioData_TypeDefinitionIndex)->GetStaticField(0x12B14);
		}
		::NPCCrowd::Lod::NPCCrowdDistanceManager_NpcCrowdDistanceCheck* _audioTriggerDistanceCallback; // 0x10
		::Il2CppArray<::System::Object*>* _audioTriggerDistanceStates; // 0x18
		::Unity::Collections::NativeQueue_1<::NPCCrowd::Avatar::FNPCCrowdAvatarAudioCommand> Commands; // 0x20
		::System::Byte _padding0[0x10];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Avatar::FNPCCrowdAvatarAudioDecisionFragment> DecisionFragments; // 0x38
		::System::Byte _padding1[0x8];
		::System::Boolean _DispatchAttemptedThisFrame_k__BackingField; // 0x48
		::System::Boolean _PreparedThisFrame_k__BackingField; // 0x49
		::System::Byte _padding2[0x2];
		::System::Int32 _Capacity_k__BackingField; // 0x4C
		::Unity::Collections::NativeArray_1<::NPCCrowd::Avatar::FNPCCrowdAvatarAudioInputFragment> InputFragments; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA__CCTOR_OFFSET))();
		}

		::System::Int32 get_Capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_GET_CAPACITY_OFFSET))(this);
		}

		::System::Void set_Capacity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_SET_CAPACITY_OFFSET))(this, value);
		}

		::System::Boolean get_DispatchAttemptedThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_GET_DISPATCHATTEMPTEDTHISFRAME_OFFSET))(this);
		}

		::System::Void set_DispatchAttemptedThisFrame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_SET_DISPATCHATTEMPTEDTHISFRAME_OFFSET))(this, value);
		}

		::System::Boolean get_PreparedThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_GET_PREPAREDTHISFRAME_OFFSET))(this);
		}

		::System::Void set_PreparedThisFrame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_SET_PREPAREDTHISFRAME_OFFSET))(this, value);
		}

		::System::Void Allocate(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_ALLOCATE_OFFSET))(this, capacity);
		}

		::System::Void Resize(::System::Int32 newCapacity, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_RESIZE_OFFSET))(this, newCapacity, count);
		}

		::System::Void CopySlot(::System::Int32 src, ::System::Int32 dst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_COPYSLOT_OFFSET))(this, src, dst);
		}

		::System::Void ClearSlot(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_CLEARSLOT_OFFSET))(this, index);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_DISPOSE_OFFSET))(this);
		}

		::System::Void ClearCommands()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_CLEARCOMMANDS_OFFSET))(this);
		}

		::System::Void ResetFrameState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_RESETFRAMESTATE_OFFSET))(this);
		}

		::System::Void MarkPrepared()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_MARKPREPARED_OFFSET))(this);
		}

		::System::Void MarkConfigDirty(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_MARKCONFIGDIRTY_OFFSET))(this, entityId);
		}

		::System::Void MarkAllConfigDirty(::System::Collections::Generic::List_1<::COCJHGGDBCA*>* npcComponents, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::COCJHGGDBCA*>*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_MARKALLCONFIGDIRTY_OFFSET))(this, npcComponents, count);
		}

		::System::Void CollectDirtyEntities(::System::Collections::Generic::List_1<::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyEntity>* dirtyEntities)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyEntity>*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_COLLECTDIRTYENTITIES_OFFSET))(this, dirtyEntities);
		}

		static ::System::Void MarkConfigEntityDirty(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_MARKCONFIGENTITYDIRTY_OFFSET))(entityId);
		}

		static ::System::Void MarkInputEntityDirty(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_MARKINPUTENTITYDIRTY_OFFSET))(entityId);
		}

		static ::System::Void MarkAllConfigEntityDirty(::System::Collections::Generic::List_1<::COCJHGGDBCA*>* npcComponents, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::COCJHGGDBCA*>*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_MARKALLCONFIGENTITYDIRTY_OFFSET))(npcComponents, count);
		}

		static ::System::Void ClearAllDirtyEntityIds()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_CLEARALLDIRTYENTITYIDS_OFFSET))();
		}

		static ::System::Boolean ShouldMarkInputDirtyBySpeed(::System::UInt32 entityId, ::UnityEngine::Vector3 velocity)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_SHOULDMARKINPUTDIRTYBYSPEED_OFFSET))(entityId, velocity);
		}

		static ::System::Void ClearInputDirtySpeedCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_CLEARINPUTDIRTYSPEEDCACHE_OFFSET))();
		}

		::System::Void WriteInput(::System::Int32 index, ::NPCCrowd::Avatar::FNPCCrowdAvatarAudioInputFragment input, ::NPCCrowd::Ability::NPCAbility* ability, ::System::Boolean refreshDistance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Avatar::FNPCCrowdAvatarAudioInputFragment, ::NPCCrowd::Ability::NPCAbility*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_WRITEINPUT_OFFSET))(this, index, input, ability, refreshDistance);
		}

		::System::Void SetInactive(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_SETINACTIVE_OFFSET))(this, index);
		}

		::System::Void ResetAudioState(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_RESETAUDIOSTATE_OFFSET))(this, index);
		}

		::System::Void SetAudioRtpcState(::System::Int32 index, ::System::Int32 speedPercent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_SETAUDIORTPCSTATE_OFFSET))(this, index, speedPercent);
		}

		::System::Void SetAudioLastTriggerTime(::System::Int32 index, ::System::Single triggerTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_SETAUDIOLASTTRIGGERTIME_OFFSET))(this, index, triggerTime);
		}

		::System::Void SetAudioTriggerInRange(::System::Int32 index, ::System::UInt32 entityId, ::System::Boolean inRange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_SETAUDIOTRIGGERINRANGE_OFFSET))(this, index, entityId, inRange);
		}

		::System::Void ClearAudioTriggerDistances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_CLEARAUDIOTRIGGERDISTANCES_OFFSET))(this);
		}

		::System::Boolean IsValidArrayIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_ISVALIDARRAYINDEX_OFFSET))(this, index);
		}

		::System::Void AllocateArrays(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_ALLOCATEARRAYS_OFFSET))(this, capacity);
		}

		::System::Void SyncAudioTriggerDistance(::System::Int32 index, ::NPCCrowd::Avatar::FNPCCrowdAvatarAudioInputFragment input, ::NPCCrowd::Ability::NPCAbility* ability)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Avatar::FNPCCrowdAvatarAudioInputFragment, ::NPCCrowd::Ability::NPCAbility*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_SYNCAUDIOTRIGGERDISTANCE_OFFSET))(this, index, input, ability);
		}

		::System::Boolean TryRegisterOrUpdateAudioTriggerDistance(::System::Int32 index, ::NPCCrowd::Avatar::FNPCCrowdAvatarAudioInputFragment input, ::NPCCrowd::Ability::NPCAbility* ability)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::Avatar::FNPCCrowdAvatarAudioInputFragment, ::NPCCrowd::Ability::NPCAbility*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_TRYREGISTERORUPDATEAUDIOTRIGGERDISTANCE_OFFSET))(this, index, input, ability);
		}

		::NPCCrowd::Avatar::NPCCrowdNativeAvatarAudioData_AudioTriggerDistanceState GetAudioTriggerDistanceState(::System::Int32 index)
		{
			return ((::NPCCrowd::Avatar::NPCCrowdNativeAvatarAudioData_AudioTriggerDistanceState(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_GETAUDIOTRIGGERDISTANCESTATE_OFFSET))(this, index);
		}

		::System::Void MoveAudioTriggerDistance(::System::Int32 src, ::System::Int32 dst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_MOVEAUDIOTRIGGERDISTANCE_OFFSET))(this, src, dst);
		}

		::System::Void ReleaseAudioTriggerDistance(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_RELEASEAUDIOTRIGGERDISTANCE_OFFSET))(this, index);
		}

		::System::Boolean ReleaseAllAudioTriggerDistances()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_RELEASEALLAUDIOTRIGGERDISTANCES_OFFSET))(this);
		}

		::System::Void ClearAudioTriggerInRangeFlags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_CLEARAUDIOTRIGGERINRANGEFLAGS_OFFSET))(this);
		}

		::System::Void OnAudioTriggerDistanceChanged(::NPCCrowd::Lod::ConditionData condition, ::System::Boolean greater, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p1, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p2)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::ConditionData, ::System::Boolean, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_ONAUDIOTRIGGERDISTANCECHANGED_OFFSET))(this, condition, greater, p1, p2);
		}

		static ::System::Boolean TryGetAbilityEntityId(::NPCCrowd::Ability::NPCAbility* ability, ::System::UInt32& entityId)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::NPCAbility*, ::System::UInt32&))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_TRYGETABILITYENTITYID_OFFSET))(ability, entityId);
		}

		static ::System::Void LogDistanceRegisterFailure(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIODATA_LOGDISTANCEREGISTERFAILURE_OFFSET))(entityId);
		}
	};
}
