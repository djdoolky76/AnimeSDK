#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsFirstInsertAbilityInQueue; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D514D70)
#define RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D514EF0)
#define RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D514EC0)
#define RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D514D80)
#define RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D514D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsFirstInsertAbilityInQueue_TypeDefinitionIndex = 23535;

	class ByIsFirstInsertAbilityInQueue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTINSERTABILITYINQUEUE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
