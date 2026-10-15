#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_860_4E432B3BE1365621_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149BCCB0)
#define CLASS_860_4E432B3BE1365621_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149BC8B0)
#define CLASS_860_4E432B3BE1365621_METHOD_OFFSET UNITYSDK_OFFSET(0x149BCF00)

inline static constexpr unsigned int Class_860_4E432B3BE1365621_TypeDefinitionIndex = 51195;

	class Class_860_4E432B3BE1365621 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_860_4E432B3BE1365621_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_860_4E432B3BE1365621_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_860_4E432B3BE1365621_METHOD_2_OFFSET))(a1);
		}

	};
