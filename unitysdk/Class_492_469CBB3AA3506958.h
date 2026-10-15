#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_492_469CBB3AA3506958_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1491E400)
#define CLASS_492_469CBB3AA3506958_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1491E000)
#define CLASS_492_469CBB3AA3506958_METHOD_OFFSET UNITYSDK_OFFSET(0x1491E650)

inline static constexpr unsigned int Class_492_469CBB3AA3506958_TypeDefinitionIndex = 50826;

	class Class_492_469CBB3AA3506958 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_492_469CBB3AA3506958_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_492_469CBB3AA3506958_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_492_469CBB3AA3506958_METHOD_2_OFFSET))(a1);
		}

	};
