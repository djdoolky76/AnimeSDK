#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1215_4342B419E44D03AF_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15947000)
#define CLASS_1215_4342B419E44D03AF_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15946C00)
#define CLASS_1215_4342B419E44D03AF_METHOD_OFFSET UNITYSDK_OFFSET(0x15947250)

inline static constexpr unsigned int Class_1215_4342B419E44D03AF_TypeDefinitionIndex = 52601;

	class Class_1215_4342B419E44D03AF : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1215_4342B419E44D03AF_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1215_4342B419E44D03AF_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1215_4342B419E44D03AF_METHOD_2_OFFSET))(a1);
		}

	};
