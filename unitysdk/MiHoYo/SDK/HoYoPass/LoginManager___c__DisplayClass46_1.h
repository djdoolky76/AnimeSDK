#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONNode; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS46_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE5EE30)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS46_1__ONHOYOPASSVERIFICATION_B__1_OFFSET UNITYSDK_OFFSET(0x1BE6EDB0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass46_1_TypeDefinitionIndex = 8322;

	template <typename T>
	class LoginManager___c__DisplayClass46_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONNode* verifyObj; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS46_1_CTOR_OFFSET))(this);
		}

		::System::Void _OnHoYoPassVerification_b__1(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS46_1__ONHOYOPASSVERIFICATION_B__1_OFFSET))(this, a1, a2);
		}

	};
}
