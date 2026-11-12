#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1003_258052D22AD3B52A_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1589B330)
#define CLASS_1003_258052D22AD3B52A_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1589AF30)
#define CLASS_1003_258052D22AD3B52A_METHOD_OFFSET UNITYSDK_OFFSET(0x1589B580)

inline static constexpr unsigned int Class_1003_258052D22AD3B52A_TypeDefinitionIndex = 52389;

	class Class_1003_258052D22AD3B52A : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1003_258052D22AD3B52A_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1003_258052D22AD3B52A_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1003_258052D22AD3B52A_METHOD_2_OFFSET))(a1);
		}

	};
