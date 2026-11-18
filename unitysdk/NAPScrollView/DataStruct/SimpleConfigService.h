#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollViewConfigServiceBase.h"

class MonoUITableScrollV2;
namespace NAPScrollView::DataStruct { class SimpleScrollViewAdapterServices; }

#define NAPSCROLLVIEW_DATASTRUCT_SIMPLECONFIGSERVICE_GET_DYNAMICALLOCATEITEMDELAYRECYCLEOPTIMAZATION_OFFSET UNITYSDK_OFFSET(0x12FD5220)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLECONFIGSERVICE_GET_DYNAMICALLOCATEITEM_OFFSET UNITYSDK_OFFSET(0x12FD5200)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLECONFIGSERVICE_GET_LOOPSCROLL_OFFSET UNITYSDK_OFFSET(0x12FD51F0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLECONFIGSERVICE_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x12FD51C0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLECONFIGSERVICE_GET_SHOULDDYNAMICALLOCATEITEM_OFFSET UNITYSDK_OFFSET(0x12FD5210)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLECONFIGSERVICE_GET_SIMPLEMODE_OFFSET UNITYSDK_OFFSET(0x12FD51E0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLECONFIGSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x12FD51B0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int SimpleConfigService_TypeDefinitionIndex = 65163;

	class SimpleConfigService : public ::NAPScrollView::DataStruct::ScrollViewConfigServiceBase
	{
	public:
		::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices* _services; // 0x10

		::System::Void _ctor(::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLECONFIGSERVICE__CTOR_OFFSET))(this, services);
		}

		::MonoUITableScrollV2* get_Owner()
		{
			return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLECONFIGSERVICE_GET_OWNER_OFFSET))(this);
		}

		::System::Boolean get_SimpleMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLECONFIGSERVICE_GET_SIMPLEMODE_OFFSET))(this);
		}

		::System::Boolean get_LoopScroll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLECONFIGSERVICE_GET_LOOPSCROLL_OFFSET))(this);
		}

		::System::Boolean get_DynamicAllocateItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLECONFIGSERVICE_GET_DYNAMICALLOCATEITEM_OFFSET))(this);
		}

		::System::Boolean get_ShouldDynamicAllocateItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLECONFIGSERVICE_GET_SHOULDDYNAMICALLOCATEITEM_OFFSET))(this);
		}

		::System::Boolean get_DynamicAllocateItemDelayRecycleOptimazation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLECONFIGSERVICE_GET_DYNAMICALLOCATEITEMDELAYRECYCLEOPTIMAZATION_OFFSET))(this);
		}
	};
}
