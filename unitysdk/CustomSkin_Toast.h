#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

#define CUSTOMSKIN_TOAST_INSTANCE_OFFSET UNITYSDK_OFFSET(0x13E256F0)
#define CUSTOMSKIN_TOAST_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x13E25A10)
#define CUSTOMSKIN_TOAST_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13E258B0)
#define CUSTOMSKIN_TOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x13E25820)

inline static constexpr unsigned int CustomSkin_Toast_TypeDefinitionIndex = 40660;

class CustomSkin_Toast : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_Toast** StaticGet__instance()
	{
		return (::CustomSkin_Toast**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_Toast_TypeDefinitionIndex)->GetStaticField(0x4E260);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_TOAST__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_Toast* Instance()
	{
		return ((::CustomSkin_Toast*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_TOAST_INSTANCE_OFFSET))();
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_TOAST_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_TOAST_ONCLOSE_OFFSET))(this);
	}
};
