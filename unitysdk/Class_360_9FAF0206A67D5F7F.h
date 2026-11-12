#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_360_9FAF0206A67D5F7F_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1578A550)
#define CLASS_360_9FAF0206A67D5F7F_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1578A150)
#define CLASS_360_9FAF0206A67D5F7F_METHOD_OFFSET UNITYSDK_OFFSET(0x1578A7A0)

inline static constexpr unsigned int Class_360_9FAF0206A67D5F7F_TypeDefinitionIndex = 51740;

	class Class_360_9FAF0206A67D5F7F : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_360_9FAF0206A67D5F7F_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_360_9FAF0206A67D5F7F_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_360_9FAF0206A67D5F7F_METHOD_2_OFFSET))(a1);
		}

	};
