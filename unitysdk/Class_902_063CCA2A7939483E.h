#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_902_063CCA2A7939483E_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149CD750)
#define CLASS_902_063CCA2A7939483E_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149CD350)
#define CLASS_902_063CCA2A7939483E_METHOD_OFFSET UNITYSDK_OFFSET(0x149CD9A0)

	class Class_902_063CCA2A7939483E : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_902_063CCA2A7939483E_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_902_063CCA2A7939483E_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_902_063CCA2A7939483E_METHOD_2_OFFSET))(a1);
		}

	};
