#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUIHideItem_HandleSource.h"
#include "unitysdk/MonoUIHideItem_SetupInfo.h"
#include "unitysdk/MonoUIHideItem_ShowStatus.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class UIGlobalAlpha;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }

#define MONOUIHIDEITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x18C42770)
#define MONOUIHIDEITEM_CLEARRUNTIMEFADECONFIG_OFFSET UNITYSDK_OFFSET(0x18C454D0)
#define MONOUIHIDEITEM_GETALPHA_OFFSET UNITYSDK_OFFSET(0x18C446E0)
#define MONOUIHIDEITEM_GETANIMCLIPLENGTH_OFFSET UNITYSDK_OFFSET(0x18C44980)
#define MONOUIHIDEITEM_GETSETUPINFO_OFFSET UNITYSDK_OFFSET(0x18C42540)
#define MONOUIHIDEITEM_GET_ACTIONSETUPINFOS_OFFSET UNITYSDK_OFFSET(0x18C42500)
#define MONOUIHIDEITEM_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x18C42520)
#define MONOUIHIDEITEM_GET_REALTAG_OFFSET UNITYSDK_OFFSET(0x18C42270)
#define MONOUIHIDEITEM_GET_RUNTIMEFADECONFIGS_OFFSET UNITYSDK_OFFSET(0x18C42450)
#define MONOUIHIDEITEM_GET_ZONESETUPINFOS_OFFSET UNITYSDK_OFFSET(0x18C42510)
#define MONOUIHIDEITEM_INTERRUPTSETUP_OFFSET UNITYSDK_OFFSET(0x18C44270)
#define MONOUIHIDEITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18C43310)
#define MONOUIHIDEITEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18C420A0)
#define MONOUIHIDEITEM_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x18C421F0)
#define MONOUIHIDEITEM_ONPARENTSHOWSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x18C443F0)
#define MONOUIHIDEITEM_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x18C421A0)
#define MONOUIHIDEITEM_REFRESHITEM_OFFSET UNITYSDK_OFFSET(0x18C43710)
#define MONOUIHIDEITEM_RESETITEM_OFFSET UNITYSDK_OFFSET(0x18C44870)
#define MONOUIHIDEITEM_SAMPLEANIMLASTFRAME_OFFSET UNITYSDK_OFFSET(0x18C452C0)
#define MONOUIHIDEITEM_SETALPHA_OFFSET UNITYSDK_OFFSET(0x18C44DE0)
#define MONOUIHIDEITEM_SETBLOCKRAYCASTSSTATE_OFFSET UNITYSDK_OFFSET(0x18C45480)
#define MONOUIHIDEITEM_SETUPUI_1_OFFSET UNITYSDK_OFFSET(0x18C43400)
#define MONOUIHIDEITEM_SETUPUI_OFFSET UNITYSDK_OFFSET(0x18C43370)
#define MONOUIHIDEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18C457F0)
#define MONOUIHIDEITEM__GETCURRENTPLAYINGANIM_OFFSET UNITYSDK_OFFSET(0x18C45120)
#define MONOUIHIDEITEM__GETTARGETANIMATIONCLIPNAME_OFFSET UNITYSDK_OFFSET(0x18C44B70)
#define MONOUIHIDEITEM__PLAYANIMATIONWITHDELAYCONFIRM_OFFSET UNITYSDK_OFFSET(0x18C44F90)
#define MONOUIHIDEITEM__REFRESHITEM_B__46_0_OFFSET UNITYSDK_OFFSET(0x18C458D0)
#define MONOUIHIDEITEM__REFRESHITEM_B__46_1_OFFSET UNITYSDK_OFFSET(0x18C458E0)
#define MONOUIHIDEITEM__RESETFADECONFIGS_OFFSET UNITYSDK_OFFSET(0x18C422F0)
#define MONOUIHIDEITEM__SETTOANIMATIONLASTFRAME_OFFSET UNITYSDK_OFFSET(0x18C45690)
#define MONOUIHIDEITEM__STOPCURRENTPLAYINGANIMATIONDELAY_OFFSET UNITYSDK_OFFSET(0x18C45730)

inline static constexpr unsigned int MonoUIHideItem_TypeDefinitionIndex = 55496;

