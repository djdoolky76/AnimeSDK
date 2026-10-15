#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerDrinkMakerBartendInMainMission; }

#define RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMAINMISSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC46280)
#define RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMAINMISSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC46290)
#define RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMAINMISSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC46250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerDrinkMakerBartendInMainMission_TypeDefinitionIndex = 21715;

	class TriggerDrinkMakerBartendInMainMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 FormulaID; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* IngredientIDs; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMAINMISSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerDrinkMakerBartendInMainMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerDrinkMakerBartendInMainMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMAINMISSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerDrinkMakerBartendInMainMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerDrinkMakerBartendInMainMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMAINMISSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
