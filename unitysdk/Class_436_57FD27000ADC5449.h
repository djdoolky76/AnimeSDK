#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_436_57FD27000ADC5449_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1B5226E0)
#define CLASS_436_57FD27000ADC5449_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1B5222E0)
#define CLASS_436_57FD27000ADC5449_METHOD_OFFSET UNITYSDK_OFFSET(0x1B522930)

inline static constexpr unsigned int Class_436_57FD27000ADC5449_TypeDefinitionIndex = 51816;

	class Class_436_57FD27000ADC5449 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_436_57FD27000ADC5449_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_436_57FD27000ADC5449_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_436_57FD27000ADC5449_METHOD_2_OFFSET))(a1);
		}

	};
