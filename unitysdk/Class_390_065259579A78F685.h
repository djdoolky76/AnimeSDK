#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_390_065259579A78F685_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15796470)
#define CLASS_390_065259579A78F685_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15796070)
#define CLASS_390_065259579A78F685_METHOD_OFFSET UNITYSDK_OFFSET(0x157966C0)

inline static constexpr unsigned int Class_390_065259579A78F685_TypeDefinitionIndex = 51770;

	class Class_390_065259579A78F685 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_390_065259579A78F685_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_390_065259579A78F685_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_390_065259579A78F685_METHOD_2_OFFSET))(a1);
		}

	};
