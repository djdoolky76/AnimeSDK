#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetClaraEnhanceSelectCntConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCLARAENHANCESELECTCNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BEB60)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCLARAENHANCESELECTCNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BEB70)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCLARAENHANCESELECTCNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BEB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetClaraEnhanceSelectCntConfig_TypeDefinitionIndex = 19883;

	class GridFightParamGetClaraEnhanceSelectCntConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCLARAENHANCESELECTCNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetClaraEnhanceSelectCntConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetClaraEnhanceSelectCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCLARAENHANCESELECTCNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetClaraEnhanceSelectCntConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetClaraEnhanceSelectCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCLARAENHANCESELECTCNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
