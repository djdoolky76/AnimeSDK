#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF0D110)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF0D150)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__REQUESTDETECTPAY_B__18_1_OFFSET UNITYSDK_OFFSET(0x1BF0D160)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__REQUESTDETECTPAY_B__18_3_OFFSET UNITYSDK_OFFSET(0x1BF0D300)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int PayManagerCXHandheld___c_TypeDefinitionIndex = 8771;

	class PayManagerCXHandheld___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__18_3()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)UnitySDK::FromName("MiHoYo.SDK.PC.OS.CXHandheld", "<>c")->GetStaticField(0x13B90);
		}

		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__18_1()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)UnitySDK::FromName("MiHoYo.SDK.PC.OS.CXHandheld", "<>c")->GetStaticField(0x13B98);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.PC.OS.CXHandheld", "<>c")->GetStaticField(0x13BA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C_CTOR_OFFSET))(this);
		}

		::System::Void _RequestDetectPay_b__18_1(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__REQUESTDETECTPAY_B__18_1_OFFSET))(this, a1);
		}

		::System::Void _RequestDetectPay_b__18_3(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__REQUESTDETECTPAY_B__18_3_OFFSET))(this, a1);
		}

	};
}
