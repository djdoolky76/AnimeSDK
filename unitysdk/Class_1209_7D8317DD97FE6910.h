#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1209_7D8317DD97FE6910_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A3B9C0)
#define CLASS_1209_7D8317DD97FE6910_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A3B5C0)
#define CLASS_1209_7D8317DD97FE6910_METHOD_OFFSET UNITYSDK_OFFSET(0x14A3BC10)

inline static constexpr unsigned int Class_1209_7D8317DD97FE6910_TypeDefinitionIndex = 51544;

	class Class_1209_7D8317DD97FE6910 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1209_7D8317DD97FE6910_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1209_7D8317DD97FE6910_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1209_7D8317DD97FE6910_METHOD_2_OFFSET))(a1);
		}

	};
