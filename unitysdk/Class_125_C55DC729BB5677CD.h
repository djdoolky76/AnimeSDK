#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_125_C55DC729BB5677CD_METHOD_1_OFFSET UNITYSDK_OFFSET(0xE262510)
#define CLASS_125_C55DC729BB5677CD_METHOD_2_OFFSET UNITYSDK_OFFSET(0xE2620E0)
#define CLASS_125_C55DC729BB5677CD_METHOD_OFFSET UNITYSDK_OFFSET(0xE2627A0)

	class Class_125_C55DC729BB5677CD : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_125_C55DC729BB5677CD_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_125_C55DC729BB5677CD_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_125_C55DC729BB5677CD_METHOD_2_OFFSET))(a1);
		}

	};
