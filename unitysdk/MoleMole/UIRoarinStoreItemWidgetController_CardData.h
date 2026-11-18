#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueType.h"

class HGAJKHIMKJP;

#define MOLEMOLE_UIROARINSTOREITEMWIDGETCONTROLLER_CARDDATA_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x7C96D0)
#define MOLEMOLE_UIROARINSTOREITEMWIDGETCONTROLLER_CARDDATA_GET_ISTODAYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x7C96E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoarinStoreItemWidgetController_CardData_TypeDefinitionIndex = 88177;

	struct alignas(8) UIRoarinStoreItemWidgetController_CardData
	{
		::System::Int32 ExchangeId; // 0x10
		::System::Int32 Index; // 0x14
		::System::Int32 MaxIndex; // 0x18
		::System::Byte _padding0[0x4];
		::HGAJKHIMKJP* ItemData; // 0x20
		::Foundation::AssetPath ImagePath; // 0x28

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREITEMWIDGETCONTROLLER_CARDDATA_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean get_IsTodayExchange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREITEMWIDGETCONTROLLER_CARDDATA_GET_ISTODAYEXCHANGE_OFFSET))(this);
		}
	};
}
