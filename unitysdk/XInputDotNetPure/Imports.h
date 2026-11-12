#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define XINPUTDOTNETPURE_IMPORTS_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCE9EB0)
#define XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADGETSTATE32_OFFSET UNITYSDK_OFFSET(0x1CCE9C50)
#define XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADGETSTATE64_OFFSET UNITYSDK_OFFSET(0x1CCE9D80)
#define XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADGETSTATE_OFFSET UNITYSDK_OFFSET(0x1CCE9770)
#define XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADSETSTATE32_OFFSET UNITYSDK_OFFSET(0x1CCE9CE0)
#define XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADSETSTATE64_OFFSET UNITYSDK_OFFSET(0x1CCE9E10)
#define XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADSETSTATE_OFFSET UNITYSDK_OFFSET(0x1CCE9940)

namespace XInputDotNetPure
{
	inline static constexpr unsigned int Imports_TypeDefinitionIndex = 41754;

	class Imports : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_IMPORTS_CTOR_OFFSET))(this);
		}

		static ::System::UInt32 XInputGamePadGetState32(::System::UInt32 a1, ::System::IntPtr a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADGETSTATE32_OFFSET))(a1, a2);
		}

		static ::System::Void XInputGamePadSetState32(::System::UInt32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADSETSTATE32_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 XInputGamePadGetState64(::System::UInt32 a1, ::System::IntPtr a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADGETSTATE64_OFFSET))(a1, a2);
		}

		static ::System::Void XInputGamePadSetState64(::System::UInt32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADSETSTATE64_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 XInputGamePadGetState(::System::UInt32 a1, ::System::IntPtr a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADGETSTATE_OFFSET))(a1, a2);
		}

		static ::System::Void XInputGamePadSetState(::System::UInt32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_IMPORTS_XINPUTGAMEPADSETSTATE_OFFSET))(a1, a2, a3);
		}

	};
}
