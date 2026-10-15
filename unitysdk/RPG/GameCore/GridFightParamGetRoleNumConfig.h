#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetRoleNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D70AEC0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D70AED0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D70AE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetRoleNumConfig_TypeDefinitionIndex = 19518;

	class GridFightParamGetRoleNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetRoleNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetRoleNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetRoleNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetRoleNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
