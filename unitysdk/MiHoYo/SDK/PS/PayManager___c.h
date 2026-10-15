#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleProduct.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MiHoYo/SDK/PS/PayManager_PSProduct.h"
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_PS_PAYMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF73A90)
#define MIHOYO_SDK_PS_PAYMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF73AD0)
#define MIHOYO_SDK_PS_PAYMANAGER___C__CHECKPSPAY_B__17_1_OFFSET UNITYSDK_OFFSET(0x1BF73B00)
#define MIHOYO_SDK_PS_PAYMANAGER___C__REFRESHPRODUCTCACHE_B__16_0_OFFSET UNITYSDK_OFFSET(0x1BF73AE0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PayManager___c_TypeDefinitionIndex = 8915;

	class PayManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::MiHoYo::SDK::Console::ConsoleProduct>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::System::Object*, ::MiHoYo::SDK::Console::ConsoleProduct>**)UnitySDK::FromName("MiHoYo.SDK.PS", "<>c")->GetStaticField(0x183A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.PS", "<>c")->GetStaticField(0x183A8);
		}

		static ::System::Action** StaticGet___9__17_1()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.PS", "<>c")->GetStaticField(0x183B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER___C_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Console::ConsoleProduct _RefreshProductCache_b__16_0(::MiHoYo::SDK::PS::PayManager_PSProduct a1)
		{
			return ((::MiHoYo::SDK::Console::ConsoleProduct(*)(::PVOID, ::MiHoYo::SDK::PS::PayManager_PSProduct))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER___C__REFRESHPRODUCTCACHE_B__16_0_OFFSET))(this, a1);
		}

		::System::Void _CheckPSPay_b__17_1(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER___C__CHECKPSPAY_B__17_1_OFFSET))(this, a1);
		}

	};
}
