#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"

class COCJHGGDBCA;
namespace NPCCrowd { class INPCCrowdNativeFeatureStore; }
namespace NPCCrowd { class INPCCrowdNativeProcessor; }
namespace NPCCrowd::Animation { class NPCCrowdNativeLookAtIKData; }
namespace NPCCrowd::Animation { class NPCCrowdNativeLookAtIKProcessor; }
namespace NPCCrowd::Animation { class NPCCrowdNativeTimelineData; }
namespace NPCCrowd::Animation { class NPCCrowdNativeTimelineProcessor; }
namespace NPCCrowd::Avatar { class NPCCrowdNativeAvatarAudioData; }
namespace NPCCrowd::Avatar { class NPCCrowdNativeAvatarAudioProcessor; }
namespace NPCCrowd::Avatar { class NPCCrowdNativeAvatarDitherData; }
namespace NPCCrowd::Avatar { class NPCCrowdNativeAvatarDitherProcessor; }
namespace NPCCrowd::Lod { class NPCCrowdNativeLodData; }
namespace NPCCrowd::Lod { class NPCCrowdNativeLodProcessor; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_ALLOCATEBASE_OFFSET UNITYSDK_OFFSET(0x10045B40)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_CLEARBASESLOT_OFFSET UNITYSDK_OFFSET(0x100487D0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_CLEARPENDINGJOBCOMMANDS_OFFSET UNITYSDK_OFFSET(0x10046980)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_CLEARSLOT_OFFSET UNITYSDK_OFFSET(0x100482F0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_CLEARSTATICSTATEONSUBSYSTEMREGISTRATION_OFFSET UNITYSDK_OFFSET(0x10044FB0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_COMPLETEJOBSBEFORESTRUCTURALCHANGE_OFFSET UNITYSDK_OFFSET(0x10046310)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_COMPLETEJOBSFORDATAREAD_OFFSET UNITYSDK_OFFSET(0x10046AB0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_COMPLETEPENDINGJOBSWITHOUTAPPLY_OFFSET UNITYSDK_OFFSET(0x10046360)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_COPYBASESLOT_OFFSET UNITYSDK_OFFSET(0x10047FC0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_COPYFEATURESLOT_OFFSET UNITYSDK_OFFSET(0x10048030)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_DISPATCHJOBS_OFFSET UNITYSDK_OFFSET(0x10046460)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x10047790)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_ENSURECREATED_OFFSET UNITYSDK_OFFSET(0x100454F0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GETENTITYID_OFFSET UNITYSDK_OFFSET(0x100475A0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GETINDEX_OFFSET UNITYSDK_OFFSET(0x10047DA0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_AVATARAUDIODATA_OFFSET UNITYSDK_OFFSET(0x100450B0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_AVATARAUDIOPROCESSOR_OFFSET UNITYSDK_OFFSET(0x100450F0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_AVATARDITHERDATA_OFFSET UNITYSDK_OFFSET(0x10045090)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_AVATARDITHERPROCESSOR_OFFSET UNITYSDK_OFFSET(0x100450D0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x100451B0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_COMPLETEDJOBDISPATCHCOUNT_OFFSET UNITYSDK_OFFSET(0x10045200)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x10045190)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_HASPENDINGJOBS_OFFSET UNITYSDK_OFFSET(0x100451D0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_JOBDISPATCHATTEMPTEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0x100451E0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_JOBSCOMPLETEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0x100451F0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_LODDATA_OFFSET UNITYSDK_OFFSET(0x10045050)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_LODPROCESSOR_OFFSET UNITYSDK_OFFSET(0x10045070)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_LOOKATIKDATA_OFFSET UNITYSDK_OFFSET(0x10045150)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_LOOKATIKPROCESSOR_OFFSET UNITYSDK_OFFSET(0x10045170)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x10045430)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_TIMELINEDATA_OFFSET UNITYSDK_OFFSET(0x10045110)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_TIMELINEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x10045130)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x10045480)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_ISVALIDINDEX_OFFSET UNITYSDK_OFFSET(0x10046F00)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_MATHFMAXONE_OFFSET UNITYSDK_OFFSET(0x10045AF0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10045F70)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x10046B80)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_REGISTERFEATURESTORE_OFFSET UNITYSDK_OFFSET(0x10045DA0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_REGISTERJOBPROCESSOR_OFFSET UNITYSDK_OFFSET(0x10045ED0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x10046F60)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_REMOVE_OFFSET UNITYSDK_OFFSET(0x100479B0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_RESETCROWDINDEX_OFFSET UNITYSDK_OFFSET(0x100475F0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_RESETJOBFRAMESTATE_OFFSET UNITYSDK_OFFSET(0x10046800)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_RESETSLOT_OFFSET UNITYSDK_OFFSET(0x10047660)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_RESIZEBASE_OFFSET UNITYSDK_OFFSET(0x10048530)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SETCROWDINDEX_OFFSET UNITYSDK_OFFSET(0x100481C0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_AVATARAUDIODATA_OFFSET UNITYSDK_OFFSET(0x100450C0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_AVATARAUDIOPROCESSOR_OFFSET UNITYSDK_OFFSET(0x10045100)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_AVATARDITHERDATA_OFFSET UNITYSDK_OFFSET(0x100450A0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_AVATARDITHERPROCESSOR_OFFSET UNITYSDK_OFFSET(0x100450E0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x100451C0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x100451A0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_LODDATA_OFFSET UNITYSDK_OFFSET(0x10045060)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_LODPROCESSOR_OFFSET UNITYSDK_OFFSET(0x10045080)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_LOOKATIKDATA_OFFSET UNITYSDK_OFFSET(0x10045160)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_LOOKATIKPROCESSOR_OFFSET UNITYSDK_OFFSET(0x10045180)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_TIMELINEDATA_OFFSET UNITYSDK_OFFSET(0x10045120)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_TIMELINEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x10045140)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_TRYCOMPLETEPENDINGJOBS_OFFSET UNITYSDK_OFFSET(0x10046A10)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_TRYGETINDEX_OFFSET UNITYSDK_OFFSET(0x1003AD20)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_TRYGETLOOKATTRANSFORMACCESSARRAY_OFFSET UNITYSDK_OFFSET(0x100484C0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_TRYGETNPCTRANSFORM_OFFSET UNITYSDK_OFFSET(0x10047330)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_TRYWRITETIMELINESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x10046D20)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x10046C10)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x10045210)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x10048830)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x100488C0)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x10048950)
#define NPCCROWD_NPCCROWDNATIVEDATAMANAGER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x100489F0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdNativeDataManager_TypeDefinitionIndex = 47054;

	class NPCCrowdNativeDataManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::NPCCrowd::NPCCrowdNativeDataManager** StaticGet__instance()
		{
			return (::NPCCrowd::NPCCrowdNativeDataManager**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdNativeDataManager_TypeDefinitionIndex)->GetStaticField(0x3CC80);
		}
		::NPCCrowd::Animation::NPCCrowdNativeTimelineData* _TimelineData_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::INPCCrowdNativeProcessor*>* _jobProcessors; // 0x20
		::NPCCrowd::Avatar::NPCCrowdNativeAvatarAudioData* _AvatarAudioData_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _entityIndexById; // 0x30
		::System::Collections::Generic::List_1<::NPCCrowd::INPCCrowdNativeFeatureStore*>* _featureStores; // 0x38
		::System::Collections::Generic::List_1<::NPCCrowd::INPCCrowdNativeProcessor*>* _activeJobProcessors; // 0x40
		::NPCCrowd::Animation::NPCCrowdNativeTimelineProcessor* _TimelineProcessor_k__BackingField; // 0x48
		::NPCCrowd::Animation::NPCCrowdNativeLookAtIKProcessor* _LookAtIKProcessor_k__BackingField; // 0x50
		::NPCCrowd::Lod::NPCCrowdNativeLodProcessor* _LodProcessor_k__BackingField; // 0x58
		::NPCCrowd::Avatar::NPCCrowdNativeAvatarDitherProcessor* _AvatarDitherProcessor_k__BackingField; // 0x60
		::System::Collections::Generic::List_1<::COCJHGGDBCA*>* NpcComponents; // 0x68
		::NPCCrowd::Avatar::NPCCrowdNativeAvatarDitherData* _AvatarDitherData_k__BackingField; // 0x70
		::NPCCrowd::Animation::NPCCrowdNativeLookAtIKData* _LookAtIKData_k__BackingField; // 0x78
		::NPCCrowd::Avatar::NPCCrowdNativeAvatarAudioProcessor* _AvatarAudioProcessor_k__BackingField; // 0x80
		::NPCCrowd::Lod::NPCCrowdNativeLodData* _LodData_k__BackingField; // 0x88
		::Unity::Collections::NativeArray_1<::System::UInt32> EntityIds; // 0x90
		::System::Byte _padding0[0x8];
		::System::Int32 _jobDispatchCount; // 0xA0
		::System::Int32 _Count_k__BackingField; // 0xA4
		::System::Boolean _jobDispatchAttemptedThisFrame; // 0xA8
		::System::Boolean _jobScheduled; // 0xA9
		::System::Boolean _jobsCompletedThisFrame; // 0xAA
		::System::Byte _padding1[0x1];
		::System::Int32 _completedJobDispatchCount; // 0xAC
		::UnityEngine::Jobs::TransformAccessArray _lookAtTransformAccessArray; // 0xB0
		::Unity::Jobs::JobHandle _jobHandle; // 0xB8
		::Unity::Collections::NativeArray_1<::System::Boolean> IsUsing; // 0xC8
		::System::Byte _padding2[0x8];
		::System::Int32 _Capacity_k__BackingField; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void ClearStaticStateOnSubsystemRegistration()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_CLEARSTATICSTATEONSUBSYSTEMREGISTRATION_OFFSET))();
		}

		::NPCCrowd::Lod::NPCCrowdNativeLodData* get_LodData()
		{
			return ((::NPCCrowd::Lod::NPCCrowdNativeLodData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_LODDATA_OFFSET))(this);
		}

		::System::Void set_LodData(::NPCCrowd::Lod::NPCCrowdNativeLodData* value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::NPCCrowdNativeLodData*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_LODDATA_OFFSET))(this, value);
		}

		::NPCCrowd::Lod::NPCCrowdNativeLodProcessor* get_LodProcessor()
		{
			return ((::NPCCrowd::Lod::NPCCrowdNativeLodProcessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_LODPROCESSOR_OFFSET))(this);
		}

		::System::Void set_LodProcessor(::NPCCrowd::Lod::NPCCrowdNativeLodProcessor* value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::NPCCrowdNativeLodProcessor*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_LODPROCESSOR_OFFSET))(this, value);
		}

