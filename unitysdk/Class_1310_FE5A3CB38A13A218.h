#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1310_FE5A3CB38A13A218_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1596E960)
#define CLASS_1310_FE5A3CB38A13A218_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1596E560)
#define CLASS_1310_FE5A3CB38A13A218_METHOD_OFFSET UNITYSDK_OFFSET(0x1596EB90)

inline static constexpr unsigned int Class_1310_FE5A3CB38A13A218_TypeDefinitionIndex = 52696;

	class Class_1310_FE5A3CB38A13A218 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1310_FE5A3CB38A13A218_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1310_FE5A3CB38A13A218_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1310_FE5A3CB38A13A218_METHOD_2_OFFSET))(a1);
		}

	};
