#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_F5628F8349D4A8A6_E8BA438B64DFFA61_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x295FBC0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int MiHoYoSDKUIManager_F5628F8349D4A8A6_TypeDefinitionIndex = 15424;

	class MiHoYoSDKUIManager_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIManager_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::PluginUI::MiHoYoSDKUIManager_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUIManager_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::String*>** StaticGet_A7460783C76FF1D8()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUIManager_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void E8BA438B64DFFA61(::System::String* A8896FF48EB19D37)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER_F5628F8349D4A8A6_E8BA438B64DFFA61_OFFSET))(this, A8896FF48EB19D37);
		}
	};
}
