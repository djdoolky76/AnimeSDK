#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS88_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E07CB80)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS88_1__ONCHECKACCOUNT_B__18_OFFSET UNITYSDK_OFFSET(0x1E07CB90)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS88_1__ONCHECKACCOUNT_B__20_OFFSET UNITYSDK_OFFSET(0x1E07CCF0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass88_1_TypeDefinitionIndex = 20755;

	template <typename T>
	class LoginManager___c__DisplayClass88_1 : public ::System::Object
	{
	public:
		::System::Action* OnBindMail; // 0x10
		::System::Object* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS88_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__18()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS88_1__ONCHECKACCOUNT_B__18_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__20()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS88_1__ONCHECKACCOUNT_B__20_OFFSET))(this);
		}
	};
}
