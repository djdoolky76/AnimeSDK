#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionTriggerChimeraSelectConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERCHIMERASELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x205FA300)
#define RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERCHIMERASELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x205FA310)
#define RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERCHIMERASELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x205FA2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionTriggerChimeraSelectConfig_TypeDefinitionIndex = 19526;

	class GridFightActionTriggerChimeraSelectConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERCHIMERASELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionTriggerChimeraSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionTriggerChimeraSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERCHIMERASELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionTriggerChimeraSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionTriggerChimeraSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERCHIMERASELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
