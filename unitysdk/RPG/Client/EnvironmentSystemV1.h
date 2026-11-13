#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMFJEMFMLGC.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/RPG/Client/EnvironmentSystem.h"
#include "unitysdk/RPG/Client/MainlightSwitchType.h"
#include "unitysdk/RPG/CustomRP/GameCameraType.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/UnityEngine/Rendering/AmbientVolumneData.h"
#include "unitysdk/UnityEngine/Vector4.h"
class AOJFNAOAAFA;
class BONINBGAHOL;
class COGBNIGPJPO;
class HGEFPDEGLEN;
class KLEFGGIHGMI;
class PDCIOBGIPJO;
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { class EnvironmentSystemV1; }
namespace RPG::Client { class FrameCaptureManager; }
namespace RPG::Client { class PPEffectManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_ADDDYNAMICBLOCKLIGHT_OFFSET UNITYSDK_OFFSET(0x1A6E57A0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_APPLYPATCHTOACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0x1A6EA510)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A6EB770)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_CANCELASYNCINIT_OFFSET UNITYSDK_OFFSET(0x1A6EEE10)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_CANCELTRANSITION_OFFSET UNITYSDK_OFFSET(0x1A6EA410)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_CLEARENVIROPATCH_OFFSET UNITYSDK_OFFSET(0x1A6EA380)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A6EEF90)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F5320)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_DISABLEENVGPUPARTICLE_OFFSET UNITYSDK_OFFSET(0x1A6EF9E0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_DISABLEENVPARTICLE_OFFSET UNITYSDK_OFFSET(0x1A6EFA50)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_EDITORUPDATE_OFFSET UNITYSDK_OFFSET(0x1A6EB420)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_FINISHTRANSITION_OFFSET UNITYSDK_OFFSET(0x1A6E5D00)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_FORCEINITPPEFFECTMANAGER_OFFSET UNITYSDK_OFFSET(0x1A6EFD30)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETCAPSULEAOMANAGER_OFFSET UNITYSDK_OFFSET(0x1A6EFE40)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETDATA_OFFSET UNITYSDK_OFFSET(0x1A6ED9C0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETENVTRANSITMANAGER_OFFSET UNITYSDK_OFFSET(0x1A6EEDC0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETFRAMECAPTUREMANAGER_OFFSET UNITYSDK_OFFSET(0x1A6EFC90)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETISCURSWITCHWORK_OFFSET UNITYSDK_OFFSET(0x1A6ED5A0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETISVALID_OFFSET UNITYSDK_OFFSET(0x1A6EDA60)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETMATERIALEFFECTMANAGER_OFFSET UNITYSDK_OFFSET(0x1A6EFDF0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETPPEFFECTMANAGER_OFFSET UNITYSDK_OFFSET(0x1A6EFCE0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETTODPROFILE_OFFSET UNITYSDK_OFFSET(0x1A6EA680)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_GET_ACTIVEPROFILEV1_OFFSET UNITYSDK_OFFSET(0x1A6F5310)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_GET_ACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0x1A6F5300)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_HASPRIORITY_OFFSET UNITYSDK_OFFSET(0x1A6E5670)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_INITENVIRONMENTSYSTEMASYNC_OFFSET UNITYSDK_OFFSET(0x1A6EEAE0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_INITENVIRONMENTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1A6EE910)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_INITENVSYSTEMV2INEDITORMODE_OFFSET UNITYSDK_OFFSET(0x1A6EB4B0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_INITPROFILE_OFFSET UNITYSDK_OFFSET(0x1A6EA6E0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_INITSTATICANDCLEARSCENE_OFFSET UNITYSDK_OFFSET(0x1A6EA780)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_INIT_OFFSET UNITYSDK_OFFSET(0x1A6EBD00)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_LATETICK_OFFSET UNITYSDK_OFFSET(0x1A6ECA60)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A6EBB30)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A6EB8D0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_RECORDMAINLIGHTDIR_OFFSET UNITYSDK_OFFSET(0x1A6EF550)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_RELEASEPRIORITY_OFFSET UNITYSDK_OFFSET(0x1A6E42E0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_REMOVEDYNAMICBLOCKLIGHT_OFFSET UNITYSDK_OFFSET(0x1A6E58E0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_RENDER_OFFSET UNITYSDK_OFFSET(0x1A6ED860)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESETACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0x1A6E56D0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESETLEVELMAINLIGHTROATATEOFFET_OFFSET UNITYSDK_OFFSET(0x1A6EE830)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESETMAINLIGHTROATATEOFFET_OFFSET UNITYSDK_OFFSET(0x1A6EF650)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESETMAINLIGHT_OFFSET UNITYSDK_OFFSET(0x1A6EF750)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESETPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x1A6EF6F0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESTOREMAINLIGHTDIR_OFFSET UNITYSDK_OFFSET(0x1A6EF5D0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETACTIVEPROFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1A6E5000)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0x1A6E3E60)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETBOOLPATCH_OFFSET UNITYSDK_OFFSET(0x1A6E9EB0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLECHARALIGHT_OFFSET UNITYSDK_OFFSET(0x1A6EFB90)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLESCENELIGHT_OFFSET UNITYSDK_OFFSET(0x1A6EFC10)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLESHADOWLIGHT_OFFSET UNITYSDK_OFFSET(0x1A6EFB10)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLESKYBOX_OFFSET UNITYSDK_OFFSET(0x1A6E4F80)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A6EFAC0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLE_OFFSET UNITYSDK_OFFSET(0x1A6EF4E0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETFLOATPATCH_OFFSET UNITYSDK_OFFSET(0x1A6EA1F0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETMAINLIGHTSWITCH_OFFSET UNITYSDK_OFFSET(0x1A6EF870)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETMONSTERLIGHTBYCAMERADIR_OFFSET UNITYSDK_OFFSET(0x1A6F03A0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETTRANSITIONRATE_OFFSET UNITYSDK_OFFSET(0x1A6EA580)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETTRANSITIONTARGETPROFILE_OFFSET UNITYSDK_OFFSET(0x1A6E5A20)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETVECTORPATCH_OFFSET UNITYSDK_OFFSET(0x1A6EA050)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SET_OFFSET UNITYSDK_OFFSET(0x1A6ED750)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_START_OFFSET UNITYSDK_OFFSET(0x1A6EBCA0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_TICK_OFFSET UNITYSDK_OFFSET(0x1A6EC2D0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_UNINIT_OFFSET UNITYSDK_OFFSET(0x1A6EF0E0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_VERSION_OFFSET UNITYSDK_OFFSET(0x1A6EB460)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__APPLYPIPELINEASSETSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A6E7B00)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__APPLYPIPELINEQUALITYSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A6E9AE0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__APPLYPIPELINESHADOWSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A6E5ED0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__ATMOSPHERESCATTERINGCELESTIALCONTROL_OFFSET UNITYSDK_OFFSET(0x1A6F2260)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__ATMOSPHERESCATTERPRECOMPUTE_OFFSET UNITYSDK_OFFSET(0x1A6F2F30)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__CHECKENVIROMENTCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1A6EDAB0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__CLEARALLCOMMAND_OFFSET UNITYSDK_OFFSET(0x1A6E44F0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__CLOSEFOG_OFFSET UNITYSDK_OFFSET(0x1A6EF010)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__GETSCENELIGHTINTENSITY_OFFSET UNITYSDK_OFFSET(0x1A6F0650)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__PUSHCOMMMANDQUEUE_OFFSET UNITYSDK_OFFSET(0x1A6E4660)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__REFPROBEGAMMATOLINEARSPACE_OFFSET UNITYSDK_OFFSET(0x1A6EFE90)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__REFRESHACTIVEPROFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1A6E5420)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__REFRESHACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0x1A6E48C0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__SETGLOBALREFLECTIONPROBE_OFFSET UNITYSDK_OFFSET(0x1A6EFF40)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__TIMEOFDAYTICK_OFFSET UNITYSDK_OFFSET(0x1A6F20D0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATECAMERA_OFFSET UNITYSDK_OFFSET(0x1A6F2FA0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATECOMPONENTBYENVIROCLIPS_OFFSET UNITYSDK_OFFSET(0x1A6E9DF0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATEENVIROCLIPSBYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A6EE360)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATEENVIROLIGHT_OFFSET UNITYSDK_OFFSET(0x1A6F0880)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATENVIROPREFABS_OFFSET UNITYSDK_OFFSET(0x1A6EC750)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATEPIPELINEDATA_OFFSET UNITYSDK_OFFSET(0x1A6ED600)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATESKYBOX_OFFSET UNITYSDK_OFFSET(0x1A6F1160)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATEVFCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1A6F3260)

namespace RPG::Client
{
	inline static constexpr unsigned int EnvironmentSystemV1_TypeDefinitionIndex = 71744;

	class EnvironmentSystemV1 : public ::RPG::Client::EnvironmentSystem
	{
	public:
		::System::Boolean _ActiveProfileEndTransition; // 0x248
		::System::Boolean _ActiveProfileIsDirty; // 0x249
		::System::Byte _padding0[0x6];
		::System::Collections::Generic::List_1<::HGEFPDEGLEN*>* _ProfileControlCommandQueue; // 0x250
		::RPG::Client::EnvironmentSystem* _EnvSystemV2; // 0x258
		::System::Int32 _RefreshShadowCount; // 0x260
		::System::Single _CurrentTimeOfDay; // 0x264
		::EnviromentSystem::EnviromentProfile* _ActiveProfile; // 0x268
		::System::Collections::Generic::List_1<::BMFJEMFMLGC>* _EnviroCharacterList; // 0x270
		::PDCIOBGIPJO* _EnvTransitManager; // 0x278
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_CTOR_OFFSET))(this);
		}

		::System::Void SetActiveProfile(::COGBNIGPJPO* a1, ::RPG::GameCore::EnviromentControlPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::COGBNIGPJPO*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETACTIVEPROFILE_OFFSET))(this, a1, a2);
		}

		::System::Void SetActiveProfileAsync(::COGBNIGPJPO* a1, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a2, ::RPG::GameCore::EnviromentControlPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::COGBNIGPJPO*, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETACTIVEPROFILEASYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 ReleasePriority(::RPG::GameCore::EnviromentControlPriority a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_RELEASEPRIORITY_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasPriority(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_HASPRIORITY_OFFSET))(this, a1);
		}

		::System::Void ResetActiveProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESETACTIVEPROFILE_OFFSET))(this);
		}

		::System::Void AddDynamicBlockLight(::KLEFGGIHGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_ADDDYNAMICBLOCKLIGHT_OFFSET))(this, a1);
		}

		::System::Void RemoveDynamicBlockLight(::KLEFGGIHGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_REMOVEDYNAMICBLOCKLIGHT_OFFSET))(this, a1);
		}

		::System::Int32 SetTransitionTargetProfile(::COGBNIGPJPO* a1, ::RPG::GameCore::EnviromentControlPriority a2)
		{
			return ((::System::Int32(*)(::PVOID, ::COGBNIGPJPO*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETTRANSITIONTARGETPROFILE_OFFSET))(this, a1, a2);
		}

		::System::Void FinishTransition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_FINISHTRANSITION_OFFSET))(this, a1);
		}

		::System::Void SetBoolPatch(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Boolean a2, ::RPG::GameCore::EnviromentControlPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Boolean, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETBOOLPATCH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetVectorPatch(::EnviromentSystem::EnviromentPropertiesID a1, ::UnityEngine::Vector4 a2, ::RPG::GameCore::EnviromentControlPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::UnityEngine::Vector4, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETVECTORPATCH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetFloatPatch(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Single a2, ::RPG::GameCore::EnviromentControlPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Single, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETFLOATPATCH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ClearEnviroPatch(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_CLEARENVIROPATCH_OFFSET))(this, a1);
		}

		::System::Void ApplyPatchToActiveProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_APPLYPATCHTOACTIVEPROFILE_OFFSET))(this);
		}

		::System::Void CancelTransition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_CANCELTRANSITION_OFFSET))(this, a1);
		}

		::System::Void SetTransitionRate(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETTRANSITIONRATE_OFFSET))(this, a1, a2);
		}

		::COGBNIGPJPO* GetTODProfile()
		{
			return ((::COGBNIGPJPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETTODPROFILE_OFFSET))(this);
		}

		::System::Void _PushCommmandQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__PUSHCOMMMANDQUEUE_OFFSET))(this);
		}

		::System::Void _RefreshActiveProfileAsync(::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__REFRESHACTIVEPROFILEASYNC_OFFSET))(this, a1);
		}

		::System::Void _RefreshActiveProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__REFRESHACTIVEPROFILE_OFFSET))(this);
		}

		::System::Void _ClearAllCommand(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__CLEARALLCOMMAND_OFFSET))(this, a1);
		}

		::System::Void InitProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_INITPROFILE_OFFSET))(this);
		}

		::System::Void EditorUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_EDITORUPDATE_OFFSET))(this);
		}

		::System::Int32 Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_VERSION_OFFSET))(this);
		}

		::RPG::Client::EnvironmentSystem* InitEnvSystemV2InEditorMode()
		{
			return ((::RPG::Client::EnvironmentSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_INITENVSYSTEMV2INEDITORMODE_OFFSET))(this);
		}

		static ::System::Void InitStaticAndClearScene(::RPG::Client::EnvironmentSystemV1* a1)
		{
			return ((::System::Void(*)(::RPG::Client::EnvironmentSystemV1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_INITSTATICANDCLEARSCENE_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_ONDISABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_START_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_TICK_OFFSET))(this, a1);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_LATETICK_OFFSET))(this, a1);
		}

		::System::Void Set(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SET_OFFSET))(this, a1);
		}

		::System::Void Render(::RPG::CustomRP::GameCameraType a1, ::UnityEngine::Rendering::CommandBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::GameCameraType, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_RENDER_OFFSET))(this, a1, a2);
		}

		::System::Void GetData(::UnityEngine::Rendering::AmbientVolumneData a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AmbientVolumneData))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETDATA_OFFSET))(this, a1);
		}

		::System::Boolean GetIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETISVALID_OFFSET))(this);
		}

		::System::Boolean Init(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_INIT_OFFSET))(this, a1);
		}

		::System::Void InitEnvironmentSystem(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_INITENVIRONMENTSYSTEM_OFFSET))(this, a1);
		}

		::System::Void InitEnvironmentSystemAsync(::COGBNIGPJPO* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::COGBNIGPJPO*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_INITENVIRONMENTSYSTEMASYNC_OFFSET))(this, a1, a2);
		}

		::System::Void CancelAsyncInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_CANCELASYNCINIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_CLEAR_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_UNINIT_OFFSET))(this);
		}

		::System::Void SetEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLE_OFFSET))(this, a1);
		}

		::System::Void RecordMainLightDir()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_RECORDMAINLIGHTDIR_OFFSET))(this);
		}

		::System::Void RestoreMainLightDir()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESTOREMAINLIGHTDIR_OFFSET))(this);
		}

		::System::Void ResetMainLightRoatateOffet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESETMAINLIGHTROATATEOFFET_OFFSET))(this);
		}

		::System::Void ResetPostProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESETPOSTPROCESS_OFFSET))(this);
		}

		::System::Void ResetMainLight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESETMAINLIGHT_OFFSET))(this);
		}

		::System::Void ResetLevelMainLightRoatateOffet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESETLEVELMAINLIGHTROATATEOFFET_OFFSET))(this);
		}

		::System::Void SetMainLightSwitch(::RPG::Client::MainlightSwitchType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainlightSwitchType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETMAINLIGHTSWITCH_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetIsCurSwitchWork(::RPG::Client::MainlightSwitchType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainlightSwitchType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETISCURSWITCHWORK_OFFSET))(this, a1);
		}

		::System::Void DisableEnvGPUParticle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_DISABLEENVGPUPARTICLE_OFFSET))(this);
		}

		::System::Void DisableEnvParticle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_DISABLEENVPARTICLE_OFFSET))(this);
		}

		::System::Void SetEnableUpdate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLEUPDATE_OFFSET))(this, a1);
		}

		::System::Void SetEnableSkyBox(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLESKYBOX_OFFSET))(this, a1);
		}

		::System::Void SetEnableShadowLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLESHADOWLIGHT_OFFSET))(this, a1);
		}

		::System::Void SetEnableCharaLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLECHARALIGHT_OFFSET))(this, a1);
		}

		::System::Void SetEnableSceneLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLESCENELIGHT_OFFSET))(this, a1);
		}

		::RPG::Client::FrameCaptureManager* GetFrameCaptureManager()
		{
			return ((::RPG::Client::FrameCaptureManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETFRAMECAPTUREMANAGER_OFFSET))(this);
		}

		::RPG::Client::PPEffectManager* GetPPEffectManager()
		{
			return ((::RPG::Client::PPEffectManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETPPEFFECTMANAGER_OFFSET))(this);
		}

		::System::Void ForceInitPPEffectManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_FORCEINITPPEFFECTMANAGER_OFFSET))(this);
		}

		::AOJFNAOAAFA* GetMaterialEffectManager()
		{
			return ((::AOJFNAOAAFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETMATERIALEFFECTMANAGER_OFFSET))(this);
		}

		::PDCIOBGIPJO* GetEnvTransitManager()
		{
			return ((::PDCIOBGIPJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETENVTRANSITMANAGER_OFFSET))(this);
		}

		::BONINBGAHOL* GetCapsuleAOManager()
		{
			return ((::BONINBGAHOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETCAPSULEAOMANAGER_OFFSET))(this);
		}

		static ::System::Single _RefProbeGammaToLinearSpace(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__REFPROBEGAMMATOLINEARSPACE_OFFSET))(a1);
		}

		::System::Void _UpdatEnviroPrefabs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATENVIROPREFABS_OFFSET))(this);
		}

		::System::Void _CloseFog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__CLOSEFOG_OFFSET))(this);
		}

		::System::Boolean _CheckEnviromentComponents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__CHECKENVIROMENTCOMPONENTS_OFFSET))(this);
		}

		::System::Void _ApplyPipelineAssetSettings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__APPLYPIPELINEASSETSETTINGS_OFFSET))(this);
		}

		::System::Void _ApplyPipelineShadowSettings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__APPLYPIPELINESHADOWSETTINGS_OFFSET))(this);
		}

		::System::Void _ApplyPipelineQualitySettings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__APPLYPIPELINEQUALITYSETTINGS_OFFSET))(this);
		}

		::System::Void _SetGlobalReflectionProbe()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__SETGLOBALREFLECTIONPROBE_OFFSET))(this);
		}

		::System::Void SetMonsterLightByCameraDir(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETMONSTERLIGHTBYCAMERADIR_OFFSET))(this, a1);
		}

		::System::Void _UpdateEnviroClipsByComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATEENVIROCLIPSBYCOMPONENT_OFFSET))(this);
		}

		::System::Single _GetSceneLightIntensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__GETSCENELIGHTINTENSITY_OFFSET))(this);
		}

		::System::Void _UpdateEnviroLight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATEENVIROLIGHT_OFFSET))(this);
		}

		::System::Void _UpdateSkyBox()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATESKYBOX_OFFSET))(this);
		}

		::System::Void _UpdateCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATECAMERA_OFFSET))(this);
		}

		::System::Void _UpdateVFController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATEVFCONTROLLER_OFFSET))(this);
		}

		::System::Void _TimeOfDayTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__TIMEOFDAYTICK_OFFSET))(this);
		}

		::System::Void _AtmosphereScatteringCelestialControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__ATMOSPHERESCATTERINGCELESTIALCONTROL_OFFSET))(this);
		}

		::System::Void _AtmosphereScatterPrecompute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__ATMOSPHERESCATTERPRECOMPUTE_OFFSET))(this);
		}

		::System::Void _UpdateComponentByEnviroClips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATECOMPONENTBYENVIROCLIPS_OFFSET))(this);
		}

		::System::Void _UpdatePipelineData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATEPIPELINEDATA_OFFSET))(this);
		}

		::COGBNIGPJPO* get_ActiveProfile()
		{
			return ((::COGBNIGPJPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_GET_ACTIVEPROFILE_OFFSET))(this);
		}

		::EnviromentSystem::EnviromentProfile* get_ActiveProfileV1()
		{
			return ((::EnviromentSystem::EnviromentProfile*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_GET_ACTIVEPROFILEV1_OFFSET))(this);
		}

	};
}
