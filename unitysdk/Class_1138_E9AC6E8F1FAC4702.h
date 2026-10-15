#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1138_E9AC6E8F1FAC4702_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A2B200)
#define CLASS_1138_E9AC6E8F1FAC4702_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A2AE00)
#define CLASS_1138_E9AC6E8F1FAC4702_METHOD_OFFSET UNITYSDK_OFFSET(0x14A2B450)

inline static constexpr unsigned int Class_1138_E9AC6E8F1FAC4702_TypeDefinitionIndex = 51473;

	class Class_1138_E9AC6E8F1FAC4702 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1138_E9AC6E8F1FAC4702_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1138_E9AC6E8F1FAC4702_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1138_E9AC6E8F1FAC4702_METHOD_2_OFFSET))(a1);
		}

	};
