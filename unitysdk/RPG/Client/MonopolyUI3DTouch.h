#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client { class MonopolyDragMapCmpt; }
namespace RPG::Client { class MonopolyUI3DTouch_FingerUtil; }

#define RPG_CLIENT_MONOPOLYUI3DTOUCH_CTOR_OFFSET UNITYSDK_OFFSET(0xE302640)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_ISPAGENOTFOCUSED_OFFSET UNITYSDK_OFFSET(0xE301C20)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0xE301DD0)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE301E10)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_ONSWIPEEND_OFFSET UNITYSDK_OFFSET(0xE302570)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_ONSWIPESTART_OFFSET UNITYSDK_OFFSET(0xE3020A0)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_ONSWIPE_OFFSET UNITYSDK_OFFSET(0xE3023B0)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_ONTOUCHSTART_OFFSET UNITYSDK_OFFSET(0xE301E60)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_ONTOUCHUP_OFFSET UNITYSDK_OFFSET(0xE301F70)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_RESETTOUCH_OFFSET UNITYSDK_OFFSET(0xE301B20)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_SIMULATETOUCH_OFFSET UNITYSDK_OFFSET(0xE3022D0)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_START_OFFSET UNITYSDK_OFFSET(0xE301D00)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_SUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0xE3011E0)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_UNSUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0xE301680)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyUI3DTouch_TypeDefinitionIndex = 74927;

	class MonopolyUI3DTouch : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MonopolyUI3DTouch_FingerUtil* _fingerUtil; // 0x18
		::RPG::Client::MonopolyDragMapCmpt* _DragCmpt; // 0x20
		::System::Boolean _IsApplicationQuiting; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_CTOR_OFFSET))(this);
		}

		::System::Void SubscribeEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_SUBSCRIBEEVENT_OFFSET))(this);
		}

		::System::Void UnsubscribeEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_UNSUBSCRIBEEVENT_OFFSET))(this);
		}

		::System::Void ResetTouch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_RESETTOUCH_OFFSET))(this);
		}

		::System::Boolean IsPageNotFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_ISPAGENOTFOCUSED_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_START_OFFSET))(this);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnTouchStart(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_ONTOUCHSTART_OFFSET))(this, a1);
		}

		::System::Void OnTouchUp(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_ONTOUCHUP_OFFSET))(this, a1);
		}

		::System::Void OnSwipeStart(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_ONSWIPESTART_OFFSET))(this, a1);
		}

		::System::Void SimulateTouch(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_SIMULATETOUCH_OFFSET))(this, a1);
		}

		::System::Void OnSwipe(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_ONSWIPE_OFFSET))(this, a1);
		}

		::System::Void OnSwipeEnd(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_ONSWIPEEND_OFFSET))(this, a1);
		}

	};
}
