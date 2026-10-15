#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_403_3394329740592326_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148F5C00)
#define CLASS_403_3394329740592326_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148F5800)
#define CLASS_403_3394329740592326_METHOD_OFFSET UNITYSDK_OFFSET(0x148F5E50)

	class Class_403_3394329740592326 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_403_3394329740592326_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_403_3394329740592326_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_403_3394329740592326_METHOD_2_OFFSET))(a1);
		}

	};
