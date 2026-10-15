#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ErrorCode.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS62_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE705D0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS62_1__STARTTHIRDPARTYOAUTH_B__3_OFFSET UNITYSDK_OFFSET(0x1BE70850)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass62_1_TypeDefinitionIndex = 8332;

	template <typename T>
	class LoginManager___c__DisplayClass62_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::String* accessToken; // 0x18
		::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode retcode; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS62_1_CTOR_OFFSET))(this);
		}

		::System::Void _StartThirdpartyOAuth_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS62_1__STARTTHIRDPARTYOAUTH_B__3_OFFSET))(this);
		}

	};
}
