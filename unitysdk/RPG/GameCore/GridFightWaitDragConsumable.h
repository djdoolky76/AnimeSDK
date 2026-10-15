#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightDragOpEquipSelector; }
namespace RPG::GameCore { class GridFightDragOpRoleSelector; }
namespace RPG::GameCore { class GridFightDragOpgConsumableSelector; }
namespace RPG::GameCore { class GridFightWaitDragConsumable; }

#define RPG_GAMECORE_GRIDFIGHTWAITDRAGCONSUMABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7497D0)
#define RPG_GAMECORE_GRIDFIGHTWAITDRAGCONSUMABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7497E0)
#define RPG_GAMECORE_GRIDFIGHTWAITDRAGCONSUMABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7497A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightWaitDragConsumable_TypeDefinitionIndex = 19962;

	class GridFightWaitDragConsumable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::GridFightDragOpgConsumableSelector* Consumable; // 0x18
		::RPG::GameCore::GridFightDragOpRoleSelector* TargetRole; // 0x20
		::RPG::GameCore::GridFightDragOpEquipSelector* TargetEquip; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITDRAGCONSUMABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightWaitDragConsumable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightWaitDragConsumable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITDRAGCONSUMABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightWaitDragConsumable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightWaitDragConsumable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITDRAGCONSUMABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
