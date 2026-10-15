#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_179_C47E615E00021B14_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15C52570)
#define CLASS_179_C47E615E00021B14_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15C52140)
#define CLASS_179_C47E615E00021B14_METHOD_OFFSET UNITYSDK_OFFSET(0x15C52800)

	class Class_179_C47E615E00021B14 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_179_C47E615E00021B14_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_179_C47E615E00021B14_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_179_C47E615E00021B14_METHOD_2_OFFSET))(a1);
		}

	};
