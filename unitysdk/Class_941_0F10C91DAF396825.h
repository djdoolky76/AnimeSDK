#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_941_0F10C91DAF396825_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149DCEB0)
#define CLASS_941_0F10C91DAF396825_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149DCAB0)
#define CLASS_941_0F10C91DAF396825_METHOD_OFFSET UNITYSDK_OFFSET(0x149DD100)

inline static constexpr unsigned int Class_941_0F10C91DAF396825_TypeDefinitionIndex = 51276;

	class Class_941_0F10C91DAF396825 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_941_0F10C91DAF396825_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_941_0F10C91DAF396825_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_941_0F10C91DAF396825_METHOD_2_OFFSET))(a1);
		}

	};
