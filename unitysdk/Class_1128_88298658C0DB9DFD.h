#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1128_88298658C0DB9DFD_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BDA6280)
#define CLASS_1128_88298658C0DB9DFD_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BDA5E80)
#define CLASS_1128_88298658C0DB9DFD_METHOD_OFFSET UNITYSDK_OFFSET(0x1BDA64B0)

inline static constexpr unsigned int Class_1128_88298658C0DB9DFD_TypeDefinitionIndex = 52514;

	class Class_1128_88298658C0DB9DFD : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1128_88298658C0DB9DFD_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1128_88298658C0DB9DFD_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1128_88298658C0DB9DFD_METHOD_2_OFFSET))(a1);
		}

	};
