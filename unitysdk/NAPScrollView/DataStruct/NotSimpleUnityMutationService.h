#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/DrivenTransformProperties.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class MonoUITableScrollContentHelper; }
namespace MoleMole { class ScrollViewDummyItem; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIOnRectTransformDimensionsChangeHandler; }
namespace MoleMole { class UIOnTransformChildrenChangedHandler; }
namespace NAPScrollView::DataStruct { class NotSimpleScrollViewAdapterServices; }
namespace System { class IDisposable; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_ALLOCATESCROLLITEM_OFFSET UNITYSDK_OFFSET(0x13B51700)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_ATTACHDUMMYITEMTOCONTENT_OFFSET UNITYSDK_OFFSET(0x13B52510)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_ATTACHTEMPLATETOCONTENT_OFFSET UNITYSDK_OFFSET(0x13B52990)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_BEGINTEMPRECYCLESCOPE_OFFSET UNITYSDK_OFFSET(0x13B534D0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_BINDSCROLLVIEWITEMOWNER_OFFSET UNITYSDK_OFFSET(0x13B51B30)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_CREATEDUMMYITEM_OFFSET UNITYSDK_OFFSET(0x13B52230)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_CREATESCROLLVIEWITEMFROMTEMPLATE_OFFSET UNITYSDK_OFFSET(0x13B51980)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_DESTROYDIMENSIONSCHANGEDHANDLERIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x13B540D0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_DESTROYDIMENSIONSCHANGEDHANDLER_OFFSET UNITYSDK_OFFSET(0x13B53F10)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_DESTROYDUMMYITEM_OFFSET UNITYSDK_OFFSET(0x13B52320)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_DESTROYTEMPORARYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x13B53120)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_DESTROYUNOWNEDSCROLLITEMGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x13B51670)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_DETACHDUMMYITEMTORECYCLEPARENT_OFFSET UNITYSDK_OFFSET(0x13B52800)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_ENSURECONTENTDRIVENRECTTRANSFORMTRACKER_OFFSET UNITYSDK_OFFSET(0x13B54300)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_ENSURECONTENTHELPER_OFFSET UNITYSDK_OFFSET(0x13B54460)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_ENSURESCROLLVIEWLOADASSETMARKER_OFFSET UNITYSDK_OFFSET(0x13B51BA0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_FLUSHALLTEMPLATETEMPRECYCLEITEMTORECYCLE_OFFSET UNITYSDK_OFFSET(0x13B51F40)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_FLUSHALLTEMPRECYCLEITEMTORECYCLE_OFFSET UNITYSDK_OFFSET(0x13B51E80)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_FORCEREBUILDCONTENTLAYOUTFORADDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x13B50BF0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_FORCEREBUILDCONTENTLAYOUTFORDYNAMICITEM_OFFSET UNITYSDK_OFFSET(0x13B50C50)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_FORCEREBUILDCONTENTLAYOUTIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x13B53330)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_FORCEREBUILDLAYOUTFORINITDATA_OFFSET UNITYSDK_OFFSET(0x13B50B90)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_FORCEREBUILDLAYOUT_OFFSET UNITYSDK_OFFSET(0x13B50B30)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_GET_DATACONTENT_OFFSET UNITYSDK_OFFSET(0x13B50970)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_INSTANTIATETEMPLATECELL_OFFSET UNITYSDK_OFFSET(0x13B52DE0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_ISSAMEOWNERTEMPLATE_OFFSET UNITYSDK_OFFSET(0x13B50E90)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_MARKCELLLAYOUTDATADIRTY_OFFSET UNITYSDK_OFFSET(0x13B50E10)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_MARKCONTENTBOUNDSSIZEDIRTY_OFFSET UNITYSDK_OFFSET(0x13B50CD0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_MARKIGNORELAYOUTFORTEMPRECYCLE_OFFSET UNITYSDK_OFFSET(0x13B51FE0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_MARKVIEWRECTBOUNDSSIZEDIRTY_OFFSET UNITYSDK_OFFSET(0x13B50D70)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_RECALCULATELAYOUTPARAMS_OFFSET UNITYSDK_OFFSET(0x13B50A60)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_RECYCLEALLSCROLLITEMS_OFFSET UNITYSDK_OFFSET(0x13B51050)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_RECYCLESCROLLITEM_OFFSET UNITYSDK_OFFSET(0x13B51400)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_REFRESHCONTENTDRIVENRECTTRANSFORMTRACKER_OFFSET UNITYSDK_OFFSET(0x13B54600)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_REGISTERCHILDDIMENSIONSCHANGEDIFMISSING_OFFSET UNITYSDK_OFFSET(0x13B53D20)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_REGISTERCONTENTCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x13B53B30)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_REGISTERCONTENTDIMENSIONSCHANGED_OFFSET UNITYSDK_OFFSET(0x13B53560)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_REGISTERRECTTRANSFORMDIMENSIONSCHANGED_OFFSET UNITYSDK_OFFSET(0x13B537F0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_REGISTERVIEWRECTDIMENSIONSCHANGED_OFFSET UNITYSDK_OFFSET(0x13B539F0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_RESTORETEMPLATEPARENT_OFFSET UNITYSDK_OFFSET(0x13B52C40)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x13B50960)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int NotSimpleUnityMutationService_TypeDefinitionIndex = 47050;

	class NotSimpleUnityMutationService : public ::System::Object
	{
	public:
		::MoleMole::UIOnRectTransformDimensionsChangeHandler* _additionalContentDimensionsChangedHandler; // 0x10
		::MoleMole::UIOnRectTransformDimensionsChangeHandler* _contentDimensionsChangedHandler; // 0x18
		::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* _services; // 0x20

		::System::Void _ctor(::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE__CTOR_OFFSET))(this, services);
		}

		::UnityEngine::RectTransform* get_DataContent()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_GET_DATACONTENT_OFFSET))(this);
		}

		::System::Void ReCalculateLayoutParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_RECALCULATELAYOUTPARAMS_OFFSET))(this);
		}

		::System::Void ForceRebuildLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_FORCEREBUILDLAYOUT_OFFSET))(this);
		}

		::System::Void ForceRebuildLayoutForInitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_FORCEREBUILDLAYOUTFORINITDATA_OFFSET))(this);
		}

		::System::Void ForceRebuildContentLayoutForAddGameObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_FORCEREBUILDCONTENTLAYOUTFORADDGAMEOBJECT_OFFSET))(this);
		}

		::System::Void ForceRebuildContentLayoutForDynamicItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_FORCEREBUILDCONTENTLAYOUTFORDYNAMICITEM_OFFSET))(this);
		}

		::System::Void MarkContentBoundsSizeDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_MARKCONTENTBOUNDSSIZEDIRTY_OFFSET))(this);
		}

		::System::Void MarkViewRectBoundsSizeDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_MARKVIEWRECTBOUNDSSIZEDIRTY_OFFSET))(this);
		}

		::System::Void MarkCellLayoutDataDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_MARKCELLLAYOUTDATADIRTY_OFFSET))(this);
		}

		::System::Boolean IsSameOwnerTemplate(::MoleMole::ScrollViewItemWidgetController* scrollViewItem, ::System::Int32 dataIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_ISSAMEOWNERTEMPLATE_OFFSET))(this, scrollViewItem, dataIndex);
		}

		::System::Void RecycleAllScrollItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_RECYCLEALLSCROLLITEMS_OFFSET))(this);
		}

		::System::Void RecycleScrollItem(::MoleMole::ScrollViewItemWidgetController* scrollViewItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_RECYCLESCROLLITEM_OFFSET))(this, scrollViewItem);
		}

		::MoleMole::ScrollViewItemWidgetController* AllocateScrollItem(::System::Int32 dataIndex)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_ALLOCATESCROLLITEM_OFFSET))(this, dataIndex);
		}

		::System::Void FlushAllTempRecycleItemToRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_FLUSHALLTEMPRECYCLEITEMTORECYCLE_OFFSET))(this);
		}

		::System::Void FlushAllTemplateTempRecycleItemToRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_FLUSHALLTEMPLATETEMPRECYCLEITEMTORECYCLE_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateScrollViewItemFromTemplate(::System::Int32 dataIndex)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_CREATESCROLLVIEWITEMFROMTEMPLATE_OFFSET))(this, dataIndex);
		}

		::System::Void BindScrollViewItemOwner(::MoleMole::ScrollViewItemWidgetController* scrollViewItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_BINDSCROLLVIEWITEMOWNER_OFFSET))(this, scrollViewItem);
		}

		::System::Void DestroyUnownedScrollItemGameObject(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_DESTROYUNOWNEDSCROLLITEMGAMEOBJECT_OFFSET))(this, gameObject);
		}

		::System::Void MarkIgnoreLayoutForTempRecycle(::MoleMole::ScrollViewItemWidgetController* scrollViewItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_MARKIGNORELAYOUTFORTEMPRECYCLE_OFFSET))(this, scrollViewItem);
		}

		::System::Void EnsureScrollViewLoadAssetMarker(::MoleMole::ScrollViewItemWidgetController* scrollViewItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_ENSURESCROLLVIEWLOADASSETMARKER_OFFSET))(this, scrollViewItem);
		}

		::MoleMole::ScrollViewDummyItem* CreateDummyItem()
		{
			return ((::MoleMole::ScrollViewDummyItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_CREATEDUMMYITEM_OFFSET))(this);
		}

		::System::Void DestroyDummyItem(::MoleMole::ScrollViewDummyItem* dummyItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewDummyItem*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_DESTROYDUMMYITEM_OFFSET))(this, dummyItem);
		}

		::System::Void AttachDummyItemToContent(::MoleMole::ScrollViewDummyItem* dummyItem, ::System::Nullable_1<::System::Int32> siblingIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewDummyItem*, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_ATTACHDUMMYITEMTOCONTENT_OFFSET))(this, dummyItem, siblingIndex);
		}

		::System::Void DetachDummyItemToRecycleParent(::MoleMole::ScrollViewDummyItem* dummyItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewDummyItem*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_DETACHDUMMYITEMTORECYCLEPARENT_OFFSET))(this, dummyItem);
		}

		::UnityEngine::Transform* AttachTemplateToContent(::UnityEngine::GameObject* template_)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_ATTACHTEMPLATETOCONTENT_OFFSET))(this, template_);
		}

		::System::Void RestoreTemplateParent(::UnityEngine::GameObject* template_, ::UnityEngine::Transform* parent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_RESTORETEMPLATEPARENT_OFFSET))(this, template_, parent);
		}

		::UnityEngine::GameObject* InstantiateTemplateCell(::MoleMole::UIControlReference* templateCell)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_INSTANTIATETEMPLATECELL_OFFSET))(this, templateCell);
		}

		::System::Void DestroyTemporaryTemplate(::UnityEngine::GameObject* template_)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_DESTROYTEMPORARYTEMPLATE_OFFSET))(this, template_);
		}

		::System::Void ForceRebuildContentLayoutImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_FORCEREBUILDCONTENTLAYOUTIMMEDIATE_OFFSET))(this);
		}

		::System::IDisposable* BeginTempRecycleScope()
		{
			return ((::System::IDisposable*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_BEGINTEMPRECYCLESCOPE_OFFSET))(this);
		}

		::MoleMole::UIOnRectTransformDimensionsChangeHandler* RegisterContentDimensionsChanged(::System::Action_1<::MoleMole::UIOnRectTransformDimensionsChangeHandler*>* callback)
		{
			return ((::MoleMole::UIOnRectTransformDimensionsChangeHandler*(*)(::PVOID, ::System::Action_1<::MoleMole::UIOnRectTransformDimensionsChangeHandler*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_REGISTERCONTENTDIMENSIONSCHANGED_OFFSET))(this, callback);
		}

		::MoleMole::UIOnRectTransformDimensionsChangeHandler* RegisterViewRectDimensionsChanged(::System::Action_1<::MoleMole::UIOnRectTransformDimensionsChangeHandler*>* callback, ::System::Boolean invokeImmediately)
		{
			return ((::MoleMole::UIOnRectTransformDimensionsChangeHandler*(*)(::PVOID, ::System::Action_1<::MoleMole::UIOnRectTransformDimensionsChangeHandler*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_REGISTERVIEWRECTDIMENSIONSCHANGED_OFFSET))(this, callback, invokeImmediately);
		}

		::MoleMole::UIOnTransformChildrenChangedHandler* RegisterContentChildrenChanged(::System::Action_1<::MoleMole::UIOnTransformChildrenChangedHandler*>* callback)
		{
			return ((::MoleMole::UIOnTransformChildrenChangedHandler*(*)(::PVOID, ::System::Action_1<::MoleMole::UIOnTransformChildrenChangedHandler*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_REGISTERCONTENTCHILDRENCHANGED_OFFSET))(this, callback);
		}

		::MoleMole::UIOnRectTransformDimensionsChangeHandler* RegisterChildDimensionsChangedIfMissing(::UnityEngine::Transform* child, ::System::Action_1<::MoleMole::UIOnRectTransformDimensionsChangeHandler*>* callback)
		{
			return ((::MoleMole::UIOnRectTransformDimensionsChangeHandler*(*)(::PVOID, ::UnityEngine::Transform*, ::System::Action_1<::MoleMole::UIOnRectTransformDimensionsChangeHandler*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_REGISTERCHILDDIMENSIONSCHANGEDIFMISSING_OFFSET))(this, child, callback);
		}

		::System::Void DestroyDimensionsChangedHandler(::MoleMole::UIOnRectTransformDimensionsChangeHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIOnRectTransformDimensionsChangeHandler*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_DESTROYDIMENSIONSCHANGEDHANDLER_OFFSET))(this, handler);
		}

		::System::Boolean EnsureContentDrivenRectTransformTracker()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_ENSURECONTENTDRIVENRECTTRANSFORMTRACKER_OFFSET))(this);
		}

		::System::Void RefreshContentDrivenRectTransformTracker(::UnityEngine::DrivenTransformProperties drivenProperties)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::DrivenTransformProperties))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_REFRESHCONTENTDRIVENRECTTRANSFORMTRACKER_OFFSET))(this, drivenProperties);
		}

		::MoleMole::MonoUITableScrollContentHelper* EnsureContentHelper()
		{
			return ((::MoleMole::MonoUITableScrollContentHelper*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_ENSURECONTENTHELPER_OFFSET))(this);
		}

		static ::MoleMole::UIOnRectTransformDimensionsChangeHandler* RegisterRectTransformDimensionsChanged(::UnityEngine::RectTransform* rectTransform, ::System::Action_1<::MoleMole::UIOnRectTransformDimensionsChangeHandler*>* callback, ::System::Boolean invokeImmediately)
		{
			return ((::MoleMole::UIOnRectTransformDimensionsChangeHandler*(*)(::UnityEngine::RectTransform*, ::System::Action_1<::MoleMole::UIOnRectTransformDimensionsChangeHandler*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_REGISTERRECTTRANSFORMDIMENSIONSCHANGED_OFFSET))(rectTransform, callback, invokeImmediately);
		}

		static ::System::Void DestroyDimensionsChangedHandlerImmediate(::MoleMole::UIOnRectTransformDimensionsChangeHandler* handler)
		{
			return ((::System::Void(*)(::MoleMole::UIOnRectTransformDimensionsChangeHandler*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEUNITYMUTATIONSERVICE_DESTROYDIMENSIONSCHANGEDHANDLERIMMEDIATE_OFFSET))(handler);
		}
	};
}
