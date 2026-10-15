#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_WIN_PAYMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDD4410)
#define MIHOYO_SDK_WIN_PAYMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BDD4450)
#define MIHOYO_SDK_WIN_PAYMANAGER___C__ONCREATEORDER_B__29_4_OFFSET UNITYSDK_OFFSET(0x1BDD4460)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PayManager___c_TypeDefinitionIndex = 9472;

	class PayManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x23220);
		}

		static ::System::Action** StaticGet___9__29_4()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x23228);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Void _OnCreateOrder_b__29_4(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER___C__ONCREATEORDER_B__29_4_OFFSET))(this, a1);
		}

	};
}
