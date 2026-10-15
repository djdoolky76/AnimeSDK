#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_611_786434A15F8DDA2B_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1495A0C0)
#define CLASS_611_786434A15F8DDA2B_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14959CC0)
#define CLASS_611_786434A15F8DDA2B_METHOD_OFFSET UNITYSDK_OFFSET(0x1495A310)

	class Class_611_786434A15F8DDA2B : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_611_786434A15F8DDA2B_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_611_786434A15F8DDA2B_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_611_786434A15F8DDA2B_METHOD_2_OFFSET))(a1);
		}

	};
