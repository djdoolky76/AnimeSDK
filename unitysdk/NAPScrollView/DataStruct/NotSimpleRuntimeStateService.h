#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_FeatureState.h"
#include "unitysdk/System/Object.h"

namespace NAPScrollView::DataStruct { class NotSimpleScrollViewAdapterServices; }
namespace NAPScrollView::DataStruct { class ScrollViewRuntimeState; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_GET_CHANGECELLINDEX_OFFSET UNITYSDK_OFFSET(0x11579A50)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_GET_CHANGECELLRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x11579AF0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_GET_CHECKAUTOSCROLL_OFFSET UNITYSDK_OFFSET(0x115799B0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_GET_FEATURESTATE_OFFSET UNITYSDK_OFFSET(0x11579910)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_GET_INITLINESIZE_OFFSET UNITYSDK_OFFSET(0x11579C40)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_GET_ITEMLINESIZE_OFFSET UNITYSDK_OFFSET(0x11579B90)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_GET_MINITED_OFFSET UNITYSDK_OFFSET(0x11579850)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_GET_RT_OFFSET UNITYSDK_OFFSET(0x11579820)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_GET_TOTALSIZEBEFORELINE_OFFSET UNITYSDK_OFFSET(0x11579BD0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_SET_CHANGECELLINDEX_OFFSET UNITYSDK_OFFSET(0x11579A80)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_SET_CHANGECELLRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x11579B20)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_SET_CHECKAUTOSCROLL_OFFSET UNITYSDK_OFFSET(0x115799E0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_SET_FEATURESTATE_OFFSET UNITYSDK_OFFSET(0x11579940)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_SET_MINITED_OFFSET UNITYSDK_OFFSET(0x11579890)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x11579810)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int NotSimpleRuntimeStateService_TypeDefinitionIndex = 58211;

	class NotSimpleRuntimeStateService : public ::System::Object
	{
	public:
		::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* _services; // 0x10

		::System::Void _ctor(::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE__CTOR_OFFSET))(this, services);
		}

		::NAPScrollView::DataStruct::ScrollViewRuntimeState* get_Rt()
		{
			return ((::NAPScrollView::DataStruct::ScrollViewRuntimeState*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_GET_RT_OFFSET))(this);
		}

		::System::Boolean get_MInited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_GET_MINITED_OFFSET))(this);
		}

		::System::Void set_MInited(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_SET_MINITED_OFFSET))(this, value);
		}

		::MonoUITableScrollV2_FeatureState get_FeatureState()
		{
			return ((::MonoUITableScrollV2_FeatureState(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_GET_FEATURESTATE_OFFSET))(this);
		}

		::System::Void set_FeatureState(::MonoUITableScrollV2_FeatureState value)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_FeatureState))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_SET_FEATURESTATE_OFFSET))(this, value);
		}

		::System::Boolean get_CheckAutoScroll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_GET_CHECKAUTOSCROLL_OFFSET))(this);
		}

		::System::Void set_CheckAutoScroll(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_SET_CHECKAUTOSCROLL_OFFSET))(this, value);
		}

		::System::Int32 get_ChangeCellIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_GET_CHANGECELLINDEX_OFFSET))(this);
		}

		::System::Void set_ChangeCellIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_SET_CHANGECELLINDEX_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get_ChangeCellRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_GET_CHANGECELLRECTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_ChangeCellRectTransform(::UnityEngine::RectTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_SET_CHANGECELLRECTTRANSFORM_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* get_ItemLineSize()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_GET_ITEMLINESIZE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* get_TotalSizeBeforeLine()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_GET_TOTALSIZEBEFORELINE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* get_InitLineSize()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLERUNTIMESTATESERVICE_GET_INITLINESIZE_OFFSET))(this);
		}
	};
}
