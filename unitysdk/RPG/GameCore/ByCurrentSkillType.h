#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCurrentSkillType; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCURRENTSKILLTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4ECBB0)
#define RPG_GAMECORE_BYCURRENTSKILLTYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4ECE50)
#define RPG_GAMECORE_BYCURRENTSKILLTYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4ECE10)
#define RPG_GAMECORE_BYCURRENTSKILLTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4ECBC0)
#define RPG_GAMECORE_BYCURRENTSKILLTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4ECB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentSkillType_TypeDefinitionIndex = 23503;

	class ByCurrentSkillType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::SkillType SkillType; // 0x20
		::System::Boolean AccessClientActiveSkill; // 0x24
		::System::Boolean CheckRegardAsSkillType; // 0x25
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentSkillType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentSkillType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLTYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
