#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class ComboManager; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS45_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD21A90)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS45_0__EXIT_B__0_OFFSET UNITYSDK_OFFSET(0x1BD312F0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass45_0_TypeDefinitionIndex = 9430;

	class ComboManager___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MiHoYo::SDK::Win::ComboManager* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS45_0_CTOR_OFFSET))(this);
		}

		::System::Void _Exit_b__0(::MiHoYo::SDK::Confirm_ConfirmResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS45_0__EXIT_B__0_OFFSET))(this, a1);
		}

	};
}
