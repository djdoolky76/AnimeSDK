#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APAEIGKBNHL.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/MoleMole/HackControllableSubsystem___c__DisplayClass37_0.h"

class MCILJDNCFHA;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace MoleMole::Config { class ConfigControllableObjectCommonParam; }
namespace MoleMole::Config { class ControllableObjectTrait; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_CANCELCONTROLLABLEENTERTRANSITION_OFFSET UNITYSDK_OFFSET(0x13588F60)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_CHECKHACKTARGETDISABLEEXIT_OFFSET UNITYSDK_OFFSET(0x1358BD10)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_CLEARMONSTERALERTVALUEFORINVINCIBLEAVATAR_OFFSET UNITYSDK_OFFSET(0x1358AED0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ENDTRANSITION_OFFSET UNITYSDK_OFFSET(0x1358A4D0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ENTERCONTROLLABLECAMERA_OFFSET UNITYSDK_OFFSET(0x13589A80)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ENTERCURRENTCONTROLLABLE_OFFSET UNITYSDK_OFFSET(0x13587660)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_EXITCAMERAHACKSTATE_OFFSET UNITYSDK_OFFSET(0x1358A7F0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_EXITCONTROLLABLEMANUALLY_OFFSET UNITYSDK_OFFSET(0x1358BB40)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_EXITCURRENTCONTROLLABLEBACKTOAVATAR_OFFSET UNITYSDK_OFFSET(0x13584800)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_EXITCURRENTCONTROLLABLE_OFFSET UNITYSDK_OFFSET(0x13586950)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_FIRECONTROLLABLEPRECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x13587050)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_FIRECONTROLLABLESTATECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x13587F90)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETBACKTOAVATARANIMATIONCURVE_OFFSET UNITYSDK_OFFSET(0x135891C0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETBACKTOAVATARCAMERASWITCHTIME_OFFSET UNITYSDK_OFFSET(0x13589150)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCAMERAINITAIMTARGET_OFFSET UNITYSDK_OFFSET(0x135857B0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCAMERAMOVEFOLLOWPOSITION_OFFSET UNITYSDK_OFFSET(0x13585410)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCAMERASWITCHTIME_OFFSET UNITYSDK_OFFSET(0x135890E0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCONTROLLABLETYPEFROMENTITY_OFFSET UNITYSDK_OFFSET(0x13586ED0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCONTROLLABLETYPEFROMTRAIT_OFFSET UNITYSDK_OFFSET(0x13586E80)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCURRENTCONTROLLABLETARGET_OFFSET UNITYSDK_OFFSET(0x1358B960)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCURRENTCONTROLLABLETYPE_OFFSET UNITYSDK_OFFSET(0x1358BA20)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCURRENTCONTROLLABLEVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0x1358B9C0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GET_ISFOLLOWAVATAR_OFFSET UNITYSDK_OFFSET(0x13584330)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13584400)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13584440)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x135852D0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_POSTSCREENEFFECT_OFFSET UNITYSDK_OFFSET(0x13588D30)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_PROCESSFORCEEXITSTREAMINGBLACKFADE_OFFSET UNITYSDK_OFFSET(0x1358B120)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x13584340)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_REGISTERUIEVENTNOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x13585290)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_REPLAYCAMERACONTROLLABLEENTER_OFFSET UNITYSDK_OFFSET(0x1358BB90)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_RESTORESAVEDCAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1358B670)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SAVECURRENTCAMERASTATE_OFFSET UNITYSDK_OFFSET(0x13589280)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SENDPOSSESSEVENTTOVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0x13588C60)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SENDUNPOSSESSEVENTTOVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0x1358A720)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SETCAMERAHACKUIINPUTENABLED_OFFSET UNITYSDK_OFFSET(0x13589830)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SETLOCALAVATARINVINCIBLE_OFFSET UNITYSDK_OFFSET(0x13589570)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SHOULDFORCEEXITSTREAMINGBLACKFADE_OFFSET UNITYSDK_OFFSET(0x1358A9F0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SHOWACTIVEEXITSECONDSURE_OFFSET UNITYSDK_OFFSET(0x1358C0D0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_STARTTRANSITION_OFFSET UNITYSDK_OFFSET(0x1358A230)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SWITCHTOCONTROLLABLEMANUALLY_OFFSET UNITYSDK_OFFSET(0x1358BAE0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SWITCHTOCONTROLLABLE_OFFSET UNITYSDK_OFFSET(0x13585D60)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_TRYCUTRETURNAVATAR_OFFSET UNITYSDK_OFFSET(0x1358B3F0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_TRYEXITBYACTIVEINPUT_OFFSET UNITYSDK_OFFSET(0x1358BEB0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_TRYGETCONTROLLABLECAMERACONFIGBYTRAIT_OFFSET UNITYSDK_OFFSET(0x135867E0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x135843A0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_WAITEXITSTREAMINGLOADED_OFFSET UNITYSDK_OFFSET(0x1358ACC0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1358C480)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1358C410)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM__FIRECONTROLLABLESTATECHANGEEVENT_G__SENDTELEMETRYDATAONCONTROLLABLESTATECHANGE_37_0_OFFSET UNITYSDK_OFFSET(0x135885E0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1358C4E0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1358C570)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1358C600)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1358C690)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1358C720)

namespace MoleMole
{
	inline static constexpr unsigned int HackControllableSubsystem_TypeDefinitionIndex = 41053;

	class HackControllableSubsystem
	{
	public:
		static ::System::String** StaticGet_DefaultControllableConfigKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HackControllableSubsystem_TypeDefinitionIndex)->GetStaticField(0x50C10);
		}
		static ::System::String** StaticGet_CameraHackMuteUITag()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HackControllableSubsystem_TypeDefinitionIndex)->GetStaticField(0x50C18);
		}
		static ::System::String** StaticGet_HackControllableMuteRotateTag()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HackControllableSubsystem_TypeDefinitionIndex)->GetStaticField(0x50C20);
		}
		// static const ::System::String* BackToAvatarHideToken; // 0x0
		// static const ::System::Single ExitStreamingLoadTimeout; // 0x0
		::System::Action* _pendingOnCameraBackAvatarMoveEnd; // 0x10
		::System::String* _controllableEnterScreenEffectKey; // 0x18
		::MoleMole::EntityHandle _currentControllableTarget; // 0x20
		::Foundation::ViewObject::ViewObjectHandle _currentControllableViewObject; // 0x30
		::MoleMole::Cameras::ScopedOverShoulderCamera* _scopedOverShoulderCamera; // 0x40
		::System::Action* _pendingOnCameraMoveEnd; // 0x48
		::MoleMole::Config::ControllableObjectTrait* _currentControllableTrait; // 0x50
		::System::Boolean isFollowAvatar; // 0x58
		::System::Boolean _isActiveExitSecondSureShowing; // 0x59
		::System::Boolean _hasSavedCameraState; // 0x5A
		::System::Boolean _isCameraHackUIInputMuted; // 0x5B
		::UnityEngine::Quaternion _savedCameraRotation; // 0x5C
		::System::Int32 _avatarStreamingId; // 0x6C
		::UnityEngine::Vector3 _savedCameraPosition; // 0x70
		::System::Single _savedCameraPolar; // 0x7C
		::System::Single _savedCameraElevation; // 0x80
		::Foundation::Coroutine::CoroutineHandle _controllableEnterTransitionHandle; // 0x84
		::System::Int32 _overrideControlEntityVersion; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsFollowAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GET_ISFOLLOWAVATAR_OFFSET))(this);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterUIEventNotifyType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_REGISTERUIEVENTNOTIFYTYPE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 GetCameraMoveFollowPosition()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCAMERAMOVEFOLLOWPOSITION_OFFSET))();
		}

		static ::Foundation::Variable_1<::UnityEngine::Vector3> GetCameraInitAimTarget(::MoleMole::Config::ConfigControllableObjectCommonParam* config, ::MoleMole::EntityHandle controllable, ::UnityEngine::Vector3 up)
		{
			return ((::Foundation::Variable_1<::UnityEngine::Vector3>(*)(::MoleMole::Config::ConfigControllableObjectCommonParam*, ::MoleMole::EntityHandle, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCAMERAINITAIMTARGET_OFFSET))(config, controllable, up);
		}

		::System::Void SwitchToControllable(::MoleMole::Battle::Entity* controllableEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SWITCHTOCONTROLLABLE_OFFSET))(this, controllableEntity);
		}

		static ::APAEIGKBNHL GetControllableTypeFromEntity(::MoleMole::EntityHandle entity)
		{
			return ((::APAEIGKBNHL(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCONTROLLABLETYPEFROMENTITY_OFFSET))(entity);
		}

		static ::APAEIGKBNHL GetControllableTypeFromTrait(::MoleMole::Config::ControllableObjectTrait* trait)
		{
			return ((::APAEIGKBNHL(*)(::MoleMole::Config::ControllableObjectTrait*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCONTROLLABLETYPEFROMTRAIT_OFFSET))(trait);
		}

		static ::System::Void FireControllablePreChangeEvent(::APAEIGKBNHL newType, ::APAEIGKBNHL oldType, ::Foundation::ViewObject::ViewObjectHandle viewObject, ::Foundation::ViewObject::ViewObjectHandle previousViewObject)
		{
			return ((::System::Void(*)(::APAEIGKBNHL, ::APAEIGKBNHL, ::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_FIRECONTROLLABLEPRECHANGEEVENT_OFFSET))(newType, oldType, viewObject, previousViewObject);
		}

		static ::System::Void FireControllableStateChangeEvent(::APAEIGKBNHL newType, ::APAEIGKBNHL oldType, ::Foundation::ViewObject::ViewObjectHandle viewObject, ::Foundation::ViewObject::ViewObjectHandle previousViewObject)
		{
			return ((::System::Void(*)(::APAEIGKBNHL, ::APAEIGKBNHL, ::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_FIRECONTROLLABLESTATECHANGEEVENT_OFFSET))(newType, oldType, viewObject, previousViewObject);
		}

		::System::Void SendPossessEventToViewObject(::MoleMole::EntityHandle previousControllable)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SENDPOSSESSEVENTTOVIEWOBJECT_OFFSET))(this, previousControllable);
		}

		::System::Boolean TryGetControllableCameraConfigByTrait(::MoleMole::Config::ControllableObjectTrait* trait, ::MoleMole::Config::ConfigControllableObjectCommonParam*& hackControllable)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ControllableObjectTrait*, ::MoleMole::Config::ConfigControllableObjectCommonParam*&))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_TRYGETCONTROLLABLECAMERACONFIGBYTRAIT_OFFSET))(this, trait, hackControllable);
		}

		::System::Void PostScreenEffect(::MoleMole::Config::ScreenEffectType screenEffectType, ::System::String* screenEffectName, ::System::Single cameraTime, ::System::Action* endEffectAction, ::Foundation::Coroutine::CoroutineHandle coroutineHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::Single, ::System::Action*, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_POSTSCREENEFFECT_OFFSET))(this, screenEffectType, screenEffectName, cameraTime, endEffectAction, coroutineHandle);
		}

		::System::Void CancelControllableEnterTransition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_CANCELCONTROLLABLEENTERTRANSITION_OFFSET))(this);
		}

		::System::Single GetCameraSwitchTime(::MoleMole::Config::ConfigControllableObjectCommonParam* hackControllable)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Config::ConfigControllableObjectCommonParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCAMERASWITCHTIME_OFFSET))(this, hackControllable);
		}

		::System::Single GetBackToAvatarCameraSwitchTime(::MoleMole::Config::ConfigControllableObjectCommonParam* hackControllable)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Config::ConfigControllableObjectCommonParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETBACKTOAVATARCAMERASWITCHTIME_OFFSET))(this, hackControllable);
		}

		::UnityEngine::AnimationCurve* GetBackToAvatarAnimationCurve(::MoleMole::Config::ConfigControllableObjectCommonParam* hackControllable)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::MoleMole::Config::ConfigControllableObjectCommonParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETBACKTOAVATARANIMATIONCURVE_OFFSET))(this, hackControllable);
		}

		::System::Void EnterCurrentControllable(::MoleMole::EntityHandle previousControllable, ::MoleMole::Config::ConfigControllableObjectCommonParam* controllableConfig)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::Config::ConfigControllableObjectCommonParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ENTERCURRENTCONTROLLABLE_OFFSET))(this, previousControllable, controllableConfig);
		}

		::System::Void StartTransition(::System::Boolean isEnter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_STARTTRANSITION_OFFSET))(this, isEnter);
		}

		::System::Void EndTransition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ENDTRANSITION_OFFSET))(this);
		}

		::System::Void SetCameraHackUIInputEnabled(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SETCAMERAHACKUIINPUTENABLED_OFFSET))(this, enabled);
		}

		::System::Void SaveCurrentCameraState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SAVECURRENTCAMERASTATE_OFFSET))(this);
		}

		::System::Void EnterControllableCamera(::MoleMole::EntityHandle entity, ::MoleMole::Config::ConfigControllableObjectCommonParam* controllableConfig)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::Config::ConfigControllableObjectCommonParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_ENTERCONTROLLABLECAMERA_OFFSET))(this, entity, controllableConfig);
		}

		::System::Void ExitCurrentControllable(::MoleMole::EntityHandle nextPossessedEntity, ::System::Boolean isBackToAvatar)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_EXITCURRENTCONTROLLABLE_OFFSET))(this, nextPossessedEntity, isBackToAvatar);
		}

		::System::Boolean ShouldForceExitStreamingBlackFade(::UnityEngine::Vector3& avatarPosition)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SHOULDFORCEEXITSTREAMINGBLACKFADE_OFFSET))(this, avatarPosition);
		}

		static ::System::Action* WaitExitStreamingLoaded(::UnityEngine::Vector3 position, ::System::Action* onLoaded)
		{
			return ((::System::Action*(*)(::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_WAITEXITSTREAMINGLOADED_OFFSET))(position, onLoaded);
		}

		::System::Void SetLocalAvatarInvincible(::System::Boolean invincible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SETLOCALAVATARINVINCIBLE_OFFSET))(this, invincible);
		}

		static ::System::Void ClearMonsterAlertValueForInvincibleAvatar()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_CLEARMONSTERALERTVALUEFORINVINCIBLEAVATAR_OFFSET))();
		}

		::System::Void SendUnpossessEventToViewObject(::MoleMole::EntityHandle nextPossessedEntity, ::System::Boolean isBackToAvatar)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SENDUNPOSSESSEVENTTOVIEWOBJECT_OFFSET))(this, nextPossessedEntity, isBackToAvatar);
		}

		::System::Void ExitCameraHackState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_EXITCAMERAHACKSTATE_OFFSET))(this);
		}

		::System::Void ExitCurrentControllableBackToAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_EXITCURRENTCONTROLLABLEBACKTOAVATAR_OFFSET))(this);
		}

		static ::System::Void ProcessForceExitStreamingBlackFade(::UnityEngine::Vector3 exitStreamingPosition, ::System::Single cameraTime, ::System::Single fadeInTime, ::System::Single fadeOutTime, ::UnityEngine::AnimationCurve* curve, ::System::Func_1<::System::Boolean>* isBackToAvatarFinished, ::System::Action* startBackToAvatar, ::System::Action* finishBackToAvatar)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Func_1<::System::Boolean>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_PROCESSFORCEEXITSTREAMINGBLACKFADE_OFFSET))(exitStreamingPosition, cameraTime, fadeInTime, fadeOutTime, curve, isBackToAvatarFinished, startBackToAvatar, finishBackToAvatar);
		}

		::System::Void TryCutReturnAvatar(::System::Boolean needExitCamera, ::MoleMole::Config::ConfigControllableObjectCommonParam* hackControllable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::ConfigControllableObjectCommonParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_TRYCUTRETURNAVATAR_OFFSET))(this, needExitCamera, hackControllable);
		}

		::System::Void RestoreSavedCameraState(::System::Boolean syncBlenderData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_RESTORESAVEDCAMERASTATE_OFFSET))(this, syncBlenderData);
		}

		::MoleMole::EntityHandle GetCurrentControllableTarget()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCURRENTCONTROLLABLETARGET_OFFSET))(this);
		}

		::Foundation::ViewObject::ViewObjectHandle GetCurrentControllableViewObject()
		{
			return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCURRENTCONTROLLABLEVIEWOBJECT_OFFSET))(this);
		}

		::APAEIGKBNHL GetCurrentControllableType()
		{
			return ((::APAEIGKBNHL(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_GETCURRENTCONTROLLABLETYPE_OFFSET))(this);
		}

		::System::Void SwitchToControllableManually(::MoleMole::Battle::Entity* entity, ::System::Action* onCameraMoveEnd)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SWITCHTOCONTROLLABLEMANUALLY_OFFSET))(this, entity, onCameraMoveEnd);
		}

		::System::Void ExitControllableManually(::System::Action* onCameraBackAvatarMoveEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_EXITCONTROLLABLEMANUALLY_OFFSET))(this, onCameraBackAvatarMoveEnd);
		}

		::System::Boolean ReplayCameraControllableEnter(::System::Action* onCameraMoveEnd)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_REPLAYCAMERACONTROLLABLEENTER_OFFSET))(this, onCameraMoveEnd);
		}

		::System::Boolean CheckHackTargetDisableExit(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_CHECKHACKTARGETDISABLEEXIT_OFFSET))(this, entityHandle);
		}

		::System::Void TryExitByActiveInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_TRYEXITBYACTIVEINPUT_OFFSET))(this);
		}

		::System::Void ShowActiveExitSecondSure(::MCILJDNCFHA* controllableCom)
		{
			return ((::System::Void(*)(::PVOID, ::MCILJDNCFHA*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM_SHOWACTIVEEXITSECONDSURE_OFFSET))(this, controllableCom);
		}

		static ::System::Void _FireControllableStateChangeEvent_g__SendTelemetryDataOnControllableStateChange_37_0(::MoleMole::HackControllableSubsystem___c__DisplayClass37_0& param_0)
		{
			return ((::System::Void(*)(::MoleMole::HackControllableSubsystem___c__DisplayClass37_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM__FIRECONTROLLABLESTATECHANGEEVENT_G__SENDTELEMETRYDATAONCONTROLLABLESTATECHANGE_37_0_OFFSET))(param_0);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void __base_UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
