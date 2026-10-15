#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_951_1A975294D8C8754A_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149E0E30)
#define CLASS_951_1A975294D8C8754A_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149E0A30)
#define CLASS_951_1A975294D8C8754A_METHOD_OFFSET UNITYSDK_OFFSET(0x149E1080)

	class Class_951_1A975294D8C8754A : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_951_1A975294D8C8754A_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_951_1A975294D8C8754A_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_951_1A975294D8C8754A_METHOD_2_OFFSET))(a1);
		}

	};
