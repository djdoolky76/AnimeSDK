#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtByCurrentSkillName; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_RTBYCURRENTSKILLNAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF46170)
#define RPG_GAMECORE_RTBYCURRENTSKILLNAME_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EF463D0)
#define RPG_GAMECORE_RTBYCURRENTSKILLNAME_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EF46370)
#define RPG_GAMECORE_RTBYCURRENTSKILLNAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EF461B0)
#define RPG_GAMECORE_RTBYCURRENTSKILLNAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EF46110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByCurrentSkillName_TypeDefinitionIndex = 24693;

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
