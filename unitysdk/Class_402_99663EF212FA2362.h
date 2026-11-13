#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_402_99663EF212FA2362_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1B514E80)
#define CLASS_402_99663EF212FA2362_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1B514A80)
#define CLASS_402_99663EF212FA2362_METHOD_OFFSET UNITYSDK_OFFSET(0x1B5150B0)

inline static constexpr unsigned int Class_402_99663EF212FA2362_TypeDefinitionIndex = 51782;

	class Class_402_99663EF212FA2362 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_402_99663EF212FA2362_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_402_99663EF212FA2362_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_402_99663EF212FA2362_METHOD_2_OFFSET))(a1);
		}

	};
