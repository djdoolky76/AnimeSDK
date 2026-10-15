#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtByCurrentSkillName; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_RTBYCURRENTSKILLNAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA52730)
#define RPG_GAMECORE_RTBYCURRENTSKILLNAME_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA52990)
#define RPG_GAMECORE_RTBYCURRENTSKILLNAME_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA52930)
#define RPG_GAMECORE_RTBYCURRENTSKILLNAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA52770)
#define RPG_GAMECORE_RTBYCURRENTSKILLNAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA526D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByCurrentSkillName_TypeDefinitionIndex = 24234;

	class RtByCurrentSkillName : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* SkillName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCURRENTSKILLNAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtByCurrentSkillName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtByCurrentSkillName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCURRENTSKILLNAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtByCurrentSkillName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtByCurrentSkillName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCURRENTSKILLNAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByCurrentSkillName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByCurrentSkillName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCURRENTSKILLNAME_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByCurrentSkillName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByCurrentSkillName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCURRENTSKILLNAME_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
