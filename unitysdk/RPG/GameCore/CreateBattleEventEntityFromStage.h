#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleEventEntitySubType.h"
#include "unitysdk/RPG/GameCore/CreateBattleEvent.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateBattleEventEntityFromStage; }
namespace System { class String; }

#define RPG_GAMECORE_CREATEBATTLEEVENTENTITYFROMSTAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E17F0)
#define RPG_GAMECORE_CREATEBATTLEEVENTENTITYFROMSTAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E1800)
#define RPG_GAMECORE_CREATEBATTLEEVENTENTITYFROMSTAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E2320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateBattleEventEntityFromStage_TypeDefinitionIndex = 23426;

	class CreateBattleEventEntityFromStage : public ::RPG::GameCore::CreateBattleEvent
	{
	public:
		::Il2CppArray<::System::String*>* DefaultAbilityList; // 0x58
		::Il2CppArray<::RPG::GameCore::BattleEventEntitySubType>* DefaultAbilityTypeList; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENTENTITYFROMSTAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateBattleEventEntityFromStage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateBattleEventEntityFromStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENTENTITYFROMSTAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateBattleEventEntityFromStage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateBattleEventEntityFromStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENTENTITYFROMSTAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
