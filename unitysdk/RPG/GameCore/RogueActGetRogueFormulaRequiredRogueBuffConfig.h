#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActGetRogueFormulaRequiredRogueBuffConfig; }

#define RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99E270)
#define RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99E280)
#define RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99E230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueFormulaRequiredRogueBuffConfig_TypeDefinitionIndex = 19668;

	class RogueActGetRogueFormulaRequiredRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueFormulaRequiredRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueFormulaRequiredRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueFormulaRequiredRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueFormulaRequiredRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
