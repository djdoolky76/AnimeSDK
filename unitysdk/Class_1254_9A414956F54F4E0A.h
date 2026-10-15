#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1254_9A414956F54F4E0A_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A4D720)
#define CLASS_1254_9A414956F54F4E0A_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A4D320)
#define CLASS_1254_9A414956F54F4E0A_METHOD_OFFSET UNITYSDK_OFFSET(0x14A4D970)

inline static constexpr unsigned int Class_1254_9A414956F54F4E0A_TypeDefinitionIndex = 51589;

	class Class_1254_9A414956F54F4E0A : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1254_9A414956F54F4E0A_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1254_9A414956F54F4E0A_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1254_9A414956F54F4E0A_METHOD_2_OFFSET))(a1);
		}

	};
