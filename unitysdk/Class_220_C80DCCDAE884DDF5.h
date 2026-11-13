#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_220_C80DCCDAE884DDF5_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1B367590)
#define CLASS_220_C80DCCDAE884DDF5_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1B367160)
#define CLASS_220_C80DCCDAE884DDF5_METHOD_OFFSET UNITYSDK_OFFSET(0x1B367820)

inline static constexpr unsigned int Class_220_C80DCCDAE884DDF5_TypeDefinitionIndex = 51574;

	class Class_220_C80DCCDAE884DDF5 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_220_C80DCCDAE884DDF5_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_220_C80DCCDAE884DDF5_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_220_C80DCCDAE884DDF5_METHOD_2_OFFSET))(a1);
		}

	};
