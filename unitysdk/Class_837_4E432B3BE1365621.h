#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_837_4E432B3BE1365621_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BB74C10)
#define CLASS_837_4E432B3BE1365621_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BB74810)
#define CLASS_837_4E432B3BE1365621_METHOD_OFFSET UNITYSDK_OFFSET(0x1BB74E60)

inline static constexpr unsigned int Class_837_4E432B3BE1365621_TypeDefinitionIndex = 52223;

	class Class_837_4E432B3BE1365621 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_837_4E432B3BE1365621_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_837_4E432B3BE1365621_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_837_4E432B3BE1365621_METHOD_2_OFFSET))(a1);
		}

	};
