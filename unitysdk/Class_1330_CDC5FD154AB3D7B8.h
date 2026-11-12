#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1330_CDC5FD154AB3D7B8_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1597C640)
#define CLASS_1330_CDC5FD154AB3D7B8_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1597C240)
#define CLASS_1330_CDC5FD154AB3D7B8_METHOD_OFFSET UNITYSDK_OFFSET(0x1597C890)

inline static constexpr unsigned int Class_1330_CDC5FD154AB3D7B8_TypeDefinitionIndex = 52719;

	class Class_1330_CDC5FD154AB3D7B8 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1330_CDC5FD154AB3D7B8_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1330_CDC5FD154AB3D7B8_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1330_CDC5FD154AB3D7B8_METHOD_2_OFFSET))(a1);
		}

	};
