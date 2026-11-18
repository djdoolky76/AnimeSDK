#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NAPScrollView::Plugin { class BasePlugin; }
namespace System { class Action; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWPLUGINCONTAINER_ADDPLUGIN_OFFSET UNITYSDK_OFFSET(0x18F93130)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWPLUGINCONTAINER_CREATETABLESCROLLPLUGINS_OFFSET UNITYSDK_OFFSET(0x18F93230)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWPLUGINCONTAINER_GET_HASINITPLUGINS_OFFSET UNITYSDK_OFFSET(0x18F93100)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWPLUGINCONTAINER_GET_TABLESCROLLPLUGINS_OFFSET UNITYSDK_OFFSET(0x18F93120)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWPLUGINCONTAINER_NOTIFYCLEARALLITEMDATAS_OFFSET UNITYSDK_OFFSET(0x18F93460)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWPLUGINCONTAINER_NOTIFYINITDATA_OFFSET UNITYSDK_OFFSET(0x18F93520)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWPLUGINCONTAINER_SET_HASINITPLUGINS_OFFSET UNITYSDK_OFFSET(0x18F93110)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWPLUGINCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F93000)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollViewPluginContainer_TypeDefinitionIndex = 65225;

	class ScrollViewPluginContainer : public ::System::Object
	{
	public:
		::System::Action* _registerPlugins; // 0x10
		::System::Collections::Generic::List_1<::NAPScrollView::Plugin::BasePlugin*>* _plugins; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::NAPScrollView::Plugin::BasePlugin*>* _pluginByType; // 0x20
		::System::Boolean _HasInitPlugins_k__BackingField; // 0x28

		::System::Void _ctor(::System::Action* registerPlugins)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWPLUGINCONTAINER__CTOR_OFFSET))(this, registerPlugins);
		}

		::System::Boolean get_HasInitPlugins()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWPLUGINCONTAINER_GET_HASINITPLUGINS_OFFSET))(this);
		}

		::System::Void set_HasInitPlugins(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWPLUGINCONTAINER_SET_HASINITPLUGINS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::NAPScrollView::Plugin::BasePlugin*>* get_TableScrollPlugins()
		{
			return ((::System::Collections::Generic::List_1<::NAPScrollView::Plugin::BasePlugin*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWPLUGINCONTAINER_GET_TABLESCROLLPLUGINS_OFFSET))(this);
		}

		::System::Void AddPlugin(::NAPScrollView::Plugin::BasePlugin* plugin)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::Plugin::BasePlugin*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWPLUGINCONTAINER_ADDPLUGIN_OFFSET))(this, plugin);
		}

		::System::Void CreateTableScrollPlugins()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWPLUGINCONTAINER_CREATETABLESCROLLPLUGINS_OFFSET))(this);
		}

		::System::Void NotifyClearAllItemDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWPLUGINCONTAINER_NOTIFYCLEARALLITEMDATAS_OFFSET))(this);
		}

		::System::Void NotifyInitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWPLUGINCONTAINER_NOTIFYINITDATA_OFFSET))(this);
		}
	};
}
