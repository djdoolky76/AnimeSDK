#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
namespace MiHoYo::SDK { class Web; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCEA7F0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS13_0__BINDMOBILE_B__0_OFFSET UNITYSDK_OFFSET(0x1BCF32D0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS13_0__BINDMOBILE_B__1_OFFSET UNITYSDK_OFFSET(0x1BCF33E0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindManager___c__DisplayClass13_0_TypeDefinitionIndex = 9376;

	class BindManager___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Action* __9__1; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Void _BindMobile_b__0(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::UniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS13_0__BINDMOBILE_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _BindMobile_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS13_0__BINDMOBILE_B__1_OFFSET))(this);
		}

	};
}
