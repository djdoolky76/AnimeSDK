#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollViewItemAttachMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class MonoUIAnimCell;
class MonoUITableScrollV2_InitScrollViewData;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace NAPScrollView::DataStruct { class SimpleScrollViewAdapterServices; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections { class IList; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_ADDDATARANGETOEND_OFFSET UNITYSDK_OFFSET(0x1726CBA0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_ADDDATATOBOTTOM_OFFSET UNITYSDK_OFFSET(0x1726BC40)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_ADDDATATOTOP_OFFSET UNITYSDK_OFFSET(0x1726BCF0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_ADDVISIBLEDATAINDEXTOBACK_OFFSET UNITYSDK_OFFSET(0x1726CE40)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_ADDVISIBLEDATAINDEXTOFRONT_OFFSET UNITYSDK_OFFSET(0x1726CE90)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_ALLOCATEITEM_OFFSET UNITYSDK_OFFSET(0x1726D190)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_ALLOCATEREPLACEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1726D1E0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_BEGINREFRESHGAMEOBJECTFORNOTSIMPLEMODE_OFFSET UNITYSDK_OFFSET(0x1726B460)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_BUILDREFRESHDATABYDIFFKEPTITEMINDICES_OFFSET UNITYSDK_OFFSET(0x1726BFC0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_CANREFRESHGAMEOBJECTFORNOTSIMPLEMODE_OFFSET UNITYSDK_OFFSET(0x1726B420)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_CLEARALLDATAONDESTROY_OFFSET UNITYSDK_OFFSET(0x1726D150)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_CLEARDATAITEMMAPPINGS_OFFSET UNITYSDK_OFFSET(0x1726C100)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_CLEARFAKEALPHA_OFFSET UNITYSDK_OFFSET(0x1726C760)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_CLEARVISIBLEDATAINDICES_OFFSET UNITYSDK_OFFSET(0x1726CE00)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_CLONERAWDATATOOBJECTLIST_OFFSET UNITYSDK_OFFSET(0x1726CAF0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_COMMITDATAITEMINDEXMAPPING_OFFSET UNITYSDK_OFFSET(0x1726C3C0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_COMMITDATAITEMMAPPING_OFFSET UNITYSDK_OFFSET(0x1726C370)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_COMMITINITIALIZEDSTATE_OFFSET UNITYSDK_OFFSET(0x1726C920)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_COMMITREFRESHGAMEOBJECTFORNOTSIMPLEMODE_OFFSET UNITYSDK_OFFSET(0x1726B5B0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_COMMITSCROLLINITIALIZEDSTATE_OFFSET UNITYSDK_OFFSET(0x1726C960)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_COMPLETEREFRESHGAMEOBJECTUNITYSTATEFORNOTSIMPLEMODE_OFFSET UNITYSDK_OFFSET(0x1726B560)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_CONTAINSVISIBLEDATAINDEX_OFFSET UNITYSDK_OFFSET(0x1726C470)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_DATAEQUALS_OFFSET UNITYSDK_OFFSET(0x1726CA40)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_DELETEEMPTYPADDINGDATA_OFFSET UNITYSDK_OFFSET(0x1726C8E0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_ENABLEUSEUIANIMCELL_OFFSET UNITYSDK_OFFSET(0x1726C710)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GETDATACOUNTAFTERPADDING_OFFSET UNITYSDK_OFFSET(0x1726CD00)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1726C9A0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GETVISIBLEDATAINDEX_OFFSET UNITYSDK_OFFSET(0x1726CD60)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GET_HASVISIBLEDATAINDEX_OFFSET UNITYSDK_OFFSET(0x1726CD50)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GET_ISINITED_OFFSET UNITYSDK_OFFSET(0x1726CCF0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GET_RAWDATACOUNT_OFFSET UNITYSDK_OFFSET(0x1726CC90)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GET_RAWDATADEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1726CA90)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GET_READONLYITEMMAP_OFFSET UNITYSDK_OFFSET(0x1726C640)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GET_VISIBLEDATAINDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1726CD40)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GET_VISIBLEITEMCONTROLLERCOUNT_OFFSET UNITYSDK_OFFSET(0x1726C6A0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GET_VISIBLEITEMCONTROLLERS_OFFSET UNITYSDK_OFFSET(0x1726C5E0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GET_VISIBLEITEMGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1726C580)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_INITDATA_OFFSET UNITYSDK_OFFSET(0x1726BBB0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_INSERTDATARANGEATSTART_OFFSET UNITYSDK_OFFSET(0x1726CBF0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_LASTVISIBLEDATAINDEX_OFFSET UNITYSDK_OFFSET(0x1726D0C0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_MOVEDATAITEMINDEXMAPPING_OFFSET UNITYSDK_OFFSET(0x1726C410)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_ONLYADDDATATOBOTTOM_OFFSET UNITYSDK_OFFSET(0x1726BCA0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_PEEKVISIBLEDATAINDEXFROMBACK_OFFSET UNITYSDK_OFFSET(0x1726D070)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_PEEKVISIBLEDATAINDEXFROMFRONT_OFFSET UNITYSDK_OFFSET(0x1726D020)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_POPFRONT_OFFSET UNITYSDK_OFFSET(0x1726BD40)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_PREPAREEMPTYPADDINGDATA_OFFSET UNITYSDK_OFFSET(0x1726C8A0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_PREPAREINITDATASTATE_OFFSET UNITYSDK_OFFSET(0x1726B3D0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_PREPARELAYOUTANDEMPTYPADDINGFORREFRESHGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1726B4A0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_PREPAREREFRESHDATABYDIFFSTATE_OFFSET UNITYSDK_OFFSET(0x1726BF60)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_PREPAREREFRESHGAMEOBJECTLINESIZEFORNOTSIMPLEMODE_OFFSET UNITYSDK_OFFSET(0x1726B4E0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_RECYCLEALLSCROLLITEMSFORREFRESHGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1726B520)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_RECYCLEREMOVEDANDCOLLECTKEPTITEMSFORREFRESHGAMEOBJECTBYDIFF_OFFSET UNITYSDK_OFFSET(0x1726BF10)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REFRESHDATABYDIFF_OFFSET UNITYSDK_OFFSET(0x1726C060)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REFRESHDATAUPTO_OFFSET UNITYSDK_OFFSET(0x1726BD80)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x1726BC00)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REFRESHGAMEOBJECTFORNOTSIMPLEMODEBYDIFF_OFFSET UNITYSDK_OFFSET(0x1726C0B0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REFRESHGAMEOBJECTFORNOTSIMPLEMODE_OFFSET UNITYSDK_OFFSET(0x1726B5F0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REFRESHGAMEOBJECTFORSIMPLEMODE_OFFSET UNITYSDK_OFFSET(0x1726B670)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REFRESHGAMEOBJECTONSTART_OFFSET UNITYSDK_OFFSET(0x1726B630)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REFRESHITEMORREPLACEDATA_1_OFFSET UNITYSDK_OFFSET(0x1726BE70)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REFRESHITEMORREPLACEDATA_OFFSET UNITYSDK_OFFSET(0x1726BE20)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REFRESHITEM_OFFSET UNITYSDK_OFFSET(0x1726BDD0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEALLSCROLLITEMS_OFFSET UNITYSDK_OFFSET(0x1726D110)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEDATAINDEXMAPPING_OFFSET UNITYSDK_OFFSET(0x1726C320)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEDATAITEMMAPPING_OFFSET UNITYSDK_OFFSET(0x1726C140)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEDATARANGEATSTART_OFFSET UNITYSDK_OFFSET(0x1726CC40)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEVISIBLEDATAINDEXAT_OFFSET UNITYSDK_OFFSET(0x1726CF80)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEVISIBLEDATAINDEXFROMBACK_OFFSET UNITYSDK_OFFSET(0x1726CF30)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEVISIBLEDATAINDEXFROMEND_OFFSET UNITYSDK_OFFSET(0x1726C2D0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEVISIBLEDATAINDEXFROMFRONT_OFFSET UNITYSDK_OFFSET(0x1726CEE0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEVISIBLEDATAINDEXFROMSTART_OFFSET UNITYSDK_OFFSET(0x1726C280)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEVISIBLEDATAINDEX_OFFSET UNITYSDK_OFFSET(0x1726CFD0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEVISIBLEDATAITEMFROMEND_OFFSET UNITYSDK_OFFSET(0x1726C230)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEVISIBLEDATAITEMFROMSTART_OFFSET UNITYSDK_OFFSET(0x1726C1E0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEVISIBLEDATAITEMMAPPING_OFFSET UNITYSDK_OFFSET(0x1726C190)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REPLACEDATAKEEPINGEMPTYPADDING_OFFSET UNITYSDK_OFFSET(0x1726CB40)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REPLACEITEM_OFFSET UNITYSDK_OFFSET(0x1726BEC0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REUSEITEM_OFFSET UNITYSDK_OFFSET(0x1726D230)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_SETDATA_OFFSET UNITYSDK_OFFSET(0x1726C9F0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_SETEMPTYPADDINGDATACOUNT_OFFSET UNITYSDK_OFFSET(0x1726C850)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_SETFAKEALPHA_OFFSET UNITYSDK_OFFSET(0x1726C7A0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_SETITEMSIBLINGINDEX_OFFSET UNITYSDK_OFFSET(0x1726D2F0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_SETLOOPSCROLL_OFFSET UNITYSDK_OFFSET(0x1726CCA0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_SETNONEMPTYDATACOUNT_OFFSET UNITYSDK_OFFSET(0x1726C800)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_SETVISIBLEDATAINDEX_OFFSET UNITYSDK_OFFSET(0x1726CDB0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_SHOULDFALLBACKTOINITDATA_OFFSET UNITYSDK_OFFSET(0x1726C010)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_TRYGETUIANIMCELL_OFFSET UNITYSDK_OFFSET(0x1726C6B0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_TRYGETVISIBLEITEMCONTROLLERBYDATAINDEX_OFFSET UNITYSDK_OFFSET(0x1726C520)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_TRYGETVISIBLEITEMGAMEOBJECTBYDATAINDEX_OFFSET UNITYSDK_OFFSET(0x1726C4C0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_UPDATEITEMDATA_OFFSET UNITYSDK_OFFSET(0x1726D290)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1726D340)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1726B3C0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int SimpleDataService_TypeDefinitionIndex = 90436;

	class SimpleDataService : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_EmptyRawData()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SimpleDataService_TypeDefinitionIndex)->GetStaticField(0x4DB40);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_EmptyGameObjects()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(SimpleDataService_TypeDefinitionIndex)->GetStaticField(0x4DB48);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>** StaticGet_EmptyItemMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(SimpleDataService_TypeDefinitionIndex)->GetStaticField(0x4DB50);
		}
		static ::System::Collections::Generic::List_1<::MoleMole::ScrollViewItemWidgetController*>** StaticGet_EmptyControllers()
		{
			return (::System::Collections::Generic::List_1<::MoleMole::ScrollViewItemWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(SimpleDataService_TypeDefinitionIndex)->GetStaticField(0x4DB58);
		}
		::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices* _services; // 0x10

		::System::Void _ctor(::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE__CTOR_OFFSET))(this, services);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE__CCTOR_OFFSET))();
		}

		::System::Void PrepareInitDataState(::System::Collections::IEnumerable* datas, ::MonoUITableScrollV2_InitScrollViewData* initData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerable*, ::MonoUITableScrollV2_InitScrollViewData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_PREPAREINITDATASTATE_OFFSET))(this, datas, initData);
		}

		::System::Boolean CanRefreshGameObjectForNotSimpleMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_CANREFRESHGAMEOBJECTFORNOTSIMPLEMODE_OFFSET))(this);
		}

		::System::Void BeginRefreshGameObjectForNotSimpleMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_BEGINREFRESHGAMEOBJECTFORNOTSIMPLEMODE_OFFSET))(this);
		}

		::System::Void PrepareLayoutAndEmptyPaddingForRefreshGameObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_PREPARELAYOUTANDEMPTYPADDINGFORREFRESHGAMEOBJECT_OFFSET))(this);
		}

		::System::Void PrepareRefreshGameObjectLineSizeForNotSimpleMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_PREPAREREFRESHGAMEOBJECTLINESIZEFORNOTSIMPLEMODE_OFFSET))(this);
		}

		::System::Void RecycleAllScrollItemsForRefreshGameObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_RECYCLEALLSCROLLITEMSFORREFRESHGAMEOBJECT_OFFSET))(this);
		}

		::System::Void CompleteRefreshGameObjectUnityStateForNotSimpleMode(::System::Int32 minDataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_COMPLETEREFRESHGAMEOBJECTUNITYSTATEFORNOTSIMPLEMODE_OFFSET))(this, minDataIndex);
		}

		::System::Void CommitRefreshGameObjectForNotSimpleMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_COMMITREFRESHGAMEOBJECTFORNOTSIMPLEMODE_OFFSET))(this);
		}

