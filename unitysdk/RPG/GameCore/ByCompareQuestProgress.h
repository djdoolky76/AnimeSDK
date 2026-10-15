#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareQuestProgress; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CD9B0)
#define RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4CDC50)
#define RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4CDC10)
#define RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4CD9C0)
#define RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4CD970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareQuestProgress_TypeDefinitionIndex = 20596;

	class ByCompareQuestProgress : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* QuestID; // 0x20
		::RPG::GameCore::DynamicFloat* Progress; // 0x28
		::RPG::GameCore::CompareType EquationType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareQuestProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareQuestProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareQuestProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareQuestProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareQuestProgress* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareQuestProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareQuestProgress* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareQuestProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
