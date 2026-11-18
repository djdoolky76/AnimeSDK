#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Mail { class LinkedResource; }

#define SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x1D895890)
#define SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1D895880)
#define SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D895820)
#define SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_INSERTITEM_OFFSET UNITYSDK_OFFSET(0x1D8958D0)
#define SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x1D895920)
#define SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_SETITEM_OFFSET UNITYSDK_OFFSET(0x1D895960)
#define SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8957E0)

namespace System::Net::Mail
{
	inline static constexpr unsigned int LinkedResourceCollection_TypeDefinitionIndex = 3585;

	class LinkedResourceCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void ClearItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_CLEARITEMS_OFFSET))(this);
		}

		::System::Void InsertItem(::System::Int32 index, ::System::Net::Mail::LinkedResource* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::Mail::LinkedResource*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_INSERTITEM_OFFSET))(this, index, item);
		}

		::System::Void RemoveItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_REMOVEITEM_OFFSET))(this, index);
		}

		::System::Void SetItem(::System::Int32 index, ::System::Net::Mail::LinkedResource* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::Mail::LinkedResource*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_LINKEDRESOURCECOLLECTION_SETITEM_OFFSET))(this, index, item);
		}
	};
}
