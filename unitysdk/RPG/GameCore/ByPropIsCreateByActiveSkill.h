#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByPropIsCreateByActiveSkill; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E743D00)
#define RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E743E80)
#define RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E743E50)
#define RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E743D10)
#define RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E743CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPropIsCreateByActiveSkill_TypeDefinitionIndex = 20646;

	class ByPropIsCreateByActiveSkill : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPropIsCreateByActiveSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPropIsCreateByActiveSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPropIsCreateByActiveSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPropIsCreateByActiveSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPropIsCreateByActiveSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPropIsCreateByActiveSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPropIsCreateByActiveSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPropIsCreateByActiveSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
