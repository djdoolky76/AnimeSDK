#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1260_DC95EDD589E04C04_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A4FD60)
#define CLASS_1260_DC95EDD589E04C04_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A4F960)
#define CLASS_1260_DC95EDD589E04C04_METHOD_OFFSET UNITYSDK_OFFSET(0x14A4FF90)

inline static constexpr unsigned int Class_1260_DC95EDD589E04C04_TypeDefinitionIndex = 51595;

	class Class_1260_DC95EDD589E04C04 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1260_DC95EDD589E04C04_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1260_DC95EDD589E04C04_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1260_DC95EDD589E04C04_METHOD_2_OFFSET))(a1);
		}

	};
