#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_90_61C127017472597E_METHOD_1_OFFSET UNITYSDK_OFFSET(0x155D2B20)
#define CLASS_90_61C127017472597E_METHOD_2_OFFSET UNITYSDK_OFFSET(0x155D26F0)
#define CLASS_90_61C127017472597E_METHOD_OFFSET UNITYSDK_OFFSET(0x155D2DB0)

inline static constexpr unsigned int Class_90_61C127017472597E_TypeDefinitionIndex = 50391;

	class Class_90_61C127017472597E : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_90_61C127017472597E_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_90_61C127017472597E_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_90_61C127017472597E_METHOD_2_OFFSET))(a1);
		}

	};
