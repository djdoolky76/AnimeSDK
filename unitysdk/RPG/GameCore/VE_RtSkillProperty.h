#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VE_RtSkillProperty; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_VE_RTSKILLPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC86CA0)
#define RPG_GAMECORE_VE_RTSKILLPROPERTY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC86EF0)
#define RPG_GAMECORE_VE_RTSKILLPROPERTY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC86EC0)
#define RPG_GAMECORE_VE_RTSKILLPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC86CB0)
#define RPG_GAMECORE_VE_RTSKILLPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC86C70)

namespace RPG::GameCore
{
	class VE_RtSkillProperty : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* SkillName; // 0x28
		::RPG::GameCore::RtSkillPropertyType Property; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTSKILLPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtSkillProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtSkillProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTSKILLPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtSkillProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtSkillProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTSKILLPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtSkillProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtSkillProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTSKILLPROPERTY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtSkillProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtSkillProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTSKILLPROPERTY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
