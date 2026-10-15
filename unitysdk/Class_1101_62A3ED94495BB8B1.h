#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1101_62A3ED94495BB8B1_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A1C720)
#define CLASS_1101_62A3ED94495BB8B1_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A1C320)
#define CLASS_1101_62A3ED94495BB8B1_METHOD_OFFSET UNITYSDK_OFFSET(0x14A1C970)

inline static constexpr unsigned int Class_1101_62A3ED94495BB8B1_TypeDefinitionIndex = 51436;

	class Class_1101_62A3ED94495BB8B1 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1101_62A3ED94495BB8B1_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1101_62A3ED94495BB8B1_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1101_62A3ED94495BB8B1_METHOD_2_OFFSET))(a1);
		}

	};
