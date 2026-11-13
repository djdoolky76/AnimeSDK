#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/IceMachineState.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::ComicDessert { class ViewModelEventHandler; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_ADD_ONNODEVISIBLECHANGED_OFFSET UNITYSDK_OFFSET(0x1C372BA0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_ADD_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x1C372AE0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C372FC0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_GET_ISAUTO_OFFSET UNITYSDK_OFFSET(0x1C372AC0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_GET_NODEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C372AA0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_GET_STIRCURRENT_OFFSET UNITYSDK_OFFSET(0x1C372A60)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_GET_STIRTOTAL_OFFSET UNITYSDK_OFFSET(0x1C372A80)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1C372C60)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1C372D50)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_ISMAKING_OFFSET UNITYSDK_OFFSET(0x1C372D00)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_ISSTIRRING_OFFSET UNITYSDK_OFFSET(0x1C372CB0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_REMOVE_ONNODEVISIBLECHANGED_OFFSET UNITYSDK_OFFSET(0x1C372C00)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_REMOVE_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x1C372B40)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_SETAUTO_OFFSET UNITYSDK_OFFSET(0x1C372F40)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_SETNODEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C372EC0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_SETSTATE_OFFSET UNITYSDK_OFFSET(0x1C372DA0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_SETSTIRPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C372E10)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_SET_ISAUTO_OFFSET UNITYSDK_OFFSET(0x1C372AD0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_SET_NODEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C372AB0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_SET_STIRCURRENT_OFFSET UNITYSDK_OFFSET(0x1C372A70)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_SET_STIRTOTAL_OFFSET UNITYSDK_OFFSET(0x1C372A90)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int IceMachineViewModel_TypeDefinitionIndex = 80137;

	class IceMachineViewModel : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* OnNodeVisibleChanged; // 0x10
		::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* OnRefresh; // 0x18
		::System::Single _StirCurrent_k__BackingField; // 0x20
		::System::Boolean _NodeVisible_k__BackingField; // 0x24
		::System::Boolean _IsAuto_k__BackingField; // 0x25
		::System::Byte _padding0[0x2];
		::RPG::Client::LittleGame::ComicDessert::IceMachineState _State; // 0x28
		::System::Single _StirTotal_k__BackingField; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_CTOR_OFFSET))(this);
		}

		::System::Single get_StirCurrent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_GET_STIRCURRENT_OFFSET))(this);
		}

		::System::Void set_StirCurrent(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_SET_STIRCURRENT_OFFSET))(this, a1);
		}

		::System::Single get_StirTotal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_GET_STIRTOTAL_OFFSET))(this);
		}

		::System::Void set_StirTotal(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_SET_STIRTOTAL_OFFSET))(this, a1);
		}

		::System::Boolean get_NodeVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_GET_NODEVISIBLE_OFFSET))(this);
		}

		::System::Void set_NodeVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_SET_NODEVISIBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAuto()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_GET_ISAUTO_OFFSET))(this);
		}

		::System::Void set_IsAuto(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_SET_ISAUTO_OFFSET))(this, a1);
		}

		::System::Void add_OnRefresh(::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_ADD_ONREFRESH_OFFSET))(this, a1);
		}

		::System::Void remove_OnRefresh(::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_REMOVE_ONREFRESH_OFFSET))(this, a1);
		}

		::System::Void add_OnNodeVisibleChanged(::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_ADD_ONNODEVISIBLECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnNodeVisibleChanged(::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_REMOVE_ONNODEVISIBLECHANGED_OFFSET))(this, a1);
		}

		::System::Boolean IsDefault()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_ISDEFAULT_OFFSET))(this);
		}

		::System::Boolean IsStirring()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_ISSTIRRING_OFFSET))(this);
		}

		::System::Boolean IsMaking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_ISMAKING_OFFSET))(this);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_ISFINISH_OFFSET))(this);
		}

		::System::Void SetState(::RPG::Client::LittleGame::ComicDessert::IceMachineState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::IceMachineState))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_SETSTATE_OFFSET))(this, a1);
		}

		::System::Void SetStirProgress(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_SETSTIRPROGRESS_OFFSET))(this, a1, a2);
		}

		::System::Void SetNodeVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_SETNODEVISIBLE_OFFSET))(this, a1);
		}

		::System::Void SetAuto(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ICEMACHINEVIEWMODEL_SETAUTO_OFFSET))(this, a1);
		}

	};
}
