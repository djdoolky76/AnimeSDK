#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ItemDisplayData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RECHARGEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xDE56160)

namespace RPG::Client
{
	class RechargeItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* ItemList; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* OrderIDList; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* ProductIDList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEITEM_CTOR_OFFSET))(this);
		}

	};
}
