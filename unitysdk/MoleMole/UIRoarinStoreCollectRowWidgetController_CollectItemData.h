#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAAHNJMGMEH_CAKLJLEJADC.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole
{
	inline static constexpr unsigned int UIRoarinStoreCollectRowWidgetController_CollectItemData_TypeDefinitionIndex = 76441;

	struct alignas(8) UIRoarinStoreCollectRowWidgetController_CollectItemData
	{
		::System::Int32 RoarinStoreExchangeId; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* TitleKey; // 0x18
		::NAAHNJMGMEH_CAKLJLEJADC Status; // 0x20
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* RequiredCards; // 0x28
		::System::Int32 RewardID; // 0x30
		::System::Byte _padding2[0x4];
		::System::Int64 TimeStamp; // 0x38
	};
}
