#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_753_E083083083423B23_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14986B90)
#define CLASS_753_E083083083423B23_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14986790)
#define CLASS_753_E083083083423B23_METHOD_OFFSET UNITYSDK_OFFSET(0x14986DE0)

inline static constexpr unsigned int Class_753_E083083083423B23_TypeDefinitionIndex = 51088;

	class Class_753_E083083083423B23 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_753_E083083083423B23_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_753_E083083083423B23_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_753_E083083083423B23_METHOD_2_OFFSET))(a1);
		}

	};
