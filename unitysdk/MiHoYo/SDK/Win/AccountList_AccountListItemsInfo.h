#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_WIN_ACCOUNTLIST_ACCOUNTLISTITEMSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DECFD00)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int AccountList_AccountListItemsInfo_TypeDefinitionIndex = 20589;

	class AccountList_AccountListItemsInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* account_list_items; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_ACCOUNTLISTITEMSINFO__CTOR_OFFSET))(this);
		}
	};
}
