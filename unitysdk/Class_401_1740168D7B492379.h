#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_401_1740168D7B492379_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148F4F40)
#define CLASS_401_1740168D7B492379_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148F4B40)
#define CLASS_401_1740168D7B492379_METHOD_OFFSET UNITYSDK_OFFSET(0x148F5190)

inline static constexpr unsigned int Class_401_1740168D7B492379_TypeDefinitionIndex = 50730;

	class Class_401_1740168D7B492379 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_401_1740168D7B492379_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_401_1740168D7B492379_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_401_1740168D7B492379_METHOD_2_OFFSET))(a1);
		}

	};
