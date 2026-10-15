#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtByHasSelectSkill; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYHASSELECTSKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA53470)
#define RPG_GAMECORE_RTBYHASSELECTSKILL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA53630)
#define RPG_GAMECORE_RTBYHASSELECTSKILL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA53600)
#define RPG_GAMECORE_RTBYHASSELECTSKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA53480)
#define RPG_GAMECORE_RTBYHASSELECTSKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA53440)

namespace RPG::GameCore
{
	class RtByHasSelectSkill : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASSELECTSKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtByHasSelectSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtByHasSelectSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASSELECTSKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtByHasSelectSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtByHasSelectSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASSELECTSKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasSelectSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasSelectSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASSELECTSKILL_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasSelectSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasSelectSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASSELECTSKILL_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
