#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHasInsertAbilityExecutingDuringGameModePause; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASINSERTABILITYEXECUTINGDURINGGAMEMODEPAUSE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1ED180)
#define RPG_GAMECORE_BYHASINSERTABILITYEXECUTINGDURINGGAMEMODEPAUSE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E1ED300)
#define RPG_GAMECORE_BYHASINSERTABILITYEXECUTINGDURINGGAMEMODEPAUSE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E1ED2D0)
#define RPG_GAMECORE_BYHASINSERTABILITYEXECUTINGDURINGGAMEMODEPAUSE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E1ED190)
#define RPG_GAMECORE_BYHASINSERTABILITYEXECUTINGDURINGGAMEMODEPAUSE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E1ED150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasInsertAbilityExecutingDuringGameModePause_TypeDefinitionIndex = 23980;

	class ByHasInsertAbilityExecutingDuringGameModePause : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTABILITYEXECUTINGDURINGGAMEMODEPAUSE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTABILITYEXECUTINGDURINGGAMEMODEPAUSE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTABILITYEXECUTINGDURINGGAMEMODEPAUSE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTABILITYEXECUTINGDURINGGAMEMODEPAUSE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTABILITYEXECUTINGDURINGGAMEMODEPAUSE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
