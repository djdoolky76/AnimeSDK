#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_711_5A4D0C2D94FB145B_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14981BC0)
#define CLASS_711_5A4D0C2D94FB145B_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149817C0)
#define CLASS_711_5A4D0C2D94FB145B_METHOD_OFFSET UNITYSDK_OFFSET(0x14981E10)

inline static constexpr unsigned int Class_711_5A4D0C2D94FB145B_TypeDefinitionIndex = 51046;

	class Class_711_5A4D0C2D94FB145B : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_711_5A4D0C2D94FB145B_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_711_5A4D0C2D94FB145B_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_711_5A4D0C2D94FB145B_METHOD_2_OFFSET))(a1);
		}

	};
