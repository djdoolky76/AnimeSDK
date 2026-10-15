#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Object; }

#define MIHOYO_SDK_PS_LOGINMANAGER___C__DISPLAYCLASS33_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF57690)
#define MIHOYO_SDK_PS_LOGINMANAGER___C__DISPLAYCLASS33_1__ONPS4LOGINCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1BF58110)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass33_1_TypeDefinitionIndex = 8911;

	template <typename T>
	class LoginManager___c__DisplayClass33_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* userModel; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER___C__DISPLAYCLASS33_1_CTOR_OFFSET))(this);
		}

		::System::Void _OnPS4LoginCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER___C__DISPLAYCLASS33_1__ONPS4LOGINCALLBACK_B__0_OFFSET))(this);
		}

	};
}
