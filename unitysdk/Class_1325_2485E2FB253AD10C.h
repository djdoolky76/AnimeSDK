#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1325_2485E2FB253AD10C_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14AE44E0)
#define CLASS_1325_2485E2FB253AD10C_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14AE40E0)
#define CLASS_1325_2485E2FB253AD10C_METHOD_OFFSET UNITYSDK_OFFSET(0x14AE4730)

inline static constexpr unsigned int Class_1325_2485E2FB253AD10C_TypeDefinitionIndex = 51663;

	class Class_1325_2485E2FB253AD10C : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1325_2485E2FB253AD10C_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1325_2485E2FB253AD10C_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1325_2485E2FB253AD10C_METHOD_2_OFFSET))(a1);
		}

	};
