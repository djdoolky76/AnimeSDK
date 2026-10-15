#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_720_1CF5A94205646FCF_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14979A70)
#define CLASS_720_1CF5A94205646FCF_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14979670)
#define CLASS_720_1CF5A94205646FCF_METHOD_OFFSET UNITYSDK_OFFSET(0x14979CA0)

inline static constexpr unsigned int Class_720_1CF5A94205646FCF_TypeDefinitionIndex = 51055;

	class Class_720_1CF5A94205646FCF : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_720_1CF5A94205646FCF_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_720_1CF5A94205646FCF_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_720_1CF5A94205646FCF_METHOD_2_OFFSET))(a1);
		}

	};
