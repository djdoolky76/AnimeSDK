#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_60_EE45C2AA97E7F82E_METHOD_1_OFFSET UNITYSDK_OFFSET(0xD204980)
#define CLASS_60_EE45C2AA97E7F82E_METHOD_2_OFFSET UNITYSDK_OFFSET(0xD204550)
#define CLASS_60_EE45C2AA97E7F82E_METHOD_OFFSET UNITYSDK_OFFSET(0xD204C10)

	class Class_60_EE45C2AA97E7F82E : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_60_EE45C2AA97E7F82E_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_60_EE45C2AA97E7F82E_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_60_EE45C2AA97E7F82E_METHOD_2_OFFSET))(a1);
		}

	};
