#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKKMILCOAJF.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimCustomScreenTransferReason.h"
#include "unitysdk/RPG/Client/FiveDimManager_DOFContext.h"
#include "unitysdk/RPG/GameCore/FiveDimCustomScreenTransferStyle.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ANMMOFEEPEP.h"
#include "unitysdk/BINEKJFCLMP.h"
#include "unitysdk/DBHHLOMCPDO.h"
#include "unitysdk/IDLMJDKPBGC_MDKCIOMIDKB.h"
#include "unitysdk/IHJCOALACON.h"
#include "unitysdk/NBEKNJDCLEI.h"
#include "unitysdk/NHKOBIDDGBE.h"
#include "unitysdk/PALBAPMODCK.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CCMOIFIMAIL;
class DNGDKOGLNFP;
class HJICPKHLHAK;
class IDLMJDKPBGC;
class MBLCCFAFPFD;
class MGGFEDHFKPC;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class FiveDimManager_AsyncCreateContext; }
namespace RPG::Client { class FiveDimManager_CameraContext; }
namespace RPG::Client { class FiveDimManager_PendingDestroyContext; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }
namespace RPG::GameCore { class FiveDimCameraDOFConfig; }
namespace RPG::GameCore { class FiveDimVCameraBlendConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityRef; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_FIVEDIMMANAGER_APPLYCAMERABLENDOUTCONFIG_OFFSET UNITYSDK_OFFSET(0xD027490)
#define RPG_CLIENT_FIVEDIMMANAGER_APPLYCAMERADOFCONFIG_OFFSET UNITYSDK_OFFSET(0xD027630)
#define RPG_CLIENT_FIVEDIMMANAGER_APPLYLEAVEFROM_1_OFFSET UNITYSDK_OFFSET(0xD0287E0)
#define RPG_CLIENT_FIVEDIMMANAGER_APPLYLEAVEFROM_OFFSET UNITYSDK_OFFSET(0xD028650)
#define RPG_CLIENT_FIVEDIMMANAGER_APPLYTELEPORTTO_OFFSET UNITYSDK_OFFSET(0xD0284C0)
#define RPG_CLIENT_FIVEDIMMANAGER_BEGINEXTERNALOBJECTHIDDEN_OFFSET UNITYSDK_OFFSET(0xD0202D0)
#define RPG_CLIENT_FIVEDIMMANAGER_CANCELCREATEFIVEDIMENTITYASYNC_OFFSET UNITYSDK_OFFSET(0xD01D2C0)
#define RPG_CLIENT_FIVEDIMMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0xD02B230)
#define RPG_CLIENT_FIVEDIMMANAGER_CLEARISOLATEDINSTANCE_OFFSET UNITYSDK_OFFSET(0xD020880)
#define RPG_CLIENT_FIVEDIMMANAGER_CLEARLEAVEINSTANCE_OFFSET UNITYSDK_OFFSET(0xD028460)
#define RPG_CLIENT_FIVEDIMMANAGER_CLEARTELEPORTINSTANCE_OFFSET UNITYSDK_OFFSET(0xD028400)
#define RPG_CLIENT_FIVEDIMMANAGER_CLOSECUSTOMSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xD0290F0)
#define RPG_CLIENT_FIVEDIMMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xD024B40)
#define RPG_CLIENT_FIVEDIMMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD024F70)
#define RPG_CLIENT_FIVEDIMMANAGER_ENABLETHREADTASK_OFFSET UNITYSDK_OFFSET(0xD024670)
#define RPG_CLIENT_FIVEDIMMANAGER_ENDOFLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD028030)
#define RPG_CLIENT_FIVEDIMMANAGER_FINISHCREATEFIVEDIMENTITYIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xD009AE0)
#define RPG_CLIENT_FIVEDIMMANAGER_FINISHPENDINGDESTROYFIVEDIMCONTEXTIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xD0240E0)
#define RPG_CLIENT_FIVEDIMMANAGER_FLUSHENTITYCALCLODRESULT_OFFSET UNITYSDK_OFFSET(0xD0248F0)
#define RPG_CLIENT_FIVEDIMMANAGER_GETCAMERAACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0xD027430)
#define RPG_CLIENT_FIVEDIMMANAGER_GETFIVEDIMGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xD0249C0)
#define RPG_CLIENT_FIVEDIMMANAGER_GETTELEPORTFIVEDIMINFO_OFFSET UNITYSDK_OFFSET(0xD0288E0)
#define RPG_CLIENT_FIVEDIMMANAGER_GET_ENABLESYNCLOADINGINSTANCE_OFFSET UNITYSDK_OFFSET(0xD02B210)
#define RPG_CLIENT_FIVEDIMMANAGER_GET_FIVEDIMAUDIOMANAGER_OFFSET UNITYSDK_OFFSET(0xD02B1F0)
#define RPG_CLIENT_FIVEDIMMANAGER_GET_ISLEAVINGINSTANCE_OFFSET UNITYSDK_OFFSET(0xD02B1C0)
#define RPG_CLIENT_FIVEDIMMANAGER_GET_ISOLATEDGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xD02B1D0)
#define RPG_CLIENT_FIVEDIMMANAGER_GET_ISTELEPORTINGORLEAVING_OFFSET UNITYSDK_OFFSET(0xD026010)
#define RPG_CLIENT_FIVEDIMMANAGER_HASCAMERALIVE_OFFSET UNITYSDK_OFFSET(0xD013000)
#define RPG_CLIENT_FIVEDIMMANAGER_HASISOLATEDINSTANCE_OFFSET UNITYSDK_OFFSET(0xD01D910)
#define RPG_CLIENT_FIVEDIMMANAGER_HIDEALLFIVEDIM_OFFSET UNITYSDK_OFFSET(0xD02B0B0)
#define RPG_CLIENT_FIVEDIMMANAGER_HIDEEXTERNALOBJECT_OFFSET UNITYSDK_OFFSET(0xD0235E0)
#define RPG_CLIENT_FIVEDIMMANAGER_INITONFINALSTEP_OFFSET UNITYSDK_OFFSET(0xD025880)
#define RPG_CLIENT_FIVEDIMMANAGER_ISCUSTOMSCREENTRANSFERFULLOPENED_OFFSET UNITYSDK_OFFSET(0xD0293E0)
#define RPG_CLIENT_FIVEDIMMANAGER_ISCUSTOMSCREENTRANSFEROPENED_OFFSET UNITYSDK_OFFSET(0xD029390)
#define RPG_CLIENT_FIVEDIMMANAGER_ISISOLATEDSHOWINSTANCE_OFFSET UNITYSDK_OFFSET(0xD01D960)
#define RPG_CLIENT_FIVEDIMMANAGER_ISLEAVENEEDMAPROTATIONSWITCHPOSE_OFFSET UNITYSDK_OFFSET(0xD028CC0)
#define RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_1_OFFSET UNITYSDK_OFFSET(0xD026990)
#define RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_2_OFFSET UNITYSDK_OFFSET(0xD01F250)
#define RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_OFFSET UNITYSDK_OFFSET(0xD01F4E0)
#define RPG_CLIENT_FIVEDIMMANAGER_LOCKFIVEDIMGROUPLOAD_OFFSET UNITYSDK_OFFSET(0xD021E80)
#define RPG_CLIENT_FIVEDIMMANAGER_OPENCUSTOMSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xD028E60)
#define RPG_CLIENT_FIVEDIMMANAGER_REFRESHENTITYVISIBLEWHENENTERORLEAVEFIVEDIM_OFFSET UNITYSDK_OFFSET(0xD020190)
#define RPG_CLIENT_FIVEDIMMANAGER_REGISTERGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xD017E00)
#define RPG_CLIENT_FIVEDIMMANAGER_REMOVEPENDINGUNLOADINSTANCECONTAINER_OFFSET UNITYSDK_OFFSET(0xD029940)
#define RPG_CLIENT_FIVEDIMMANAGER_REQUESTCREATEFIVEDIMENTITYASYNC_OFFSET UNITYSDK_OFFSET(0xD009E90)
#define RPG_CLIENT_FIVEDIMMANAGER_REQUESTDESTROYFIVEDIMCONTEXT_OFFSET UNITYSDK_OFFSET(0xD01D400)
#define RPG_CLIENT_FIVEDIMMANAGER_REQUESTUNLOADINSTANCECONTAINER_OFFSET UNITYSDK_OFFSET(0xD029A90)
#define RPG_CLIENT_FIVEDIMMANAGER_RESTOREALLHIDDENEXTERNALOBJECTS_OFFSET UNITYSDK_OFFSET(0xD021990)
#define RPG_CLIENT_FIVEDIMMANAGER_SETACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xD026F80)
#define RPG_CLIENT_FIVEDIMMANAGER_SETCAMERAFOCUS_OFFSET UNITYSDK_OFFSET(0xD021200)
#define RPG_CLIENT_FIVEDIMMANAGER_SETISOLATEDINSTANCE_OFFSET UNITYSDK_OFFSET(0xD020610)
#define RPG_CLIENT_FIVEDIMMANAGER_SETNEEDCHENLINGFRAMECAPTURE_OFFSET UNITYSDK_OFFSET(0xD029490)
#define RPG_CLIENT_FIVEDIMMANAGER_SET_ENABLESYNCLOADINGINSTANCE_OFFSET UNITYSDK_OFFSET(0xD02B220)
#define RPG_CLIENT_FIVEDIMMANAGER_SET_FIVEDIMAUDIOMANAGER_OFFSET UNITYSDK_OFFSET(0xD02B200)
#define RPG_CLIENT_FIVEDIMMANAGER_SET_ISOLATEDGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xD02B1E0)
#define RPG_CLIENT_FIVEDIMMANAGER_SYNCCUSTOMSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xD029250)
#define RPG_CLIENT_FIVEDIMMANAGER_SYNCTRANSFORMBEFOREFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xD027B60)
#define RPG_CLIENT_FIVEDIMMANAGER_TASKFORCESETFIVEDIMLOADMODE_OFFSET UNITYSDK_OFFSET(0xD02AF60)
#define RPG_CLIENT_FIVEDIMMANAGER_TELEPORTTO_1_OFFSET UNITYSDK_OFFSET(0xD0266E0)
#define RPG_CLIENT_FIVEDIMMANAGER_TELEPORTTO_OFFSET UNITYSDK_OFFSET(0xD01EE30)
#define RPG_CLIENT_FIVEDIMMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xD027BC0)
#define RPG_CLIENT_FIVEDIMMANAGER_TRIGGERFIVEDIMPRELOAD_OFFSET UNITYSDK_OFFSET(0xD02B020)
#define RPG_CLIENT_FIVEDIMMANAGER_TRYREQUESTLEAVEGAMEWHENINSTANCEDESTROY_OFFSET UNITYSDK_OFFSET(0xD019150)
#define RPG_CLIENT_FIVEDIMMANAGER_UNLOCKFIVEDIMGROUPLOAD_OFFSET UNITYSDK_OFFSET(0xD022000)
#define RPG_CLIENT_FIVEDIMMANAGER_UNREGISTERGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xD018FA0)
#define RPG_CLIENT_FIVEDIMMANAGER__APPLYDOF_OFFSET UNITYSDK_OFFSET(0xD029DC0)
#define RPG_CLIENT_FIVEDIMMANAGER__APPLYINITIALGAME_OFFSET UNITYSDK_OFFSET(0xD025930)
#define RPG_CLIENT_FIVEDIMMANAGER__APPLYISOLATEINSTANCE_OFFSET UNITYSDK_OFFSET(0xD027700)
#define RPG_CLIENT_FIVEDIMMANAGER__CALCFIVEDIMINSTANCEISINCAMERAFRUSTUM_OFFSET UNITYSDK_OFFSET(0xD02AD10)
#define RPG_CLIENT_FIVEDIMMANAGER__CLEARALLGROUPLOADLOCKS_OFFSET UNITYSDK_OFFSET(0xD0254E0)
#define RPG_CLIENT_FIVEDIMMANAGER__CLEARCREATECONTEXT_OFFSET UNITYSDK_OFFSET(0xD023EA0)
#define RPG_CLIENT_FIVEDIMMANAGER__CLEARDESTROYCONTEXT_OFFSET UNITYSDK_OFFSET(0xD024610)
#define RPG_CLIENT_FIVEDIMMANAGER__CLEARHIDDENEXTERNALOBJECTS_OFFSET UNITYSDK_OFFSET(0xD023910)
#define RPG_CLIENT_FIVEDIMMANAGER__DISPOSETHREADTASK_OFFSET UNITYSDK_OFFSET(0xD024780)
#define RPG_CLIENT_FIVEDIMMANAGER__GETDOFFOCUSLENGTH_OFFSET UNITYSDK_OFFSET(0xD02A5D0)
#define RPG_CLIENT_FIVEDIMMANAGER__GETPLAYER3DTRANSFORM_OFFSET UNITYSDK_OFFSET(0xD026850)
#define RPG_CLIENT_FIVEDIMMANAGER__INITTHREADTASK_OFFSET UNITYSDK_OFFSET(0xD0246E0)
#define RPG_CLIENT_FIVEDIMMANAGER__ISINITIALGAMELOADFINISH_OFFSET UNITYSDK_OFFSET(0xD029670)
#define RPG_CLIENT_FIVEDIMMANAGER__ONFIVEDIMINSTANCECHANGED_OFFSET UNITYSDK_OFFSET(0xD0294E0)
#define RPG_CLIENT_FIVEDIMMANAGER__ONPIPELINECAMERADEACTIVATE_OFFSET UNITYSDK_OFFSET(0xD024D50)
#define RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLECREATECONTEXT_OFFSET UNITYSDK_OFFSET(0xD0239D0)
#define RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLEDESTROYCONTEXTFINISH_OFFSET UNITYSDK_OFFSET(0xD024550)
#define RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLEDESTROYCONTEXT_OFFSET UNITYSDK_OFFSET(0xD024260)
#define RPG_CLIENT_FIVEDIMMANAGER__RESETDOF_OFFSET UNITYSDK_OFFSET(0xD0253C0)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKCHENLINGFRAMECAPTURE_OFFSET UNITYSDK_OFFSET(0xD028320)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKDOF_OFFSET UNITYSDK_OFFSET(0xD027ED0)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKFRAMESLICECREATEENTITIES_OFFSET UNITYSDK_OFFSET(0xD023AE0)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKFRAMESLICEDESTROYENTITIES_OFFSET UNITYSDK_OFFSET(0xD024360)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKLEAVEINSTANCE_OFFSET UNITYSDK_OFFSET(0xD027D70)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKPENDINGUNLOADINSTANCECONTAINERS_OFFSET UNITYSDK_OFFSET(0xD029BE0)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKTELEPORTINSTANCE_OFFSET UNITYSDK_OFFSET(0xD027CB0)
#define RPG_CLIENT_FIVEDIMMANAGER__TRYGETITEMOVERRIDESYSTEM_OFFSET UNITYSDK_OFFSET(0xD023810)
#define RPG_CLIENT_FIVEDIMMANAGER__TRYREFRESHGROUPLOADSTATE_OFFSET UNITYSDK_OFFSET(0xD027E60)
#define RPG_CLIENT_FIVEDIMMANAGER__TRYUNLOADINSTANCECONTAINER_OFFSET UNITYSDK_OFFSET(0xD028700)
#define RPG_CLIENT_FIVEDIMMANAGER__UPDATEACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xD027130)
#define RPG_CLIENT_FIVEDIMMANAGER__UPDATEDOFCONTEXT_OFFSET UNITYSDK_OFFSET(0xD02A3C0)
#define RPG_CLIENT_FIVEDIMMANAGER__UPDATEFIVEDIMINSTANCERENDER_OFFSET UNITYSDK_OFFSET(0xD028090)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimManager_TypeDefinitionIndex = 60538;

