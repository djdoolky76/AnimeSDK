#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsTeamLeader; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTEAMLEADER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E21AF70)
#define RPG_GAMECORE_BYISTEAMLEADER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E21B190)
#define RPG_GAMECORE_BYISTEAMLEADER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E21B130)
#define RPG_GAMECORE_BYISTEAMLEADER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E21AFB0)
#define RPG_GAMECORE_BYISTEAMLEADER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E21AF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTeamLeader_TypeDefinitionIndex = 20923;

	class ByIsTeamLeader : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLEADER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTeamLeader* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLEADER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTeamLeader* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLEADER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeamLeader* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLEADER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeamLeader* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLEADER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
