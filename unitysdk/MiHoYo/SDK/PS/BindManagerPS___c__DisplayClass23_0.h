#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PS_BINDMANAGERPS___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF44C40)
#define MIHOYO_SDK_PS_BINDMANAGERPS___C__DISPLAYCLASS23_0__UPDATEACCESSTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x1BF45350)

namespace MiHoYo::SDK::PS
{
	class BindManagerPS___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::String* clientId; // 0x10
		::System::Action* callback; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Void _UpdateAccessToken_b__0(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS___C__DISPLAYCLASS23_0__UPDATEACCESSTOKEN_B__0_OFFSET))(this, a1, a2, a3);
		}

	};
}
