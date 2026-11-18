#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_InitScrollViewData_SAlignParam.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
class MonoUITableScrollV2_ScrollParams_AlignParam;
namespace System::Collections { class IEnumerable; }

#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINITDATAALIGNSERVICE_FILLPIVOTBOUNDSBYPIVOT_OFFSET UNITYSDK_OFFSET(0x1ADEDC30)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINITDATAALIGNSERVICE_FINDDATAINDEXBYDATA_OFFSET UNITYSDK_OFFSET(0x1ADEDBA0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINITDATAALIGNSERVICE_PROCESSALIGNPARAM_OFFSET UNITYSDK_OFFSET(0x1ADED890)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINITDATAALIGNSERVICE_PROCESSANDSTORE_OFFSET UNITYSDK_OFFSET(0x1ADED750)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINITDATAALIGNSERVICE_RESET_OFFSET UNITYSDK_OFFSET(0x1ADED660)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINITDATAALIGNSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADEE0D0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollViewInitDataAlignService_TypeDefinitionIndex = 73934;

	class ScrollViewInitDataAlignService : public ::System::Object
	{
	public:
		::MonoUITableScrollV2_InitScrollViewData_SAlignParam AlignParam; // 0x10
		::MonoUITableScrollV2_ScrollParams_AlignParam* AlignParam2; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINITDATAALIGNSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINITDATAALIGNSERVICE_RESET_OFFSET))(this);
		}

		::MonoUITableScrollV2_InitScrollViewData_SAlignParam ProcessAndStore(::MonoUITableScrollV2_InitScrollViewData_SAlignParam alignParam, ::System::Collections::IEnumerable* newData, ::MonoUITableScrollV2* scrollView)
		{
			return ((::MonoUITableScrollV2_InitScrollViewData_SAlignParam(*)(::PVOID, ::MonoUITableScrollV2_InitScrollViewData_SAlignParam, ::System::Collections::IEnumerable*, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINITDATAALIGNSERVICE_PROCESSANDSTORE_OFFSET))(this, alignParam, newData, scrollView);
		}

		static ::MonoUITableScrollV2_InitScrollViewData_SAlignParam ProcessAlignParam(::MonoUITableScrollV2_InitScrollViewData_SAlignParam alignParam, ::System::Collections::IEnumerable* newData, ::MonoUITableScrollV2* scrollView)
		{
			return ((::MonoUITableScrollV2_InitScrollViewData_SAlignParam(*)(::MonoUITableScrollV2_InitScrollViewData_SAlignParam, ::System::Collections::IEnumerable*, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINITDATAALIGNSERVICE_PROCESSALIGNPARAM_OFFSET))(alignParam, newData, scrollView);
		}

		static ::MonoUITableScrollV2_InitScrollViewData_SAlignParam FillPivotBoundsByPivot(::MonoUITableScrollV2_InitScrollViewData_SAlignParam alignParam, ::System::Int32 pivotIndex, ::System::Collections::IEnumerable* newData, ::MonoUITableScrollV2* scrollView)
		{
			return ((::MonoUITableScrollV2_InitScrollViewData_SAlignParam(*)(::MonoUITableScrollV2_InitScrollViewData_SAlignParam, ::System::Int32, ::System::Collections::IEnumerable*, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINITDATAALIGNSERVICE_FILLPIVOTBOUNDSBYPIVOT_OFFSET))(alignParam, pivotIndex, newData, scrollView);
		}

		static ::System::Int32 FindDataIndexByData(::MonoUITableScrollV2* scrollView, ::System::Object* targetData)
		{
			return ((::System::Int32(*)(::MonoUITableScrollV2*, ::System::Object*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINITDATAALIGNSERVICE_FINDDATAINDEXBYDATA_OFFSET))(scrollView, targetData);
		}
	};
}
