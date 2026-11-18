#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

namespace System { class String; }

#define LOGINCUSTOMSKIN_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x14D57D10)
#define LOGINCUSTOMSKIN_INSTANCE_OFFSET UNITYSDK_OFFSET(0x14D57AD0)
#define LOGINCUSTOMSKIN_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x14D57C90)
#define LOGINCUSTOMSKIN_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14D57CD0)
#define LOGINCUSTOMSKIN__CTOR_OFFSET UNITYSDK_OFFSET(0x14D57C00)

inline static constexpr unsigned int LoginCustomSkin_TypeDefinitionIndex = 90947;

class LoginCustomSkin : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::LoginCustomSkin** StaticGet__instance()
	{
		return (::LoginCustomSkin**)Il2CppClass::FromTypeDefinitionIndex(LoginCustomSkin_TypeDefinitionIndex)->GetStaticField(0x4E730);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINCUSTOMSKIN__CTOR_OFFSET))(this);
	}

	static ::LoginCustomSkin* Instance()
	{
		return ((::LoginCustomSkin*(*)())((::PBYTE)hIl2Cpp + LOGINCUSTOMSKIN_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINCUSTOMSKIN_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINCUSTOMSKIN_ONSHOW_OFFSET))(this);
	}

	::System::String* GetElement(::System::String* elementKey)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LOGINCUSTOMSKIN_GETELEMENT_OFFSET))(this, elementKey);
	}
};
