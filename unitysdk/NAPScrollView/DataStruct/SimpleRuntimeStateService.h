#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_FeatureState.h"
#include "unitysdk/System/Object.h"

namespace NAPScrollView::DataStruct { class ScrollViewRuntimeState; }
namespace NAPScrollView::DataStruct { class SimpleScrollViewAdapterServices; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_ASSERTEMPTYDYNAMICSIZECHECK_OFFSET UNITYSDK_OFFSET(0x105A79D0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_ASSERTEMPTYDYNAMICSIZE_OFFSET UNITYSDK_OFFSET(0x105A7850)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_GET_CHECKAUTOSCROLL_OFFSET UNITYSDK_OFFSET(0x105A7790)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_GET_FEATURESTATE_OFFSET UNITYSDK_OFFSET(0x105A7770)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_GET_INITLINESIZE_OFFSET UNITYSDK_OFFSET(0x105A7930)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_GET_ITEMLINESIZE_OFFSET UNITYSDK_OFFSET(0x105A77B0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_GET_MINITED_OFFSET UNITYSDK_OFFSET(0x105A76B0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_GET_RT_OFFSET UNITYSDK_OFFSET(0x105A7680)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_GET_TOTALSIZEBEFORELINE_OFFSET UNITYSDK_OFFSET(0x105A7890)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_SET_CHECKAUTOSCROLL_OFFSET UNITYSDK_OFFSET(0x105A77A0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_SET_FEATURESTATE_OFFSET UNITYSDK_OFFSET(0x105A7780)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_SET_MINITED_OFFSET UNITYSDK_OFFSET(0x105A76F0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x105A7A10)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x105A7670)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int SimpleRuntimeStateService_TypeDefinitionIndex = 85318;

	class SimpleRuntimeStateService : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>** StaticGet_EmptyItemSizeDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(SimpleRuntimeStateService_TypeDefinitionIndex)->GetStaticField(0x4AEF0);
		}
		::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices* _services; // 0x10
		::MonoUITableScrollV2_FeatureState _FeatureState_k__BackingField; // 0x18
		::System::Boolean _CheckAutoScroll_k__BackingField; // 0x1C

		::System::Void _ctor(::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE__CTOR_OFFSET))(this, services);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE__CCTOR_OFFSET))();
		}

		::NAPScrollView::DataStruct::ScrollViewRuntimeState* get_Rt()
		{
			return ((::NAPScrollView::DataStruct::ScrollViewRuntimeState*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_GET_RT_OFFSET))(this);
		}

		::System::Boolean get_MInited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_GET_MINITED_OFFSET))(this);
		}

		::System::Void set_MInited(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_SET_MINITED_OFFSET))(this, value);
		}

		::MonoUITableScrollV2_FeatureState get_FeatureState()
		{
			return ((::MonoUITableScrollV2_FeatureState(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_GET_FEATURESTATE_OFFSET))(this);
		}

		::System::Void set_FeatureState(::MonoUITableScrollV2_FeatureState value)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_FeatureState))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_SET_FEATURESTATE_OFFSET))(this, value);
		}

		::System::Boolean get_CheckAutoScroll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_GET_CHECKAUTOSCROLL_OFFSET))(this);
		}

		::System::Void set_CheckAutoScroll(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_SET_CHECKAUTOSCROLL_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* get_ItemLineSize()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_GET_ITEMLINESIZE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* get_TotalSizeBeforeLine()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_GET_TOTALSIZEBEFORELINE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* get_InitLineSize()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_GET_INITLINESIZE_OFFSET))(this);
		}

		static ::System::Void AssertEmptyDynamicSizeCheck(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* dict)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_ASSERTEMPTYDYNAMICSIZECHECK_OFFSET))(dict);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* AssertEmptyDynamicSize(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* dict)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLERUNTIMESTATESERVICE_ASSERTEMPTYDYNAMICSIZE_OFFSET))(dict);
		}
	};
}
