#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateCondMasterBattleResultConfig; }

#define RPG_GAMECORE_FATECONDMASTERBATTLERESULTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66D110)
#define RPG_GAMECORE_FATECONDMASTERBATTLERESULTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66D120)
#define RPG_GAMECORE_FATECONDMASTERBATTLERESULTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66D0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateCondMasterBattleResultConfig_TypeDefinitionIndex = 19252;

	class FateCondMasterBattleResultConfig : public ::RPG::GameCore::FateConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDMASTERBATTLERESULTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateCondMasterBattleResultConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateCondMasterBattleResultConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDMASTERBATTLERESULTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateCondMasterBattleResultConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateCondMasterBattleResultConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDMASTERBATTLERESULTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
