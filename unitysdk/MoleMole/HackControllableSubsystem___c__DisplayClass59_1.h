#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS59_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE96A0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS59_1__PROCESSFORCEEXITSTREAMINGBLACKFADE_B__6_OFFSET UNITYSDK_OFFSET(0x13EE97D0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS59_1__PROCESSFORCEEXITSTREAMINGBLACKFADE_B__7_OFFSET UNITYSDK_OFFSET(0x13EE97E0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS59_1__PROCESSFORCEEXITSTREAMINGBLACKFADE_B__8_OFFSET UNITYSDK_OFFSET(0x13EE9880)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS59_1__PROCESSFORCEEXITSTREAMINGBLACKFADE_G__TRYFINISHFORCEDBLACKFADE_5_OFFSET UNITYSDK_OFFSET(0x13EE96B0)

namespace MoleMole
{
	inline static constexpr unsigned int HackControllableSubsystem___c__DisplayClass59_1_TypeDefinitionIndex = 41062;

	template <typename T>
	class HackControllableSubsystem___c__DisplayClass59_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Boolean finished; // 0x18
		::System::Boolean streamingReady; // 0x19
		::System::Boolean cameraReady; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS59_1__CTOR_OFFSET))(this);
		}

		::System::Void _ProcessForceExitStreamingBlackFade_g__TryFinishForcedBlackFade_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS59_1__PROCESSFORCEEXITSTREAMINGBLACKFADE_G__TRYFINISHFORCEDBLACKFADE_5_OFFSET))(this);
		}

		::System::Void _ProcessForceExitStreamingBlackFade_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS59_1__PROCESSFORCEEXITSTREAMINGBLACKFADE_B__6_OFFSET))(this);
		}

		::System::Void _ProcessForceExitStreamingBlackFade_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS59_1__PROCESSFORCEEXITSTREAMINGBLACKFADE_B__7_OFFSET))(this);
		}

		::System::Void _ProcessForceExitStreamingBlackFade_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS59_1__PROCESSFORCEEXITSTREAMINGBLACKFADE_B__8_OFFSET))(this);
		}
	};
}
