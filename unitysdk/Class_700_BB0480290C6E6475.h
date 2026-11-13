#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_700_BB0480290C6E6475_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BB3E800)
#define CLASS_700_BB0480290C6E6475_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BB3E400)
#define CLASS_700_BB0480290C6E6475_METHOD_OFFSET UNITYSDK_OFFSET(0x1BB3EA50)

inline static constexpr unsigned int Class_700_BB0480290C6E6475_TypeDefinitionIndex = 52086;

	class Class_700_BB0480290C6E6475 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_700_BB0480290C6E6475_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_700_BB0480290C6E6475_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_700_BB0480290C6E6475_METHOD_2_OFFSET))(a1);
		}

	};
