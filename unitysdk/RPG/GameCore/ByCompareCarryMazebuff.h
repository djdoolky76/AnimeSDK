#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareCarryMazebuff; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D49E060)
#define RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D49E2B0)
#define RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D49E250)
#define RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D49E0A0)
#define RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D49E000)

namespace RPG::GameCore
{
	class ByCompareCarryMazebuff : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::UInt32 BuffID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareCarryMazebuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareCarryMazebuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareCarryMazebuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareCarryMazebuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCarryMazebuff* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCarryMazebuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCarryMazebuff* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCarryMazebuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
