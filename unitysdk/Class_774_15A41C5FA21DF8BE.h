#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_774_15A41C5FA21DF8BE_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1498F070)
#define CLASS_774_15A41C5FA21DF8BE_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1498EC70)
#define CLASS_774_15A41C5FA21DF8BE_METHOD_OFFSET UNITYSDK_OFFSET(0x1498F2A0)

inline static constexpr unsigned int Class_774_15A41C5FA21DF8BE_TypeDefinitionIndex = 51109;

	class Class_774_15A41C5FA21DF8BE : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_774_15A41C5FA21DF8BE_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_774_15A41C5FA21DF8BE_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_774_15A41C5FA21DF8BE_METHOD_2_OFFSET))(a1);
		}

	};
