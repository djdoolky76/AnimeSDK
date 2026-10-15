#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
class EAHCLJPMCIG;
class ELDKPCBCIIO;
class EOPFDKJOBIO;
class FEIPLKMMIOI;
class HPOCHBIJIHH;
class OBJANKHLNGO;
namespace RPG::Client { class BattleViewModeDarkInitData; }
namespace RPG::Client { class BattleViewModeInitData; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleTeamInfoFriendTeamViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_ASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0xCEDC8E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCEDC420)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCEDC470)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GETPAGEENTERCALLBACK_OFFSET UNITYSDK_OFFSET(0xCEDCFB0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GET_BLOCKID_OFFSET UNITYSDK_OFFSET(0xCEDD2A0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GET_DARKINITDATA_OFFSET UNITYSDK_OFFSET(0xCEDD2F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0xCEDD250)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GET_FRIENDTEAM_OFFSET UNITYSDK_OFFSET(0xCEDD340)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_ISCANPRESENT_OFFSET UNITYSDK_OFFSET(0xCEDC5A0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_SET_FRIENDTEAM_OFFSET UNITYSDK_OFFSET(0xCEDD350)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__GETBATTLEDECK_OFFSET UNITYSDK_OFFSET(0xCEDCF40)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__GETDEFAULTINITENTITY_OFFSET UNITYSDK_OFFSET(0xCEDCEC0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__GETSPECIFIEDINITENTITY_OFFSET UNITYSDK_OFFSET(0xCEDC840)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__ONPAGEENTER_OFFSET UNITYSDK_OFFSET(0xCEDD080)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleTeamInfoViewModel_TypeDefinitionIndex = 80977;

	class FateRinBattleTeamInfoViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::HPOCHBIJIHH* _DeckRepository; // 0x20
		::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoFriendTeamViewModel* _FriendTeam_k__BackingField; // 0x28
		::ELDKPCBCIIO* _UIPresentService; // 0x30
		::EAHCLJPMCIG* _GameState; // 0x38
		::OBJANKHLNGO* _Messenger; // 0x40
		::RPG::Client::BattleViewModeInitData* _InitData; // 0x48
		::FEIPLKMMIOI* _AvatarService; // 0x50
		::System::Void _ctor(::HPOCHBIJIHH* a1, ::EAHCLJPMCIG* a2, ::FEIPLKMMIOI* a3, ::OBJANKHLNGO* a4, ::ELDKPCBCIIO* a5)
		{
			return ((::System::Void(*)(::PVOID, ::HPOCHBIJIHH*, ::EAHCLJPMCIG*, ::FEIPLKMMIOI*, ::OBJANKHLNGO*, ::ELDKPCBCIIO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsCanPresent(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_ISCANPRESENT_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* AsyncInitialize(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_ASYNCINITIALIZE_OFFSET))(this, a1);
		}

		static ::System::Action* GetPageEnterCallback()
		{
			return ((::System::Action*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GETPAGEENTERCALLBACK_OFFSET))();
		}

		static ::RPG::GameCore::GameEntity* _GetSpecifiedInitEntity(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__GETSPECIFIEDINITENTITY_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* _GetDefaultInitEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__GETDEFAULTINITENTITY_OFFSET))();
		}

		::EOPFDKJOBIO* _GetBattleDeck()
		{
			return ((::EOPFDKJOBIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__GETBATTLEDECK_OFFSET))(this);
		}

		static ::System::Void _OnPageEnter()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__ONPAGEENTER_OFFSET))();
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GET_ENTITY_OFFSET))(this);
		}

		::System::UInt32 get_BlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GET_BLOCKID_OFFSET))(this);
		}

		::RPG::Client::BattleViewModeDarkInitData* get_DarkInitData()
		{
			return ((::RPG::Client::BattleViewModeDarkInitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GET_DARKINITDATA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoFriendTeamViewModel* get_FriendTeam()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoFriendTeamViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GET_FRIENDTEAM_OFFSET))(this);
		}

		::System::Void set_FriendTeam(::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoFriendTeamViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoFriendTeamViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_SET_FRIENDTEAM_OFFSET))(this, a1);
		}

	};
}
