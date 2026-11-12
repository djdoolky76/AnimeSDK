#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_438_06A97B4AB9A6EA29_METHOD_1_OFFSET UNITYSDK_OFFSET(0x157A9590)
#define CLASS_438_06A97B4AB9A6EA29_METHOD_2_OFFSET UNITYSDK_OFFSET(0x157A9190)
#define CLASS_438_06A97B4AB9A6EA29_METHOD_OFFSET UNITYSDK_OFFSET(0x157A97E0)

inline static constexpr unsigned int Class_438_06A97B4AB9A6EA29_TypeDefinitionIndex = 51818;

	class Class_438_06A97B4AB9A6EA29 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_438_06A97B4AB9A6EA29_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_438_06A97B4AB9A6EA29_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_438_06A97B4AB9A6EA29_METHOD_2_OFFSET))(a1);
		}

	};
