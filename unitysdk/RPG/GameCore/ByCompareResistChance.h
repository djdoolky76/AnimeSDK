#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareResistChance; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARERESISTCHANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CEC20)
#define RPG_GAMECORE_BYCOMPARERESISTCHANCE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4CEEE0)
#define RPG_GAMECORE_BYCOMPARERESISTCHANCE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4CEEB0)
#define RPG_GAMECORE_BYCOMPARERESISTCHANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4CEC30)
#define RPG_GAMECORE_BYCOMPARERESISTCHANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4CEBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareResistChance_TypeDefinitionIndex = 23489;

	class ByCompareResistChance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* BehaviorFlagList; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERESISTCHANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareResistChance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareResistChance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERESISTCHANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareResistChance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareResistChance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERESISTCHANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareResistChance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareResistChance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERESISTCHANCE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareResistChance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareResistChance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERESISTCHANCE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
