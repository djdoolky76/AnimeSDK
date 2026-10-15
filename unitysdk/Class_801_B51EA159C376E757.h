#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_801_B51EA159C376E757_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149A5510)
#define CLASS_801_B51EA159C376E757_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149A5110)
#define CLASS_801_B51EA159C376E757_METHOD_OFFSET UNITYSDK_OFFSET(0x149A5740)

inline static constexpr unsigned int Class_801_B51EA159C376E757_TypeDefinitionIndex = 51136;

	class Class_801_B51EA159C376E757 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_801_B51EA159C376E757_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_801_B51EA159C376E757_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_801_B51EA159C376E757_METHOD_2_OFFSET))(a1);
		}

	};
