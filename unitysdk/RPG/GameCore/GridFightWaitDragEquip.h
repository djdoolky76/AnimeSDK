#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightDragOpEquipSelector; }
namespace RPG::GameCore { class GridFightDragOpRoleSelector; }
namespace RPG::GameCore { class GridFightWaitDragEquip; }

#define RPG_GAMECORE_GRIDFIGHTWAITDRAGEQUIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71BEF0)
#define RPG_GAMECORE_GRIDFIGHTWAITDRAGEQUIP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D71BF00)
#define RPG_GAMECORE_GRIDFIGHTWAITDRAGEQUIP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D71BEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightWaitDragEquip_TypeDefinitionIndex = 19961;

	class GridFightWaitDragEquip : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::GridFightDragOpEquipSelector* Equip; // 0x18
		::RPG::GameCore::GridFightDragOpRoleSelector* TargetRole; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITDRAGEQUIP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightWaitDragEquip* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightWaitDragEquip*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITDRAGEQUIP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightWaitDragEquip* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightWaitDragEquip*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITDRAGEQUIP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
