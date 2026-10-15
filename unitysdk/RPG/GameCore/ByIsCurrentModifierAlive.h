#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsCurrentModifierAlive; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D50DFD0)
#define RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D50E150)
#define RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D50E120)
#define RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D50DFE0)
#define RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D50DFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsCurrentModifierAlive_TypeDefinitionIndex = 23709;

	class ByIsCurrentModifierAlive : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsCurrentModifierAlive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsCurrentModifierAlive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsCurrentModifierAlive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsCurrentModifierAlive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentModifierAlive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentModifierAlive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentModifierAlive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentModifierAlive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
