#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowMessageDialogResult; }
namespace System { class Action; }

#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS24_2_CTOR_OFFSET UNITYSDK_OFFSET(0xAFA1400)
#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS24_2__CLEANUPTIMEDOUTCALLBACKS_B__2_OFFSET UNITYSDK_OFFSET(0xAFA1BB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSystemFunctions___c__DisplayClass24_2_TypeDefinitionIndex = 46565;

	template <typename T1, typename T2>
	class HoYoChannelSystemFunctions___c__DisplayClass24_2 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS24_2_CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS24_2__CLEANUPTIMEDOUTCALLBACKS_B__2_OFFSET))(this);
		}

	};
}
