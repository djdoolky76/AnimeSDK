#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
namespace NAPScrollView::DataStruct { class IScrollViewAdapter; }

#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWADAPTERFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x120F0F00)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollViewAdapterFactory_TypeDefinitionIndex = 62526;

	class ScrollViewAdapterFactory : public ::System::Object
	{
	public:
		static ::NAPScrollView::DataStruct::IScrollViewAdapter* Create(::MonoUITableScrollV2* owner)
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapter*(*)(::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWADAPTERFACTORY_CREATE_OFFSET))(owner);
		}
	};
}
