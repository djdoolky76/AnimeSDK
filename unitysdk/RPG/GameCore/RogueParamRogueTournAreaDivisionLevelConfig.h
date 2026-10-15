#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRogueTournAreaDivisionLevelConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNAREADIVISIONLEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FDB20)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNAREADIVISIONLEVELCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9FDB30)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNAREADIVISIONLEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FDAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournAreaDivisionLevelConfig_TypeDefinitionIndex = 19845;

	class RogueParamRogueTournAreaDivisionLevelConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNAREADIVISIONLEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueTournAreaDivisionLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueTournAreaDivisionLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNAREADIVISIONLEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueTournAreaDivisionLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueTournAreaDivisionLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNAREADIVISIONLEVELCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
