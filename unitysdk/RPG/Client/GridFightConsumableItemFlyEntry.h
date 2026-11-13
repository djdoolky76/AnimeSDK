#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class GridFightBonusConsumableItemData; }

#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMFLYENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D584CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightConsumableItemFlyEntry_TypeDefinitionIndex = 65886;

	class GridFightConsumableItemFlyEntry : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusConsumableItemData* ConsumableItem; // 0x10
		::UnityEngine::Vector3 StartPos; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMFLYENTRY_CTOR_OFFSET))(this);
		}

	};
}
