#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByPropIsCreateByActiveSkill; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5329D0)
#define RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D532B50)
#define RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D532B20)
#define RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5329E0)
#define RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5329A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPropIsCreateByActiveSkill_TypeDefinitionIndex = 20311;

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
