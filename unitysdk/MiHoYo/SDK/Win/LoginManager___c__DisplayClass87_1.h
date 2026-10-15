#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD72260)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_1__ONCHECKACCOUNT_B__18_OFFSET UNITYSDK_OFFSET(0x1BD898B0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_1__ONCHECKACCOUNT_B__20_OFFSET UNITYSDK_OFFSET(0x1BD89A20)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass87_1_TypeDefinitionIndex = 9460;

	template <typename T>
	class LoginManager___c__DisplayClass87_1 : public ::System::Object
	{
	public:
		::System::Action* OnBindMail; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_1_CTOR_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__18()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_1__ONCHECKACCOUNT_B__18_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__20()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_1__ONCHECKACCOUNT_B__20_OFFSET))(this);
		}

	};
}
