#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_488_649531D2E6328ED1_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1491C420)
#define CLASS_488_649531D2E6328ED1_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1491C020)
#define CLASS_488_649531D2E6328ED1_METHOD_OFFSET UNITYSDK_OFFSET(0x1491C670)

inline static constexpr unsigned int Class_488_649531D2E6328ED1_TypeDefinitionIndex = 50822;

	class Class_488_649531D2E6328ED1 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_488_649531D2E6328ED1_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_488_649531D2E6328ED1_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_488_649531D2E6328ED1_METHOD_2_OFFSET))(a1);
		}

	};
