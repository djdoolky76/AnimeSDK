#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1006_D5E925D1DD875F40_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BE3F1C0)
#define CLASS_1006_D5E925D1DD875F40_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BE3EDC0)
#define CLASS_1006_D5E925D1DD875F40_METHOD_OFFSET UNITYSDK_OFFSET(0x1BE3F410)

inline static constexpr unsigned int Class_1006_D5E925D1DD875F40_TypeDefinitionIndex = 52392;

	class Class_1006_D5E925D1DD875F40 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1006_D5E925D1DD875F40_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1006_D5E925D1DD875F40_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1006_D5E925D1DD875F40_METHOD_2_OFFSET))(a1);
		}

	};
