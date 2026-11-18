#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NAPScrollView::DataStruct { class LegacyScrollViewAdapter; }
namespace NAPScrollView::Plugin { class BasePlugin; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE_CREATETABLESCROLLPLUGINS_OFFSET UNITYSDK_OFFSET(0x13ECE2B0)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE_GET_HASINITPLUGINSSTORE_OFFSET UNITYSDK_OFFSET(0x13ECE160)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE_GET_HASINITPLUGINS_OFFSET UNITYSDK_OFFSET(0x13ECE290)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE_GET_TABLESCROLLPLUGINDICSTORE_OFFSET UNITYSDK_OFFSET(0x13ECE150)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE_GET_TABLESCROLLPLUGINSSTORE_OFFSET UNITYSDK_OFFSET(0x13ECE140)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE_GET_TABLESCROLLPLUGINS_OFFSET UNITYSDK_OFFSET(0x13ECE280)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE_MARKDIRTYFORVIEWBOUND_OFFSET UNITYSDK_OFFSET(0x13ECE3E0)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE_REFRESHDYNAMICALLOCATEITEMIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x13ECE350)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE_SETTABLESCROLLPLUGINDYNAMICALLOCATEITEMDIRTY_OFFSET UNITYSDK_OFFSET(0x13ECE300)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE_SET_HASINITPLUGINSSTORE_OFFSET UNITYSDK_OFFSET(0x13ECE170)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE_SET_HASINITPLUGINS_OFFSET UNITYSDK_OFFSET(0x13ECE2A0)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x13ECE180)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int LegacyScrollViewAdapterPluginService_TypeDefinitionIndex = 54863;

	class LegacyScrollViewAdapterPluginService : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NAPScrollView::Plugin::BasePlugin*>* _tableScrollPlugins; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::NAPScrollView::Plugin::BasePlugin*>* _tableScrollPluginDic; // 0x18
		::NAPScrollView::DataStruct::LegacyScrollViewAdapter* _adapter; // 0x20
		::System::Boolean _hasInitPlugins; // 0x28

		::System::Void _ctor(::NAPScrollView::DataStruct::LegacyScrollViewAdapter* adapter)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::LegacyScrollViewAdapter*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE__CTOR_OFFSET))(this, adapter);
		}

		::System::Collections::Generic::List_1<::NAPScrollView::Plugin::BasePlugin*>* get_TableScrollPluginsStore()
		{
			return ((::System::Collections::Generic::List_1<::NAPScrollView::Plugin::BasePlugin*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE_GET_TABLESCROLLPLUGINSSTORE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Type*, ::NAPScrollView::Plugin::BasePlugin*>* get_TableScrollPluginDicStore()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Type*, ::NAPScrollView::Plugin::BasePlugin*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE_GET_TABLESCROLLPLUGINDICSTORE_OFFSET))(this);
		}

		::System::Boolean get_HasInitPluginsStore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE_GET_HASINITPLUGINSSTORE_OFFSET))(this);
		}

		::System::Void set_HasInitPluginsStore(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE_SET_HASINITPLUGINSSTORE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::NAPScrollView::Plugin::BasePlugin*>* get_TableScrollPlugins()
		{
			return ((::System::Collections::Generic::List_1<::NAPScrollView::Plugin::BasePlugin*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE_GET_TABLESCROLLPLUGINS_OFFSET))(this);
		}

		::System::Boolean get_HasInitPlugins()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE_GET_HASINITPLUGINS_OFFSET))(this);
		}

		::System::Void set_HasInitPlugins(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE_SET_HASINITPLUGINS_OFFSET))(this, value);
		}

		::System::Void CreateTableScrollPlugins()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE_CREATETABLESCROLLPLUGINS_OFFSET))(this);
		}

		::System::Void SetTableScrollPluginDynamicAllocateItemDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE_SETTABLESCROLLPLUGINDYNAMICALLOCATEITEMDIRTY_OFFSET))(this);
		}

		::System::Void RefreshDynamicAllocateItemImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE_REFRESHDYNAMICALLOCATEITEMIMMEDIATELY_OFFSET))(this);
		}

		::System::Void MarkDirtyForViewBound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERPLUGINSERVICE_MARKDIRTYFORVIEWBOUND_OFFSET))(this);
		}
	};
}
