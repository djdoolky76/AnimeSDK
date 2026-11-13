#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ConsoleKeyInfo.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NULLCONSOLEDRIVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDD40E0)
#define SYSTEM_NULLCONSOLEDRIVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EDD40D0)
#define SYSTEM_NULLCONSOLEDRIVER_READKEY_OFFSET UNITYSDK_OFFSET(0x1EDD4060)

namespace System
{
	inline static constexpr unsigned int NullConsoleDriver_TypeDefinitionIndex = 411;

	class NullConsoleDriver : public ::System::Object
	{
	public:
		static ::System::ConsoleKeyInfo* StaticGet_EmptyConsoleKeyInfo()
		{
			return (::System::ConsoleKeyInfo*)UnitySDK::FromName("System", "NullConsoleDriver")->GetStaticField(0x3AE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NULLCONSOLEDRIVER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NULLCONSOLEDRIVER_CCTOR_OFFSET))();
		}

		::System::ConsoleKeyInfo ReadKey(::System::Boolean a1)
		{
			return ((::System::ConsoleKeyInfo(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NULLCONSOLEDRIVER_READKEY_OFFSET))(this, a1);
		}

	};
}
