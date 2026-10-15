#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC6CE70)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C__DISPLAYCLASS3_0__GENERATEACCESSTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x1BC70A50)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int LoginManagerPS___c__DisplayClass3_0_TypeDefinitionIndex = 9117;

	class LoginManagerPS___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::String* clientID; // 0x10
		::System::Action* callback; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _GenerateAccessToken_b__0(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C__DISPLAYCLASS3_0__GENERATEACCESSTOKEN_B__0_OFFSET))(this, a1, a2, a3);
		}

	};
}
