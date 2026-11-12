#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/FeverStyle.h"
#include "unitysdk/System/Object.h"
class DFMAEHCEIHC;
namespace RPG::Client::LittleGame::ComicDessert { class ViewModelEventHandler; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_ADD_ONGAMEPAUSECHANGED_OFFSET UNITYSDK_OFFSET(0xDE856F0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_ADD_ONREFRESH_OFFSET UNITYSDK_OFFSET(0xDE85630)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xDE85460)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_GET_CHARGE_OFFSET UNITYSDK_OFFSET(0xDE85500)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_GET_FEVERSTATENAME_OFFSET UNITYSDK_OFFSET(0xDE85520)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_GET_ISGAMEPAUSED_OFFSET UNITYSDK_OFFSET(0xDE85470)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xDE855B0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_GET_THRESHOLD_OFFSET UNITYSDK_OFFSET(0xDE85510)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0xDE854E0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_NOTIFYGAMEPAUSEDCHANGED_OFFSET UNITYSDK_OFFSET(0xDE85A30)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_REMOVE_ONGAMEPAUSECHANGED_OFFSET UNITYSDK_OFFSET(0xDE85750)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_REMOVE_ONREFRESH_OFFSET UNITYSDK_OFFSET(0xDE85690)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_SETFEVERCHARGE_OFFSET UNITYSDK_OFFSET(0xDE858B0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_SETFEVERSTATE_OFFSET UNITYSDK_OFFSET(0xDE85830)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_SETFEVERTIMER_OFFSET UNITYSDK_OFFSET(0xDE85930)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_SETFEVERVISIBLE_OFFSET UNITYSDK_OFFSET(0xDE857B0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_SET_VISIBLE_OFFSET UNITYSDK_OFFSET(0xDE854F0)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertFeverViewModel_TypeDefinitionIndex = 80119;

	class ComicDessertFeverViewModel : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* OnGamePauseChanged; // 0x10
		::DFMAEHCEIHC* _GameUIService; // 0x18
		::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* OnRefresh; // 0x20
		::System::Int32 _Threshold; // 0x28
		::System::Boolean _Visible_k__BackingField; // 0x2C
		::System::Boolean _IsFever; // 0x2D
		::System::Byte _padding0[0x2];
		::System::Single _TimerLeft; // 0x30
		::System::Int32 _Charge; // 0x34
		::RPG::Client::LittleGame::ComicDessert::FeverStyle _Style; // 0x38
		::System::Single _TimerTotal; // 0x3C
		// static const ::System::String* StateNormal; // 0x0
		// static const ::System::String* StateCold; // 0x0
		// static const ::System::String* StateHot; // 0x0
		::System::Void _ctor(::DFMAEHCEIHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFMAEHCEIHC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsGamePaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_GET_ISGAMEPAUSED_OFFSET))(this);
		}

		::System::Boolean get_Visible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_GET_VISIBLE_OFFSET))(this);
		}

		::System::Void set_Visible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_SET_VISIBLE_OFFSET))(this, a1);
		}

		::System::Int32 get_Charge()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_GET_CHARGE_OFFSET))(this);
		}

		::System::Int32 get_Threshold()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_GET_THRESHOLD_OFFSET))(this);
		}

		::System::String* get_FeverStateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_GET_FEVERSTATENAME_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void add_OnRefresh(::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_ADD_ONREFRESH_OFFSET))(this, a1);
		}

		::System::Void remove_OnRefresh(::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_REMOVE_ONREFRESH_OFFSET))(this, a1);
		}

		::System::Void add_OnGamePauseChanged(::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_ADD_ONGAMEPAUSECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnGamePauseChanged(::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_REMOVE_ONGAMEPAUSECHANGED_OFFSET))(this, a1);
		}

		::System::Void SetFeverVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_SETFEVERVISIBLE_OFFSET))(this, a1);
		}

		::System::Void SetFeverState(::System::Boolean a1, ::RPG::Client::LittleGame::ComicDessert::FeverStyle a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::LittleGame::ComicDessert::FeverStyle))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_SETFEVERSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetFeverCharge(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_SETFEVERCHARGE_OFFSET))(this, a1, a2);
		}

		::System::Void SetFeverTimer(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_SETFEVERTIMER_OFFSET))(this, a1, a2);
		}

		::System::Void NotifyGamePausedChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTFEVERVIEWMODEL_NOTIFYGAMEPAUSEDCHANGED_OFFSET))(this);
		}

	};
}
