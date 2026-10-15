#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareSummonUnitCount; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4DB560)
#define RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4DB860)
#define RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4DB800)
#define RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4DB5A0)
#define RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4DB500)

namespace RPG::GameCore
{
	class ByCompareSummonUnitCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Summoner; // 0x20
		::System::UInt32 SummonUnitID; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x2C
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSummonUnitCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSummonUnitCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSummonUnitCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSummonUnitCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSummonUnitCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSummonUnitCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSummonUnitCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSummonUnitCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
