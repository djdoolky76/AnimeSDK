#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC58200)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC58240)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__CHECKCONSOLEPAY_B__9_1_OFFSET UNITYSDK_OFFSET(0x1BC58250)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int PayManagerPS___c_TypeDefinitionIndex = 9122;

	class PayManagerPS___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__9_1()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)UnitySDK::FromName("MiHoYo.SDK.Console.CN", "<>c")->GetStaticField(0x55510);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Console.CN", "<>c")->GetStaticField(0x55518);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C_CTOR_OFFSET))(this);
		}

		::System::Void _CheckConsolePay_b__9_1(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__CHECKCONSOLEPAY_B__9_1_OFFSET))(this, a1);
		}

	};
}
