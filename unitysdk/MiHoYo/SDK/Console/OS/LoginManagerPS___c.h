#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x18629D20)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x18629D60)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C___CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0x18629D70)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int LoginManagerPS___c_TypeDefinitionIndex = 9091;

	class LoginManagerPS___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__1_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Console.OS", "<>c")->GetStaticField(0x44440);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Console.OS", "<>c")->GetStaticField(0x44448);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C_CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C___CTOR_B__1_0_OFFSET))(this);
		}

	};
}
