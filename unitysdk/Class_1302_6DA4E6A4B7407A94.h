#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1302_6DA4E6A4B7407A94_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BDEB180)
#define CLASS_1302_6DA4E6A4B7407A94_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BDEAD80)
#define CLASS_1302_6DA4E6A4B7407A94_METHOD_OFFSET UNITYSDK_OFFSET(0x1BDEB3D0)

inline static constexpr unsigned int Class_1302_6DA4E6A4B7407A94_TypeDefinitionIndex = 52688;

	class Class_1302_6DA4E6A4B7407A94 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1302_6DA4E6A4B7407A94_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1302_6DA4E6A4B7407A94_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1302_6DA4E6A4B7407A94_METHOD_2_OFFSET))(a1);
		}

	};
