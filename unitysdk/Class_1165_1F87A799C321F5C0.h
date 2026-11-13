#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1165_1F87A799C321F5C0_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BDB4D60)
#define CLASS_1165_1F87A799C321F5C0_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BDB4960)
#define CLASS_1165_1F87A799C321F5C0_METHOD_OFFSET UNITYSDK_OFFSET(0x1BDB4FB0)

inline static constexpr unsigned int Class_1165_1F87A799C321F5C0_TypeDefinitionIndex = 52551;

	class Class_1165_1F87A799C321F5C0 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1165_1F87A799C321F5C0_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1165_1F87A799C321F5C0_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1165_1F87A799C321F5C0_METHOD_2_OFFSET))(a1);
		}

	};
