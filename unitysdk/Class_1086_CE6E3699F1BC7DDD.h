#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1086_CE6E3699F1BC7DDD_METHOD_1_OFFSET UNITYSDK_OFFSET(0x158BC300)
#define CLASS_1086_CE6E3699F1BC7DDD_METHOD_2_OFFSET UNITYSDK_OFFSET(0x158BBF00)
#define CLASS_1086_CE6E3699F1BC7DDD_METHOD_OFFSET UNITYSDK_OFFSET(0x158BC550)

inline static constexpr unsigned int Class_1086_CE6E3699F1BC7DDD_TypeDefinitionIndex = 52472;

	class Class_1086_CE6E3699F1BC7DDD : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1086_CE6E3699F1BC7DDD_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1086_CE6E3699F1BC7DDD_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1086_CE6E3699F1BC7DDD_METHOD_2_OFFSET))(a1);
		}

	};
