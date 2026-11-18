#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/DrivenTransformProperties.h"

namespace MoleMole { class UIOnRectTransformDimensionsChangeHandler; }
namespace MoleMole { class UIOnTransformChildrenChangedHandler; }
namespace NAPScrollView::DataStruct { class SimpleScrollViewAdapterServices; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define NAPSCROLLVIEW_DATASTRUCT_SIMPLECOMPONENTEVENTSERVICE_DESTROYDIMENSIONSCHANGEDHANDLER_OFFSET UNITYSDK_OFFSET(0xE564F80)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLECOMPONENTEVENTSERVICE_ENSURECONTENTDRIVENRECTTRANSFORMTRACKER_OFFSET UNITYSDK_OFFSET(0xE565170)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLECOMPONENTEVENTSERVICE_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xE5645B0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLECOMPONENTEVENTSERVICE_GET_VIEWRECT_OFFSET UNITYSDK_OFFSET(0xE564750)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLECOMPONENTEVENTSERVICE_REFRESHCONTENTDRIVENRECTTRANSFORMTRACKER_OFFSET UNITYSDK_OFFSET(0xE5651B0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLECOMPONENTEVENTSERVICE_REGISTERCHILDDIMENSIONSCHANGEDIFMISSING_OFFSET UNITYSDK_OFFSET(0xE564D90)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLECOMPONENTEVENTSERVICE_REGISTERCONTENTCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0xE564BC0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLECOMPONENTEVENTSERVICE_REGISTERCONTENTDIMENSIONSCHANGED_OFFSET UNITYSDK_OFFSET(0xE5648F0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLECOMPONENTEVENTSERVICE_REGISTERRECTTRANSFORMDIMENSIONSCHANGED_OFFSET UNITYSDK_OFFSET(0xE564950)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLECOMPONENTEVENTSERVICE_REGISTERVIEWRECTDIMENSIONSCHANGED_OFFSET UNITYSDK_OFFSET(0xE564B50)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLECOMPONENTEVENTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xE5645A0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int SimpleComponentEventService_TypeDefinitionIndex = 81326;

	class SimpleComponentEventService : public ::System::Object
	{
	public:
		::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices* _services; // 0x10

		::System::Void _ctor(::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLECOMPONENTEVENTSERVICE__CTOR_OFFSET))(this, services);
		}

		::UnityEngine::RectTransform* get_Content()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLECOMPONENTEVENTSERVICE_GET_CONTENT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ViewRect()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLECOMPONENTEVENTSERVICE_GET_VIEWRECT_OFFSET))(this);
		}

		::MoleMole::UIOnRectTransformDimensionsChangeHandler* RegisterContentDimensionsChanged(::System::Action_1<::MoleMole::UIOnRectTransformDimensionsChangeHandler*>* callback)
		{
			return ((::MoleMole::UIOnRectTransformDimensionsChangeHandler*(*)(::PVOID, ::System::Action_1<::MoleMole::UIOnRectTransformDimensionsChangeHandler*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLECOMPONENTEVENTSERVICE_REGISTERCONTENTDIMENSIONSCHANGED_OFFSET))(this, callback);
		}

		::MoleMole::UIOnRectTransformDimensionsChangeHandler* RegisterViewRectDimensionsChanged(::System::Action_1<::MoleMole::UIOnRectTransformDimensionsChangeHandler*>* callback, ::System::Boolean invokeImmediately)
		{
			return ((::MoleMole::UIOnRectTransformDimensionsChangeHandler*(*)(::PVOID, ::System::Action_1<::MoleMole::UIOnRectTransformDimensionsChangeHandler*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLECOMPONENTEVENTSERVICE_REGISTERVIEWRECTDIMENSIONSCHANGED_OFFSET))(this, callback, invokeImmediately);
		}

		::MoleMole::UIOnTransformChildrenChangedHandler* RegisterContentChildrenChanged(::System::Action_1<::MoleMole::UIOnTransformChildrenChangedHandler*>* callback)
		{
			return ((::MoleMole::UIOnTransformChildrenChangedHandler*(*)(::PVOID, ::System::Action_1<::MoleMole::UIOnTransformChildrenChangedHandler*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLECOMPONENTEVENTSERVICE_REGISTERCONTENTCHILDRENCHANGED_OFFSET))(this, callback);
		}

		::MoleMole::UIOnRectTransformDimensionsChangeHandler* RegisterChildDimensionsChangedIfMissing(::UnityEngine::Transform* child, ::System::Action_1<::MoleMole::UIOnRectTransformDimensionsChangeHandler*>* callback)
		{
			return ((::MoleMole::UIOnRectTransformDimensionsChangeHandler*(*)(::PVOID, ::UnityEngine::Transform*, ::System::Action_1<::MoleMole::UIOnRectTransformDimensionsChangeHandler*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLECOMPONENTEVENTSERVICE_REGISTERCHILDDIMENSIONSCHANGEDIFMISSING_OFFSET))(this, child, callback);
		}

		::System::Void DestroyDimensionsChangedHandler(::MoleMole::UIOnRectTransformDimensionsChangeHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIOnRectTransformDimensionsChangeHandler*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLECOMPONENTEVENTSERVICE_DESTROYDIMENSIONSCHANGEDHANDLER_OFFSET))(this, handler);
		}

		::System::Boolean EnsureContentDrivenRectTransformTracker()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLECOMPONENTEVENTSERVICE_ENSURECONTENTDRIVENRECTTRANSFORMTRACKER_OFFSET))(this);
		}

		::System::Void RefreshContentDrivenRectTransformTracker(::UnityEngine::DrivenTransformProperties drivenProperties)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::DrivenTransformProperties))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLECOMPONENTEVENTSERVICE_REFRESHCONTENTDRIVENRECTTRANSFORMTRACKER_OFFSET))(this, drivenProperties);
		}

		static ::MoleMole::UIOnRectTransformDimensionsChangeHandler* RegisterRectTransformDimensionsChanged(::UnityEngine::RectTransform* rectTransform, ::System::Action_1<::MoleMole::UIOnRectTransformDimensionsChangeHandler*>* callback, ::System::Boolean invokeImmediately)
		{
			return ((::MoleMole::UIOnRectTransformDimensionsChangeHandler*(*)(::UnityEngine::RectTransform*, ::System::Action_1<::MoleMole::UIOnRectTransformDimensionsChangeHandler*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLECOMPONENTEVENTSERVICE_REGISTERRECTTRANSFORMDIMENSIONSCHANGED_OFFSET))(rectTransform, callback, invokeImmediately);
		}
	};
}
