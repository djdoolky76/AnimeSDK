#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitConfig; }

#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS37_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1D17D830)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS37_1__GETEQUIPRECOMMENDROLEIDLIST_B__1_OFFSET UNITYSDK_OFFSET(0x1D17E680)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS37_1__GETEQUIPRECOMMENDROLEIDLIST_B__2_OFFSET UNITYSDK_OFFSET(0x1D17E700)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS37_1__GETEQUIPRECOMMENDROLEIDLIST_B__3_OFFSET UNITYSDK_OFFSET(0x1D17E750)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipInfo___c__DisplayClass37_1_TypeDefinitionIndex = 66553;

	template <typename T>
	class GridFightEquipInfo___c__DisplayClass37_1 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipItemConfig* equipConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS37_1_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEquipRecommendRoleIDList_b__1(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS37_1__GETEQUIPRECOMMENDROLEIDLIST_B__1_OFFSET))(this, a1);
		}

		::System::Boolean _GetEquipRecommendRoleIDList_b__2(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS37_1__GETEQUIPRECOMMENDROLEIDLIST_B__2_OFFSET))(this, a1);
		}

		::System::Boolean _GetEquipRecommendRoleIDList_b__3(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS37_1__GETEQUIPRECOMMENDROLEIDLIST_B__3_OFFSET))(this, a1);
		}

	};
}
