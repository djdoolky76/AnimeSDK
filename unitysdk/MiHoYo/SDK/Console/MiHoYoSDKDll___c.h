#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x18609430)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x18609470)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__CONSOLE_SWITCH_CONTROL_B__168_0_OFFSET UNITYSDK_OFFSET(0x186095C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__INIT_B__18_0_OFFSET UNITYSDK_OFFSET(0x18609480)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int MiHoYoSDKDll___c_TypeDefinitionIndex = 8960;

	class MiHoYoSDKDll___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__18_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)UnitySDK::FromName("MiHoYo.SDK.Console", "<>c")->GetStaticField(0x41030);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Console", "<>c")->GetStaticField(0x41038);
		}

		static ::System::Converter_2<::System::Int32, ::System::String*>** StaticGet___9__168_0()
		{
			return (::System::Converter_2<::System::Int32, ::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.Console", "<>c")->GetStaticField(0x41040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C_CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__18_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__INIT_B__18_0_OFFSET))(this, a1);
		}

		::System::String* _console_switch_control_b__168_0(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__CONSOLE_SWITCH_CONTROL_B__168_0_OFFSET))(this, a1);
		}

	};
}
