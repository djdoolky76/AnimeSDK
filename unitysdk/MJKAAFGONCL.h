#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightConsumableInfo; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipInfo; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightGameSession; }
namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTeam; }
namespace RPG::GameCore { class GridFightDragOpEquipSelector; }
namespace RPG::GameCore { class GridFightDragOpGridSelector; }
namespace RPG::GameCore { class GridFightDragOpRoleSelector; }
namespace RPG::GameCore { class GridFightDragOpgConsumableSelector; }

#define MJKAAFGONCL_CTOR_OFFSET UNITYSDK_OFFSET(0xB968170)
#define MJKAAFGONCL_EFJNHEPHDJM_OFFSET UNITYSDK_OFFSET(0xB967F20)
#define MJKAAFGONCL_KJNMMFEAFCH_OFFSET UNITYSDK_OFFSET(0xB968030)
#define MJKAAFGONCL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB967D50)
#define MJKAAFGONCL_MDJBPLKFAKP_OFFSET UNITYSDK_OFFSET(0xB9680D0)
#define MJKAAFGONCL_OJOFNANIKLC_OFFSET UNITYSDK_OFFSET(0xB967DD0)

inline static constexpr unsigned int MJKAAFGONCL_TypeDefinitionIndex = 65502;

	class MJKAAFGONCL : public ::System::Object
	{
	public:
		::RPG::Client::GridFightConsumableInfo* KBOHJOMPLKH; // 0x10
		::RPG::Client::GridFightEquipInfo* NCHCLADAFBP; // 0x18
		::RPG::Client::GridFightTeam* GJHCMKBNING; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJKAAFGONCL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::GridFightGameSession* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameSession*))((::PBYTE)hIl2Cpp + MJKAAFGONCL_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridData* OJOFNANIKLC(::RPG::GameCore::GridFightDragOpGridSelector* a1)
		{
			return ((::RPG::Client::GridFightGridData*(*)(::PVOID, ::RPG::GameCore::GridFightDragOpGridSelector*))((::PBYTE)hIl2Cpp + MJKAAFGONCL_OJOFNANIKLC_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* EFJNHEPHDJM(::RPG::GameCore::GridFightDragOpRoleSelector* a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::GameCore::GridFightDragOpRoleSelector*))((::PBYTE)hIl2Cpp + MJKAAFGONCL_EFJNHEPHDJM_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* KJNMMFEAFCH(::RPG::GameCore::GridFightDragOpEquipSelector* a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::RPG::GameCore::GridFightDragOpEquipSelector*))((::PBYTE)hIl2Cpp + MJKAAFGONCL_KJNMMFEAFCH_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightConsumableItemData* MDJBPLKFAKP(::RPG::GameCore::GridFightDragOpgConsumableSelector* a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::RPG::GameCore::GridFightDragOpgConsumableSelector*))((::PBYTE)hIl2Cpp + MJKAAFGONCL_MDJBPLKFAKP_OFFSET))(this, a1);
		}

	};
