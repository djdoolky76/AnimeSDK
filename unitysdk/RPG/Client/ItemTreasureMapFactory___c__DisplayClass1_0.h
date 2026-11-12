#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ItemCureInfoDataRow; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ITEMTREASUREMAPFACTORY___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDDC28D0)
#define RPG_CLIENT_ITEMTREASUREMAPFACTORY___C__DISPLAYCLASS1_0__TRYCREATE_G__ITERATEROWS_0_OFFSET UNITYSDK_OFFSET(0xDDC28E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemTreasureMapFactory___c__DisplayClass1_0_TypeDefinitionIndex = 67674;

	class ItemTreasureMapFactory___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 itemID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMTREASUREMAPFACTORY___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ItemCureInfoDataRow*>* _TryCreate_g__IterateRows_0()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ItemCureInfoDataRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMTREASUREMAPFACTORY___C__DISPLAYCLASS1_0__TRYCREATE_G__ITERATEROWS_0_OFFSET))(this);
		}

	};
}
