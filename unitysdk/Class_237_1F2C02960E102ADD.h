#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_237_1F2C02960E102ADD_METHOD_1_OFFSET UNITYSDK_OFFSET(0xC1AF370)
#define CLASS_237_1F2C02960E102ADD_METHOD_2_OFFSET UNITYSDK_OFFSET(0xC1AEF40)
#define CLASS_237_1F2C02960E102ADD_METHOD_OFFSET UNITYSDK_OFFSET(0xC1AF600)

	class Class_237_1F2C02960E102ADD : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_237_1F2C02960E102ADD_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_237_1F2C02960E102ADD_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_237_1F2C02960E102ADD_METHOD_2_OFFSET))(a1);
		}

	};
