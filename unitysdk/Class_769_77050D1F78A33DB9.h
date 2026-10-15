#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_769_77050D1F78A33DB9_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14998AD0)
#define CLASS_769_77050D1F78A33DB9_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149986D0)
#define CLASS_769_77050D1F78A33DB9_METHOD_OFFSET UNITYSDK_OFFSET(0x14998D00)

	class Class_769_77050D1F78A33DB9 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_769_77050D1F78A33DB9_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_769_77050D1F78A33DB9_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_769_77050D1F78A33DB9_METHOD_2_OFFSET))(a1);
		}

	};
