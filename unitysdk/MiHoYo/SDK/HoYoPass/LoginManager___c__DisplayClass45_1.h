#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE5E7B0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_1__ONHOYOPASSPROTECTIVEBAN_B__2_OFFSET UNITYSDK_OFFSET(0x1BE6E8C0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_1__ONHOYOPASSPROTECTIVEBAN_B__3_OFFSET UNITYSDK_OFFSET(0x1BE6ECF0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_1__ONHOYOPASSPROTECTIVEBAN_B__4_OFFSET UNITYSDK_OFFSET(0x1BE6EB00)

namespace MiHoYo::SDK::HoYoPass
{
	template <typename T>
	class LoginManager___c__DisplayClass45_1 : public ::System::Object
	{
	public:
		::System::Action* __9__4; // 0x10
		::System::Action* onChangePasswordCanceled; // 0x18
		::System::Object* CS___8__locals1; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_1_CTOR_OFFSET))(this);
		}

		::System::Void _OnHoYoPassProtectiveBan_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_1__ONHOYOPASSPROTECTIVEBAN_B__2_OFFSET))(this);
		}

		::System::Void _OnHoYoPassProtectiveBan_b__4(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_1__ONHOYOPASSPROTECTIVEBAN_B__4_OFFSET))(this, a1, a2);
		}

		::System::Void _OnHoYoPassProtectiveBan_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_1__ONHOYOPASSPROTECTIVEBAN_B__3_OFFSET))(this);
		}

	};
}
