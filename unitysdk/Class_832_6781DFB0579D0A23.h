#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_832_6781DFB0579D0A23_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149B1A90)
#define CLASS_832_6781DFB0579D0A23_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149B1690)
#define CLASS_832_6781DFB0579D0A23_METHOD_OFFSET UNITYSDK_OFFSET(0x149B1CE0)

	class Class_832_6781DFB0579D0A23 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_832_6781DFB0579D0A23_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_832_6781DFB0579D0A23_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_832_6781DFB0579D0A23_METHOD_2_OFFSET))(a1);
		}

	};
