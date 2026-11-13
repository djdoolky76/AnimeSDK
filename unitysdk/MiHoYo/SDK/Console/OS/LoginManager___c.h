#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x18623CC0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x18623D00)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER___C__OPENUSERCENTER_G__CALLBACK_20_2_OFFSET UNITYSDK_OFFSET(0x18623D10)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int LoginManager___c_TypeDefinitionIndex = 9089;

	class LoginManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Console.OS", "<>c")->GetStaticField(0x44110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Void _OpenUserCenter_g__callback_20_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER___C__OPENUSERCENTER_G__CALLBACK_20_2_OFFSET))(this);
		}

	};
}
