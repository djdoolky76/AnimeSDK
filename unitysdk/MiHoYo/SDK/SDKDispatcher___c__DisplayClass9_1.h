#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_SDKDISPATCHER___C__DISPLAYCLASS9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4303D0)
#define MIHOYO_SDK_SDKDISPATCHER___C__DISPLAYCLASS9_1__SDKINVOKE_B__0_OFFSET UNITYSDK_OFFSET(0x1F4303E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDispatcher___c__DisplayClass9_1_TypeDefinitionIndex = 35295;

	template <typename T>
	class SDKDispatcher___c__DisplayClass9_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::String* cbModuleType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDISPATCHER___C__DISPLAYCLASS9_1__CTOR_OFFSET))(this);
		}

		::System::Void _SDKInvoke_b__0(::System::String* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDISPATCHER___C__DISPLAYCLASS9_1__SDKINVOKE_B__0_OFFSET))(this, response);
		}
	};
}
