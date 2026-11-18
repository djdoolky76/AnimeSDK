#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class ScrollViewDummyItem; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace NAPScrollView::DataStruct { class NotSimpleScrollViewAdapterServices; }
namespace NAPScrollView::DataStruct { class NotSimpleUnityMutationService; }
namespace System { class IDisposable; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_ALLOCATESCROLLITEM_OFFSET UNITYSDK_OFFSET(0x12C4C070)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_ATTACHDUMMYITEMTOCONTENT_OFFSET UNITYSDK_OFFSET(0x12C4C7C0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_ATTACHTEMPLATETOCONTENT_OFFSET UNITYSDK_OFFSET(0x12C4C8B0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_BEGINTEMPRECYCLESCOPE_OFFSET UNITYSDK_OFFSET(0x12C4CAE0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_BINDSCROLLVIEWITEMOWNER_OFFSET UNITYSDK_OFFSET(0x12C4C480)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_CREATEDUMMYITEM_OFFSET UNITYSDK_OFFSET(0x12C4C6F0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_CREATESCROLLVIEWITEMFROMTEMPLATE_OFFSET UNITYSDK_OFFSET(0x12C4C410)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_DESTROYDUMMYITEM_OFFSET UNITYSDK_OFFSET(0x12C4C750)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_DESTROYTEMPORARYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x12C4CA10)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_DESTROYUNOWNEDSCROLLITEMGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x12C4C000)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_DETACHDUMMYITEMTORECYCLEPARENT_OFFSET UNITYSDK_OFFSET(0x12C4C840)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_ENDTEMPRECYCLESCOPE_OFFSET UNITYSDK_OFFSET(0x12C4D5D0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_ENSURESCROLLVIEWLOADASSETMARKER_OFFSET UNITYSDK_OFFSET(0x12C4C530)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_FLUSHALLTEMPLATETEMPRECYCLEITEMTORECYCLE_OFFSET UNITYSDK_OFFSET(0x12C4C620)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_FLUSHALLTEMPRECYCLEITEMTORECYCLE_OFFSET UNITYSDK_OFFSET(0x12C4C5A0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_FORCEREBUILDCONTENTLAYOUTIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x12C4CA80)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_GET_UNITYMUTATION_OFFSET UNITYSDK_OFFSET(0x12C4B610)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_INSTANTIATETEMPLATECELL_OFFSET UNITYSDK_OFFSET(0x12C4C9A0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_ISSAMEOWNERTEMPLATE_OFFSET UNITYSDK_OFFSET(0x12C4B630)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_MARKIGNORELAYOUTFORTEMPRECYCLE_OFFSET UNITYSDK_OFFSET(0x12C4C680)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_RECYCLEALLSCROLLITEMS_OFFSET UNITYSDK_OFFSET(0x12C4B6B0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_RECYCLESCROLLITEM_OFFSET UNITYSDK_OFFSET(0x12C4BA60)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_REFRESHMULTITEMPLATEITEM_OFFSET UNITYSDK_OFFSET(0x12C4CB60)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_REFRESHVISIBLEITEM_OFFSET UNITYSDK_OFFSET(0x12C4D360)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_RESTORETEMPLATEPARENT_OFFSET UNITYSDK_OFFSET(0x12C4C920)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_SHOULDUSETEMPRECYCLE_OFFSET UNITYSDK_OFFSET(0x12C4BCF0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x12C4B600)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int NotSimpleTemplateService_TypeDefinitionIndex = 39204;

	class NotSimpleTemplateService : public ::System::Object
	{
	public:
		::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* _services; // 0x10
		::System::Int32 _tempRecycle; // 0x18

		::System::Void _ctor(::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE__CTOR_OFFSET))(this, services);
		}

		::NAPScrollView::DataStruct::NotSimpleUnityMutationService* get_UnityMutation()
		{
			return ((::NAPScrollView::DataStruct::NotSimpleUnityMutationService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_GET_UNITYMUTATION_OFFSET))(this);
		}

		::System::Boolean IsSameOwnerTemplate(::MoleMole::ScrollViewItemWidgetController* scrollViewItem, ::System::Int32 dataIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_ISSAMEOWNERTEMPLATE_OFFSET))(this, scrollViewItem, dataIndex);
		}

		::System::Void RecycleAllScrollItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_RECYCLEALLSCROLLITEMS_OFFSET))(this);
		}

		::System::Void RecycleScrollItem(::MoleMole::ScrollViewItemWidgetController* scrollViewItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_RECYCLESCROLLITEM_OFFSET))(this, scrollViewItem);
		}

		::MoleMole::ScrollViewItemWidgetController* AllocateScrollItem(::System::Int32 dataIndex)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_ALLOCATESCROLLITEM_OFFSET))(this, dataIndex);
		}

		::System::Void FlushAllTempRecycleItemToRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_FLUSHALLTEMPRECYCLEITEMTORECYCLE_OFFSET))(this);
		}

		::System::Void FlushAllTemplateTempRecycleItemToRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_FLUSHALLTEMPLATETEMPRECYCLEITEMTORECYCLE_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateScrollViewItemFromTemplate(::System::Int32 dataIndex)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_CREATESCROLLVIEWITEMFROMTEMPLATE_OFFSET))(this, dataIndex);
		}

		::System::Void BindScrollViewItemOwner(::MoleMole::ScrollViewItemWidgetController* scrollViewItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_BINDSCROLLVIEWITEMOWNER_OFFSET))(this, scrollViewItem);
		}

		::System::Void DestroyUnownedScrollItemGameObject(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_DESTROYUNOWNEDSCROLLITEMGAMEOBJECT_OFFSET))(this, gameObject);
		}

		::System::Void MarkIgnoreLayoutForTempRecycle(::MoleMole::ScrollViewItemWidgetController* scrollViewItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_MARKIGNORELAYOUTFORTEMPRECYCLE_OFFSET))(this, scrollViewItem);
		}

		::System::Void EnsureScrollViewLoadAssetMarker(::MoleMole::ScrollViewItemWidgetController* scrollViewItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_ENSURESCROLLVIEWLOADASSETMARKER_OFFSET))(this, scrollViewItem);
		}

		::MoleMole::ScrollViewDummyItem* CreateDummyItem()
		{
			return ((::MoleMole::ScrollViewDummyItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_CREATEDUMMYITEM_OFFSET))(this);
		}

		::System::Void DestroyDummyItem(::MoleMole::ScrollViewDummyItem* dummyItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewDummyItem*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_DESTROYDUMMYITEM_OFFSET))(this, dummyItem);
		}

		::System::Void AttachDummyItemToContent(::MoleMole::ScrollViewDummyItem* dummyItem, ::System::Nullable_1<::System::Int32> siblingIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewDummyItem*, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_ATTACHDUMMYITEMTOCONTENT_OFFSET))(this, dummyItem, siblingIndex);
		}

		::System::Void DetachDummyItemToRecycleParent(::MoleMole::ScrollViewDummyItem* dummyItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewDummyItem*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_DETACHDUMMYITEMTORECYCLEPARENT_OFFSET))(this, dummyItem);
		}

		::UnityEngine::Transform* AttachTemplateToContent(::UnityEngine::GameObject* template_)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_ATTACHTEMPLATETOCONTENT_OFFSET))(this, template_);
		}

		::System::Void RestoreTemplateParent(::UnityEngine::GameObject* template_, ::UnityEngine::Transform* parent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_RESTORETEMPLATEPARENT_OFFSET))(this, template_, parent);
		}

		::UnityEngine::GameObject* InstantiateTemplateCell(::MoleMole::UIControlReference* templateCell)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_INSTANTIATETEMPLATECELL_OFFSET))(this, templateCell);
		}

		::System::Void DestroyTemporaryTemplate(::UnityEngine::GameObject* template_)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_DESTROYTEMPORARYTEMPLATE_OFFSET))(this, template_);
		}

		::System::Void ForceRebuildContentLayoutImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_FORCEREBUILDCONTENTLAYOUTIMMEDIATE_OFFSET))(this);
		}

		::System::IDisposable* BeginTempRecycleScope()
		{
			return ((::System::IDisposable*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_BEGINTEMPRECYCLESCOPE_OFFSET))(this);
		}

		::UnityEngine::Transform* RefreshMultiTemplateItem(::UnityEngine::Transform* child, ::System::Int32 dataIndex, ::System::Int32 childIndex)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_REFRESHMULTITEMPLATEITEM_OFFSET))(this, child, dataIndex, childIndex);
		}

		::System::Void RefreshVisibleItem(::UnityEngine::GameObject* go, ::System::Int32 dataIndex, ::System::Int32 childIndex, ::System::Boolean multi)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_REFRESHVISIBLEITEM_OFFSET))(this, go, dataIndex, childIndex, multi);
		}

		::System::Boolean ShouldUseTempRecycle(::MoleMole::ScrollViewItemWidgetController* scrollViewItem)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_SHOULDUSETEMPRECYCLE_OFFSET))(this, scrollViewItem);
		}

		::System::Void EndTempRecycleScope()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_ENDTEMPRECYCLESCOPE_OFFSET))(this);
		}
	};
}