	class FiveDimManager : public ::System::Object
	{
	public:
		::HJICPKHLHAK* _TeleportInstance; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* _PendingDestroyContextPool; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::FiveDimGameInstance*>* _PendingUnloadGameInstances; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::FiveDimGameInstance*>* _AllGameInstances; // 0x28
		::RPG::PoolList_1<::NKKMILCOAJF>* _HiddenExternalHandles; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::Client::FiveDimGameInstance*, ::System::Object*>* _ActiveCameras; // 0x38
		::RPG::Client::FiveDimManager_CameraContext* _LastCameraContext; // 0x40
		::DNGDKOGLNFP* _LeaveInstance; // 0x48
		::System::Collections::Generic::List_1<::System::Object*>* _CreateContext; // 0x50
		::MBLCCFAFPFD* _FiveDimAudioManager_k__BackingField; // 0x58
		::RPG::PoolHashSet_1<::UnityEngine::GameObject*>* _HiddenExternalGOs; // 0x60
		::RPG::Client::FiveDimGameInstance* _CameraFocusInstance; // 0x68
		::IDLMJDKPBGC* _PipelineCameraController; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _GroupLoadLockCounters; // 0x78
		::MGGFEDHFKPC* _LodThreadTask; // 0x80
		::System::Int32 _LastSyncTransformFrameCount; // 0x88
		::System::Boolean _IsBeginExternalObjectHidden; // 0x8C
		::System::Byte _padding0[0x3];
		::System::Nullable_1<::System::Object*> _IsolatedGameInstance_k__BackingField; // 0x90
		::System::Byte _padding1[0x8];
		::RPG::GameCore::FiveDimCustomScreenTransferStyle _CurrentCustomScreenTransferStyle; // 0xA0
		::RPG::GameCore::FiveDimCustomScreenTransferStyle _LastCustomScreenTransferStyle; // 0xA4
		::System::Boolean _NeedChenLingFrameCapture; // 0xA8
		::System::Boolean _PlayerInAnyFiveDim; // 0xA9
		::System::Boolean _ShouldRefreshGroupLoadState; // 0xAA
		::System::Boolean _EnableSyncLoadingInstance_k__BackingField; // 0xAB
		::RPG::Client::LittleGame::FiveDim::FiveDimCustomScreenTransferReason _CustomScreenTransferReason; // 0xAC
		::RPG::Client::FiveDimManager_DOFContext _DOFContext; // 0xB0
		static ::RPG::GameCore::FiveDimVCameraBlendConfig** StaticGet_s_CutBlendConfig()
		{
			return (::RPG::GameCore::FiveDimVCameraBlendConfig**)UnitySDK::FromName("RPG.Client", "FiveDimManager")->GetStaticField(0x5CD00);
		}

