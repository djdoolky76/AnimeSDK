#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_BySkillInCD; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ST_BYSKILLINCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4C510)
#define RPG_GAMECORE_ST_BYSKILLINCD_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA4C6D0)
#define RPG_GAMECORE_ST_BYSKILLINCD_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA4C6A0)
#define RPG_GAMECORE_ST_BYSKILLINCD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA4C520)
#define RPG_GAMECORE_ST_BYSKILLINCD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4C4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_BySkillInCD_TypeDefinitionIndex = 20067;

	class ST_BySkillInCD : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* CDVariableName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYSKILLINCD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_BySkillInCD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_BySkillInCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYSKILLINCD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_BySkillInCD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_BySkillInCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYSKILLINCD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_BySkillInCD* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_BySkillInCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYSKILLINCD_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_BySkillInCD* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_BySkillInCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYSKILLINCD_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
