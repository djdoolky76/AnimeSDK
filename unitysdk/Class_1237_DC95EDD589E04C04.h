#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1237_DC95EDD589E04C04_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1594FB00)
#define CLASS_1237_DC95EDD589E04C04_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1594F700)
#define CLASS_1237_DC95EDD589E04C04_METHOD_OFFSET UNITYSDK_OFFSET(0x1594FD50)

inline static constexpr unsigned int Class_1237_DC95EDD589E04C04_TypeDefinitionIndex = 52623;

	class Class_1237_DC95EDD589E04C04 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1237_DC95EDD589E04C04_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1237_DC95EDD589E04C04_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1237_DC95EDD589E04C04_METHOD_2_OFFSET))(a1);
		}

	};
