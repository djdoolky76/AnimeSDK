#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateParamLastBattleLeftRoundCountConfig; }

#define RPG_GAMECORE_FATEPARAMLASTBATTLELEFTROUNDCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69C420)
#define RPG_GAMECORE_FATEPARAMLASTBATTLELEFTROUNDCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69C430)
#define RPG_GAMECORE_FATEPARAMLASTBATTLELEFTROUNDCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69C3E0)

namespace RPG::GameCore
{
	class FateParamLastBattleLeftRoundCountConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMLASTBATTLELEFTROUNDCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamLastBattleLeftRoundCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamLastBattleLeftRoundCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMLASTBATTLELEFTROUNDCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamLastBattleLeftRoundCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamLastBattleLeftRoundCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMLASTBATTLELEFTROUNDCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
