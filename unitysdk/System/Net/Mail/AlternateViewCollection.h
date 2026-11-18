#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Mail { class AlternateView; }

#define SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION_CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x1D930700)
#define SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D9306F0)
#define SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION_INSERTITEM_OFFSET UNITYSDK_OFFSET(0x1D930740)
#define SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x1D930790)
#define SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION_SETITEM_OFFSET UNITYSDK_OFFSET(0x1D9307D0)
#define SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9306B0)

namespace System::Net::Mail
{
	inline static constexpr unsigned int AlternateViewCollection_TypeDefinitionIndex = 3578;

	class AlternateViewCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION_DISPOSE_OFFSET))(this);
		}

		::System::Void ClearItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION_CLEARITEMS_OFFSET))(this);
		}

		::System::Void InsertItem(::System::Int32 index, ::System::Net::Mail::AlternateView* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::Mail::AlternateView*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION_INSERTITEM_OFFSET))(this, index, item);
		}

		::System::Void RemoveItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION_REMOVEITEM_OFFSET))(this, index);
		}

		::System::Void SetItem(::System::Int32 index, ::System::Net::Mail::AlternateView* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::Mail::AlternateView*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_ALTERNATEVIEWCOLLECTION_SETITEM_OFFSET))(this, index, item);
		}
	};
}
