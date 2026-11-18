#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
namespace NAPScrollView::DataStruct { class IScrollViewAdapterServices; }
namespace NAPScrollView::DataStruct { class SimpleScrollViewAdapterServices; }

#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTER_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x18F947F0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F947A0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int SimpleScrollViewAdapter_TypeDefinitionIndex = 85598;

	class SimpleScrollViewAdapter : public ::System::Object
	{
	public:
		::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices* _services; // 0x10

		::System::Void _ctor(::MonoUITableScrollV2* owner)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTER__CTOR_OFFSET))(this, owner);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterServices* get_Services()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterServices*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTER_GET_SERVICES_OFFSET))(this);
		}
	};
}
