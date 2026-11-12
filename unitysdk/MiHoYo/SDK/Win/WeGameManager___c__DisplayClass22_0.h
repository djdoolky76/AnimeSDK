#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class WeGameManager; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_WEGAMEMANAGER___C__DISPLAYCLASS22_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF8E9D0)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER___C__DISPLAYCLASS22_0__ONCREATEORDER_B__0_OFFSET UNITYSDK_OFFSET(0x1CF8EFA0)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER___C__DISPLAYCLASS22_0__ONCREATEORDER_B__1_OFFSET UNITYSDK_OFFSET(0x1CF8EF00)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int WeGameManager___c__DisplayClass22_0_TypeDefinitionIndex = 9493;

	class WeGameManager___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::NetworkResponseModel* response; // 0x10
		::MiHoYo::SDK::Win::WeGameManager* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER___C__DISPLAYCLASS22_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnCreateOrder_b__1(::MiHoYo::SDK::CallbackModel_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER___C__DISPLAYCLASS22_0__ONCREATEORDER_B__1_OFFSET))(this, a1);
		}

		::System::Void _OnCreateOrder_b__0(::MiHoYo::SDK::Alert_AlertResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER___C__DISPLAYCLASS22_0__ONCREATEORDER_B__0_OFFSET))(this, a1);
		}

	};
}
