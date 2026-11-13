#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PetMarble/PetMarbleMatchModeType.h"
#include "unitysdk/RPG/Client/PetMarble/PetMarbleMatchState.h"
#include "unitysdk/System/Object.h"
class FEGOPJNNFML;
namespace RPG::Client::PetMarble { class PetMarbleMatchController; }
namespace RPG::Client::PetMarble { class PetMarblePlayer; }
namespace RPG::Client::PetMarble::Level { class IPetMarbleLevelMode; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_CREATE_OFFSET UNITYSDK_OFFSET(0x1C1F7740)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1F7650)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C1F7E40)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_ENDMATCH_OFFSET UNITYSDK_OFFSET(0x1C1F8230)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_EXITMARBLEMATCH_OFFSET UNITYSDK_OFFSET(0x1C1F87F0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_EXITPROMISE_OFFSET UNITYSDK_OFFSET(0x1C1F7DF0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_GETLEVELMODE_OFFSET UNITYSDK_OFFSET(0x1C1F7FE0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_GET_ALLYTEAMPLAYER_OFFSET UNITYSDK_OFFSET(0x1C1F8F30)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_GET_CURRENTMODETYPE_OFFSET UNITYSDK_OFFSET(0x1C1F7A00)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_GET_MATCHSTATE_OFFSET UNITYSDK_OFFSET(0x1C1F8F50)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_GET_SELFPLAYER_OFFSET UNITYSDK_OFFSET(0x1C1F8F10)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_ONATTENTION_OFFSET UNITYSDK_OFFSET(0x1C1F8590)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x1C1F8020)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_SETCOOPPLAYER_OFFSET UNITYSDK_OFFSET(0x1C1F7F90)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_SETMATCHSTATE_OFFSET UNITYSDK_OFFSET(0x1C1F8080)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_SETSELFPLAYER_OFFSET UNITYSDK_OFFSET(0x1C1F7F40)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_SETSELFREADY_OFFSET UNITYSDK_OFFSET(0x1C1F8390)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_SETUIREFRESHACTION_OFFSET UNITYSDK_OFFSET(0x1C1F8540)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_SET_ALLYTEAMPLAYER_OFFSET UNITYSDK_OFFSET(0x1C1F8F40)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_SET_MATCHSTATE_OFFSET UNITYSDK_OFFSET(0x1C1F8F60)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_SET_SELFPLAYER_OFFSET UNITYSDK_OFFSET(0x1C1F8F20)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0x1C1F86A0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_STARTMATCH_OFFSET UNITYSDK_OFFSET(0x1C1F80D0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_SWITCHMODEPROMISE_OFFSET UNITYSDK_OFFSET(0x1C1F77D0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER__CREATEMATCHMODE_OFFSET UNITYSDK_OFFSET(0x1C1F89E0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER__ENTERNEWMODE_OFFSET UNITYSDK_OFFSET(0x1C1F8BF0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER__GETMATCHMODE_OFFSET UNITYSDK_OFFSET(0x1C1F8A90)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER__LEAVECURRENTMODE_OFFSET UNITYSDK_OFFSET(0x1C1F7B50)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER__ONCONTEXTCHANGED_OFFSET UNITYSDK_OFFSET(0x1C1F8DB0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER___LEAVECURRENTMODE_B__19_0_OFFSET UNITYSDK_OFFSET(0x1C1F8F70)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleMatchController_TypeDefinitionIndex = 76857;

	class PetMarbleMatchController : public ::System::Object
	{
	public:
		::FEGOPJNNFML* _CurrentMatchMode; // 0x10
		::RPG::Client::PetMarble::PetMarblePlayer* _SelfPlayer_k__BackingField; // 0x18
		::RPG::Client::PetMarble::PetMarblePlayer* _AllyTeamPlayer_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::PetMarble::PetMarbleMatchModeType, ::FEGOPJNNFML*>* _MatchModes; // 0x28
		::System::Action* _UIRefreshAction; // 0x30
		::RPG::Client::PetMarble::Level::IPetMarbleLevelMode* _LevelMode; // 0x38
		::RPG::Client::PetMarble::PetMarbleMatchState _MatchState_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PetMarble::PetMarbleMatchController* Create(::RPG::Client::PetMarble::Level::IPetMarbleLevelMode* a1)
		{
			return ((::RPG::Client::PetMarble::PetMarbleMatchController*(*)(::RPG::Client::PetMarble::Level::IPetMarbleLevelMode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_CREATE_OFFSET))(a1);
		}

		::RPG::Client::Promises::Promise* SwitchModePromise(::RPG::Client::PetMarble::PetMarbleMatchModeType a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::RPG::Client::PetMarble::PetMarbleMatchModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_SWITCHMODEPROMISE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* ExitPromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_EXITPROMISE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetSelfPlayer(::RPG::Client::PetMarble::PetMarblePlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::PetMarblePlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_SETSELFPLAYER_OFFSET))(this, a1);
		}

		::System::Void SetCoopPlayer(::RPG::Client::PetMarble::PetMarblePlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::PetMarblePlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_SETCOOPPLAYER_OFFSET))(this, a1);
		}

		::RPG::Client::PetMarble::Level::IPetMarbleLevelMode* GetLevelMode()
		{
			return ((::RPG::Client::PetMarble::Level::IPetMarbleLevelMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_GETLEVELMODE_OFFSET))(this);
		}

		::System::Void RefreshUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_REFRESHUI_OFFSET))(this);
		}

		::System::Void SetMatchState(::RPG::Client::PetMarble::PetMarbleMatchState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::PetMarbleMatchState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_SETMATCHSTATE_OFFSET))(this, a1);
		}

		::System::Void StartMatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_STARTMATCH_OFFSET))(this);
		}

		::System::Void EndMatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_ENDMATCH_OFFSET))(this);
		}

		::System::Void SetSelfReady(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_SETSELFREADY_OFFSET))(this, a1);
		}

		::System::Void SetUIRefreshAction(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_SETUIREFRESHACTION_OFFSET))(this, a1);
		}

		::System::Void OnAttention()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_ONATTENTION_OFFSET))(this);
		}

		::System::Void StartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_STARTBATTLE_OFFSET))(this);
		}

		::System::Void ExitMarbleMatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_EXITMARBLEMATCH_OFFSET))(this);
		}

		::FEGOPJNNFML* _CreateMatchMode(::RPG::Client::PetMarble::PetMarbleMatchModeType a1)
		{
			return ((::FEGOPJNNFML*(*)(::PVOID, ::RPG::Client::PetMarble::PetMarbleMatchModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER__CREATEMATCHMODE_OFFSET))(this, a1);
		}

		::FEGOPJNNFML* _GetMatchMode(::RPG::Client::PetMarble::PetMarbleMatchModeType a1)
		{
			return ((::FEGOPJNNFML*(*)(::PVOID, ::RPG::Client::PetMarble::PetMarbleMatchModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER__GETMATCHMODE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* _LeaveCurrentMode()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER__LEAVECURRENTMODE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* _EnterNewMode(::RPG::Client::PetMarble::PetMarbleMatchModeType a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::RPG::Client::PetMarble::PetMarbleMatchModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER__ENTERNEWMODE_OFFSET))(this, a1);
		}

		::System::Void _OnContextChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER__ONCONTEXTCHANGED_OFFSET))(this, a1);
		}

		::RPG::Client::PetMarble::PetMarbleMatchModeType get_CurrentModeType()
		{
			return ((::RPG::Client::PetMarble::PetMarbleMatchModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_GET_CURRENTMODETYPE_OFFSET))(this);
		}

		::RPG::Client::PetMarble::PetMarblePlayer* get_SelfPlayer()
		{
			return ((::RPG::Client::PetMarble::PetMarblePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_GET_SELFPLAYER_OFFSET))(this);
		}

		::System::Void set_SelfPlayer(::RPG::Client::PetMarble::PetMarblePlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::PetMarblePlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_SET_SELFPLAYER_OFFSET))(this, a1);
		}

		::RPG::Client::PetMarble::PetMarblePlayer* get_AllyTeamPlayer()
		{
			return ((::RPG::Client::PetMarble::PetMarblePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_GET_ALLYTEAMPLAYER_OFFSET))(this);
		}

		::System::Void set_AllyTeamPlayer(::RPG::Client::PetMarble::PetMarblePlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::PetMarblePlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_SET_ALLYTEAMPLAYER_OFFSET))(this, a1);
		}

		::RPG::Client::PetMarble::PetMarbleMatchState get_MatchState()
		{
			return ((::RPG::Client::PetMarble::PetMarbleMatchState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_GET_MATCHSTATE_OFFSET))(this);
		}

		::System::Void set_MatchState(::RPG::Client::PetMarble::PetMarbleMatchState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::PetMarbleMatchState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER_SET_MATCHSTATE_OFFSET))(this, a1);
		}

		::System::Void __LeaveCurrentMode_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER___LEAVECURRENTMODE_B__19_0_OFFSET))(this);
		}

	};
}
