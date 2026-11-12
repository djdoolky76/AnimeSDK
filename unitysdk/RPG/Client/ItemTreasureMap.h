#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ItemTreasureMapPage; }
namespace RPG::GameCore { class ItemCureInfoDataRow; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_ITEMTREASUREMAP_CTOR_OFFSET UNITYSDK_OFFSET(0xDDC2510)
#define RPG_CLIENT_ITEMTREASUREMAP_GETPAGE_OFFSET UNITYSDK_OFFSET(0xDDC23A0)
#define RPG_CLIENT_ITEMTREASUREMAP_GET_PAGECOUNT_OFFSET UNITYSDK_OFFSET(0xDDC2240)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemTreasureMap_TypeDefinitionIndex = 67671;

	class ItemTreasureMap : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ItemTreasureMapPage*>* _Pages; // 0x10
		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ItemCureInfoDataRow*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ItemCureInfoDataRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMTREASUREMAP_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_PageCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMTREASUREMAP_GET_PAGECOUNT_OFFSET))(this);
		}

		::RPG::Client::ItemTreasureMapPage* GetPage(::System::Int32 a1)
		{
			return ((::RPG::Client::ItemTreasureMapPage*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMTREASUREMAP_GETPAGE_OFFSET))(this, a1);
		}

	};
}
