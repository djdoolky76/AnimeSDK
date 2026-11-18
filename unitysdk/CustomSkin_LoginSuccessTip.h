#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

#define CUSTOMSKIN_LOGINSUCCESSTIP_INSTANCE_OFFSET UNITYSDK_OFFSET(0x19D4C910)
#define CUSTOMSKIN_LOGINSUCCESSTIP_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x19D4CC30)
#define CUSTOMSKIN_LOGINSUCCESSTIP_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19D4CAD0)
#define CUSTOMSKIN_LOGINSUCCESSTIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19D4CA40)

inline static constexpr unsigned int CustomSkin_LoginSuccessTip_TypeDefinitionIndex = 43428;

class CustomSkin_LoginSuccessTip : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_LoginSuccessTip** StaticGet__instance()
	{
		return (::CustomSkin_LoginSuccessTip**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_LoginSuccessTip_TypeDefinitionIndex)->GetStaticField(0x40420);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_LOGINSUCCESSTIP__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_LoginSuccessTip* Instance()
	{
		return ((::CustomSkin_LoginSuccessTip*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_LOGINSUCCESSTIP_INSTANCE_OFFSET))();
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_LOGINSUCCESSTIP_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_LOGINSUCCESSTIP_ONCLOSE_OFFSET))(this);
	}
};
