#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByRankActivated; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYRANKACTIVATED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D533DE0)
#define RPG_GAMECORE_BYRANKACTIVATED_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D534010)
#define RPG_GAMECORE_BYRANKACTIVATED_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D533FE0)
#define RPG_GAMECORE_BYRANKACTIVATED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D533DF0)
#define RPG_GAMECORE_BYRANKACTIVATED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D533DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByRankActivated_TypeDefinitionIndex = 23059;

	class ByRankActivated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::StringHash TriggerKey; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByRankActivated* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByRankActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByRankActivated* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByRankActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRankActivated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRankActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATED_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRankActivated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRankActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATED_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
