#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RtSkillConditionMask.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBySkillCanUse; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYSKILLCANUSE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA55E80)
#define RPG_GAMECORE_RTBYSKILLCANUSE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA560D0)
#define RPG_GAMECORE_RTBYSKILLCANUSE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA56090)
#define RPG_GAMECORE_RTBYSKILLCANUSE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA55E90)
#define RPG_GAMECORE_RTBYSKILLCANUSE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA55E40)

namespace RPG::GameCore
{
	class RtBySkillCanUse : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::RtSkillConditionMask CheckMask; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYSKILLCANUSE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBySkillCanUse* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBySkillCanUse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYSKILLCANUSE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBySkillCanUse* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBySkillCanUse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYSKILLCANUSE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtBySkillCanUse* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtBySkillCanUse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYSKILLCANUSE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtBySkillCanUse* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtBySkillCanUse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYSKILLCANUSE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
