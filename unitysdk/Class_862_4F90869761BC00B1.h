#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_862_4F90869761BC00B1_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BE05F20)
#define CLASS_862_4F90869761BC00B1_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BE05B20)
#define CLASS_862_4F90869761BC00B1_METHOD_OFFSET UNITYSDK_OFFSET(0x1BE06170)

inline static constexpr unsigned int Class_862_4F90869761BC00B1_TypeDefinitionIndex = 52248;

	class Class_862_4F90869761BC00B1 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_862_4F90869761BC00B1_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_862_4F90869761BC00B1_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_862_4F90869761BC00B1_METHOD_2_OFFSET))(a1);
		}

	};
