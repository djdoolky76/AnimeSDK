#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareQuestGetReward; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CD360)
#define RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4CD540)
#define RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4CD510)
#define RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4CD370)
#define RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4CD330)

namespace RPG::GameCore
{
	class ByCompareQuestGetReward : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* QuestID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareQuestGetReward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareQuestGetReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareQuestGetReward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareQuestGetReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareQuestGetReward* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareQuestGetReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareQuestGetReward* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareQuestGetReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
