#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_345_39CB39A755A516B7_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148DFE20)
#define CLASS_345_39CB39A755A516B7_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148DFA20)
#define CLASS_345_39CB39A755A516B7_METHOD_OFFSET UNITYSDK_OFFSET(0x148E0070)

	class Class_345_39CB39A755A516B7 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_345_39CB39A755A516B7_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_345_39CB39A755A516B7_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_345_39CB39A755A516B7_METHOD_2_OFFSET))(a1);
		}

	};
