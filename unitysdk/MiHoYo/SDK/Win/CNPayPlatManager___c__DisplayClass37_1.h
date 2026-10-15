#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS37_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD064E0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS37_1__PAY_B__2_OFFSET UNITYSDK_OFFSET(0x1BD10DD0)

namespace MiHoYo::SDK::Win
{
	template <typename T>
	class CNPayPlatManager___c__DisplayClass37_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::String* tips; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS37_1_CTOR_OFFSET))(this);
		}

		::System::Void _Pay_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS37_1__PAY_B__2_OFFSET))(this);
		}

	};
}
