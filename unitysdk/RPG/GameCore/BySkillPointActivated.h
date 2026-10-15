#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreePointTriggerKey.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BySkillPointActivated; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYSKILLPOINTACTIVATED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D536800)
#define RPG_GAMECORE_BYSKILLPOINTACTIVATED_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D536A10)
#define RPG_GAMECORE_BYSKILLPOINTACTIVATED_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D5369E0)
#define RPG_GAMECORE_BYSKILLPOINTACTIVATED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D536810)
#define RPG_GAMECORE_BYSKILLPOINTACTIVATED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5367D0)

namespace RPG::GameCore
{
	class BySkillPointActivated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AvatarSkillTreePointTriggerKey PointTriggerKey; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKILLPOINTACTIVATED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BySkillPointActivated* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BySkillPointActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKILLPOINTACTIVATED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BySkillPointActivated* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BySkillPointActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKILLPOINTACTIVATED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySkillPointActivated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySkillPointActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKILLPOINTACTIVATED_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySkillPointActivated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySkillPointActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKILLPOINTACTIVATED_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
