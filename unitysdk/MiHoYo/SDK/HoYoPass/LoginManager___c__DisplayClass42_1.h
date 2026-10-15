#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS42_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE5C070)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS42_1__ONHOYOPASSRISKCHALLENGE_B__1_OFFSET UNITYSDK_OFFSET(0x1BE6DF50)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass42_1_TypeDefinitionIndex = 8315;

	template <typename T>
	class LoginManager___c__DisplayClass42_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::String* sessionId; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS42_1_CTOR_OFFSET))(this);
		}

		::System::Void _OnHoYoPassRiskChallenge_b__1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS42_1__ONHOYOPASSRISKCHALLENGE_B__1_OFFSET))(this, a1);
		}

	};
}
