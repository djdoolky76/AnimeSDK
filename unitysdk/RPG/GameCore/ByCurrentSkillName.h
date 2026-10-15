#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCurrentSkillName; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCURRENTSKILLNAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4EB940)
#define RPG_GAMECORE_BYCURRENTSKILLNAME_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4EBBC0)
#define RPG_GAMECORE_BYCURRENTSKILLNAME_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4EBB90)
#define RPG_GAMECORE_BYCURRENTSKILLNAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4EB950)
#define RPG_GAMECORE_BYCURRENTSKILLNAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4EB910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentSkillName_TypeDefinitionIndex = 23506;

	class ByCurrentSkillName : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* SkillName; // 0x20
		::Il2CppArray<::System::String*>* SkillNameList; // 0x28
		::System::Boolean AccessClientActiveSkill; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLNAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentSkillName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentSkillName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLNAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentSkillName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentSkillName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLNAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLNAME_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLNAME_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
