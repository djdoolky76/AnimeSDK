#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetTheBestRoleIdConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETTHEBESTROLEIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E948250)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETTHEBESTROLEIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E948260)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETTHEBESTROLEIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E948210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetTheBestRoleIdConfig_TypeDefinitionIndex = 19877;

	class GridFightParamGetTheBestRoleIdConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETTHEBESTROLEIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetTheBestRoleIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetTheBestRoleIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETTHEBESTROLEIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetTheBestRoleIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetTheBestRoleIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETTHEBESTROLEIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