		::System::Void RefreshGameObjectForNotSimpleMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REFRESHGAMEOBJECTFORNOTSIMPLEMODE_OFFSET))(this);
		}

		::System::Void RefreshGameObjectOnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REFRESHGAMEOBJECTONSTART_OFFSET))(this);
		}

		::System::Void RefreshGameObjectForSimpleMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REFRESHGAMEOBJECTFORSIMPLEMODE_OFFSET))(this);
		}

		::System::Void InitData(::System::Collections::IEnumerable* datas, ::MonoUITableScrollV2_InitScrollViewData* extraData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerable*, ::MonoUITableScrollV2_InitScrollViewData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_INITDATA_OFFSET))(this, datas, extraData);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REFRESHDATA_OFFSET))(this);
		}

		::System::Void AddDataToBottom(::System::Object* item, ::System::Boolean isScrollToBottom, ::System::Boolean forceDown)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_ADDDATATOBOTTOM_OFFSET))(this, item, isScrollToBottom, forceDown);
		}

		::System::Void OnlyAddDataToBottom(::System::Object* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_ONLYADDDATATOBOTTOM_OFFSET))(this, item);
		}

		::System::Void AddDataToTop(::System::Collections::IList* datas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_ADDDATATOTOP_OFFSET))(this, datas);
		}

		::System::Void PopFront()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_POPFRONT_OFFSET))(this);
		}

		::System::Void RefreshDataUpTo(::System::Int32 index, ::System::Int32 recountIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REFRESHDATAUPTO_OFFSET))(this, index, recountIndex);
		}

		::System::Void RefreshItem(::System::Int32 dataIndex, ::System::Object* inData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REFRESHITEM_OFFSET))(this, dataIndex, inData);
		}

		::System::Void RefreshItemOrReplaceData(::System::Int32 dataIndex, ::System::Object* inData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REFRESHITEMORREPLACEDATA_OFFSET))(this, dataIndex, inData);
		}

		::System::Void RefreshItemOrReplaceData_1(::System::Collections::IEnumerable* dataList, ::MonoUITableScrollV2_InitScrollViewData* initScrollViewData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerable*, ::MonoUITableScrollV2_InitScrollViewData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REFRESHITEMORREPLACEDATA_1_OFFSET))(this, dataList, initScrollViewData);
		}

		::System::Void ReplaceItem(::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REPLACEITEM_OFFSET))(this, dataIndex);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>>* RecycleRemovedAndCollectKeptItemsForRefreshGameObjectByDiff(::System::Collections::Generic::List_1<::System::Int32>* itemIndicesNewToOld)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_RECYCLEREMOVEDANDCOLLECTKEPTITEMSFORREFRESHGAMEOBJECTBYDIFF_OFFSET))(this, itemIndicesNewToOld);
		}

		::MonoUITableScrollV2_InitScrollViewData* PrepareRefreshDataByDiffState(::System::Collections::IList* data, ::MonoUITableScrollV2_InitScrollViewData* initData)
		{
			return ((::MonoUITableScrollV2_InitScrollViewData*(*)(::PVOID, ::System::Collections::IList*, ::MonoUITableScrollV2_InitScrollViewData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_PREPAREREFRESHDATABYDIFFSTATE_OFFSET))(this, data, initData);
		}

		::System::Collections::Generic::List_1<::System::Int32>* BuildRefreshDataByDiffKeptItemIndices(::System::Collections::IList* data, ::MonoUITableScrollV2_InitScrollViewData* initData)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::IList*, ::MonoUITableScrollV2_InitScrollViewData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_BUILDREFRESHDATABYDIFFKEPTITEMINDICES_OFFSET))(this, data, initData);
		}

		::System::Boolean ShouldFallbackToInitData(::System::Collections::IList* newData)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_SHOULDFALLBACKTOINITDATA_OFFSET))(this, newData);
		}

		::System::Boolean RefreshDataByDiff(::System::Collections::IList* data, ::MonoUITableScrollV2_InitScrollViewData* initData)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::IList*, ::MonoUITableScrollV2_InitScrollViewData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REFRESHDATABYDIFF_OFFSET))(this, data, initData);
		}

		::System::Void RefreshGameObjectForNotSimpleModeByDiff(::System::Collections::Generic::List_1<::System::Int32>* itemIndicesNewToOld)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REFRESHGAMEOBJECTFORNOTSIMPLEMODEBYDIFF_OFFSET))(this, itemIndicesNewToOld);
		}

		::System::Void ClearDataItemMappings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_CLEARDATAITEMMAPPINGS_OFFSET))(this);
		}

		::System::Void RemoveDataItemMapping(::MoleMole::ScrollViewItemWidgetController* item, ::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEDATAITEMMAPPING_OFFSET))(this, item, dataIndex);
		}

		::System::Void RemoveVisibleDataItemMapping(::MoleMole::ScrollViewItemWidgetController* item, ::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEVISIBLEDATAITEMMAPPING_OFFSET))(this, item, dataIndex);
		}

		::MoleMole::ScrollViewItemWidgetController* RemoveVisibleDataItemFromStart(::System::Int32& dataIndex)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEVISIBLEDATAITEMFROMSTART_OFFSET))(this, dataIndex);
		}

		::MoleMole::ScrollViewItemWidgetController* RemoveVisibleDataItemFromEnd(::System::Int32& dataIndex)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEVISIBLEDATAITEMFROMEND_OFFSET))(this, dataIndex);
		}

		::System::Void RemoveVisibleDataIndexFromStart(::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEVISIBLEDATAINDEXFROMSTART_OFFSET))(this, dataIndex);
		}

		::System::Void RemoveVisibleDataIndexFromEnd(::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEVISIBLEDATAINDEXFROMEND_OFFSET))(this, dataIndex);
		}

		::System::Void RemoveDataIndexMapping(::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEDATAINDEXMAPPING_OFFSET))(this, dataIndex);
		}

		::System::Void CommitDataItemMapping(::MoleMole::ScrollViewItemWidgetController* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_COMMITDATAITEMMAPPING_OFFSET))(this, item);
		}

		::System::Void CommitDataItemIndexMapping(::UnityEngine::GameObject* go, ::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_COMMITDATAITEMINDEXMAPPING_OFFSET))(this, go, dataIndex);
		}

		::System::Void MoveDataItemIndexMapping(::UnityEngine::GameObject* go, ::System::Int32 oldDataIndex, ::System::Int32 newDataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_MOVEDATAITEMINDEXMAPPING_OFFSET))(this, go, oldDataIndex, newDataIndex);
		}

		::System::Boolean ContainsVisibleDataIndex(::System::Int32 dataIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_CONTAINSVISIBLEDATAINDEX_OFFSET))(this, dataIndex);
		}

		::System::Boolean TryGetVisibleItemGameObjectByDataIndex(::System::Int32 dataIndex, ::UnityEngine::GameObject*& go)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_TRYGETVISIBLEITEMGAMEOBJECTBYDATAINDEX_OFFSET))(this, dataIndex, go);
		}

		::System::Boolean TryGetVisibleItemControllerByDataIndex(::System::Int32 dataIndex, ::MoleMole::ScrollViewItemWidgetController*& item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::ScrollViewItemWidgetController*&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_TRYGETVISIBLEITEMCONTROLLERBYDATAINDEX_OFFSET))(this, dataIndex, item);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* get_VisibleItemGameObjects()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GET_VISIBLEITEMGAMEOBJECTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::ScrollViewItemWidgetController*>* get_VisibleItemControllers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::ScrollViewItemWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GET_VISIBLEITEMCONTROLLERS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>* get_ReadOnlyItemMap()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GET_READONLYITEMMAP_OFFSET))(this);
		}

		::System::Int32 get_VisibleItemControllerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GET_VISIBLEITEMCONTROLLERCOUNT_OFFSET))(this);
		}

		::System::Boolean TryGetUIAnimCell(::UnityEngine::GameObject* go, ::MonoUIAnimCell*& cell)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::MonoUIAnimCell*&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_TRYGETUIANIMCELL_OFFSET))(this, go, cell);
		}

		::System::Void EnableUseUIAnimCell(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_ENABLEUSEUIANIMCELL_OFFSET))(this, enable);
		}

		::System::Void ClearFakeAlpha()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_CLEARFAKEALPHA_OFFSET))(this);
		}

		::System::Void SetFakeAlpha(::System::Int32 index, ::System::Single alpha)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_SETFAKEALPHA_OFFSET))(this, index, alpha);
		}

		::System::Void SetNonEmptyDataCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_SETNONEMPTYDATACOUNT_OFFSET))(this, count);
		}

		::System::Void SetEmptyPaddingDataCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_SETEMPTYPADDINGDATACOUNT_OFFSET))(this, count);
		}

		::System::Void PrepareEmptyPaddingData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_PREPAREEMPTYPADDINGDATA_OFFSET))(this);
		}

		::System::Void DeleteEmptyPaddingData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_DELETEEMPTYPADDINGDATA_OFFSET))(this);
		}

		::System::Void CommitInitializedState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_COMMITINITIALIZEDSTATE_OFFSET))(this);
		}

		::System::Void CommitScrollInitializedState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_COMMITSCROLLINITIALIZEDSTATE_OFFSET))(this);
		}

		::System::Object* GetData(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GETDATA_OFFSET))(this, index);
		}

		::System::Void SetData(::System::Int32 index, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_SETDATA_OFFSET))(this, index, data);
		}

		::System::Boolean DataEquals(::System::Int32 index, ::System::Object* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_DATAEQUALS_OFFSET))(this, index, data);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* get_RawDataDebugView()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GET_RAWDATADEBUGVIEW_OFFSET))(this);
		}

		::System::Void CloneRawDataToObjectList(::System::Collections::Generic::List_1<::System::Object*>* objects)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_CLONERAWDATATOOBJECTLIST_OFFSET))(this, objects);
		}

		::System::Void ReplaceDataKeepingEmptyPadding(::System::Collections::IEnumerable* datas, ::System::Object* emptyData, ::System::Boolean needEmptyPadding, ::System::Int32 emptyPaddingDataCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerable*, ::System::Object*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REPLACEDATAKEEPINGEMPTYPADDING_OFFSET))(this, datas, emptyData, needEmptyPadding, emptyPaddingDataCount);
		}

		::System::Void AddDataRangeToEnd(::System::Collections::IEnumerable* datas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_ADDDATARANGETOEND_OFFSET))(this, datas);
		}

		::System::Void InsertDataRangeAtStart(::System::Collections::IEnumerable* datas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_INSERTDATARANGEATSTART_OFFSET))(this, datas);
		}

		::System::Void RemoveDataRangeAtStart(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEDATARANGEATSTART_OFFSET))(this, count);
		}

		::System::Int32 get_RawDataCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GET_RAWDATACOUNT_OFFSET))(this);
		}

		::System::Void SetLoopScroll(::System::Boolean isLoop)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_SETLOOPSCROLL_OFFSET))(this, isLoop);
		}

		::System::Boolean get_IsInited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GET_ISINITED_OFFSET))(this);
		}

		::System::Int32 GetDataCountAfterPadding()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GETDATACOUNTAFTERPADDING_OFFSET))(this);
		}

		::System::Int32 get_VisibleDataIndexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GET_VISIBLEDATAINDEXCOUNT_OFFSET))(this);
		}

		::System::Boolean get_HasVisibleDataIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GET_HASVISIBLEDATAINDEX_OFFSET))(this);
		}

		::System::Int32 GetVisibleDataIndex(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_GETVISIBLEDATAINDEX_OFFSET))(this, index);
		}

		::System::Void SetVisibleDataIndex(::System::Int32 visibleIndex, ::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_SETVISIBLEDATAINDEX_OFFSET))(this, visibleIndex, dataIndex);
		}

		::System::Void ClearVisibleDataIndices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_CLEARVISIBLEDATAINDICES_OFFSET))(this);
		}

		::System::Void AddVisibleDataIndexToBack(::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_ADDVISIBLEDATAINDEXTOBACK_OFFSET))(this, dataIndex);
		}

		::System::Void AddVisibleDataIndexToFront(::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_ADDVISIBLEDATAINDEXTOFRONT_OFFSET))(this, dataIndex);
		}

		::System::Int32 RemoveVisibleDataIndexFromFront()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEVISIBLEDATAINDEXFROMFRONT_OFFSET))(this);
		}

		::System::Int32 RemoveVisibleDataIndexFromBack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEVISIBLEDATAINDEXFROMBACK_OFFSET))(this);
		}

		::System::Void RemoveVisibleDataIndexAt(::System::Int32 visibleIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEVISIBLEDATAINDEXAT_OFFSET))(this, visibleIndex);
		}

		::System::Void RemoveVisibleDataIndex(::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEVISIBLEDATAINDEX_OFFSET))(this, dataIndex);
		}

		::System::Int32 PeekVisibleDataIndexFromFront()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_PEEKVISIBLEDATAINDEXFROMFRONT_OFFSET))(this);
		}

		::System::Int32 PeekVisibleDataIndexFromBack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_PEEKVISIBLEDATAINDEXFROMBACK_OFFSET))(this);
		}

		::System::Int32 LastVisibleDataIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_LASTVISIBLEDATAINDEX_OFFSET))(this);
		}

		::System::Void RemoveAllScrollItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REMOVEALLSCROLLITEMS_OFFSET))(this);
		}

		::System::Void ClearAllDataOnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_CLEARALLDATAONDESTROY_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* AllocateItem(::System::Int32 dataIndex, ::NAPScrollView::DataStruct::ScrollViewItemAttachMode attachMode)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32, ::NAPScrollView::DataStruct::ScrollViewItemAttachMode))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_ALLOCATEITEM_OFFSET))(this, dataIndex, attachMode);
		}

		::MoleMole::ScrollViewItemWidgetController* AllocateReplaceGameObject(::System::Int32 dataIndex, ::UnityEngine::Vector2 anchoredPosition)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_ALLOCATEREPLACEGAMEOBJECT_OFFSET))(this, dataIndex, anchoredPosition);
		}

		::System::Void ReuseItem(::MoleMole::ScrollViewItemWidgetController* scrollItem, ::System::Int32 dataIndex, ::NAPScrollView::DataStruct::ScrollViewItemAttachMode attachMode)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*, ::System::Int32, ::NAPScrollView::DataStruct::ScrollViewItemAttachMode))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_REUSEITEM_OFFSET))(this, scrollItem, dataIndex, attachMode);
		}

		::System::Void UpdateItemData(::UnityEngine::GameObject* go, ::System::Int32 dataIndex, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_UPDATEITEMDATA_OFFSET))(this, go, dataIndex, init);
		}

		::System::Void SetItemSiblingIndex(::MoleMole::ScrollViewItemWidgetController* item, ::System::Int32 siblingIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEDATASERVICE_SETITEMSIBLINGINDEX_OFFSET))(this, item, siblingIndex);
		}
	};
}
