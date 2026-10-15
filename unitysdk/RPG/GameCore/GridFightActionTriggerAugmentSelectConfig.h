#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionTriggerAugmentSelectConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERAUGMENTSELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D724AB0)
#define RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERAUGMENTSELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D724AC0)
#define RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERAUGMENTSELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D724F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionTriggerAugmentSelectConfig_TypeDefinitionIndex = 19309;

	class GridFightActionTriggerAugmentSelectConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERAUGMENTSELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionTriggerAugmentSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionTriggerAugmentSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERAUGMENTSELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionTriggerAugmentSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionTriggerAugmentSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERAUGMENTSELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
