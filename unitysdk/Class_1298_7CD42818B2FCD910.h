#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1298_7CD42818B2FCD910_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BDE9800)
#define CLASS_1298_7CD42818B2FCD910_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BDE9400)
#define CLASS_1298_7CD42818B2FCD910_METHOD_OFFSET UNITYSDK_OFFSET(0x1BDE9A50)

inline static constexpr unsigned int Class_1298_7CD42818B2FCD910_TypeDefinitionIndex = 52684;

	class Class_1298_7CD42818B2FCD910 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1298_7CD42818B2FCD910_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1298_7CD42818B2FCD910_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1298_7CD42818B2FCD910_METHOD_2_OFFSET))(a1);
		}

	};
