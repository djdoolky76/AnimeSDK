#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_364_674C3182EFD427A7_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148E6400)
#define CLASS_364_674C3182EFD427A7_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148E6000)
#define CLASS_364_674C3182EFD427A7_METHOD_OFFSET UNITYSDK_OFFSET(0x148E6650)

	class Class_364_674C3182EFD427A7 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_364_674C3182EFD427A7_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_364_674C3182EFD427A7_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_364_674C3182EFD427A7_METHOD_2_OFFSET))(a1);
		}

	};
