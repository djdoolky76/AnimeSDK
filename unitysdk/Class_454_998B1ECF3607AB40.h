#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_454_998B1ECF3607AB40_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1490A080)
#define CLASS_454_998B1ECF3607AB40_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14909C80)
#define CLASS_454_998B1ECF3607AB40_METHOD_OFFSET UNITYSDK_OFFSET(0x1490A2D0)

	class Class_454_998B1ECF3607AB40 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_454_998B1ECF3607AB40_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_454_998B1ECF3607AB40_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_454_998B1ECF3607AB40_METHOD_2_OFFSET))(a1);
		}

	};
