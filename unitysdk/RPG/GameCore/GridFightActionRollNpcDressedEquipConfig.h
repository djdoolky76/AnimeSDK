#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionRollNpcDressedEquipConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONROLLNPCDRESSEDEQUIPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F6F50)
#define RPG_GAMECORE_GRIDFIGHTACTIONROLLNPCDRESSEDEQUIPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6F6F60)
#define RPG_GAMECORE_GRIDFIGHTACTIONROLLNPCDRESSEDEQUIPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F7340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionRollNpcDressedEquipConfig_TypeDefinitionIndex = 19317;

	class GridFightActionRollNpcDressedEquipConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONROLLNPCDRESSEDEQUIPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionRollNpcDressedEquipConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionRollNpcDressedEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONROLLNPCDRESSEDEQUIPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionRollNpcDressedEquipConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionRollNpcDressedEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONROLLNPCDRESSEDEQUIPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
