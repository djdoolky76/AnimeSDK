#pragma once
#include "unitysdk/unitysdk.h"

#define XINPUTDOTNETPURE_GAMEPADTRIGGERS_CTOR_OFFSET UNITYSDK_OFFSET(0x652930)
#define XINPUTDOTNETPURE_GAMEPADTRIGGERS_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x7CEEA0)
#define XINPUTDOTNETPURE_GAMEPADTRIGGERS_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x7CEEB0)

namespace XInputDotNetPure
{
	inline static constexpr unsigned int GamePadTriggers_TypeDefinitionIndex = 41760;

	struct alignas(4) GamePadTriggers
	{
		::System::Single left; // 0x10
		::System::Single right; // 0x14
		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADTRIGGERS_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single get_Left()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADTRIGGERS_GET_LEFT_OFFSET))(this);
		}

		::System::Single get_Right()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADTRIGGERS_GET_RIGHT_OFFSET))(this);
		}

	};
}