		// static const ::System::Object s_MaxProcessEntityCount; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CCTOR_OFFSET))();
		}

		::System::Void BeginExternalObjectHidden()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_BEGINEXTERNALOBJECTHIDDEN_OFFSET))(this);
		}

		::System::Boolean HideExternalObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_HIDEEXTERNALOBJECT_OFFSET))(this, a1);
		}

		::System::Void RestoreAllHiddenExternalObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_RESTOREALLHIDDENEXTERNALOBJECTS_OFFSET))(this);
		}

		::System::Boolean _TryGetItemOverrideSystem(::CCMOIFIMAIL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCMOIFIMAIL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TRYGETITEMOVERRIDESYSTEM_OFFSET))(this, a1);
		}

		::System::Void _ClearHiddenExternalObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__CLEARHIDDENEXTERNALOBJECTS_OFFSET))(this);
		}

		::System::Void RequestCreateFiveDimEntityAsync(::RPG::Client::FiveDimGameInstance* a1, ::PEEDLCHFAFL* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::PEEDLCHFAFL*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_REQUESTCREATEFIVEDIMENTITYASYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CancelCreateFiveDimEntityAsync(::RPG::Client::FiveDimGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CANCELCREATEFIVEDIMENTITYASYNC_OFFSET))(this, a1);
		}

		::System::Void FinishCreateFiveDimEntityImmediately(::RPG::Client::FiveDimGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_FINISHCREATEFIVEDIMENTITYIMMEDIATELY_OFFSET))(this, a1);
		}

		::System::Void _TickFrameSliceCreateEntities(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKFRAMESLICECREATEENTITIES_OFFSET))(this, a1);
		}

		::System::Void _ProcessSingleCreateContext(::RPG::Client::FiveDimManager_AsyncCreateContext* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimManager_AsyncCreateContext*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLECREATECONTEXT_OFFSET))(this, a1, a2);
		}

		::System::Void _ClearCreateContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__CLEARCREATECONTEXT_OFFSET))(this);
		}

		::System::Void RequestDestroyFiveDimContext(::PEEDLCHFAFL* a1, ::NDDFLGNNMDK* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::PEEDLCHFAFL*, ::NDDFLGNNMDK*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_REQUESTDESTROYFIVEDIMCONTEXT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FinishPendingDestroyFiveDimContextImmediate(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_FINISHPENDINGDESTROYFIVEDIMCONTEXTIMMEDIATE_OFFSET))(this, a1, a2);
		}

		::System::Void _TickFrameSliceDestroyEntities(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKFRAMESLICEDESTROYENTITIES_OFFSET))(this, a1);
		}

		::System::Void _ProcessSingleDestroyContext(::RPG::Client::FiveDimManager_PendingDestroyContext* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimManager_PendingDestroyContext*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLEDESTROYCONTEXT_OFFSET))(this, a1, a2);
		}

		::System::Void _ProcessSingleDestroyContextFinish(::RPG::Client::FiveDimManager_PendingDestroyContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimManager_PendingDestroyContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLEDESTROYCONTEXTFINISH_OFFSET))(this, a1);
		}

		::System::Void _ClearDestroyContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__CLEARDESTROYCONTEXT_OFFSET))(this);
		}

		::System::Void EnableThreadTask(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ENABLETHREADTASK_OFFSET))(this, a1);
		}

		::System::Void _InitThreadTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__INITTHREADTASK_OFFSET))(this);
		}

		::System::Void _DisposeThreadTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__DISPOSETHREADTASK_OFFSET))(this);
		}

		::System::Void FlushEntityCalcLodResult(::NBEKNJDCLEI a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBEKNJDCLEI))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_FLUSHENTITYCALCLODRESULT_OFFSET))(this, a1);
		}

		::System::Void _OnPipelineCameraDeactivate(::IDLMJDKPBGC_MDKCIOMIDKB a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDLMJDKPBGC_MDKCIOMIDKB))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__ONPIPELINECAMERADEACTIVATE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void InitOnFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_INITONFINALSTEP_OFFSET))(this);
		}

		::System::Void TeleportTo(::ANMMOFEEPEP a1, ::IHJCOALACON a2)
		{
			return ((::System::Void(*)(::PVOID, ::ANMMOFEEPEP, ::IHJCOALACON))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TELEPORTTO_OFFSET))(this, a1, a2);
		}

		::System::Void TeleportTo_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TELEPORTTO_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LeaveCurrentGame(::PALBAPMODCK a1)
		{
			return ((::System::Void(*)(::PVOID, ::PALBAPMODCK))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_OFFSET))(this, a1);
		}

		::System::Void LeaveCurrentGame_1(::RPG::GameCore::LevelEntityRef* a1, ::PALBAPMODCK a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityRef*, ::PALBAPMODCK))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_1_OFFSET))(this, a1, a2);
		}

		::System::Void LeaveCurrentGame_2(::NHKOBIDDGBE a1, ::PALBAPMODCK a2)
		{
			return ((::System::Void(*)(::PVOID, ::NHKOBIDDGBE, ::PALBAPMODCK))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_2_OFFSET))(this, a1, a2);
		}

		::System::Void TryRequestLeaveGameWhenInstanceDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TRYREQUESTLEAVEGAMEWHENINSTANCEDESTROY_OFFSET))(this);
		}

		::System::Void RegisterGameInstance(::RPG::Client::FiveDimGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_REGISTERGAMEINSTANCE_OFFSET))(this, a1);
		}

		::System::Void UnRegisterGameInstance(::RPG::Client::FiveDimGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_UNREGISTERGAMEINSTANCE_OFFSET))(this, a1);
		}

		::System::Void SetActiveCamera(::RPG::Client::FiveDimGameInstance* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2, ::RPG::GameCore::FiveDimVCameraBlendConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::RPG::GameCore::FiveDimVCameraBlendConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SETACTIVECAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetCameraFocus(::RPG::Client::FiveDimGameInstance* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SETCAMERAFOCUS_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FiveDimGameInstance* GetCameraActiveInstance()
		{
			return ((::RPG::Client::FiveDimGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GETCAMERAACTIVEINSTANCE_OFFSET))(this);
		}

		::System::Void ApplyCameraBlendOutConfig(::RPG::Client::FiveDimGameInstance* a1, ::RPG::GameCore::FiveDimVCameraBlendConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::RPG::GameCore::FiveDimVCameraBlendConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_APPLYCAMERABLENDOUTCONFIG_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasCameraLive(::RPG::Client::FiveDimGameInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_HASCAMERALIVE_OFFSET))(this, a1);
		}

		::System::Void ApplyCameraDOFConfig(::RPG::Client::FiveDimGameInstance* a1, ::RPG::GameCore::FiveDimCameraDOFConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::RPG::GameCore::FiveDimCameraDOFConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_APPLYCAMERADOFCONFIG_OFFSET))(this, a1, a2);
		}

		::System::Void SetIsolatedInstance(::RPG::Client::FiveDimGameInstance* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SETISOLATEDINSTANCE_OFFSET))(this, a1, a2);
		}

		::System::Void ClearIsolatedInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CLEARISOLATEDINSTANCE_OFFSET))(this);
		}

		::System::Boolean HasIsolatedInstance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_HASISOLATEDINSTANCE_OFFSET))(this);
		}

		::System::Boolean IsIsolatedShowInstance(::RPG::Client::FiveDimGameInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ISISOLATEDSHOWINSTANCE_OFFSET))(this, a1);
		}

		::System::Void SyncTransformBeforeFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SYNCTRANSFORMBEFOREFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void EndOfLateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ENDOFLATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void ClearTeleportInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CLEARTELEPORTINSTANCE_OFFSET))(this);
		}

		::System::Void ClearLeaveInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CLEARLEAVEINSTANCE_OFFSET))(this);
		}

		::System::Void ApplyTeleportTo(::RPG::Client::FiveDimGameInstance* a1, ::DBHHLOMCPDO a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::DBHHLOMCPDO, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_APPLYTELEPORTTO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ApplyLeaveFrom(::RPG::Client::FiveDimGameInstance* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_APPLYLEAVEFROM_OFFSET))(this, a1, a2);
		}

		::System::Void ApplyLeaveFrom_1(::RPG::Client::FiveDimGameInstance* a1, ::BINEKJFCLMP a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::BINEKJFCLMP))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_APPLYLEAVEFROM_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetTeleportFiveDimInfo(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GETTELEPORTFIVEDIMINFO_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsLeaveNeedMapRotationSwitchPose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ISLEAVENEEDMAPROTATIONSWITCHPOSE_OFFSET))(this);
		}

		::System::Void OpenCustomScreenTransfer(::RPG::Client::LittleGame::FiveDim::FiveDimCustomScreenTransferReason a1, ::RPG::GameCore::FiveDimCustomScreenTransferStyle a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimCustomScreenTransferReason, ::RPG::GameCore::FiveDimCustomScreenTransferStyle))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_OPENCUSTOMSCREENTRANSFER_OFFSET))(this, a1, a2);
		}

		::System::Void CloseCustomScreenTransfer(::RPG::Client::LittleGame::FiveDim::FiveDimCustomScreenTransferReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimCustomScreenTransferReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CLOSECUSTOMSCREENTRANSFER_OFFSET))(this, a1);
		}

		::System::Void SyncCustomScreenTransfer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SYNCCUSTOMSCREENTRANSFER_OFFSET))(this);
		}

		::System::Boolean IsCustomScreenTransferOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ISCUSTOMSCREENTRANSFEROPENED_OFFSET))(this);
		}

		::System::Boolean IsCustomScreenTransferFullOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ISCUSTOMSCREENTRANSFERFULLOPENED_OFFSET))(this);
		}

		::System::Void SetNeedChenLingFrameCapture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SETNEEDCHENLINGFRAMECAPTURE_OFFSET))(this);
		}

		::System::Void LockFiveDimGroupLoad(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_LOCKFIVEDIMGROUPLOAD_OFFSET))(this, a1, a2);
		}

		::System::Void UnlockFiveDimGroupLoad(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_UNLOCKFIVEDIMGROUPLOAD_OFFSET))(this, a1);
		}

		::System::Void _ClearAllGroupLoadLocks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__CLEARALLGROUPLOADLOCKS_OFFSET))(this);
		}

		::System::Void _OnFiveDimInstanceChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__ONFIVEDIMINSTANCECHANGED_OFFSET))(this, a1);
		}

		::System::Void _TryRefreshGroupLoadState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TRYREFRESHGROUPLOADSTATE_OFFSET))(this);
		}

		::System::Void _ApplyInitialGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__APPLYINITIALGAME_OFFSET))(this);
		}

		::System::Boolean _IsInitialGameLoadFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__ISINITIALGAMELOADFINISH_OFFSET))(this);
		}

		::System::Void _TickTeleportInstance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKTELEPORTINSTANCE_OFFSET))(this, a1);
		}

		::System::Void _TickLeaveInstance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKLEAVEINSTANCE_OFFSET))(this, a1);
		}

		::System::Void _TryUnloadInstanceContainer(::RPG::Client::FiveDimGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TRYUNLOADINSTANCECONTAINER_OFFSET))(this, a1);
		}

		::System::Void RemovePendingUnloadInstanceContainer(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_REMOVEPENDINGUNLOADINSTANCECONTAINER_OFFSET))(this, a1, a2);
		}

		::System::Void RequestUnloadInstanceContainer(::RPG::Client::FiveDimGameInstance* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_REQUESTUNLOADINSTANCECONTAINER_OFFSET))(this, a1, a2);
		}

		::System::Void _TickPendingUnloadInstanceContainers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKPENDINGUNLOADINSTANCECONTAINERS_OFFSET))(this);
		}

		::System::Void _ApplyIsolateInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__APPLYISOLATEINSTANCE_OFFSET))(this);
		}

		::System::Void _UpdateActiveCamera(::RPG::Client::FiveDimGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__UPDATEACTIVECAMERA_OFFSET))(this, a1);
		}

		::System::Void _TickDOF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKDOF_OFFSET))(this, a1);
		}

		::System::Void _UpdateDOFContext(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__UPDATEDOFCONTEXT_OFFSET))(this, a1);
		}

		::System::Boolean _GetDOFFocusLength(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__GETDOFFOCUSLENGTH_OFFSET))(this, a1);
		}

		::System::Void _ApplyDOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__APPLYDOF_OFFSET))(this);
		}

		::System::Void _ResetDOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__RESETDOF_OFFSET))(this);
		}

		::System::Boolean _GetPlayer3DTransform(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__GETPLAYER3DTRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Void _TickChenLingFrameCapture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKCHENLINGFRAMECAPTURE_OFFSET))(this);
		}

		::System::Void _UpdateFiveDimInstanceRender()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__UPDATEFIVEDIMINSTANCERENDER_OFFSET))(this);
		}

		::System::Boolean _CalcFiveDimInstanceIsInCameraFrustum(::RPG::Client::FiveDimGameInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__CALCFIVEDIMINSTANCEISINCAMERAFRUSTUM_OFFSET))(this, a1);
		}

		::RPG::Client::FiveDimGameInstance* GetFiveDimGameInstance(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::FiveDimGameInstance*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GETFIVEDIMGAMEINSTANCE_OFFSET))(this, a1, a2);
		}

		::System::Void TaskForceSetFiveDimLoadMode(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TASKFORCESETFIVEDIMLOADMODE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TriggerFiveDimPreload(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TRIGGERFIVEDIMPRELOAD_OFFSET))(this, a1, a2);
		}

		::System::Void HideAllFiveDim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_HIDEALLFIVEDIM_OFFSET))(this, a1);
		}

		::System::Void RefreshEntityVisibleWhenEnterOrLeaveFiveDim(::System::Boolean a1, ::RPG::Client::FiveDimGameInstance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_REFRESHENTITYVISIBLEWHENENTERORLEAVEFIVEDIM_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsTeleportingOrLeaving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GET_ISTELEPORTINGORLEAVING_OFFSET))(this);
		}

		::System::Boolean get_IsLeavingInstance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GET_ISLEAVINGINSTANCE_OFFSET))(this);
		}

		::System::Nullable_1<::System::Object*> get_IsolatedGameInstance()
		{
			return ((::System::Nullable_1<::System::Object*>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GET_ISOLATEDGAMEINSTANCE_OFFSET))(this);
		}

		::System::Void set_IsolatedGameInstance(::System::Nullable_1<::System::Object*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Object*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SET_ISOLATEDGAMEINSTANCE_OFFSET))(this, a1);
		}

		::MBLCCFAFPFD* get_FiveDimAudioManager()
		{
			return ((::MBLCCFAFPFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GET_FIVEDIMAUDIOMANAGER_OFFSET))(this);
		}

		::System::Void set_FiveDimAudioManager(::MBLCCFAFPFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBLCCFAFPFD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SET_FIVEDIMAUDIOMANAGER_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableSyncLoadingInstance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GET_ENABLESYNCLOADINGINSTANCE_OFFSET))(this);
		}

		::System::Void set_EnableSyncLoadingInstance(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SET_ENABLESYNCLOADINGINSTANCE_OFFSET))(this, a1);
		}

	};
}
