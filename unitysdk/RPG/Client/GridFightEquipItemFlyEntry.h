#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTEQUIPITEMFLYENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0xDAE0F20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipItemFlyEntry_TypeDefinitionIndex = 65885;

	class GridFightEquipItemFlyEntry : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipItemData* EquipItem; // 0x10
		::UnityEngine::Vector3 StartPos; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMFLYENTRY_CTOR_OFFSET))(this);
		}

	};
}