		::NPCCrowd::Avatar::NPCCrowdNativeAvatarDitherData* get_AvatarDitherData()
		{
			return ((::NPCCrowd::Avatar::NPCCrowdNativeAvatarDitherData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_AVATARDITHERDATA_OFFSET))(this);
		}

		::System::Void set_AvatarDitherData(::NPCCrowd::Avatar::NPCCrowdNativeAvatarDitherData* value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Avatar::NPCCrowdNativeAvatarDitherData*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_AVATARDITHERDATA_OFFSET))(this, value);
		}

		::NPCCrowd::Avatar::NPCCrowdNativeAvatarAudioData* get_AvatarAudioData()
		{
			return ((::NPCCrowd::Avatar::NPCCrowdNativeAvatarAudioData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_AVATARAUDIODATA_OFFSET))(this);
		}

		::System::Void set_AvatarAudioData(::NPCCrowd::Avatar::NPCCrowdNativeAvatarAudioData* value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Avatar::NPCCrowdNativeAvatarAudioData*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_AVATARAUDIODATA_OFFSET))(this, value);
		}

		::NPCCrowd::Avatar::NPCCrowdNativeAvatarDitherProcessor* get_AvatarDitherProcessor()
		{
			return ((::NPCCrowd::Avatar::NPCCrowdNativeAvatarDitherProcessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_AVATARDITHERPROCESSOR_OFFSET))(this);
		}

		::System::Void set_AvatarDitherProcessor(::NPCCrowd::Avatar::NPCCrowdNativeAvatarDitherProcessor* value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Avatar::NPCCrowdNativeAvatarDitherProcessor*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_AVATARDITHERPROCESSOR_OFFSET))(this, value);
		}

		::NPCCrowd::Avatar::NPCCrowdNativeAvatarAudioProcessor* get_AvatarAudioProcessor()
		{
			return ((::NPCCrowd::Avatar::NPCCrowdNativeAvatarAudioProcessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_AVATARAUDIOPROCESSOR_OFFSET))(this);
		}

		::System::Void set_AvatarAudioProcessor(::NPCCrowd::Avatar::NPCCrowdNativeAvatarAudioProcessor* value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Avatar::NPCCrowdNativeAvatarAudioProcessor*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_AVATARAUDIOPROCESSOR_OFFSET))(this, value);
		}

		::NPCCrowd::Animation::NPCCrowdNativeTimelineData* get_TimelineData()
		{
			return ((::NPCCrowd::Animation::NPCCrowdNativeTimelineData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_TIMELINEDATA_OFFSET))(this);
		}

		::System::Void set_TimelineData(::NPCCrowd::Animation::NPCCrowdNativeTimelineData* value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdNativeTimelineData*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_TIMELINEDATA_OFFSET))(this, value);
		}

		::NPCCrowd::Animation::NPCCrowdNativeTimelineProcessor* get_TimelineProcessor()
		{
			return ((::NPCCrowd::Animation::NPCCrowdNativeTimelineProcessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_TIMELINEPROCESSOR_OFFSET))(this);
		}

		::System::Void set_TimelineProcessor(::NPCCrowd::Animation::NPCCrowdNativeTimelineProcessor* value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdNativeTimelineProcessor*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_TIMELINEPROCESSOR_OFFSET))(this, value);
		}

		::NPCCrowd::Animation::NPCCrowdNativeLookAtIKData* get_LookAtIKData()
		{
			return ((::NPCCrowd::Animation::NPCCrowdNativeLookAtIKData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_LOOKATIKDATA_OFFSET))(this);
		}

		::System::Void set_LookAtIKData(::NPCCrowd::Animation::NPCCrowdNativeLookAtIKData* value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdNativeLookAtIKData*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_LOOKATIKDATA_OFFSET))(this, value);
		}

		::NPCCrowd::Animation::NPCCrowdNativeLookAtIKProcessor* get_LookAtIKProcessor()
		{
			return ((::NPCCrowd::Animation::NPCCrowdNativeLookAtIKProcessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_LOOKATIKPROCESSOR_OFFSET))(this);
		}

		::System::Void set_LookAtIKProcessor(::NPCCrowd::Animation::NPCCrowdNativeLookAtIKProcessor* value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdNativeLookAtIKProcessor*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_LOOKATIKPROCESSOR_OFFSET))(this, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_COUNT_OFFSET))(this, value);
		}

		::System::Int32 get_Capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_CAPACITY_OFFSET))(this);
		}

		::System::Void set_Capacity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SET_CAPACITY_OFFSET))(this, value);
		}

		::System::Boolean get_HasPendingJobs()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_HASPENDINGJOBS_OFFSET))(this);
		}

		::System::Boolean get_JobDispatchAttemptedThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_JOBDISPATCHATTEMPTEDTHISFRAME_OFFSET))(this);
		}

		::System::Boolean get_JobsCompletedThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_JOBSCOMPLETEDTHISFRAME_OFFSET))(this);
		}

		::System::Int32 get_CompletedJobDispatchCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_COMPLETEDJOBDISPATCHCOUNT_OFFSET))(this);
		}

		static ::NPCCrowd::NPCCrowdNativeDataManager* Get()
		{
			return ((::NPCCrowd::NPCCrowdNativeDataManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_INIT_OFFSET))(this);
		}

		::System::Void EnsureCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_ENSURECREATED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void CompleteJobsBeforeStructuralChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_COMPLETEJOBSBEFORESTRUCTURALCHANGE_OFFSET))(this);
		}

		::System::Boolean DispatchJobs(::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_DISPATCHJOBS_OFFSET))(this, deltaTime);
		}

		::System::Boolean TryCompletePendingJobs(::System::Int32& dispatchCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_TRYCOMPLETEPENDINGJOBS_OFFSET))(this, dispatchCount);
		}

		::System::Void CompletePendingJobsWithoutApply()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_COMPLETEPENDINGJOBSWITHOUTAPPLY_OFFSET))(this);
		}

		::System::Boolean CompleteJobsForDataRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_COMPLETEJOBSFORDATAREAD_OFFSET))(this);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Boolean TryWriteTimelineSnapshot(::System::Int32 crowdIndex, ::System::Int32 clipId, ::System::Int32 clipConfigIndex, ::System::Single normalizedTime, ::System::Single speed, ::System::Single animLength, ::System::UInt32 frameId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_TRYWRITETIMELINESNAPSHOT_OFFSET))(this, crowdIndex, clipId, clipConfigIndex, normalizedTime, speed, animLength, frameId);
		}

		::System::Int32 Register(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Int32(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_REGISTER_OFFSET))(this, npcComp);
		}

		::COCJHGGDBCA* Remove(::COCJHGGDBCA* npcComp)
		{
			return ((::COCJHGGDBCA*(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_REMOVE_OFFSET))(this, npcComp);
		}

		::System::Boolean TryGetLookAtTransformAccessArray(::UnityEngine::Jobs::TransformAccessArray& transformAccessArray)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Jobs::TransformAccessArray&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_TRYGETLOOKATTRANSFORMACCESSARRAY_OFFSET))(this, transformAccessArray);
		}

		::System::Boolean TryGetIndex(::System::UInt32 entityId, ::System::Int32& crowdIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_TRYGETINDEX_OFFSET))(this, entityId, crowdIndex);
		}

		::System::Boolean IsValidIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_ISVALIDINDEX_OFFSET))(this, index);
		}

		::System::Void RegisterFeatureStore(::NPCCrowd::INPCCrowdNativeFeatureStore* store)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::INPCCrowdNativeFeatureStore*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_REGISTERFEATURESTORE_OFFSET))(this, store);
		}

		::System::Void RegisterJobProcessor(::NPCCrowd::INPCCrowdNativeProcessor* processor)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::INPCCrowdNativeProcessor*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_REGISTERJOBPROCESSOR_OFFSET))(this, processor);
		}

		::System::Int32 GetIndex(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Int32(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GETINDEX_OFFSET))(this, npcComp);
		}

		::System::Void EnsureCapacity(::System::Int32 requiredCapacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_ENSURECAPACITY_OFFSET))(this, requiredCapacity);
		}

		::System::Void AllocateBase(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_ALLOCATEBASE_OFFSET))(this, capacity);
		}

		::System::Void ResizeBase(::System::Int32 newCapacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_RESIZEBASE_OFFSET))(this, newCapacity);
		}

		::System::Void ResetSlot(::System::Int32 index, ::System::UInt32 entityId, ::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_RESETSLOT_OFFSET))(this, index, entityId, npcComp);
		}

		static ::System::Boolean TryGetNpcTransform(::COCJHGGDBCA* npcComp, ::UnityEngine::Transform*& npcTransform)
		{
			return ((::System::Boolean(*)(::COCJHGGDBCA*, ::UnityEngine::Transform*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_TRYGETNPCTRANSFORM_OFFSET))(npcComp, npcTransform);
		}

		::System::Void ClearSlot(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_CLEARSLOT_OFFSET))(this, index);
		}

		::System::Void ClearBaseSlot(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_CLEARBASESLOT_OFFSET))(this, index);
		}

		::System::Void CopyBaseSlot(::System::Int32 src, ::System::Int32 dst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_COPYBASESLOT_OFFSET))(this, src, dst);
		}

		::System::Void CopyFeatureSlot(::System::Int32 src, ::System::Int32 dst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_COPYFEATURESLOT_OFFSET))(this, src, dst);
		}

		::System::Void ClearPendingJobCommands()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_CLEARPENDINGJOBCOMMANDS_OFFSET))(this);
		}

		::System::Void ResetJobFrameState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_RESETJOBFRAMESTATE_OFFSET))(this);
		}

		static ::System::UInt32 GetEntityId(::COCJHGGDBCA* npcComp)
		{
			return ((::System::UInt32(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_GETENTITYID_OFFSET))(npcComp);
		}

		static ::System::Void SetCrowdIndex(::COCJHGGDBCA* npcComp, ::System::Int32 crowdIndex)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_SETCROWDINDEX_OFFSET))(npcComp, crowdIndex);
		}

		static ::System::Void ResetCrowdIndex(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_RESETCROWDINDEX_OFFSET))(npcComp);
		}

		static ::System::Int32 MathfMaxOne(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER_MATHFMAXONE_OFFSET))(value);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PreUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER___BASE_PREUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDNATIVEDATAMANAGER___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
