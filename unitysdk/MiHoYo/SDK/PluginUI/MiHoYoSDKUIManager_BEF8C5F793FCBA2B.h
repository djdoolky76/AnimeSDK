#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_BEF8C5F793FCBA2B_B332F9BBB33A55D4_OFFSET UNITYSDK_OFFSET(0x295F750)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_BEF8C5F793FCBA2B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int MiHoYoSDKUIManager_BEF8C5F793FCBA2B_TypeDefinitionIndex = 15425;

	class MiHoYoSDKUIManager_BEF8C5F793FCBA2B : public ::System::Object
	{
	public:
		::System::String* B26FB45137C102C9; // 0x10
		::System::Int32 B388EC7BF992A18E; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_BEF8C5F793FCBA2B__CTOR_OFFSET))(this);
		}

		::System::Void B332F9BBB33A55D4(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_BEF8C5F793FCBA2B_B332F9BBB33A55D4_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
		}
	};
}
