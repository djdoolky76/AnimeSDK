#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureByMoveInputTowardsTarget; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C03F0)
#define RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D3C0610)
#define RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3C05E0)
#define RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3C0400)
#define RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3C03C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByMoveInputTowardsTarget_TypeDefinitionIndex = 20226;

	class AdventureByMoveInputTowardsTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* ToleranceAngle; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByMoveInputTowardsTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByMoveInputTowardsTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMoveInputTowardsTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMoveInputTowardsTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
