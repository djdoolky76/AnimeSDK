#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC74650)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC74690)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__REQUESTDETECTPAY_B__10_0_OFFSET UNITYSDK_OFFSET(0x1BC746A0)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int PayManagerCX___c_TypeDefinitionIndex = 9127;

	class PayManagerCX___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__10_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)UnitySDK::FromName("MiHoYo.SDK.Console.CN", "<>c")->GetStaticField(0x33AA0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Console.CN", "<>c")->GetStaticField(0x33AA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C_CTOR_OFFSET))(this);
		}

		::System::Void _RequestDetectPay_b__10_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__REQUESTDETECTPAY_B__10_0_OFFSET))(this, a1);
		}

	};
}
