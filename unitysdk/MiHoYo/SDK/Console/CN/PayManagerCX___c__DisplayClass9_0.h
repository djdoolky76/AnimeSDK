#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Console::CN { class PayManagerCX; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC723C0)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__DISPLAYCLASS9_0__GETUSERCOLLECTIONSID_B__0_OFFSET UNITYSDK_OFFSET(0x1BC74960)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int PayManagerCX___c__DisplayClass9_0_TypeDefinitionIndex = 9126;

	class PayManagerCX___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::CN::PayManagerCX* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Void _GetUserCollectionsId_b__0(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__DISPLAYCLASS9_0__GETUSERCOLLECTIONSID_B__0_OFFSET))(this, a1, a2);
		}

	};
}
