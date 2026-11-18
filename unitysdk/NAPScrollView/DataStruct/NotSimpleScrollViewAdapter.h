#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
namespace NAPScrollView::DataStruct { class IScrollViewAdapterServices; }
namespace NAPScrollView::DataStruct { class NotSimpleScrollViewAdapterServices; }

#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTER_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x12FD3B30)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x12FD3AE0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int NotSimpleScrollViewAdapter_TypeDefinitionIndex = 54698;

	class NotSimpleScrollViewAdapter : public ::System::Object
	{
	public:
		::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* _services; // 0x10

		::System::Void _ctor(::MonoUITableScrollV2* owner)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTER__CTOR_OFFSET))(this, owner);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterServices* get_Services()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterServices*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTER_GET_SERVICES_OFFSET))(this);
		}
	};
}
