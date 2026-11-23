#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PluginUI { class MiHoYoSDKBridgeUIElement; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EB0D50DE6F105A6A_PLUGINUIARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EB0D50DE6F105A6A_PluginUIArgs_TypeDefinitionIndex = 15640;

class EB0D50DE6F105A6A_PluginUIArgs : public ::System::Object
{
public:
	::System::String* event_name; // 0x10
	::System::Collections::Generic::List_1<::MiHoYo::SDK::PluginUI::MiHoYoSDKBridgeUIElement*>* element_data; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EB0D50DE6F105A6A_PLUGINUIARGS__CTOR_OFFSET))(this);
	}
};
