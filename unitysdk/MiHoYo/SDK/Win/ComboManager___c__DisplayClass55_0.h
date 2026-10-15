#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS55_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD238A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass55_0_TypeDefinitionIndex = 9433;

	class ComboManager___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS55_0_CTOR_OFFSET))(this);
		}

	};
}
