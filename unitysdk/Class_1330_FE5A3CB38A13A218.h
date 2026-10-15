#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1330_FE5A3CB38A13A218_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A73640)
#define CLASS_1330_FE5A3CB38A13A218_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A73240)
#define CLASS_1330_FE5A3CB38A13A218_METHOD_OFFSET UNITYSDK_OFFSET(0x14A73870)

inline static constexpr unsigned int Class_1330_FE5A3CB38A13A218_TypeDefinitionIndex = 51668;

	class Class_1330_FE5A3CB38A13A218 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1330_FE5A3CB38A13A218_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1330_FE5A3CB38A13A218_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1330_FE5A3CB38A13A218_METHOD_2_OFFSET))(a1);
		}

	};
