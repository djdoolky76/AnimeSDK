#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDF9E90)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF9ED0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1CDF9EE0)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int LoginManagerPS___c_TypeDefinitionIndex = 9125;

	class LoginManagerPS___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Console.CN", "<>c")->GetStaticField(0x577D0);
		}

		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Console.CN", "<>c")->GetStaticField(0x577D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C_CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C___CTOR_B__2_0_OFFSET))(this);
		}

	};
}
