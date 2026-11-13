#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_490_5970EAC1ABFEFF9E_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1B537EA0)
#define CLASS_490_5970EAC1ABFEFF9E_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1B537AA0)
#define CLASS_490_5970EAC1ABFEFF9E_METHOD_OFFSET UNITYSDK_OFFSET(0x1B5380D0)

inline static constexpr unsigned int Class_490_5970EAC1ABFEFF9E_TypeDefinitionIndex = 51870;

	class Class_490_5970EAC1ABFEFF9E : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_490_5970EAC1ABFEFF9E_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_490_5970EAC1ABFEFF9E_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_490_5970EAC1ABFEFF9E_METHOD_2_OFFSET))(a1);
		}

	};
