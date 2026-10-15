#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_320_171CD49D8E7AC999_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148D4CA0)
#define CLASS_320_171CD49D8E7AC999_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148D48A0)
#define CLASS_320_171CD49D8E7AC999_METHOD_OFFSET UNITYSDK_OFFSET(0x148D4EF0)

inline static constexpr unsigned int Class_320_171CD49D8E7AC999_TypeDefinitionIndex = 50649;

	class Class_320_171CD49D8E7AC999 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_320_171CD49D8E7AC999_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_320_171CD49D8E7AC999_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_320_171CD49D8E7AC999_METHOD_2_OFFSET))(a1);
		}

	};
