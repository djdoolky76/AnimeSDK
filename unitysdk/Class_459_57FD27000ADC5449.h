#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_459_57FD27000ADC5449_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1490C060)
#define CLASS_459_57FD27000ADC5449_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1490BC60)
#define CLASS_459_57FD27000ADC5449_METHOD_OFFSET UNITYSDK_OFFSET(0x1490C2B0)

inline static constexpr unsigned int Class_459_57FD27000ADC5449_TypeDefinitionIndex = 50788;

	class Class_459_57FD27000ADC5449 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_459_57FD27000ADC5449_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_459_57FD27000ADC5449_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_459_57FD27000ADC5449_METHOD_2_OFFSET))(a1);
		}

	};
