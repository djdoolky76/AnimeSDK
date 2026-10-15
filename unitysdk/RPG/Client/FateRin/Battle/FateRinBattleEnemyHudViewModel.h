#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
class CMAMEPBHDDP;
class EAHCLJPMCIG;
class EKFMIDBJDIA;
class ELDKPCBCIIO;
class EPEGJBOCNCN;
class LDMBNFAMCOI;
class OBJANKHLNGO;
namespace RPG::Client::FateRin::Battle { class FateRinBattleEnemyHudSingleViewModel; }
namespace RPG::GameCore { class EventManager; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL_ADDMESSAGEHANDLER_OFFSET UNITYSDK_OFFSET(0xCEABD50)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCEAB400)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCEABAC0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL__GETEVENTMANAGER_OFFSET UNITYSDK_OFFSET(0xCEABE30)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL__ONBATTLEENEMYSTATEMODELCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCEAC050)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL__ONBATTLEONTURNSTATECHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCEAC0C0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL__ONLEVELGAMEMODESTATECHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0xCEABF50)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL__REFRESHVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCEAB530)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL__REGISTEREVENT_OFFSET UNITYSDK_OFFSET(0xCEAB9D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL__SENDMESSAGE_OFFSET UNITYSDK_OFFSET(0xCEABDB0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL__SORTANDSETPOSINDEX_OFFSET UNITYSDK_OFFSET(0xCEAC130)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL__UNREGISTEREVENT_OFFSET UNITYSDK_OFFSET(0xCEABC60)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleEnemyHudViewModel_TypeDefinitionIndex = 80864;

	class FateRinBattleEnemyHudViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudSingleViewModel*>* HudViewModelList; // 0x20
		::EAHCLJPMCIG* _GameStateModel; // 0x28
		::ELDKPCBCIIO* _UIPresentService; // 0x30
		::System::Action_3<::XLua::LuaTable*, ::System::Int32, ::System::Object*>* _MessageHandler; // 0x38
		::OBJANKHLNGO* _Messenger; // 0x40
		::LDMBNFAMCOI* _Model; // 0x48
		::XLua::LuaTable* _LuaTable; // 0x50
		::System::Boolean _IsFirstWaitTurn; // 0x58
		::System::Void _ctor(::LDMBNFAMCOI* a1, ::EAHCLJPMCIG* a2, ::OBJANKHLNGO* a3, ::ELDKPCBCIIO* a4)
		{
			return ((::System::Void(*)(::PVOID, ::LDMBNFAMCOI*, ::EAHCLJPMCIG*, ::OBJANKHLNGO*, ::ELDKPCBCIIO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void AddMessageHandler(::XLua::LuaTable* a1, ::System::Action_3<::XLua::LuaTable*, ::System::Int32, ::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Action_3<::XLua::LuaTable*, ::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL_ADDMESSAGEHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void _SendMessage(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL__SENDMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL__REGISTEREVENT_OFFSET))(this);
		}

		::System::Void _UnRegisterEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL__UNREGISTEREVENT_OFFSET))(this);
		}

		::RPG::GameCore::EventManager* _GetEventManager()
		{
			return ((::RPG::GameCore::EventManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL__GETEVENTMANAGER_OFFSET))(this);
		}

		::System::Void _OnLevelGameModeStateChangedEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL__ONLEVELGAMEMODESTATECHANGEDEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnBattleEnemyStateModelChangeMessage(::CMAMEPBHDDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMAMEPBHDDP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL__ONBATTLEENEMYSTATEMODELCHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleOnTurnStateChangeMessage(::EPEGJBOCNCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPEGJBOCNCN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL__ONBATTLEONTURNSTATECHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _RefreshViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL__REFRESHVIEWMODEL_OFFSET))(this);
		}

		::System::Void _SortAndSetPosIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL__SORTANDSETPOSINDEX_OFFSET))(this);
		}

	};
}
