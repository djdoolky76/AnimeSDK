#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BattleBuffListViewData; }
namespace RPG::Client { class BattleUITeamBlockData; }
namespace RPG::Client { class BeneficialBuffViewData; }
namespace RPG::GameCore { class ElationCharacterUIConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_CREATEFROMCLASSIFIEDBUFFS_OFFSET UNITYSDK_OFFSET(0xD176280)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD176050)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD176120)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_GETBUFFMODIFIERCOUNT_OFFSET UNITYSDK_OFFSET(0xD176580)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_GETDEBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xD1765D0)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_GETISEMPTY_OFFSET UNITYSDK_OFFSET(0xD1764C0)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_GETOTHERBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xD176620)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_GET_BENEFICIALBUFFDATA_OFFSET UNITYSDK_OFFSET(0xD176F70)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_GET_DEBUFFLIST_OFFSET UNITYSDK_OFFSET(0xD176F90)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_GET_ISSHOWDETAIL_OFFSET UNITYSDK_OFFSET(0xD176FB0)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_GET_OTHERBUFFLIST_OFFSET UNITYSDK_OFFSET(0xD176FA0)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_SET_BENEFICIALBUFFDATA_OFFSET UNITYSDK_OFFSET(0xD176F80)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_SET_ISSHOWDETAIL_OFFSET UNITYSDK_OFFSET(0xD176FC0)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA__CLASSIFYMODIFIERS_OFFSET UNITYSDK_OFFSET(0xD1766F0)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA__GETAVATARCANSHOWDETAIL_OFFSET UNITYSDK_OFFSET(0xD176E40)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA__GETCANSHOWDETAIL_OFFSET UNITYSDK_OFFSET(0xD176670)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA__GETELATIONUICONFIG_OFFSET UNITYSDK_OFFSET(0xD1769A0)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA__GETENTITYNEEDSHOWTEAMBLOCK_OFFSET UNITYSDK_OFFSET(0xD176DE0)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA__GETTEAMBLOCKDATA_OFFSET UNITYSDK_OFFSET(0xD176AB0)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA__LOADELATIONUICONFIGFROMCHARACTERCONFIG_OFFSET UNITYSDK_OFFSET(0xD176BA0)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA__SETUPBYCLASSIFIEDBUFFS_OFFSET UNITYSDK_OFFSET(0xD176370)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA__SETUP_OFFSET UNITYSDK_OFFSET(0xD176180)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA__SORTBUFFS_OFFSET UNITYSDK_OFFSET(0xD1767F0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleBuffListViewData_TypeDefinitionIndex = 73500;

	class BattleBuffListViewData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* _OtherBuffList_k__BackingField; // 0x10
		::RPG::Client::BeneficialBuffViewData* _BeneficialBuffData_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* _DebuffList_k__BackingField; // 0x20
		::System::Boolean _IsShowDetail_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleBuffListViewData* Create(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::RPG::Client::BattleBuffListViewData*(*)(::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::BattleBuffListViewData* CreateFromClassifiedBuffs(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a3)
		{
			return ((::RPG::Client::BattleBuffListViewData*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_CREATEFROMCLASSIFIEDBUFFS_OFFSET))(a1, a2, a3);
		}

		::System::Boolean GetIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_GETISEMPTY_OFFSET))(this);
		}

		::System::Int32 GetBuffModifierCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_GETBUFFMODIFIERCOUNT_OFFSET))(this);
		}

		::System::Int32 GetDebuffCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_GETDEBUFFCOUNT_OFFSET))(this);
		}

		::System::Int32 GetOtherBuffCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_GETOTHERBUFFCOUNT_OFFSET))(this);
		}

		::System::Void _Setup(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA__SETUP_OFFSET))(this, a1);
		}

		::System::Void _SetupByClassifiedBuffs(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA__SETUPBYCLASSIFIEDBUFFS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ClassifyModifiers(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA__CLASSIFYMODIFIERS_OFFSET))(this, a1, a2);
		}

		static ::System::Void _SortBuffs(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA__SORTBUFFS_OFFSET))(a1);
		}

		static ::RPG::GameCore::ElationCharacterUIConfig* _GetElationUIConfig(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::ElationCharacterUIConfig*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA__GETELATIONUICONFIG_OFFSET))(a1);
		}

		static ::RPG::GameCore::ElationCharacterUIConfig* _LoadElationUIConfigFromCharacterConfig(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::ElationCharacterUIConfig*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA__LOADELATIONUICONFIGFROMCHARACTERCONFIG_OFFSET))(a1);
		}

		static ::RPG::Client::BattleUITeamBlockData* _GetTeamBlockData(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::BattleUITeamBlockData*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA__GETTEAMBLOCKDATA_OFFSET))(a1);
		}

		static ::System::Boolean _GetEntityNeedShowTeamBlock(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA__GETENTITYNEEDSHOWTEAMBLOCK_OFFSET))(a1);
		}

		static ::System::Boolean _GetCanShowDetail(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA__GETCANSHOWDETAIL_OFFSET))(a1);
		}

		static ::System::Boolean _GetAvatarCanShowDetail(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA__GETAVATARCANSHOWDETAIL_OFFSET))(a1);
		}

		::RPG::Client::BeneficialBuffViewData* get_BeneficialBuffData()
		{
			return ((::RPG::Client::BeneficialBuffViewData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_GET_BENEFICIALBUFFDATA_OFFSET))(this);
		}

		::System::Void set_BeneficialBuffData(::RPG::Client::BeneficialBuffViewData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BeneficialBuffViewData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_SET_BENEFICIALBUFFDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* get_DebuffList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_GET_DEBUFFLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* get_OtherBuffList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_GET_OTHERBUFFLIST_OFFSET))(this);
		}

		::System::Boolean get_IsShowDetail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_GET_ISSHOWDETAIL_OFFSET))(this);
		}

		::System::Void set_IsShowDetail(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA_SET_ISSHOWDETAIL_OFFSET))(this, a1);
		}

	};
}
