#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class ScrollViewDummyItem; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { class IDisposable; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_ALLOCATESCROLLITEM_OFFSET UNITYSDK_OFFSET(0x13B55620)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_ATTACHDUMMYITEMTOCONTENT_OFFSET UNITYSDK_OFFSET(0x13B55910)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_ATTACHTEMPLATETOCONTENT_OFFSET UNITYSDK_OFFSET(0x13B559B0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_BEGINTEMPRECYCLESCOPE_OFFSET UNITYSDK_OFFSET(0x13B55B30)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_BINDSCROLLVIEWITEMOWNER_OFFSET UNITYSDK_OFFSET(0x13B55740)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_CREATEDUMMYITEM_OFFSET UNITYSDK_OFFSET(0x13B55880)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_CREATESCROLLVIEWITEMFROMTEMPLATE_OFFSET UNITYSDK_OFFSET(0x13B556F0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_DESTROYDUMMYITEM_OFFSET UNITYSDK_OFFSET(0x13B558C0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_DESTROYTEMPORARYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x13B55AA0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_DESTROYUNOWNEDSCROLLITEMGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x13B55790)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_DETACHDUMMYITEMTORECYCLEPARENT_OFFSET UNITYSDK_OFFSET(0x13B55960)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_ENSURESCROLLVIEWLOADASSETMARKER_OFFSET UNITYSDK_OFFSET(0x13B55830)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_FLUSHALLTEMPLATETEMPRECYCLEITEMTORECYCLE_OFFSET UNITYSDK_OFFSET(0x13B556B0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_FLUSHALLTEMPRECYCLEITEMTORECYCLE_OFFSET UNITYSDK_OFFSET(0x13B55670)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_FORCEREBUILDCONTENTLAYOUTIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x13B55AF0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_INSTANTIATETEMPLATECELL_OFFSET UNITYSDK_OFFSET(0x13B55A50)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_ISSAMEOWNERTEMPLATE_OFFSET UNITYSDK_OFFSET(0x13B55540)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_MARKIGNORELAYOUTFORTEMPRECYCLE_OFFSET UNITYSDK_OFFSET(0x13B557E0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_RECYCLEALLSCROLLITEMS_OFFSET UNITYSDK_OFFSET(0x13B55590)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_RECYCLESCROLLITEM_OFFSET UNITYSDK_OFFSET(0x13B555D0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_RESTORETEMPLATEPARENT_OFFSET UNITYSDK_OFFSET(0x13B55A00)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x13B55B70)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int SimpleTemplateService_TypeDefinitionIndex = 63683;

	class SimpleTemplateService : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE__CTOR_OFFSET))(this);
		}

		::System::Boolean IsSameOwnerTemplate(::MoleMole::ScrollViewItemWidgetController* scrollViewItem, ::System::Int32 dataIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_ISSAMEOWNERTEMPLATE_OFFSET))(this, scrollViewItem, dataIndex);
		}

		::System::Void RecycleAllScrollItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_RECYCLEALLSCROLLITEMS_OFFSET))(this);
		}

		::System::Void RecycleScrollItem(::MoleMole::ScrollViewItemWidgetController* scrollViewItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_RECYCLESCROLLITEM_OFFSET))(this, scrollViewItem);
		}

		::MoleMole::ScrollViewItemWidgetController* AllocateScrollItem(::System::Int32 dataIndex)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_ALLOCATESCROLLITEM_OFFSET))(this, dataIndex);
		}

		::System::Void FlushAllTempRecycleItemToRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_FLUSHALLTEMPRECYCLEITEMTORECYCLE_OFFSET))(this);
		}

		::System::Void FlushAllTemplateTempRecycleItemToRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_FLUSHALLTEMPLATETEMPRECYCLEITEMTORECYCLE_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateScrollViewItemFromTemplate(::System::Int32 dataIndex)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_CREATESCROLLVIEWITEMFROMTEMPLATE_OFFSET))(this, dataIndex);
		}

		::System::Void BindScrollViewItemOwner(::MoleMole::ScrollViewItemWidgetController* scrollViewItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_BINDSCROLLVIEWITEMOWNER_OFFSET))(this, scrollViewItem);
		}

		::System::Void DestroyUnownedScrollItemGameObject(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_DESTROYUNOWNEDSCROLLITEMGAMEOBJECT_OFFSET))(this, gameObject);
		}

		::System::Void MarkIgnoreLayoutForTempRecycle(::MoleMole::ScrollViewItemWidgetController* scrollViewItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_MARKIGNORELAYOUTFORTEMPRECYCLE_OFFSET))(this, scrollViewItem);
		}

		::System::Void EnsureScrollViewLoadAssetMarker(::MoleMole::ScrollViewItemWidgetController* scrollViewItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_ENSURESCROLLVIEWLOADASSETMARKER_OFFSET))(this, scrollViewItem);
		}

		::MoleMole::ScrollViewDummyItem* CreateDummyItem()
		{
			return ((::MoleMole::ScrollViewDummyItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_CREATEDUMMYITEM_OFFSET))(this);
		}

		::System::Void DestroyDummyItem(::MoleMole::ScrollViewDummyItem* dummyItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewDummyItem*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_DESTROYDUMMYITEM_OFFSET))(this, dummyItem);
		}

		::System::Void AttachDummyItemToContent(::MoleMole::ScrollViewDummyItem* dummyItem, ::System::Nullable_1<::System::Int32> siblingIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewDummyItem*, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_ATTACHDUMMYITEMTOCONTENT_OFFSET))(this, dummyItem, siblingIndex);
		}

		::System::Void DetachDummyItemToRecycleParent(::MoleMole::ScrollViewDummyItem* dummyItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewDummyItem*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_DETACHDUMMYITEMTORECYCLEPARENT_OFFSET))(this, dummyItem);
		}

		::UnityEngine::Transform* AttachTemplateToContent(::UnityEngine::GameObject* template_)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_ATTACHTEMPLATETOCONTENT_OFFSET))(this, template_);
		}

		::System::Void RestoreTemplateParent(::UnityEngine::GameObject* template_, ::UnityEngine::Transform* parent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_RESTORETEMPLATEPARENT_OFFSET))(this, template_, parent);
		}

		::UnityEngine::GameObject* InstantiateTemplateCell(::MoleMole::UIControlReference* templateCell)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_INSTANTIATETEMPLATECELL_OFFSET))(this, templateCell);
		}

		::System::Void DestroyTemporaryTemplate(::UnityEngine::GameObject* template_)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_DESTROYTEMPORARYTEMPLATE_OFFSET))(this, template_);
		}

		::System::Void ForceRebuildContentLayoutImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_FORCEREBUILDCONTENTLAYOUTIMMEDIATE_OFFSET))(this);
		}

		::System::IDisposable* BeginTempRecycleScope()
		{
			return ((::System::IDisposable*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLETEMPLATESERVICE_BEGINTEMPRECYCLESCOPE_OFFSET))(this);
		}
	};
}
