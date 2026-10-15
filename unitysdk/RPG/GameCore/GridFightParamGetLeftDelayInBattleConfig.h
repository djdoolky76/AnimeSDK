#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetLeftDelayInBattleConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7383B0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7383C0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D738370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetLeftDelayInBattleConfig_TypeDefinitionIndex = 19532;

	class GridFightParamGetLeftDelayInBattleConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetLeftDelayInBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetLeftDelayInBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetLeftDelayInBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetLeftDelayInBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
