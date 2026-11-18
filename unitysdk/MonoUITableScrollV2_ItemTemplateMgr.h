#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GKLCNICJJOB.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace NAPScrollView::DataStruct { class TemplateData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MONOUITABLESCROLLV2_ITEMTEMPLATEMGR_CLEAR_OFFSET UNITYSDK_OFFSET(0x12C24C70)
#define MONOUITABLESCROLLV2_ITEMTEMPLATEMGR_CREATESCROLLVIEWITEM_OFFSET UNITYSDK_OFFSET(0x12C24370)
#define MONOUITABLESCROLLV2_ITEMTEMPLATEMGR_FLUSHALLTEMPRECYCLEITEMTORECYCLE_OFFSET UNITYSDK_OFFSET(0x12C24A30)
#define MONOUITABLESCROLLV2_ITEMTEMPLATEMGR_GETTEMPLATEDATA_OFFSET UNITYSDK_OFFSET(0x12C246F0)
#define MONOUITABLESCROLLV2_ITEMTEMPLATEMGR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12C242D0)
#define MONOUITABLESCROLLV2_ITEMTEMPLATEMGR__CTOR_OFFSET UNITYSDK_OFFSET(0x12C24240)

inline static constexpr unsigned int MonoUITableScrollV2_ItemTemplateMgr_TypeDefinitionIndex = 40146;

class MonoUITableScrollV2_ItemTemplateMgr : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::GKLCNICJJOB, ::NAPScrollView::DataStruct::TemplateData*>* _templateDataDic; // 0x10
	::System::Collections::Generic::List_1<::NAPScrollView::DataStruct::TemplateData*>* _templateDatas; // 0x18
	::System::Func_2<::System::Int32, ::MoleMole::ScrollViewItemWidgetController*>* _templateCreateFuncByIndex; // 0x20
	::System::Func_2<::System::Int32, ::System::Int32>* _getTemplateIndexFromData; // 0x28
	::System::Func_2<::System::Int32, ::GKLCNICJJOB>* _getTemplateCacheKey; // 0x30

	::System::Void _ctor(::System::Func_2<::System::Int32, ::System::Int32>* getTemplateIndexFromData, ::System::Collections::Generic::List_1<::NAPScrollView::DataStruct::TemplateData*>* templateDatas)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::List_1<::NAPScrollView::DataStruct::TemplateData*>*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_ITEMTEMPLATEMGR__CTOR_OFFSET))(this, getTemplateIndexFromData, templateDatas);
	}

	::System::Void _ctor_1(::System::Func_2<::System::Int32, ::GKLCNICJJOB>* getTemplateCacheKey, ::System::Func_2<::System::Int32, ::MoleMole::ScrollViewItemWidgetController*>* templateCreateFunc)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::GKLCNICJJOB>*, ::System::Func_2<::System::Int32, ::MoleMole::ScrollViewItemWidgetController*>*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_ITEMTEMPLATEMGR__CTOR_1_OFFSET))(this, getTemplateCacheKey, templateCreateFunc);
	}

	::MoleMole::ScrollViewItemWidgetController* CreateScrollViewItem(::System::Int32 dataIndex, ::MonoUITableScrollV2* tableScroll)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_ITEMTEMPLATEMGR_CREATESCROLLVIEWITEM_OFFSET))(this, dataIndex, tableScroll);
	}

	::NAPScrollView::DataStruct::TemplateData* GetTemplateData(::System::Int32 dataIndex)
	{
		return ((::NAPScrollView::DataStruct::TemplateData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_ITEMTEMPLATEMGR_GETTEMPLATEDATA_OFFSET))(this, dataIndex);
	}

	::System::Void FlushAllTempRecycleItemToRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_ITEMTEMPLATEMGR_FLUSHALLTEMPRECYCLEITEMTORECYCLE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_ITEMTEMPLATEMGR_CLEAR_OFFSET))(this);
	}
};
