#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightElationLaughPointEquipComponent; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAD1D80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftMapInfo___c__DisplayClass14_0_TypeDefinitionIndex = 66051;

	class GridFightEquipCraftMapInfo___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightElationLaughPointEquipComponent* equipComponent; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

	};
}
