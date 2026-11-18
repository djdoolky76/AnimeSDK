#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollViewConfigServiceBase.h"

class MonoUITableScrollV2;
namespace NAPScrollView::DataStruct { class NotSimpleScrollViewAdapterServices; }

#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLECONFIGSERVICE_GET_DYNAMICALLOCATEITEMDELAYRECYCLEOPTIMAZATION_OFFSET UNITYSDK_OFFSET(0x16B46DF0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLECONFIGSERVICE_GET_DYNAMICALLOCATEITEM_OFFSET UNITYSDK_OFFSET(0x16B46C40)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLECONFIGSERVICE_GET_LOOPSCROLL_OFFSET UNITYSDK_OFFSET(0x16B46AA0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLECONFIGSERVICE_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x16B46A70)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLECONFIGSERVICE_GET_SHOULDDYNAMICALLOCATEITEM_OFFSET UNITYSDK_OFFSET(0x16B46DE0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLECONFIGSERVICE_GET_SIMPLEMODE_OFFSET UNITYSDK_OFFSET(0x16B46A90)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLECONFIGSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x16B46A60)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int NotSimpleConfigService_TypeDefinitionIndex = 42204;

	class NotSimpleConfigService : public ::NAPScrollView::DataStruct::ScrollViewConfigServiceBase
	{
	public:
		::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* _services; // 0x10

		::System::Void _ctor(::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLECONFIGSERVICE__CTOR_OFFSET))(this, services);
		}

		::MonoUITableScrollV2* get_Owner()
		{
			return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLECONFIGSERVICE_GET_OWNER_OFFSET))(this);
		}

		::System::Boolean get_SimpleMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLECONFIGSERVICE_GET_SIMPLEMODE_OFFSET))(this);
		}

		::System::Boolean get_LoopScroll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLECONFIGSERVICE_GET_LOOPSCROLL_OFFSET))(this);
		}

		::System::Boolean get_DynamicAllocateItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLECONFIGSERVICE_GET_DYNAMICALLOCATEITEM_OFFSET))(this);
		}

		::System::Boolean get_ShouldDynamicAllocateItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLECONFIGSERVICE_GET_SHOULDDYNAMICALLOCATEITEM_OFFSET))(this);
		}

		::System::Boolean get_DynamicAllocateItemDelayRecycleOptimazation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLECONFIGSERVICE_GET_DYNAMICALLOCATEITEMDELAYRECYCLEOPTIMAZATION_OFFSET))(this);
		}
	};
}
