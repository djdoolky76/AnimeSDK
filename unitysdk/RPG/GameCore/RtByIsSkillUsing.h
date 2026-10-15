#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtByIsSkillUsing; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYISSKILLUSING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA553D0)
#define RPG_GAMECORE_RTBYISSKILLUSING_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA55590)
#define RPG_GAMECORE_RTBYISSKILLUSING_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA55560)
#define RPG_GAMECORE_RTBYISSKILLUSING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA553E0)
#define RPG_GAMECORE_RTBYISSKILLUSING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA553A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByIsSkillUsing_TypeDefinitionIndex = 24230;

	class RtByIsSkillUsing : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISSKILLUSING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtByIsSkillUsing* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtByIsSkillUsing*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISSKILLUSING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtByIsSkillUsing* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtByIsSkillUsing*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISSKILLUSING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsSkillUsing* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsSkillUsing*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISSKILLUSING_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsSkillUsing* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsSkillUsing*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISSKILLUSING_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
