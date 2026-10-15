#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1022_F5C348B8CE7197CA_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149F1780)
#define CLASS_1022_F5C348B8CE7197CA_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149F1380)
#define CLASS_1022_F5C348B8CE7197CA_METHOD_OFFSET UNITYSDK_OFFSET(0x149F19D0)

inline static constexpr unsigned int Class_1022_F5C348B8CE7197CA_TypeDefinitionIndex = 51357;

	class Class_1022_F5C348B8CE7197CA : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1022_F5C348B8CE7197CA_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1022_F5C348B8CE7197CA_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1022_F5C348B8CE7197CA_METHOD_2_OFFSET))(a1);
		}

	};
