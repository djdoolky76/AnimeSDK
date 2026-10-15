#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS38_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD20920)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS38_0__LOGOUTWITHGAMENOTIFICATION_B__0_OFFSET UNITYSDK_OFFSET(0x1BD30CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass38_0_TypeDefinitionIndex = 9426;

	class ComboManager___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS38_0_CTOR_OFFSET))(this);
		}

		::System::Void _LogoutWithGameNotification_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS38_0__LOGOUTWITHGAMENOTIFICATION_B__0_OFFSET))(this, a1);
		}

	};
}
