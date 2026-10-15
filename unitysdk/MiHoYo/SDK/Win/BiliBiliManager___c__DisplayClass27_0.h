#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__DISPLAYCLASS27_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCE78D0)

namespace MiHoYo::SDK::Win
{
	class BiliBiliManager___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__DISPLAYCLASS27_0_CTOR_OFFSET))(this);
		}

	};
}
