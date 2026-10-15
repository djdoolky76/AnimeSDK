#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetCurDivisionLevelConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURDIVISIONLEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D737E70)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURDIVISIONLEVELCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D737E80)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURDIVISIONLEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D737E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetCurDivisionLevelConfig_TypeDefinitionIndex = 19540;

	class GridFightParamGetCurDivisionLevelConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURDIVISIONLEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetCurDivisionLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetCurDivisionLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURDIVISIONLEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetCurDivisionLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetCurDivisionLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURDIVISIONLEVELCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
