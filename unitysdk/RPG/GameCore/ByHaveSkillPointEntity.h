#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHaveSkillPointEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHAVESKILLPOINTENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D500DF0)
#define RPG_GAMECORE_BYHAVESKILLPOINTENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D500F70)
#define RPG_GAMECORE_BYHAVESKILLPOINTENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D500F40)
#define RPG_GAMECORE_BYHAVESKILLPOINTENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D500E00)
#define RPG_GAMECORE_BYHAVESKILLPOINTENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D500DC0)

namespace RPG::GameCore
{
	class ByHaveSkillPointEntity : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVESKILLPOINTENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHaveSkillPointEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHaveSkillPointEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVESKILLPOINTENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHaveSkillPointEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHaveSkillPointEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVESKILLPOINTENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveSkillPointEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveSkillPointEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVESKILLPOINTENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveSkillPointEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveSkillPointEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVESKILLPOINTENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
