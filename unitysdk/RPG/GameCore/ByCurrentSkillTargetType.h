#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NullableBool.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillTargetType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCurrentSkillTargetType; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4EC260)
#define RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4EC500)
#define RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4EC4D0)
#define RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4EC270)
#define RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4EC230)

namespace RPG::GameCore
{
	class ByCurrentSkillTargetType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::SkillTargetType TargetType; // 0x20
		::RPG::GameCore::NullableBool IsDynamic; // 0x24
		::System::Boolean AccessClientActiveSkill; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentSkillTargetType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentSkillTargetType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentSkillTargetType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentSkillTargetType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillTargetType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillTargetType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillTargetType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillTargetType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTARGETTYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
