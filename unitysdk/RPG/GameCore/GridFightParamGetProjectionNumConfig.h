#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetProjectionNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETPROJECTIONNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D70ADA0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPROJECTIONNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D70ADB0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPROJECTIONNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D70AD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetProjectionNumConfig_TypeDefinitionIndex = 19519;

	class GridFightParamGetProjectionNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPROJECTIONNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetProjectionNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetProjectionNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPROJECTIONNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetProjectionNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetProjectionNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPROJECTIONNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
