#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionTriggerEquipSelectConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONTRIGGEREQUIPSELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E92E910)
#define RPG_GAMECORE_GRIDFIGHTACTIONTRIGGEREQUIPSELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E92E920)
#define RPG_GAMECORE_GRIDFIGHTACTIONTRIGGEREQUIPSELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E92E8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionTriggerEquipSelectConfig_TypeDefinitionIndex = 19523;

	class GridFightActionTriggerEquipSelectConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONTRIGGEREQUIPSELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionTriggerEquipSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionTriggerEquipSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONTRIGGEREQUIPSELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionTriggerEquipSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionTriggerEquipSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONTRIGGEREQUIPSELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
