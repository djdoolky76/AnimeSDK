#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1229_C4C66B0D9F64C4FD_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A4F260)
#define CLASS_1229_C4C66B0D9F64C4FD_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A4EE60)
#define CLASS_1229_C4C66B0D9F64C4FD_METHOD_OFFSET UNITYSDK_OFFSET(0x14A4F4B0)

	class Class_1229_C4C66B0D9F64C4FD : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1229_C4C66B0D9F64C4FD_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1229_C4C66B0D9F64C4FD_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1229_C4C66B0D9F64C4FD_METHOD_2_OFFSET))(a1);
		}

	};
