#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_30_5EFD2162DD09BD6B_METHOD_1_OFFSET UNITYSDK_OFFSET(0xE9EE360)
#define CLASS_30_5EFD2162DD09BD6B_METHOD_2_OFFSET UNITYSDK_OFFSET(0xE9EDF60)
#define CLASS_30_5EFD2162DD09BD6B_METHOD_OFFSET UNITYSDK_OFFSET(0xE9EE5B0)

inline static constexpr unsigned int Class_30_5EFD2162DD09BD6B_TypeDefinitionIndex = 50313;

	class Class_30_5EFD2162DD09BD6B : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_30_5EFD2162DD09BD6B_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_30_5EFD2162DD09BD6B_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_30_5EFD2162DD09BD6B_METHOD_2_OFFSET))(a1);
		}

	};
