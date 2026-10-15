#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_605_8891127A2DA64DED_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14957A80)
#define CLASS_605_8891127A2DA64DED_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14957680)
#define CLASS_605_8891127A2DA64DED_METHOD_OFFSET UNITYSDK_OFFSET(0x14957CD0)

	class Class_605_8891127A2DA64DED : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_605_8891127A2DA64DED_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_605_8891127A2DA64DED_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_605_8891127A2DA64DED_METHOD_2_OFFSET))(a1);
		}

	};
