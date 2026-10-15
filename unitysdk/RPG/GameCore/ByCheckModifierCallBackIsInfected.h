#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckModifierCallBackIsInfected; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D464D60)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D464EE0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D464EB0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D464D70)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D464D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckModifierCallBackIsInfected_TypeDefinitionIndex = 23047;

	class ByCheckModifierCallBackIsInfected : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckModifierCallBackIsInfected* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckModifierCallBackIsInfected* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackIsInfected* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackIsInfected* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
