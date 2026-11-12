#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionTriggerTreasurySelectConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERTREASURYSELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E92E9D0)
#define RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERTREASURYSELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E92E9E0)
#define RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERTREASURYSELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E92E990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionTriggerTreasurySelectConfig_TypeDefinitionIndex = 19521;

	class GridFightActionTriggerTreasurySelectConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERTREASURYSELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionTriggerTreasurySelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionTriggerTreasurySelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERTREASURYSELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionTriggerTreasurySelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionTriggerTreasurySelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERTREASURYSELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
