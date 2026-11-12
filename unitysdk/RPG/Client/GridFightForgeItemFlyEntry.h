#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class GridFightForgeItemData; }

#define RPG_CLIENT_GRIDFIGHTFORGEITEMFLYENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0xDAF9410)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeItemFlyEntry_TypeDefinitionIndex = 65884;

	class GridFightForgeItemFlyEntry : public ::System::Object
	{
	public:
		::RPG::Client::GridFightForgeItemData* ForgeItem; // 0x10
		::UnityEngine::Vector3 StartPos; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEITEMFLYENTRY_CTOR_OFFSET))(this);
		}

	};
}
