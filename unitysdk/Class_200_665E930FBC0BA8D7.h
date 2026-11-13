#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_200_665E930FBC0BA8D7_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1A8BF190)
#define CLASS_200_665E930FBC0BA8D7_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1A8BED60)
#define CLASS_200_665E930FBC0BA8D7_METHOD_OFFSET UNITYSDK_OFFSET(0x1A8BF420)

inline static constexpr unsigned int Class_200_665E930FBC0BA8D7_TypeDefinitionIndex = 51552;

	class Class_200_665E930FBC0BA8D7 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_200_665E930FBC0BA8D7_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_200_665E930FBC0BA8D7_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_200_665E930FBC0BA8D7_METHOD_2_OFFSET))(a1);
		}

	};
