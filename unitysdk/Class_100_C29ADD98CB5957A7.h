#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_100_C29ADD98CB5957A7_METHOD_1_OFFSET UNITYSDK_OFFSET(0xB3BACC0)
#define CLASS_100_C29ADD98CB5957A7_METHOD_2_OFFSET UNITYSDK_OFFSET(0xB3BA890)
#define CLASS_100_C29ADD98CB5957A7_METHOD_OFFSET UNITYSDK_OFFSET(0xB3BAF50)

	class Class_100_C29ADD98CB5957A7 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_100_C29ADD98CB5957A7_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_100_C29ADD98CB5957A7_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_100_C29ADD98CB5957A7_METHOD_2_OFFSET))(a1);
		}

	};
