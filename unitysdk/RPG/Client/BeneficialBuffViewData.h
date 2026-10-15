#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEADDHNBPHB;
namespace RPG::Client { class BattleUITeamBlockData; }
namespace RPG::Client { class BeneficialBuffViewData; }
namespace RPG::Client { class BeneficialBuffViewData_InitData; }
namespace RPG::Client { class ElationBattleBuffGroupViewData; }
namespace RPG::GameCore { class ElationCharacterUIConfig; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC868660)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC868720)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GETALLBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xC868AF0)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GETHASNORMALBUFF_OFFSET UNITYSDK_OFFSET(0xC868CD0)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GETISEMPTY_OFFSET UNITYSDK_OFFSET(0xC868AA0)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GET_BLOCKDATA_OFFSET UNITYSDK_OFFSET(0xC868D80)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GET_ELATIONBUFFGROUP_OFFSET UNITYSDK_OFFSET(0xC868D60)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GET_NORMALBUFFLIST_OFFSET UNITYSDK_OFFSET(0xC868D40)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_SET_BLOCKDATA_OFFSET UNITYSDK_OFFSET(0xC868D90)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_SET_ELATIONBUFFGROUP_OFFSET UNITYSDK_OFFSET(0xC868D70)
#define RPG_CLIENT_BENEFICIALBUFFVIEWDATA_SET_NORMALBUFFLIST_OFFSET UNITYSDK_OFFSET(0xC868D50)

namespace RPG::Client
{
	inline static constexpr unsigned int BeneficialBuffViewData_TypeDefinitionIndex = 71186;

	class BeneficialBuffViewData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* _NormalBuffList_k__BackingField; // 0x10
		::RPG::Client::ElationBattleBuffGroupViewData* _ElationBuffGroup_k__BackingField; // 0x18
		::NEADDHNBPHB* _BlockData_k__BackingField; // 0x20
		// static const ::System::Object SEPERATE_LINE_INDEX; // 0x0
		// static const ::System::Object ELATION_BUFF_INDEX; // 0x0
		// static const ::System::Object TEAM_BLOCK_DETAIL_INDEX; // 0x0
		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::ElationCharacterUIConfig* a3, ::RPG::Client::BattleUITeamBlockData* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::ElationCharacterUIConfig*, ::RPG::Client::BattleUITeamBlockData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::RPG::Client::BeneficialBuffViewData* Create(::RPG::Client::BeneficialBuffViewData_InitData* a1)
		{
			return ((::RPG::Client::BeneficialBuffViewData*(*)(::RPG::Client::BeneficialBuffViewData_InitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_CREATE_OFFSET))(a1);
		}

		::System::Boolean GetIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GETISEMPTY_OFFSET))(this);
		}

		::System::Boolean GetHasNormalBuff(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GETHASNORMALBUFF_OFFSET))(this, a1);
		}

		::System::Int32 GetAllBuffCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GETALLBUFFCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* get_NormalBuffList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GET_NORMALBUFFLIST_OFFSET))(this);
		}

		::System::Void set_NormalBuffList(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_SET_NORMALBUFFLIST_OFFSET))(this, a1);
		}

		::RPG::Client::ElationBattleBuffGroupViewData* get_ElationBuffGroup()
		{
			return ((::RPG::Client::ElationBattleBuffGroupViewData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GET_ELATIONBUFFGROUP_OFFSET))(this);
		}

		::System::Void set_ElationBuffGroup(::RPG::Client::ElationBattleBuffGroupViewData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElationBattleBuffGroupViewData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_SET_ELATIONBUFFGROUP_OFFSET))(this, a1);
		}

		::NEADDHNBPHB* get_BlockData()
		{
			return ((::NEADDHNBPHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_GET_BLOCKDATA_OFFSET))(this);
		}

		::System::Void set_BlockData(::NEADDHNBPHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEADDHNBPHB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFICIALBUFFVIEWDATA_SET_BLOCKDATA_OFFSET))(this, a1);
		}

	};
}
