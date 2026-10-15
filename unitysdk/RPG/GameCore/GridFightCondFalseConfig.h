#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCondFalseConfig; }

#define RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FA580)
#define RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6FA590)
#define RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6FA540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondFalseConfig_TypeDefinitionIndex = 19327;

	class GridFightCondFalseConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondFalseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondFalseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondFalseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondFalseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
