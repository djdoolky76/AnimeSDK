#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsTeammate; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTEAMMATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D527280)
#define RPG_GAMECORE_BYISTEAMMATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D527440)
#define RPG_GAMECORE_BYISTEAMMATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D527410)
#define RPG_GAMECORE_BYISTEAMMATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D527290)
#define RPG_GAMECORE_BYISTEAMMATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D527250)

namespace RPG::GameCore
{
	class ByIsTeammate : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMMATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTeammate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTeammate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMMATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTeammate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTeammate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMMATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeammate* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeammate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMMATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeammate* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeammate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMMATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