class MonoUIHideItem : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::String* EMPTY_SETUP_TAG; // 0x0
	// static const ::System::String* DEFAULT_TAG; // 0x0
	::System::String* Tag; // 0x18
	::System::Collections::Generic::List_1<::System::Object*>* FadeConfigs; // 0x20
	::System::Collections::Generic::List_1<::System::Object*>* tFadeConfigs; // 0x28
	::UnityEngine::CanvasGroup* _canvasGroup; // 0x30
	::UIGlobalAlpha* _globalAlphaComponent; // 0x38
	::UnityEngine::Animation* _animation; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>* _animClipNameDic; // 0x48
	::System::Int32 _runtimeIdCounter; // 0x50
	::MonoUIHideItem_SetupInfo _defaultSetupInfo; // 0x54
	::System::Boolean _defaultIgnoreParent; // 0x60
	::System::Byte _padding0[0x7];
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _actionSetupInfos; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _zoneSetupInfos; // 0x70
	::System::Boolean _isShow; // 0x78
	::System::Byte _padding1[0x7];
	::UnityEngine::Transform* _highLightTrans; // 0x80
	::UnityEngine::Coroutine* _currentPlaying; // 0x88
	::System::String* _lastPlayAnimName; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM__CTOR_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnLightweightDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::System::String* get_RealTag()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_GET_REALTAG_OFFSET))(this);
	}

	::System::Void _ResetFadeConfigs()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM__RESETFADECONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Object*>* get_RuntimeFadeConfigs()
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_GET_RUNTIMEFADECONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* get_ActionSetupInfos()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_GET_ACTIONSETUPINFOS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* get_ZoneSetupInfos()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_GET_ZONESETUPINFOS_OFFSET))(this);
	}

	::System::Boolean get_IsShow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_GET_ISSHOW_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_AWAKE_OFFSET))(this);
	}

	::System::Void OnRealDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_ONREALDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_ONDESTROY_OFFSET))(this);
	}

	::System::Boolean SetupUI(::MonoUIHideItem_HandleSource handleSource, ::MonoUIHideItem_ShowStatus showStatus, ::System::Boolean ignoreAnimation, ::System::String* setupTag)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoUIHideItem_HandleSource, ::MonoUIHideItem_ShowStatus, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_SETUPUI_OFFSET))(this, handleSource, showStatus, ignoreAnimation, setupTag);
	}

	::System::Boolean SetupUI_1(::MonoUIHideItem_HandleSource handleSource, ::System::String* setupTag, ::System::Int32 priority, ::System::Boolean isShow, ::System::Boolean isHighlight, ::System::Boolean ignoreAnimation)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoUIHideItem_HandleSource, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_SETUPUI_1_OFFSET))(this, handleSource, setupTag, priority, isShow, isHighlight, ignoreAnimation);
	}

	::System::Boolean InterruptSetup(::MonoUIHideItem_HandleSource handleSource, ::System::String* setupTag, ::System::Boolean ignoreAnimation)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoUIHideItem_HandleSource, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_INTERRUPTSETUP_OFFSET))(this, handleSource, setupTag, ignoreAnimation);
	}

	::System::Void OnParentShowStateChanged(::System::Boolean isParentShow)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_ONPARENTSHOWSTATECHANGED_OFFSET))(this, isParentShow);
	}

	::System::Single GetAlpha()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_GETALPHA_OFFSET))(this);
	}

	::System::Boolean ResetItem()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_RESETITEM_OFFSET))(this);
	}

	::System::Single GetAnimClipLength(::MonoUIHideItem_ShowStatus showStatus)
	{
		return ((::System::Single(*)(::PVOID, ::MonoUIHideItem_ShowStatus))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_GETANIMCLIPLENGTH_OFFSET))(this, showStatus);
	}

	::System::Void SetAlpha(::System::Single alpha)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_SETALPHA_OFFSET))(this, alpha);
	}

	::System::String* _GetTargetAnimationClipName(::MonoUIHideItem_ShowStatus showType)
	{
		return ((::System::String*(*)(::PVOID, ::MonoUIHideItem_ShowStatus))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM__GETTARGETANIMATIONCLIPNAME_OFFSET))(this, showType);
	}

	::System::Boolean RefreshItem(::System::Boolean ignoreAnimation)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_REFRESHITEM_OFFSET))(this, ignoreAnimation);
	}

	::System::Void SetBlockRaycastsState(::UnityEngine::CanvasGroup* canvasGroup, ::System::Boolean enable)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::CanvasGroup*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_SETBLOCKRAYCASTSSTATE_OFFSET))(this, canvasGroup, enable);
	}

	::MonoUIHideItem_SetupInfo GetSetupInfo()
	{
		return ((::MonoUIHideItem_SetupInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_GETSETUPINFO_OFFSET))(this);
	}

	::System::Void ClearRuntimeFadeConfig(::MonoUIHideItem_ShowStatus showStatus, ::System::String* animName)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUIHideItem_ShowStatus, ::System::String*))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_CLEARRUNTIMEFADECONFIG_OFFSET))(this, showStatus, animName);
	}

	::System::Void SampleAnimLastFrame(::MonoUIHideItem_ShowStatus showStatus)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUIHideItem_ShowStatus))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_SAMPLEANIMLASTFRAME_OFFSET))(this, showStatus);
	}

	::System::String* _GetCurrentPlayingAnim()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM__GETCURRENTPLAYINGANIM_OFFSET))(this);
	}

	::System::Void _StopCurrentPlayingAnimationDelay()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM__STOPCURRENTPLAYINGANIMATIONDELAY_OFFSET))(this);
	}

	::System::Void _SetToAnimationLastFrame(::System::String* clipName)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM__SETTOANIMATIONLASTFRAME_OFFSET))(this, clipName);
	}

	::System::Void _PlayAnimationWithDelayConfirm(::System::String* animationName, ::System::Action* beforePlay, ::System::Action* onFinish)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM__PLAYANIMATIONWITHDELAYCONFIRM_OFFSET))(this, animationName, beforePlay, onFinish);
	}

	::System::Void _RefreshItem_b__46_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM__REFRESHITEM_B__46_0_OFFSET))(this);
	}

	::System::Void _RefreshItem_b__46_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM__REFRESHITEM_B__46_1_OFFSET))(this);
	}
};
