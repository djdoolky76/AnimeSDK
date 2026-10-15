#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_926_E5DE52CB22C14E93_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149D6FD0)
#define CLASS_926_E5DE52CB22C14E93_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149D6BD0)
#define CLASS_926_E5DE52CB22C14E93_METHOD_OFFSET UNITYSDK_OFFSET(0x149D7200)

	class Class_926_E5DE52CB22C14E93 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_926_E5DE52CB22C14E93_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_926_E5DE52CB22C14E93_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_926_E5DE52CB22C14E93_METHOD_2_OFFSET))(a1);
		}

	};
