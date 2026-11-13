#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1251_1B6B525BC379086A_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BDD6E20)
#define CLASS_1251_1B6B525BC379086A_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BDD6A20)
#define CLASS_1251_1B6B525BC379086A_METHOD_OFFSET UNITYSDK_OFFSET(0x1BDD7070)

inline static constexpr unsigned int Class_1251_1B6B525BC379086A_TypeDefinitionIndex = 52637;

	class Class_1251_1B6B525BC379086A : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1251_1B6B525BC379086A_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1251_1B6B525BC379086A_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1251_1B6B525BC379086A_METHOD_2_OFFSET))(a1);
		}

	};
