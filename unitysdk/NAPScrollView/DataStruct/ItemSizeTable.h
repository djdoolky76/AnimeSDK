#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_BUILDDEFAULT_OFFSET UNITYSDK_OFFSET(0x12FCFD00)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_CLEARMEASURED_OFFSET UNITYSDK_OFFSET(0x12FCFA40)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_CLEARRUNTIMECACHE_OFFSET UNITYSDK_OFFSET(0x12FCFB60)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x12FCF820)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_ENSUREDEFAULTFORNEWLINES_OFFSET UNITYSDK_OFFSET(0x12FCFF60)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GETDATASTARTPOSITIONATAXIS_OFFSET UNITYSDK_OFFSET(0x12FD01B0)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GETESTIMATEDITEMSIZEATAXIS_OFFSET UNITYSDK_OFFSET(0x12FD03F0)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GETITEMSIZEATAXIS_OFFSET UNITYSDK_OFFSET(0x12FD0330)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GET_INITLINESIZESTORE_OFFSET UNITYSDK_OFFSET(0x12FCF810)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GET_INITLINESIZE_OFFSET UNITYSDK_OFFSET(0x12FCF6D0)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GET_ITEMLINESIZESTORE_OFFSET UNITYSDK_OFFSET(0x12FCF7F0)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GET_ITEMLINESIZE_OFFSET UNITYSDK_OFFSET(0x12FCF6B0)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GET_ITEMSIZEATAXISTOTAL_OFFSET UNITYSDK_OFFSET(0x12FCF6E0)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GET_MEASUREDAVERAGESIZEATAXIS_OFFSET UNITYSDK_OFFSET(0x12FCF720)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GET_MEASUREDLINECOUNT_OFFSET UNITYSDK_OFFSET(0x12FCF700)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GET_TOTALSIZEBEFORELINESTORE_OFFSET UNITYSDK_OFFSET(0x12FCF800)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GET_TOTALSIZEBEFORELINE_OFFSET UNITYSDK_OFFSET(0x12FCF6C0)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_ISLINEMEASURED_OFFSET UNITYSDK_OFFSET(0x12FCF790)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_RECOMPUTETOTALS_OFFSET UNITYSDK_OFFSET(0x12FD00C0)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_SETINITLINESIZE_OFFSET UNITYSDK_OFFSET(0x12FCFAE0)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_SET_ITEMSIZEATAXISTOTAL_OFFSET UNITYSDK_OFFSET(0x12FCF6F0)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_UPDATEITEMSIZE_OFFSET UNITYSDK_OFFSET(0x12FD0590)
#define NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x12FD0850)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ItemSizeTable_TypeDefinitionIndex = 78859;

	class ItemSizeTable : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* _totalSizeBeforeLine; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* _initLineSize; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* _itemLineSize; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Int32>* _measuredLines; // 0x28
		::System::Single _ItemSizeAtAxisTotal_k__BackingField; // 0x30
		::System::Single _measuredSizeSum; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Single>* get_ItemLineSize()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GET_ITEMLINESIZE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Single>* get_TotalSizeBeforeLine()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GET_TOTALSIZEBEFORELINE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Single>* get_InitLineSize()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GET_INITLINESIZE_OFFSET))(this);
		}

		::System::Single get_ItemSizeAtAxisTotal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GET_ITEMSIZEATAXISTOTAL_OFFSET))(this);
		}

		::System::Void set_ItemSizeAtAxisTotal(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_SET_ITEMSIZEATAXISTOTAL_OFFSET))(this, value);
		}

		::System::Int32 get_MeasuredLineCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GET_MEASUREDLINECOUNT_OFFSET))(this);
		}

		::System::Single get_MeasuredAverageSizeAtAxis()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GET_MEASUREDAVERAGESIZEATAXIS_OFFSET))(this);
		}

		::System::Boolean IsLineMeasured(::System::Int32 lineIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_ISLINEMEASURED_OFFSET))(this, lineIndex);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* get_ItemLineSizeStore()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GET_ITEMLINESIZESTORE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* get_TotalSizeBeforeLineStore()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GET_TOTALSIZEBEFORELINESTORE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* get_InitLineSizeStore()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GET_INITLINESIZESTORE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_CLEAR_OFFSET))(this);
		}

		::System::Void SetInitLineSize(::System::Int32 lineIndex, ::System::Single size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_SETINITLINESIZE_OFFSET))(this, lineIndex, size);
		}

		::System::Void ClearRuntimeCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_CLEARRUNTIMECACHE_OFFSET))(this);
		}

		::System::Void ClearMeasured()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_CLEARMEASURED_OFFSET))(this);
		}

		::System::Void BuildDefault(::System::Int32 dataCount, ::System::Int32 itemCountAtOtherAxis, ::System::Single defaultItemSizeAtAxis, ::System::Single spaceAtAxis)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_BUILDDEFAULT_OFFSET))(this, dataCount, itemCountAtOtherAxis, defaultItemSizeAtAxis, spaceAtAxis);
		}

		::System::Void EnsureDefaultForNewLines(::System::Int32 dataCount, ::System::Int32 itemCountAtOtherAxis, ::System::Single defaultItemSizeAtAxis, ::System::Single spaceAtAxis)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_ENSUREDEFAULTFORNEWLINES_OFFSET))(this, dataCount, itemCountAtOtherAxis, defaultItemSizeAtAxis, spaceAtAxis);
		}

		::System::Void RecomputeTotals(::System::Int32 maxLineIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_RECOMPUTETOTALS_OFFSET))(this, maxLineIndex);
		}

		::System::Single GetDataStartPositionAtAxis(::System::Int32 dataIndex, ::System::Int32 itemCountAtOtherAxis)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GETDATASTARTPOSITIONATAXIS_OFFSET))(this, dataIndex, itemCountAtOtherAxis);
		}

		::System::Single GetItemSizeAtAxis(::System::Int32 dataIndex, ::System::Int32 itemCountAtOtherAxis, ::System::Single defaultItemSizeAtAxis)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GETITEMSIZEATAXIS_OFFSET))(this, dataIndex, itemCountAtOtherAxis, defaultItemSizeAtAxis);
		}

		::System::Single GetEstimatedItemSizeAtAxis(::System::Int32 dataIndex, ::System::Int32 itemCountAtOtherAxis, ::System::Single defaultItemSizeAtAxis)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_GETESTIMATEDITEMSIZEATAXIS_OFFSET))(this, dataIndex, itemCountAtOtherAxis, defaultItemSizeAtAxis);
		}

		::System::Int32 UpdateItemSize(::System::Int32 dataIndex, ::System::Int32 itemCountAtOtherAxis, ::System::Single size, ::System::Int32 dataCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_ITEMSIZETABLE_UPDATEITEMSIZE_OFFSET))(this, dataIndex, itemCountAtOtherAxis, size, dataCount);
		}
	};
}
