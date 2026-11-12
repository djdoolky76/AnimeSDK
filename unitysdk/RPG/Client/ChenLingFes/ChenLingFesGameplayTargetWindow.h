#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"
class EFCAILJAEKA;
class HNLOAGNKKIC;
class OBJANKHLNGO;
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayTargetDotControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayTargetItemControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayTargetViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW_CTOR_OFFSET UNITYSDK_OFFSET(0xD412CA0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD413E80)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONANIMCALLBACK_OFFSET UNITYSDK_OFFSET(0xD414DE0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONBACKPRESSEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD413B90)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD413F30)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONCLOSE_OFFSET UNITYSDK_OFFSET(0xD4149F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xD414950)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD412DD0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONSWITCHTOWEEK_OFFSET UNITYSDK_OFFSET(0xD414A80)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__PLAYGLOBALTOWEEKTRANSITION_OFFSET UNITYSDK_OFFSET(0xD414C60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__PLAYPROGRESSANIM_OFFSET UNITYSDK_OFFSET(0xD416510)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__REFRESHBYCURRENTPAGE_OFFSET UNITYSDK_OFFSET(0xD414680)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPGLOBALTITLE_OFFSET UNITYSDK_OFFSET(0xD4157B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPLEFTALIGNEDPROGRESS_OFFSET UNITYSDK_OFFSET(0xD416940)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPPROGRESSBAR_OFFSET UNITYSDK_OFFSET(0xD416860)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPSTATES_OFFSET UNITYSDK_OFFSET(0xD4151F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPWEEKITEM_OFFSET UNITYSDK_OFFSET(0xD415C50)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPWEEKTITLE_OFFSET UNITYSDK_OFFSET(0xD415980)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SHOWCURWEEKITEMREFRESH_OFFSET UNITYSDK_OFFSET(0xD4161F0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayTargetWindow_TypeDefinitionIndex = 84111;

	class ChenLingFesGameplayTargetWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::UnityEngine::Transform* _NodeWeekSubTitleStar; // 0x48
		::UnityEngine::RectTransform* _ProgressNormal; // 0x50
		::UnityEngine::UI::Text* _TextGlobalTitle; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetItemControl*>* _WeekItemControls; // 0x60
		::UnityEngine::UI::Text* _TextWeekSubTitle; // 0x68
		::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetItemControl* _CurTargetItemControl; // 0x70
		::UnityEngine::Animation* _Anim; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetDotControl*>* _WeekDotControls; // 0x80
		::RPG::Client::UIStateCtrl* _StateCtrl; // 0x88
		::UnityEngine::RectTransform* _ProgressEndless; // 0x90
		::UnityEngine::UI::Button* _BtnContinue; // 0x98
		::RPG::Client::UIStateCtrl* _StageModeStateCtrl; // 0xA0
		::UnityEngine::UI::Button* _BtnEmpty; // 0xA8
		::RPG::Client::MonoAnimationTrigger* _AnimTrigger; // 0xB0
		::RPG::Client::UIValueChangeAnimation* _UIValueChangeAnimation; // 0xB8
		::RPG::Client::UIStateCtrl* _ProgressStateCtrl; // 0xC0
		::UnityEngine::UI::Text* _TextWeekTitle; // 0xC8
		::OBJANKHLNGO* _Messenger; // 0xD0
		::System::Boolean _HasSwitchedToWeekInTransition; // 0xD8
		::System::Boolean _IsInSwitchTransition; // 0xD9
		::System::Boolean _IsWaitingSwitchAnimEvent; // 0xDA
		// static const ::System::String* _ToCurrentStageAnimStateName; // 0x0
		// static const ::System::String* _AnimEventChangeRootType; // 0x0
		// static const ::System::String* _AnimEventCurrent; // 0x0
		// static const ::System::String* _AnimEventProgressIncrease; // 0x0
		::System::Void _ctor(::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetViewModel* a1, ::OBJANKHLNGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetViewModel*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Boolean _OnBackPressedCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONBACKPRESSEDCALLBACK_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _OnClose(::HNLOAGNKKIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLOAGNKKIC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONCLOSE_OFFSET))(this, a1);
		}

		::System::Void _OnSwitchToWeek(::EFCAILJAEKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFCAILJAEKA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONSWITCHTOWEEK_OFFSET))(this, a1);
		}

		::System::Void _PlayGlobalToWeekTransition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__PLAYGLOBALTOWEEKTRANSITION_OFFSET))(this);
		}

		::System::Void _OnAnimCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__ONANIMCALLBACK_OFFSET))(this, a1);
		}

		::System::Void _RefreshByCurrentPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__REFRESHBYCURRENTPAGE_OFFSET))(this);
		}

		::System::Void _SetupStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPSTATES_OFFSET))(this);
		}

		::System::Void _SetupGlobalTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPGLOBALTITLE_OFFSET))(this);
		}

		::System::Void _SetupWeekTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPWEEKTITLE_OFFSET))(this);
		}

		::System::Void _SetupWeekItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPWEEKITEM_OFFSET))(this);
		}

		::System::Void _ShowCurWeekItemRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SHOWCURWEEKITEMREFRESH_OFFSET))(this);
		}

		::System::Void _SetupProgressBar(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPPROGRESSBAR_OFFSET))(this, a1);
		}

		::System::Void _PlayProgressAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__PLAYPROGRESSANIM_OFFSET))(this);
		}

		static ::System::Void _SetupLeftAlignedProgress(::UnityEngine::RectTransform* a1, ::System::Single a2, ::UnityEngine::RectTransform* a3)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW__SETUPLEFTALIGNEDPROGRESS_OFFSET))(a1, a2, a3);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}

	};
}
