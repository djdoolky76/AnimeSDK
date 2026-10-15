#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_495_062BE7714AFE7292_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1492B100)
#define CLASS_495_062BE7714AFE7292_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1492AD00)
#define CLASS_495_062BE7714AFE7292_METHOD_OFFSET UNITYSDK_OFFSET(0x1492B350)

	class Class_495_062BE7714AFE7292 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_495_062BE7714AFE7292_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_495_062BE7714AFE7292_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_495_062BE7714AFE7292_METHOD_2_OFFSET))(a1);
		}

	};
