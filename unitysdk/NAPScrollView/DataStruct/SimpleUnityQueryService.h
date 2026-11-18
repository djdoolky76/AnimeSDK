#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
namespace MoleMole { class UIControlReference; }
namespace NAPScrollView::DataStruct { class SimpleScrollViewAdapterServices; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ILayoutGroup; }

#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xE5657F0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_DATACONTENT_OFFSET UNITYSDK_OFFSET(0xE565990)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_GAMEOBJECTACTIVEINHIERARCHY_OFFSET UNITYSDK_OFFSET(0xE566E40)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xE565E70)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_HASPARENTSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xE566BD0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_LAYOUTGROUP_OFFSET UNITYSDK_OFFSET(0xE566850)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_MULTITEMPLATES_OFFSET UNITYSDK_OFFSET(0xE5666B0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xE5657D0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_PARENTVIEWPORTRECT_OFFSET UNITYSDK_OFFSET(0xE566A30)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE5661B0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_TEMPLATECELL_OFFSET UNITYSDK_OFFSET(0xE566510)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xE566010)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_VERTICAL_OFFSET UNITYSDK_OFFSET(0xE566370)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_VIEWPORT_OFFSET UNITYSDK_OFFSET(0xE565CD0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_VIEWRECT_OFFSET UNITYSDK_OFFSET(0xE565B30)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xE5657C0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int SimpleUnityQueryService_TypeDefinitionIndex = 81357;

	class SimpleUnityQueryService : public ::System::Object
	{
	public:
		::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices* _services; // 0x10

		::System::Void _ctor(::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE__CTOR_OFFSET))(this, services);
		}

		::MonoUITableScrollV2* get_Owner()
		{
			return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_OWNER_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_Content()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_CONTENT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_DataContent()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_DATACONTENT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ViewRect()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_VIEWRECT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_Viewport()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_VIEWPORT_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_GameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_GAMEOBJECT_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_TRANSFORM_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_RectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::System::Boolean get_Vertical()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_VERTICAL_OFFSET))(this);
		}

		::MoleMole::UIControlReference* get_TemplateCell()
		{
			return ((::MoleMole::UIControlReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_TEMPLATECELL_OFFSET))(this);
		}

		::Il2CppArray<::MoleMole::UIControlReference*>* get_MultiTemplates()
		{
			return ((::Il2CppArray<::MoleMole::UIControlReference*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_MULTITEMPLATES_OFFSET))(this);
		}

		::UnityEngine::UI::ILayoutGroup* get_LayoutGroup()
		{
			return ((::UnityEngine::UI::ILayoutGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_LAYOUTGROUP_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ParentViewportRect()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_PARENTVIEWPORTRECT_OFFSET))(this);
		}

		::System::Boolean get_HasParentScrollView()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_HASPARENTSCROLLVIEW_OFFSET))(this);
		}

		::System::Boolean get_GameObjectActiveInHierarchy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEUNITYQUERYSERVICE_GET_GAMEOBJECTACTIVEINHIERARCHY_OFFSET))(this);
		}
	};
}
