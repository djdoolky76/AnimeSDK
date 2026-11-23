#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_A82860BF094DAC73_AACAD0C570F3EE35_OFFSET UNITYSDK_OFFSET(0x3ADF890)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_A82860BF094DAC73__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int MiHoYoSDKDll_A82860BF094DAC73_TypeDefinitionIndex = 12176;

	class MiHoYoSDKDll_A82860BF094DAC73 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_A82860BF094DAC73__CTOR_OFFSET))(this);
		}

		::System::Void AACAD0C570F3EE35(::System::String* F1BF0FE85E9DD584)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_A82860BF094DAC73_AACAD0C570F3EE35_OFFSET))(this, F1BF0FE85E9DD584);
		}
	};
}
