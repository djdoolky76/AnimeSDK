#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
class AADIBKNAJJI;
class ELDKPCBCIIO;
class EOPFDKJOBIO;
class FEIPLKMMIOI;
class FOOFKOELLGH;
class IEODIJJGAGM;
class OBJANKHLNGO;
namespace RPG::Client { class BattleBuffListViewData; }
namespace RPG::Client { class BattleViewModeLightInitData; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleAvatarInfoViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleTeamInfoUltraSkillItemViewModel; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCF8AB0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DCF90B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GETSERVANTENTITY_OFFSET UNITYSDK_OFFSET(0x1DCF9960)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_BUFFLISTVIEWDATA_OFFSET UNITYSDK_OFFSET(0x1DCF9330)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_CURRENTAVATARINFO_OFFSET UNITYSDK_OFFSET(0x1DCF9270)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_CURRENTENTITY_OFFSET UNITYSDK_OFFSET(0x1DCF8E50)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_DECKFULLDESC_OFFSET UNITYSDK_OFFSET(0x1DCF9200)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_ENTITIES_OFFSET UNITYSDK_OFFSET(0x1DCF92B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_LIGHTINITDATA_OFFSET UNITYSDK_OFFSET(0x1DCF91F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_STATUSLIST_OFFSET UNITYSDK_OFFSET(0x1DCF92F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_ULTRASKILLS_OFFSET UNITYSDK_OFFSET(0x1DCF9920)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL__BUILDBUFFLISTVIEWDATA_OFFSET UNITYSDK_OFFSET(0x1DCF9380)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL__COLLECTULTRASKILLS_OFFSET UNITYSDK_OFFSET(0x1DCF8D20)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL__QUERYFRIENDENTITIES_OFFSET UNITYSDK_OFFSET(0x1DCF8C30)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL__TRYAPPENDULTRASKILL_OFFSET UNITYSDK_OFFSET(0x1DCF9BB0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleTeamInfoFriendTeamViewModel_TypeDefinitionIndex = 83753;

	class FateRinBattleTeamInfoFriendTeamViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::EOPFDKJOBIO* _Deck; // 0x20
		::RPG::Client::BattleViewModeLightInitData* _LightInitData_k__BackingField; // 0x28
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoUltraSkillItemViewModel*>* _UltraSkills; // 0x30
		::FOOFKOELLGH* _StatusList; // 0x38
		::RPG::Client::FateRin::Battle::IFateRinBattleAvatarInfoViewModel* _CurrentAvatarInfo; // 0x40
		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* _Entities; // 0x48
		::System::Void _ctor(::EOPFDKJOBIO* a1, ::RPG::Client::BattleViewModeLightInitData* a2, ::RPG::GameCore::EntityManager* a3, ::AADIBKNAJJI* a4, ::FEIPLKMMIOI* a5, ::OBJANKHLNGO* a6, ::ELDKPCBCIIO* a7)
		{
			return ((::System::Void(*)(::PVOID, ::EOPFDKJOBIO*, ::RPG::Client::BattleViewModeLightInitData*, ::RPG::GameCore::EntityManager*, ::AADIBKNAJJI*, ::FEIPLKMMIOI*, ::OBJANKHLNGO*, ::ELDKPCBCIIO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::BattleViewModeLightInitData* get_LightInitData()
		{
			return ((::RPG::Client::BattleViewModeLightInitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_LIGHTINITDATA_OFFSET))(this);
		}

		::System::String* get_DeckFullDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_DECKFULLDESC_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_CurrentEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_CURRENTENTITY_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleAvatarInfoViewModel* get_CurrentAvatarInfo()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleAvatarInfoViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_CURRENTAVATARINFO_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* get_Entities()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_ENTITIES_OFFSET))(this);
		}

		::FOOFKOELLGH* get_StatusList()
		{
			return ((::FOOFKOELLGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_STATUSLIST_OFFSET))(this);
		}

		::RPG::Client::BattleBuffListViewData* get_BuffListViewData()
		{
			return ((::RPG::Client::BattleBuffListViewData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_BUFFLISTVIEWDATA_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoUltraSkillItemViewModel*>* get_UltraSkills()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoUltraSkillItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_ULTRASKILLS_OFFSET))(this);
		}

		static ::RPG::GameCore::GameEntity* GetServantEntity(::RPG::GameCore::EntityManager* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GETSERVANTENTITY_OFFSET))(a1);
		}

		::RPG::Client::BattleBuffListViewData* _BuildBuffListViewData()
		{
			return ((::RPG::Client::BattleBuffListViewData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL__BUILDBUFFLISTVIEWDATA_OFFSET))(this);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* _QueryFriendEntities(::RPG::GameCore::EntityManager* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL__QUERYFRIENDENTITIES_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoUltraSkillItemViewModel*>* _CollectUltraSkills(::AADIBKNAJJI* a1, ::FEIPLKMMIOI* a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoUltraSkillItemViewModel*>*(*)(::AADIBKNAJJI*, ::FEIPLKMMIOI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL__COLLECTULTRASKILLS_OFFSET))(a1, a2);
		}

		static ::System::Void _TryAppendUltraSkill(::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoUltraSkillItemViewModel*>* a1, ::IEODIJJGAGM* a2, ::FEIPLKMMIOI* a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoUltraSkillItemViewModel*>*, ::IEODIJJGAGM*, ::FEIPLKMMIOI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL__TRYAPPENDULTRASKILL_OFFSET))(a1, a2, a3);
		}

	};
}
