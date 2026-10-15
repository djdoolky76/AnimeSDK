#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtByInSkillRange; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYINSKILLRANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA54710)
#define RPG_GAMECORE_RTBYINSKILLRANGE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA54910)
#define RPG_GAMECORE_RTBYINSKILLRANGE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA548E0)
#define RPG_GAMECORE_RTBYINSKILLRANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA54720)
#define RPG_GAMECORE_RTBYINSKILLRANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA546E0)

namespace RPG::GameCore
{
	class RtByInSkillRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* CheckTargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINSKILLRANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtByInSkillRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtByInSkillRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINSKILLRANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtByInSkillRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtByInSkillRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINSKILLRANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByInSkillRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByInSkillRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINSKILLRANGE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByInSkillRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByInSkillRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINSKILLRANGE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
