#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_146_4B46494F7683DE05_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1A763080)
#define CLASS_146_4B46494F7683DE05_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1A762C50)
#define CLASS_146_4B46494F7683DE05_METHOD_OFFSET UNITYSDK_OFFSET(0x1A763310)

inline static constexpr unsigned int Class_146_4B46494F7683DE05_TypeDefinitionIndex = 51498;

	class Class_146_4B46494F7683DE05 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_146_4B46494F7683DE05_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_146_4B46494F7683DE05_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_146_4B46494F7683DE05_METHOD_2_OFFSET))(a1);
		}

	};
