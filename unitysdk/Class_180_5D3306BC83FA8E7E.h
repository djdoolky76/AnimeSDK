#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_180_5D3306BC83FA8E7E_METHOD_1_OFFSET UNITYSDK_OFFSET(0x18931CA0)
#define CLASS_180_5D3306BC83FA8E7E_METHOD_2_OFFSET UNITYSDK_OFFSET(0x18931870)
#define CLASS_180_5D3306BC83FA8E7E_METHOD_OFFSET UNITYSDK_OFFSET(0x18931F30)

inline static constexpr unsigned int Class_180_5D3306BC83FA8E7E_TypeDefinitionIndex = 51532;

	class Class_180_5D3306BC83FA8E7E : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_180_5D3306BC83FA8E7E_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_180_5D3306BC83FA8E7E_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_180_5D3306BC83FA8E7E_METHOD_2_OFFSET))(a1);
		}

	};
