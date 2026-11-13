#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"
class MGPHMNHKHIE;
class OBJANKHLNGO;
namespace RPG::Client::LimaoNews { class LimaoNewsPostZoomControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostZoomInViewModel; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBBCE30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW_ONCONTENTLOADED_OFFSET UNITYSDK_OFFSET(0x1CBBDDA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CBBD300)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x1CBBDD40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CBBCF10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONLEFTTRIGGERPRESS_OFFSET UNITYSDK_OFFSET(0x1CBBE060)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONLIMAONEWSPOSTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CBBDF50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONMOUSEWHEELROLL_OFFSET UNITYSDK_OFFSET(0x1CBBDFF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTSTICKDOWNPRESS_OFFSET UNITYSDK_OFFSET(0x1CBBE1D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTSTICKLEFTPRESS_OFFSET UNITYSDK_OFFSET(0x1CBBE250)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0x1CBBE350)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTSTICKRIGHTPRESS_OFFSET UNITYSDK_OFFSET(0x1CBBE2D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTSTICKUPPRESS_OFFSET UNITYSDK_OFFSET(0x1CBBE150)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTTRIGGERPRESS_OFFSET UNITYSDK_OFFSET(0x1CBBE0D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__SUBSCRIBEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CBBD240)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostZoomInWindow_TypeDefinitionIndex = 83189;

	class LimaoNewsPostZoomInWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::UnityEngine::Transform* _NodeLoaderRoot; // 0x48
		::RPG::UINavigation::UINavigationZone* _NavigationZone; // 0x50
		::UnityEngine::UI::Button* _BtnClose; // 0x58
		::OBJANKHLNGO* _Messenger; // 0x60
		::RPG::Client::LimaoNews::LimaoNewsPostZoomControl* _ZoomControl; // 0x68
		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsPostZoomInViewModel* a1, ::OBJANKHLNGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostZoomInViewModel*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void OnContentLoaded(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW_ONCONTENTLOADED_OFFSET))(this, a1);
		}

		::System::Void _SubscribeMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__SUBSCRIBEMESSAGE_OFFSET))(this);
		}

		::System::Void _OnLimaoNewsPostMessage(::MGPHMNHKHIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGPHMNHKHIE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONLIMAONEWSPOSTMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnMouseWheelRoll(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONMOUSEWHEELROLL_OFFSET))(this, a1);
		}

		::System::Void _OnLeftTriggerPress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONLEFTTRIGGERPRESS_OFFSET))(this, a1);
		}

		::System::Void _OnRightTriggerPress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTTRIGGERPRESS_OFFSET))(this, a1);
		}

		::System::Void _OnRightStickUpPress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTSTICKUPPRESS_OFFSET))(this, a1);
		}

		::System::Void _OnRightStickDownPress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTSTICKDOWNPRESS_OFFSET))(this, a1);
		}

		::System::Void _OnRightStickLeftPress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTSTICKLEFTPRESS_OFFSET))(this, a1);
		}

		::System::Void _OnRightStickRightPress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTSTICKRIGHTPRESS_OFFSET))(this, a1);
		}

		::System::Void _OnRightStickRelease(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTSTICKRELEASE_OFFSET))(this, a1);
		}

	};
}
