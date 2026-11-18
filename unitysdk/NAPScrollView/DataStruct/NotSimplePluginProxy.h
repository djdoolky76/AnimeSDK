#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/PluginProxyBase.h"
#include "unitysdk/NAPScrollView/DataStruct/TempRecycleScope.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class ScrollViewItemWidgetController; }
namespace NAPScrollView::DataStruct { class NotSimpleScrollViewAdapterServices; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class GameObject; }

#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY_GET_MINCELLSIZE_OFFSET UNITYSDK_OFFSET(0x113AD8D0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY_INITCELLSIZE_1_OFFSET UNITYSDK_OFFSET(0x113AD9F0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY_INITCELLSIZE_OFFSET UNITYSDK_OFFSET(0x113AD960)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY_POPTEMPRECYCLESCOPE_OFFSET UNITYSDK_OFFSET(0x113ADCC0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY_PUSHTEMPRECYCLESCOPE_OFFSET UNITYSDK_OFFSET(0x113ADBD0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY_RECYCLESCROLLITEM_OFFSET UNITYSDK_OFFSET(0x113ADB40)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY_REGISTERCUSTOMTEMPLATEPROVIDER_OFFSET UNITYSDK_OFFSET(0x113ADA80)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x113AD8C0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY___BASE_GET_MINCELLSIZE_OFFSET UNITYSDK_OFFSET(0x113ADDB0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY___BASE_INITCELLSIZE_1_OFFSET UNITYSDK_OFFSET(0x113ADE50)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY___BASE_INITCELLSIZE_OFFSET UNITYSDK_OFFSET(0x113ADDC0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY___BASE_POPTEMPRECYCLESCOPE_OFFSET UNITYSDK_OFFSET(0x113ADEE0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY___BASE_PUSHTEMPRECYCLESCOPE_OFFSET UNITYSDK_OFFSET(0x113ADF80)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY___BASE_RECYCLESCROLLITEM_OFFSET UNITYSDK_OFFSET(0x113AE020)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY___BASE_REGISTERCUSTOMTEMPLATEPROVIDER_OFFSET UNITYSDK_OFFSET(0x113AE0B0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int NotSimplePluginProxy_TypeDefinitionIndex = 62119;

	class NotSimplePluginProxy : public ::NAPScrollView::DataStruct::PluginProxyBase
	{
	public:
		::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* _services; // 0x10

		::System::Void _ctor(::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY__CTOR_OFFSET))(this, services);
		}

		::UnityEngine::Vector2 get_MinCellSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY_GET_MINCELLSIZE_OFFSET))(this);
		}

		::System::Void InitCellSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY_INITCELLSIZE_OFFSET))(this);
		}

		::System::Void InitCellSize_1(::System::Int32 templateIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY_INITCELLSIZE_1_OFFSET))(this, templateIndex);
		}

		::System::Void RegisterCustomTemplateProvider(::System::Func_1<::UnityEngine::GameObject*>* provider, ::System::Action_1<::UnityEngine::GameObject*>* afterUseCustomTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::UnityEngine::GameObject*>*, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY_REGISTERCUSTOMTEMPLATEPROVIDER_OFFSET))(this, provider, afterUseCustomTemplate);
		}

		::System::Void RecycleScrollItem(::MoleMole::ScrollViewItemWidgetController* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY_RECYCLESCROLLITEM_OFFSET))(this, item);
		}

		::System::Void PushTempRecycleScope(::NAPScrollView::DataStruct::TempRecycleScope scope)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::TempRecycleScope))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY_PUSHTEMPRECYCLESCOPE_OFFSET))(this, scope);
		}

		::System::Void PopTempRecycleScope(::NAPScrollView::DataStruct::TempRecycleScope scope)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::TempRecycleScope))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY_POPTEMPRECYCLESCOPE_OFFSET))(this, scope);
		}

		::UnityEngine::Vector2 __base_get_MinCellSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY___BASE_GET_MINCELLSIZE_OFFSET))(this);
		}

		::System::Void __base_InitCellSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY___BASE_INITCELLSIZE_OFFSET))(this);
		}

		::System::Void __base_InitCellSize_1(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY___BASE_INITCELLSIZE_1_OFFSET))(this, P0);
		}

		::System::Void __base_PopTempRecycleScope(::NAPScrollView::DataStruct::TempRecycleScope P0)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::TempRecycleScope))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY___BASE_POPTEMPRECYCLESCOPE_OFFSET))(this, P0);
		}

		::System::Void __base_PushTempRecycleScope(::NAPScrollView::DataStruct::TempRecycleScope P0)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::TempRecycleScope))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY___BASE_PUSHTEMPRECYCLESCOPE_OFFSET))(this, P0);
		}

		::System::Void __base_RecycleScrollItem(::MoleMole::ScrollViewItemWidgetController* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY___BASE_RECYCLESCROLLITEM_OFFSET))(this, P0);
		}

		::System::Void __base_RegisterCustomTemplateProvider(::System::Func_1<::UnityEngine::GameObject*>* P0, ::System::Action_1<::UnityEngine::GameObject*>* P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::UnityEngine::GameObject*>*, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEPLUGINPROXY___BASE_REGISTERCUSTOMTEMPLATEPROVIDER_OFFSET))(this, P0, P1);
		}
	};
}
