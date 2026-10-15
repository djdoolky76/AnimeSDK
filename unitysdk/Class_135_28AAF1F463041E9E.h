#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_135_28AAF1F463041E9E_METHOD_1_OFFSET UNITYSDK_OFFSET(0xEB89970)
#define CLASS_135_28AAF1F463041E9E_METHOD_2_OFFSET UNITYSDK_OFFSET(0xEB89540)
#define CLASS_135_28AAF1F463041E9E_METHOD_OFFSET UNITYSDK_OFFSET(0xEB89C00)

	class Class_135_28AAF1F463041E9E : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_135_28AAF1F463041E9E_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_135_28AAF1F463041E9E_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_135_28AAF1F463041E9E_METHOD_2_OFFSET))(a1);
		}

	};
