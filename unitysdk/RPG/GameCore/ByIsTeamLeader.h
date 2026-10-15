#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsTeamLeader; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTEAMLEADER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F8790)
#define RPG_GAMECORE_BYISTEAMLEADER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4F89B0)
#define RPG_GAMECORE_BYISTEAMLEADER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4F8950)
#define RPG_GAMECORE_BYISTEAMLEADER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4F87D0)
#define RPG_GAMECORE_BYISTEAMLEADER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4F8730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTeamLeader_TypeDefinitionIndex = 20587;

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
