#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_SDKDISPATCHER___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB034850)
#define MIHOYO_SDK_SDKDISPATCHER___C__DISPLAYCLASS9_0__SDKINVOKE_B__0_OFFSET UNITYSDK_OFFSET(0xB034C00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDispatcher___c__DisplayClass9_0_TypeDefinitionIndex = 46267;

	class SDKDispatcher___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::String* cbModuleType; // 0x10
		::System::String* funcName; // 0x18
		::System::Action* callback; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDISPATCHER___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Void _SDKInvoke_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDISPATCHER___C__DISPLAYCLASS9_0__SDKINVOKE_B__0_OFFSET))(this, a1);
		}

	};
}
