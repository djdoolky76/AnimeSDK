#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimMouseCursorCtrl_CursorState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C396D50)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C396CB0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_SETCURSORHANDLER_OFFSET UNITYSDK_OFFSET(0x1C396740)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_SETENABLE_OFFSET UNITYSDK_OFFSET(0x1C396560)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_START_OFFSET UNITYSDK_OFFSET(0x1C396790)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C396840)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__DEFAULTCURSORHANDLER_OFFSET UNITYSDK_OFFSET(0x1C396C00)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__ISANYMOVED_OFFSET UNITYSDK_OFFSET(0x1C3969D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__TRYHIDECURSOR_OFFSET UNITYSDK_OFFSET(0x1C396B90)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__TRYSHOWCURSOR_OFFSET UNITYSDK_OFFSET(0x1C396B10)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimMouseCursorCtrl_TypeDefinitionIndex = 79557;

	class FiveDimMouseCursorCtrl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _AutoHideSeconds; // 0x18
		::System::Byte _padding0[0x4];
		::System::Action_1<::System::Boolean>* _CurSorHandler; // 0x20
		::RPG::Client::LittleGame::FiveDim::FiveDimMouseCursorCtrl_CursorState _CursorState; // 0x28
		::System::Boolean _Enabled; // 0x2C
		::System::Byte _padding1[0x3];
		::System::Single _CountDown; // 0x30
		// static const ::System::String* _MOUSE_X; // 0x0
		// static const ::System::String* _MOUSE_Y; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_CTOR_OFFSET))(this);
		}

		::System::Void SetEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_SETENABLE_OFFSET))(this, a1);
		}

		::System::Void SetCursorHandler(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_SETCURSORHANDLER_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_UPDATE_OFFSET))(this);
		}

		::System::Void _TryShowCursor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__TRYSHOWCURSOR_OFFSET))(this);
		}

		::System::Void _TryHideCursor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__TRYHIDECURSOR_OFFSET))(this);
		}

		::System::Boolean _IsAnyMoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__ISANYMOVED_OFFSET))(this);
		}

		::System::Void _DefaultCursorHandler(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL__DEFAULTCURSORHANDLER_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMOUSECURSORCTRL_ONDESTROY_OFFSET))(this);
		}

	};
}
