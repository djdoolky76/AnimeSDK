#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueFormulaConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournFormulaCondFilterTopKBuffTypeConfig; }

#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERTOPKBUFFTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA0BEA0)
#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERTOPKBUFFTYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA0BEB0)
#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERTOPKBUFFTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA0BE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournFormulaCondFilterTopKBuffTypeConfig_TypeDefinitionIndex = 19572;

	class RogueTournFormulaCondFilterTopKBuffTypeConfig : public ::RPG::GameCore::RogueFormulaConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERTOPKBUFFTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournFormulaCondFilterTopKBuffTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournFormulaCondFilterTopKBuffTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERTOPKBUFFTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournFormulaCondFilterTopKBuffTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournFormulaCondFilterTopKBuffTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERTOPKBUFFTYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
