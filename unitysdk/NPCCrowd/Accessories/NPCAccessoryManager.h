#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Accessories/AccessoryDirtyFlags.h"
#include "unitysdk/NPCCrowd/Accessories/AccessoryFollowSource.h"
#include "unitysdk/NPCCrowd/Accessories/AccessoryFollowStaticData.h"
#include "unitysdk/NPCCrowd/Accessories/CpuAccessoryPoseBinding.h"
#include "unitysdk/NPCCrowd/Accessories/DeviceWheelMotion.h"
#include "unitysdk/NPCCrowd/Accessories/DeviceWheelState.h"
#include "unitysdk/NPCCrowd/Accessories/NPCAccessoryManager_AccessoryRenderState.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Collections/NativeMultiHashMap_2.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/FNpcAvatarGenericParams_AccessoryInfo.h"
#include "unitysdk/NPCCrowd/Accessories/NPCAccessoryManager___c__DisplayClass122_0.h"
#include "unitysdk/NPCCrowd/Lod/NPCLODRendererItem.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

class GIGFDLPMNND;
namespace NPCCrowd { class CrowdTickControlInstance; }
namespace NPCCrowd { class NPCGoPool; }
namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }
namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Accessories { class NPCAccessoryAvatarAssetsSO; }
namespace NPCCrowd::Accessories { class NPCAccessoryLodMeshAssets; }
namespace NPCCrowd::Accessories { class NPCAccessoryManager_DeviceWheelMotionBatch; }
namespace NPCCrowd::Accessories { class NPCAccessoryReferenceComponentInfo; }
namespace NPCCrowd::Animation { class NPCCPUAnimationSlotInfo; }
namespace NPCCrowd::Animation { class NPCCrowdAnimator; }
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace NPCCrowd::Lod { class NPCCrowdLodRuntimeData; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ACCESSORYNEEDCROSSFADE_OFFSET UNITYSDK_OFFSET(0x106A0880)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ACCESSORYNEEDSHOW_OFFSET UNITYSDK_OFFSET(0x106A0940)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ACCESSORYUSESIMPLEASSET_OFFSET UNITYSDK_OFFSET(0x106A0820)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CANLEGACYFOLLOW_OFFSET UNITYSDK_OFFSET(0x1069E6C0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CLEARDIRTYQUEUES_OFFSET UNITYSDK_OFFSET(0x1069A1B0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_COMPLETEACCESSORYJOBS_OFFSET UNITYSDK_OFFSET(0x10699B70)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CONSUMEFOLLOWDIRTY_OFFSET UNITYSDK_OFFSET(0x1069C240)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CONSUMERENDERERANDGPUDIRTY_OFFSET UNITYSDK_OFFSET(0x1069B900)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CONSUMEVISIBILITYDIRTY_OFFSET UNITYSDK_OFFSET(0x1069B150)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CREATEACCESSORYGO_OFFSET UNITYSDK_OFFSET(0x106A2CC0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CREATEACCESSORY_OFFSET UNITYSDK_OFFSET(0x106A2810)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CREATEDEVICEWHEELSTATE_OFFSET UNITYSDK_OFFSET(0x106966D0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CREATEFOLLOWSTATICDATA_OFFSET UNITYSDK_OFFSET(0x10697820)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CREATEINITIALFOLLOWPOSE_OFFSET UNITYSDK_OFFSET(0x10695F10)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CREATELOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x10698E60)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DESTROYACCESSORYGO_OFFSET UNITYSDK_OFFSET(0x106A32C0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DESTROYACCESSORY_OFFSET UNITYSDK_OFFSET(0x106A3060)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DISPOSEACCESSORYOPTIMIZATION_OFFSET UNITYSDK_OFFSET(0x1069A150)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DISPOSEDEVICEWHEELBATCHES_OFFSET UNITYSDK_OFFSET(0x10699ED0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DISPOSEDEVICEWHEELSTORAGE_OFFSET UNITYSDK_OFFSET(0x10698B60)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DISPOSEFOLLOWNATIVEDATA_OFFSET UNITYSDK_OFFSET(0x10699CB0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DRAINDIRTYQUEUE_OFFSET UNITYSDK_OFFSET(0x1069B1B0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x1069A920)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ENSURECPUPOSEBINDINGCAPACITY_OFFSET UNITYSDK_OFFSET(0x10697AD0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ENSUREDEVICEWHEELCAPACITY_OFFSET UNITYSDK_OFFSET(0x10696790)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ENSUREFOLLOWCAPACITY_OFFSET UNITYSDK_OFFSET(0x10694FA0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GETACCESSORYRENDERSTATE_OFFSET UNITYSDK_OFFSET(0x106A0400)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GETORCREATEDEVICEWHEELBATCH_OFFSET UNITYSDK_OFFSET(0x10698700)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GETOWNERLODRUNTIMEDATA_OFFSET UNITYSDK_OFFSET(0x10698C10)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GETRENDERERBYRENDERSTATE_OFFSET UNITYSDK_OFFSET(0x106A1CE0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GET_CPUPOSEBINDINGS_OFFSET UNITYSDK_OFFSET(0x10694EB0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GET_CPUPOSEREADDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x10694F40)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GET_HASCPUPOSEBINDINGS_OFFSET UNITYSDK_OFFSET(0x10694F50)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GET_HASFOLLOWTARGETS_OFFSET UNITYSDK_OFFSET(0x10694F80)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x1069C340)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GET_POSEVALID_OFFSET UNITYSDK_OFFSET(0x10694F00)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GET_RAWSLOTPOSE_OFFSET UNITYSDK_OFFSET(0x10694EC0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_INITFOLLOWPOS_OFFSET UNITYSDK_OFFSET(0x1069EB20)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_INITIALIZEACCESSORYOPTIMIZATION_OFFSET UNITYSDK_OFFSET(0x10699FC0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1069C4C0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1069CA70)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_MARKABILITYRUNTIMEDIRTY_OFFSET UNITYSDK_OFFSET(0x1069AE50)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_MARKACCESSORYDIRTY_OFFSET UNITYSDK_OFFSET(0x1069A750)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_MARKALLACCESSORIESDIRTY_OFFSET UNITYSDK_OFFSET(0x1069A610)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_MARKALLFOLLOWENABLEDIRTY_OFFSET UNITYSDK_OFFSET(0x1069AD00)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_MARKGPUANIMATORMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x1069AD50)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_MARKOWNERFOLLOWENABLEDIRTY_OFFSET UNITYSDK_OFFSET(0x1069AC30)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_MARKVISIBILITYDIRTY_1_OFFSET UNITYSDK_OFFSET(0x1069AA40)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_MARKVISIBILITYDIRTY_OFFSET UNITYSDK_OFFSET(0x1069A9E0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1069D6C0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_POSTFOLLOWTRANSHANDLERDEVICEWHEEL_OFFSET UNITYSDK_OFFSET(0x1069F2F0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_POSTFOLLOWTRANSHANDLER_OFFSET UNITYSDK_OFFSET(0x1069E940)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_POSTSETLOD_OFFSET UNITYSDK_OFFSET(0x106A0E20)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_PRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1069C910)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_PREPAREFOLLOWFRAME_OFFSET UNITYSDK_OFFSET(0x10698F90)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REBINDDEVICEWHEEL_OFFSET UNITYSDK_OFFSET(0x10698090)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REBINDFOLLOWSOURCE_OFFSET UNITYSDK_OFFSET(0x106974F0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REFRESHDITHERTASK_OFFSET UNITYSDK_OFFSET(0x106A24B0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REFRESHFOLLOWENABLED_OFFSET UNITYSDK_OFFSET(0x10697BA0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REFRESHGPUMATERIAL_OFFSET UNITYSDK_OFFSET(0x1069BDC0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REFRESHRENDERERBINDING_OFFSET UNITYSDK_OFFSET(0x1069B970)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REGISTERACCESSORYFOROPTIMIZATION_OFFSET UNITYSDK_OFFSET(0x1069A6D0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_RELEASEACCESSORYASSETS_OFFSET UNITYSDK_OFFSET(0x106A3440)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REMOVEACCESSORYCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x106A3550)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REMOVECOMPACTDEVICEWHEELDATA_OFFSET UNITYSDK_OFFSET(0x10698820)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REMOVECPUPOSEBINDING_OFFSET UNITYSDK_OFFSET(0x10697F80)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REMOVEDEVICEWHEELBINDING_OFFSET UNITYSDK_OFFSET(0x10696CF0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REMOVEFOLLOWSOURCEBINDING_OFFSET UNITYSDK_OFFSET(0x10696BA0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REMOVEFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x10695970)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_RESETDEVICEWHEELSTATE_OFFSET UNITYSDK_OFFSET(0x10696350)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_RESETFOLLOWTARGETSTATE_OFFSET UNITYSDK_OFFSET(0x10695DE0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_RESOLVEFOLLOWSOURCE_1_OFFSET UNITYSDK_OFFSET(0x10698CE0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_RESOLVEFOLLOWSOURCE_OFFSET UNITYSDK_OFFSET(0x10697770)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_SCHEDULEDEVICEWHEELMOTIONCOPY_OFFSET UNITYSDK_OFFSET(0x10699740)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_SCHEDULEFOLLOWAFTERCPU_OFFSET UNITYSDK_OFFSET(0x10699100)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_SETACCESSORYHIDDEN_OFFSET UNITYSDK_OFFSET(0x1069B880)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_SETGPUANIMATIONINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1069BF30)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_SETLODASSET_OFFSET UNITYSDK_OFFSET(0x106A0C90)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_STARTFADE_1_OFFSET UNITYSDK_OFFSET(0x106A1950)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_STARTFADE_OFFSET UNITYSDK_OFFSET(0x106A17F0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_STOPFADE_OFFSET UNITYSDK_OFFSET(0x106A2170)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_SYNCFOLLOWTOPOLOGY_OFFSET UNITYSDK_OFFSET(0x10695420)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_TRYGETDEVICEWHEELINDEX_OFFSET UNITYSDK_OFFSET(0x10696A70)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_TRYGETFOLLOWINDEX_OFFSET UNITYSDK_OFFSET(0x10695D20)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_TRYSETSEQFRAMEKEYLODPLAYBACK_OFFSET UNITYSDK_OFFSET(0x106A1460)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UNREGISTERACCESSORYFROMOPTIMIZATION_OFFSET UNITYSDK_OFFSET(0x1069A8A0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATEACCESSORYATTACH_OFFSET UNITYSDK_OFFSET(0x1069CB70)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATEACCESSORYLEGACYFOLLOWONLY_OFFSET UNITYSDK_OFFSET(0x1069D520)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATEACCESSORYOPTIMIZATIONMODE_OFFSET UNITYSDK_OFFSET(0x1069A510)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATEBINDINGFOLLOWINDEX_OFFSET UNITYSDK_OFFSET(0x106971A0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATEFOLLOWPOS_OFFSET UNITYSDK_OFFSET(0x1069D7F0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATESHOWSTATUSBYANIMIDDIRTY_OFFSET UNITYSDK_OFFSET(0x1069B2D0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATESHOWSTATUSBYANIMID_OFFSET UNITYSDK_OFFSET(0x1069E2B0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1069C810)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x106A4D60)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x106A4950)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__STARTFADE_G__STARTFADEANDRELEASE_140_0_OFFSET UNITYSDK_OFFSET(0x106A20E0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__UPDATEACCESSORYATTACH_G__SETGPUANIMATIONINSTANCEID_122_0_OFFSET UNITYSDK_OFFSET(0x1069E090)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x106A4E40)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x106A4ED0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x106A4F70)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___BASE_PRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0x106A5000)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x106A50A0)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryManager_TypeDefinitionIndex = 52988;

	class NPCAccessoryManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_LODTickScaleList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryManager_TypeDefinitionIndex)->GetStaticField(0x39AB0);
		}
		static ::System::String** StaticGet_NpcAccessorySkinGoName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryManager_TypeDefinitionIndex)->GetStaticField(0x39AB8);
		}
		static ::System::String** StaticGet_NpcAccessoryGoName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryManager_TypeDefinitionIndex)->GetStaticField(0x39AC0);
		}
		// static const ::System::Int32 MaxPoolNum = 0x32; // 0x0
		::System::Collections::Generic::Queue_1<::NPCCrowd::Accessories::NPCAccessory*>* _followEnableDirty; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* _followAccessories; // 0x20
		::NPCCrowd::NPCGoPool* _accSkinnedRootGoPool; // 0x28
		::NPCCrowd::NPCGoPool* _accNoSkinGoPool; // 0x30
		::System::Collections::Generic::Queue_1<::NPCCrowd::Accessories::NPCAccessory*>* _deviceWheelBindingDirty; // 0x38
		::NPCCrowd::CrowdTickControlInstance* LateUpdateControl; // 0x40
		::System::Action_1<::NPCCrowd::Accessories::NPCAccessory*>* _rendererBindingDirtyHandler; // 0x48
		::System::Action_1<::NPCCrowd::Accessories::NPCAccessory*>* _followTopologyDirtyHandler; // 0x50
		::System::Action_1<::NPCCrowd::Accessories::NPCAccessory*>* _followSourceDirtyHandler; // 0x58
		::NPCCrowd::NPCGoPool* _accSkinnedChildGoPool; // 0x60
		::System::Action_1<::NPCCrowd::Accessories::NPCAccessory*>* _followEnableDirtyHandler; // 0x68
		::System::Action_1<::NPCCrowd::Accessories::NPCAccessory*>* _deviceWheelBindingDirtyHandler; // 0x70
		::System::Collections::Generic::Queue_1<::NPCCrowd::Accessories::NPCAccessory*>* _followSourceDirty; // 0x78
		::System::Collections::Generic::Queue_1<::NPCCrowd::Accessories::NPCAccessory*>* _rendererBindingDirty; // 0x80
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Accessories::NPCAccessory*, ::System::Object*>* _followSourceBindingStates; // 0x88
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Accessories::NPCAccessory*, ::System::Object*>* _deviceWheelBindingStates; // 0x90
		::System::Action_1<::NPCCrowd::Accessories::NPCAccessory*>* _gpuMaterialDirtyHandler; // 0x98
		::System::Collections::Generic::Queue_1<::NPCCrowd::Accessories::NPCAccessory*>* _followTopologyDirty; // 0xA0
		::System::Action_1<::NPCCrowd::Accessories::NPCAccessory*>* _visibilityDirtyHandler; // 0xA8
		::System::Collections::Generic::Queue_1<::NPCCrowd::Accessories::NPCAccessory*>* _gpuMaterialDirty; // 0xB0
		::System::Collections::Generic::List_1<::System::Object*>* _deviceWheelMotionBatches; // 0xB8
		::System::Collections::Generic::Queue_1<::NPCCrowd::Accessories::NPCAccessory*>* _visibilityDirty; // 0xC0
		::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* _accessories; // 0xC8
		::Unity::Collections::NativeList_1<::NPCCrowd::Accessories::AccessoryFollowStaticData> _followStaticData; // 0xD0
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeList_1<::System::Byte> _followEnabled; // 0xE0
		::System::Byte _padding1[0x8];
		::UnityEngine::Jobs::TransformAccessArray _followTargets; // 0xF0
		::Unity::Collections::NativeList_1<::NPCCrowd::Accessories::DeviceWheelMotion> _deviceWheelMotions; // 0xF8
		::System::Byte _padding2[0x8];
		::Unity::Jobs::JobHandle _deviceWheelReaderHandle; // 0x108
		::Unity::Collections::NativeList_1<::NPCCrowd::Accessories::DeviceWheelState> _deviceWheelStates; // 0x118
		::System::Byte _padding3[0x8];
		::Unity::Collections::NativeList_1<::NPCCrowd::Ability::FTransformFragment> _followPose; // 0x128
		::System::Byte _padding4[0x8];
		::Unity::Collections::NativeList_1<::System::Byte> _poseValid; // 0x138
		::System::Byte _padding5[0x8];
		::Unity::Collections::NativeMultiHashMap_2<::System::UInt32, ::NPCCrowd::Accessories::CpuAccessoryPoseBinding> _cpuPoseBindings; // 0x148
		::System::Byte _padding6[0x8];
		::System::Boolean _lastDirtyUpdateEnabled; // 0x158
		::System::Boolean _lastFollowJobEnabled; // 0x159
		::System::Byte _padding7[0x6];
		::Unity::Jobs::JobHandle _deviceWheelWriterHandle; // 0x160
		::Unity::Jobs::JobHandle _lastCpuPoseReadHandle; // 0x170
		::Unity::Jobs::JobHandle _lastFollowHandle; // 0x180
		::Unity::Collections::NativeList_1<::System::Int32> _deviceWheelFollowIndices; // 0x190

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__CCTOR_OFFSET))();
		}

		::Unity::Collections::NativeMultiHashMap_2<::System::UInt32, ::NPCCrowd::Accessories::CpuAccessoryPoseBinding> get_CpuPoseBindings()
		{
			return ((::Unity::Collections::NativeMultiHashMap_2<::System::UInt32, ::NPCCrowd::Accessories::CpuAccessoryPoseBinding>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GET_CPUPOSEBINDINGS_OFFSET))(this);
		}

		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> get_RawSlotPose()
		{
			return ((::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GET_RAWSLOTPOSE_OFFSET))(this);
		}

		::Unity::Collections::NativeArray_1<::System::Byte> get_PoseValid()
		{
			return ((::Unity::Collections::NativeArray_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GET_POSEVALID_OFFSET))(this);
		}

		::Unity::Jobs::JobHandle get_CpuPoseReadDependency()
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GET_CPUPOSEREADDEPENDENCY_OFFSET))(this);
		}

		::System::Boolean get_HasCpuPoseBindings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GET_HASCPUPOSEBINDINGS_OFFSET))(this);
		}

		::System::Boolean get_HasFollowTargets()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GET_HASFOLLOWTARGETS_OFFSET))(this);
		}

		::System::Void EnsureFollowCapacity(::System::Int32 requiredCapacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ENSUREFOLLOWCAPACITY_OFFSET))(this, requiredCapacity);
		}

		::System::Void SyncFollowTopology(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_SYNCFOLLOWTOPOLOGY_OFFSET))(this, accessory);
		}

		::System::Void ResetFollowTargetState(::NPCCrowd::Accessories::NPCAccessory* accessory, ::System::Int32 followIndex, ::UnityEngine::Transform* target)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_RESETFOLLOWTARGETSTATE_OFFSET))(this, accessory, followIndex, target);
		}

		static ::NPCCrowd::Accessories::DeviceWheelState CreateDeviceWheelState(::NPCCrowd::Accessories::NPCAccessory* accessory, ::UnityEngine::Transform* target)
		{
			return ((::NPCCrowd::Accessories::DeviceWheelState(*)(::NPCCrowd::Accessories::NPCAccessory*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CREATEDEVICEWHEELSTATE_OFFSET))(accessory, target);
		}

		::System::Void EnsureDeviceWheelCapacity(::System::Int32 requiredCapacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ENSUREDEVICEWHEELCAPACITY_OFFSET))(this, requiredCapacity);
		}

		::System::Void ResetDeviceWheelState(::NPCCrowd::Accessories::NPCAccessory* accessory, ::UnityEngine::Transform* target)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_RESETDEVICEWHEELSTATE_OFFSET))(this, accessory, target);
		}

		::System::Void RemoveFollowTarget(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REMOVEFOLLOWTARGET_OFFSET))(this, accessory);
		}

		::System::Void RebindFollowSource(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REBINDFOLLOWSOURCE_OFFSET))(this, accessory);
		}

		::System::Void EnsureCpuPoseBindingCapacity(::System::Int32 requiredCapacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ENSURECPUPOSEBINDINGCAPACITY_OFFSET))(this, requiredCapacity);
		}

		::System::Void RemoveFollowSourceBinding(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REMOVEFOLLOWSOURCEBINDING_OFFSET))(this, accessory);
		}

		::System::Boolean RemoveCpuPoseBinding(::System::UInt32 ownerEntityId, ::NPCCrowd::Accessories::CpuAccessoryPoseBinding target)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Accessories::CpuAccessoryPoseBinding))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REMOVECPUPOSEBINDING_OFFSET))(this, ownerEntityId, target);
		}

		::System::Void RebindDeviceWheel(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REBINDDEVICEWHEEL_OFFSET))(this, accessory);
		}

		::NPCCrowd::Accessories::NPCAccessoryManager_DeviceWheelMotionBatch* GetOrCreateDeviceWheelBatch(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime)
		{
			return ((::NPCCrowd::Accessories::NPCAccessoryManager_DeviceWheelMotionBatch*(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GETORCREATEDEVICEWHEELBATCH_OFFSET))(this, runtime);
		}

		::System::Void RemoveDeviceWheelBinding(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REMOVEDEVICEWHEELBINDING_OFFSET))(this, accessory);
		}

		::System::Boolean TryGetDeviceWheelIndex(::NPCCrowd::Accessories::NPCAccessory* accessory, ::System::Int32 candidate, ::System::Int32& wheelIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_TRYGETDEVICEWHEELINDEX_OFFSET))(this, accessory, candidate, wheelIndex);
		}

		::System::Void RemoveCompactDeviceWheelData(::System::Int32 wheelIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REMOVECOMPACTDEVICEWHEELDATA_OFFSET))(this, wheelIndex);
		}

		::System::Void UpdateBindingFollowIndex(::NPCCrowd::Accessories::NPCAccessory* accessory, ::System::Int32 oldIndex, ::System::Int32 newIndex)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATEBINDINGFOLLOWINDEX_OFFSET))(this, accessory, oldIndex, newIndex);
		}

		static ::NPCCrowd::Accessories::AccessoryFollowSource ResolveFollowSource(::NPCCrowd::Accessories::NPCAccessory* accessory, ::NPCCrowd::Animation::NPCCPUAnimationSlotInfo* slotInfo)
		{
			return ((::NPCCrowd::Accessories::AccessoryFollowSource(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Animation::NPCCPUAnimationSlotInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_RESOLVEFOLLOWSOURCE_OFFSET))(accessory, slotInfo);
		}

		static ::NPCCrowd::Accessories::AccessoryFollowSource ResolveFollowSource_1(::NPCCrowd::Accessories::NPCAccessory* accessory, ::NPCCrowd::Animation::NPCCPUAnimationSlotInfo* slotInfo, ::NPCCrowd::Lod::ELODLevel lod, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* ownerLodRuntimeData)
		{
			return ((::NPCCrowd::Accessories::AccessoryFollowSource(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Animation::NPCCPUAnimationSlotInfo*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_RESOLVEFOLLOWSOURCE_1_OFFSET))(accessory, slotInfo, lod, ownerLodRuntimeData);
		}

		static ::NPCCrowd::Accessories::AccessoryFollowStaticData CreateFollowStaticData(::NPCCrowd::Accessories::NPCAccessory* accessory, ::NPCCrowd::Animation::NPCCPUAnimationSlotInfo* slotInfo)
		{
			return ((::NPCCrowd::Accessories::AccessoryFollowStaticData(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Animation::NPCCPUAnimationSlotInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CREATEFOLLOWSTATICDATA_OFFSET))(accessory, slotInfo);
		}

		::System::Void RefreshFollowEnabled(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REFRESHFOLLOWENABLED_OFFSET))(this, accessory);
		}

		static ::NPCCrowd::Ability::FTransformFragment CreateLocalTransform(::UnityEngine::Transform* transform)
		{
			return ((::NPCCrowd::Ability::FTransformFragment(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CREATELOCALTRANSFORM_OFFSET))(transform);
		}

		static ::NPCCrowd::Ability::FTransformFragment CreateInitialFollowPose(::NPCCrowd::Accessories::NPCAccessory* accessory, ::UnityEngine::Transform* transform)
		{
			return ((::NPCCrowd::Ability::FTransformFragment(*)(::NPCCrowd::Accessories::NPCAccessory*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CREATEINITIALFOLLOWPOSE_OFFSET))(accessory, transform);
		}

		::System::Boolean TryGetFollowIndex(::NPCCrowd::Accessories::NPCAccessory* accessory, ::System::Int32& followIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_TRYGETFOLLOWINDEX_OFFSET))(this, accessory, followIndex);
		}

		::Unity::Jobs::JobHandle PrepareFollowFrame(::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_PREPAREFOLLOWFRAME_OFFSET))(this, dependsOn);
		}

		::Unity::Jobs::JobHandle ScheduleFollowAfterCpu(::Unity::Jobs::JobHandle cpuPoseHandle)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_SCHEDULEFOLLOWAFTERCPU_OFFSET))(this, cpuPoseHandle);
		}

		::System::Void ScheduleDeviceWheelMotionCopy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_SCHEDULEDEVICEWHEELMOTIONCOPY_OFFSET))(this);
		}

		::System::Void CompleteAccessoryJobs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_COMPLETEACCESSORYJOBS_OFFSET))(this);
		}

		::System::Void DisposeFollowNativeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DISPOSEFOLLOWNATIVEDATA_OFFSET))(this);
		}

		::System::Void DisposeDeviceWheelBatches()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DISPOSEDEVICEWHEELBATCHES_OFFSET))(this);
		}

		::System::Void DisposeDeviceWheelStorage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DISPOSEDEVICEWHEELSTORAGE_OFFSET))(this);
		}

		::System::Void InitializeAccessoryOptimization()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_INITIALIZEACCESSORYOPTIMIZATION_OFFSET))(this);
		}

		::System::Void DisposeAccessoryOptimization()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DISPOSEACCESSORYOPTIMIZATION_OFFSET))(this);
		}

		::System::Void UpdateAccessoryOptimizationMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATEACCESSORYOPTIMIZATIONMODE_OFFSET))(this);
		}

		::System::Void RegisterAccessoryForOptimization(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REGISTERACCESSORYFOROPTIMIZATION_OFFSET))(this, accessory);
		}

		::System::Void UnregisterAccessoryFromOptimization(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UNREGISTERACCESSORYFROMOPTIMIZATION_OFFSET))(this, accessory);
		}

		::System::Void MarkAccessoryDirty(::NPCCrowd::Accessories::NPCAccessory* accessory, ::NPCCrowd::Accessories::AccessoryDirtyFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Accessories::AccessoryDirtyFlags))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_MARKACCESSORYDIRTY_OFFSET))(this, accessory, flags);
		}

		static ::System::Void Enqueue(::NPCCrowd::Accessories::NPCAccessory* accessory, ::NPCCrowd::Accessories::AccessoryDirtyFlags requested, ::NPCCrowd::Accessories::AccessoryDirtyFlags flag, ::System::Collections::Generic::Queue_1<::NPCCrowd::Accessories::NPCAccessory*>* queue)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Accessories::AccessoryDirtyFlags, ::NPCCrowd::Accessories::AccessoryDirtyFlags, ::System::Collections::Generic::Queue_1<::NPCCrowd::Accessories::NPCAccessory*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ENQUEUE_OFFSET))(accessory, requested, flag, queue);
		}

		::System::Void MarkVisibilityDirty(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_MARKVISIBILITYDIRTY_OFFSET))(this, accessory);
		}

		::System::Void MarkVisibilityDirty_1(::System::Collections::Generic::IList_1<::NPCCrowd::Accessories::NPCAccessory*>* accessories)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::NPCCrowd::Accessories::NPCAccessory*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_MARKVISIBILITYDIRTY_1_OFFSET))(this, accessories);
		}

		::System::Void MarkOwnerFollowEnableDirty(::System::UInt32 ownerEntityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_MARKOWNERFOLLOWENABLEDIRTY_OFFSET))(this, ownerEntityId);
		}

		::System::Void MarkAllFollowEnableDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_MARKALLFOLLOWENABLEDIRTY_OFFSET))(this);
		}

		::System::Void MarkGpuAnimatorMaterialDirty(::NPCCrowd::Animation::NPCCrowdAnimator* animator)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_MARKGPUANIMATORMATERIALDIRTY_OFFSET))(this, animator);
		}

		::System::Void MarkAbilityRuntimeDirty(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_MARKABILITYRUNTIMEDIRTY_OFFSET))(this, runtime);
		}

		::System::Void MarkAllAccessoriesDirty(::NPCCrowd::Accessories::AccessoryDirtyFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::AccessoryDirtyFlags))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_MARKALLACCESSORIESDIRTY_OFFSET))(this, flags);
		}

		::System::Void ConsumeVisibilityDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CONSUMEVISIBILITYDIRTY_OFFSET))(this);
		}

		::System::Void UpdateShowStatusByAnimIDDirty(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATESHOWSTATUSBYANIMIDDIRTY_OFFSET))(this, accessory);
		}

		::System::Void ConsumeRendererAndGpuDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CONSUMERENDERERANDGPUDIRTY_OFFSET))(this);
		}

		::System::Void RefreshRendererBinding(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REFRESHRENDERERBINDING_OFFSET))(this, accessory);
		}

		static ::System::Void RefreshGpuMaterial(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REFRESHGPUMATERIAL_OFFSET))(accessory);
		}

		static ::System::Void SetGpuAnimationInstanceId(::UnityEngine::Renderer* renderer, ::System::Int32 instanceId)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_SETGPUANIMATIONINSTANCEID_OFFSET))(renderer, instanceId);
		}

		::System::Void ConsumeFollowDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CONSUMEFOLLOWDIRTY_OFFSET))(this);
		}

		::System::Void DrainDirtyQueue(::System::Collections::Generic::Queue_1<::NPCCrowd::Accessories::NPCAccessory*>* queue, ::NPCCrowd::Accessories::AccessoryDirtyFlags flag, ::System::Action_1<::NPCCrowd::Accessories::NPCAccessory*>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::NPCCrowd::Accessories::NPCAccessory*>*, ::NPCCrowd::Accessories::AccessoryDirtyFlags, ::System::Action_1<::NPCCrowd::Accessories::NPCAccessory*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DRAINDIRTYQUEUE_OFFSET))(this, queue, flag, action);
		}

		::System::Void ClearDirtyQueues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CLEARDIRTYQUEUES_OFFSET))(this);
		}

		static ::NPCCrowd::Accessories::NPCAccessoryManager* Get()
		{
			return ((::NPCCrowd::Accessories::NPCAccessoryManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PreLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_PRELATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ONDESTROY_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid SetAccessoryHidden(::NPCCrowd::Accessories::NPCAccessory* acc, ::System::Boolean bIsHidden)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_SETACCESSORYHIDDEN_OFFSET))(this, acc, bIsHidden);
		}

		::System::Void UpdateAccessoryAttach(::System::Single deltaTime, ::System::Boolean updateFollow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATEACCESSORYATTACH_OFFSET))(this, deltaTime, updateFollow);
		}

		::System::Void UpdateAccessoryLegacyFollowOnly(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATEACCESSORYLEGACYFOLLOWONLY_OFFSET))(this, deltaTime);
		}

		static ::System::Boolean CanLegacyFollow(::NPCCrowd::Accessories::NPCAccessory* acc)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CANLEGACYFOLLOW_OFFSET))(acc);
		}

		::System::Void UpdateFollowPos(::NPCCrowd::Accessories::NPCAccessory* acc, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATEFOLLOWPOS_OFFSET))(this, acc, deltaTime);
		}

		::System::Void InitFollowPos(::NPCCrowd::Accessories::NPCAccessory* acc)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_INITFOLLOWPOS_OFFSET))(this, acc);
		}

		static ::System::Void PostFollowTransHandler(::NPCCrowd::Accessories::NPCAccessory* acc, ::System::Single deltaTime, ::NPCCrowd::Ability::FTransformFragment& localPrs, ::NPCCrowd::Ability::FTransformFragment& worldPrs)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*, ::System::Single, ::NPCCrowd::Ability::FTransformFragment&, ::NPCCrowd::Ability::FTransformFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_POSTFOLLOWTRANSHANDLER_OFFSET))(acc, deltaTime, localPrs, worldPrs);
		}

		static ::System::Void PostFollowTransHandlerDeviceWheel(::NPCCrowd::Accessories::NPCAccessory* acc, ::System::Single deltaTime, ::NPCCrowd::Ability::FTransformFragment& localPrs, ::NPCCrowd::Ability::FTransformFragment& worldPrs)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*, ::System::Single, ::NPCCrowd::Ability::FTransformFragment&, ::NPCCrowd::Ability::FTransformFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_POSTFOLLOWTRANSHANDLERDEVICEWHEEL_OFFSET))(acc, deltaTime, localPrs, worldPrs);
		}

		::System::Void UpdateShowStatusByAnimID(::NPCCrowd::Accessories::NPCAccessory* acc)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATESHOWSTATUSBYANIMID_OFFSET))(this, acc);
		}

		static ::NPCCrowd::Accessories::NPCAccessoryManager_AccessoryRenderState GetAccessoryRenderState(::NPCCrowd::Accessories::NPCAccessory* acc, ::NPCCrowd::Lod::ELODLevel lod, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* ownerLodRuntimeData)
		{
			return ((::NPCCrowd::Accessories::NPCAccessoryManager_AccessoryRenderState(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GETACCESSORYRENDERSTATE_OFFSET))(acc, lod, ownerLodRuntimeData);
		}

		static ::System::Boolean AccessoryNeedCrossFade(::NPCCrowd::Accessories::NPCAccessory* acc, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* ownerLodRuntimeData)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ACCESSORYNEEDCROSSFADE_OFFSET))(acc, oldLod, lod, ownerLodRuntimeData);
		}

		static ::System::Boolean AccessoryUseSimpleAsset(::NPCCrowd::Accessories::NPCAccessory* acc)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ACCESSORYUSESIMPLEASSET_OFFSET))(acc);
		}

		static ::System::Boolean AccessoryNeedShow(::NPCCrowd::Accessories::NPCAccessory* acc, ::NPCCrowd::Lod::ELODLevel lod, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* ownerLodRuntimeData)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ACCESSORYNEEDSHOW_OFFSET))(acc, lod, ownerLodRuntimeData);
		}

		static ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* GetOwnerLodRuntimeData(::NPCCrowd::Accessories::NPCAccessory* acc)
		{
			return ((::NPCCrowd::Lod::NPCCrowdLodRuntimeData*(*)(::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GETOWNERLODRUNTIMEDATA_OFFSET))(acc);
		}

		static ::System::Void SetLODAsset(::NPCCrowd::Accessories::NPCAccessory* acc, ::NPCCrowd::Lod::ELODLevel newLod, ::System::Boolean forceSet, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* ownerLodRuntimeData, ::NPCCrowd::Accessories::NPCAccessoryManager_AccessoryRenderState reserveState, ::NPCCrowd::Lod::ELODLevel reserveLod, ::System::Boolean deactivateSimpleGoImmediately)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Lod::ELODLevel, ::System::Boolean, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*, ::NPCCrowd::Accessories::NPCAccessoryManager_AccessoryRenderState, ::NPCCrowd::Lod::ELODLevel, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_SETLODASSET_OFFSET))(acc, newLod, forceSet, ownerLodRuntimeData, reserveState, reserveLod, deactivateSimpleGoImmediately);
		}

		static ::System::Void PostSetLOD(::NPCCrowd::Accessories::NPCAccessory* acc, ::NPCCrowd::Lod::ELODLevel newLod, ::NPCCrowd::Lod::ELODLevel oldLod, ::System::Boolean ownerAvatarUseGpuLod, ::System::Boolean forceSet, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* ownerLodRuntimeData)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Boolean, ::System::Boolean, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_POSTSETLOD_OFFSET))(acc, newLod, oldLod, ownerAvatarUseGpuLod, forceSet, ownerLodRuntimeData);
		}

		static ::System::Void TrySetSeqFrameKeyLodPlayback(::NPCCrowd::Accessories::NPCAccessory* acc, ::NPCCrowd::Lod::ELODLevel effectiveAccessoryLod, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* ownerLodRuntimeData)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_TRYSETSEQFRAMEKEYLODPLAYBACK_OFFSET))(acc, effectiveAccessoryLod, oldLod, ownerLodRuntimeData);
		}

		static ::Cysharp::Threading::Tasks::UniTask StartFade(::NPCCrowd::Accessories::NPCAccessory* acc, ::System::Boolean bFadein, ::GIGFDLPMNND* materialComponent, ::System::Boolean forceSet)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::NPCCrowd::Accessories::NPCAccessory*, ::System::Boolean, ::GIGFDLPMNND*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_STARTFADE_OFFSET))(acc, bFadein, materialComponent, forceSet);
		}

		static ::Cysharp::Threading::Tasks::UniTask StartFade_1(::NPCCrowd::Accessories::NPCAccessory* acc, ::NPCCrowd::Accessories::NPCAccessoryManager_AccessoryRenderState state, ::System::Boolean bFadein, ::GIGFDLPMNND* materialComponent, ::System::Boolean forceSet)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Accessories::NPCAccessoryManager_AccessoryRenderState, ::System::Boolean, ::GIGFDLPMNND*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_STARTFADE_1_OFFSET))(acc, state, bFadein, materialComponent, forceSet);
		}

		static ::System::Void StopFade(::NPCCrowd::Accessories::NPCAccessory* acc)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_STOPFADE_OFFSET))(acc);
		}

		static ::System::Void RefreshDitherTask(::NPCCrowd::Accessories::NPCAccessory* acc, ::GIGFDLPMNND* materialComponent, ::System::Boolean fadeIn, ::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*, ::GIGFDLPMNND*, ::System::Boolean, ::NPCCrowd::Animation::NPCUnionAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REFRESHDITHERTASK_OFFSET))(acc, materialComponent, fadeIn, unionAnimator);
		}

		static ::UnityEngine::Renderer* GetRendererByRenderState(::NPCCrowd::Accessories::NPCAccessory* acc, ::NPCCrowd::Accessories::NPCAccessoryManager_AccessoryRenderState state)
		{
			return ((::UnityEngine::Renderer*(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Accessories::NPCAccessoryManager_AccessoryRenderState))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GETRENDERERBYRENDERSTATE_OFFSET))(acc, state);
		}

		::NPCCrowd::Accessories::NPCAccessory* CreateAccessory(::FNpcAvatarGenericParams_AccessoryInfo accessoryInfo, ::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo* cpInfo, ::NPCCrowd::Accessories::NPCAccessoryAvatarAssetsSO* avatarAss, ::NPCCrowd::Accessories::NPCAccessoryLodMeshAssets* meshAss, ::UnityEngine::GameObject* avatarGo, ::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator)
		{
			return ((::NPCCrowd::Accessories::NPCAccessory*(*)(::PVOID, ::FNpcAvatarGenericParams_AccessoryInfo, ::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo*, ::NPCCrowd::Accessories::NPCAccessoryAvatarAssetsSO*, ::NPCCrowd::Accessories::NPCAccessoryLodMeshAssets*, ::UnityEngine::GameObject*, ::NPCCrowd::Animation::NPCUnionAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CREATEACCESSORY_OFFSET))(this, accessoryInfo, cpInfo, avatarAss, meshAss, avatarGo, unionAnimator);
		}

		::UnityEngine::GameObject* CreateAccessoryGo(::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo* cpInfo, ::UnityEngine::Transform* parentTransform, ::System::Boolean hasAnimation, ::System::Int32 accessoryID, ::System::String* accessoryKey)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CREATEACCESSORYGO_OFFSET))(this, cpInfo, parentTransform, hasAnimation, accessoryID, accessoryKey);
		}

		::System::Void DestroyAccessory(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DESTROYACCESSORY_OFFSET))(this, accessory);
		}

		::System::Void DestroyAccessoryGo(::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo* cpInfo, ::System::Boolean hasAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DESTROYACCESSORYGO_OFFSET))(this, cpInfo, hasAnimation);
		}

		static ::System::Void RemoveAccessoryComponents(::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo* cpInfo, ::System::Boolean hasAnimation)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REMOVEACCESSORYCOMPONENTS_OFFSET))(cpInfo, hasAnimation);
		}

		static ::System::Void ReleaseAccessoryAssets(::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo* cpInfo)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_RELEASEACCESSORYASSETS_OFFSET))(cpInfo);
		}

		static ::System::Void _UpdateAccessoryAttach_g__SetGpuAnimationInstanceId_122_0(::UnityEngine::Renderer* targetRenderer, ::NPCCrowd::Accessories::NPCAccessoryManager___c__DisplayClass122_0& param_1)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::NPCCrowd::Accessories::NPCAccessoryManager___c__DisplayClass122_0&))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__UPDATEACCESSORYATTACH_G__SETGPUANIMATIONINSTANCEID_122_0_OFFSET))(targetRenderer, param_1);
		}

		static ::Cysharp::Threading::Tasks::UniTask _StartFade_g__StartFadeAndRelease_140_0(::System::Int32 rendererInstanceID, ::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>* renderers, ::System::Single fadeTime, ::System::Boolean fadeIn, ::GIGFDLPMNND* matComponent, ::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Int32, ::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>*, ::System::Single, ::System::Boolean, ::GIGFDLPMNND*, ::NPCCrowd::Animation::NPCUnionAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__STARTFADE_G__STARTFADEANDRELEASE_140_0_OFFSET))(rendererInstanceID, renderers, fadeTime, fadeIn, matComponent, unionAnimator);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___BASE_LATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PreLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___BASE_PRELATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
