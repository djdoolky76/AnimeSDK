#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1007_97B1B85684D9E681_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1589CCB0)
#define CLASS_1007_97B1B85684D9E681_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1589C8B0)
#define CLASS_1007_97B1B85684D9E681_METHOD_OFFSET UNITYSDK_OFFSET(0x1589CF00)

inline static constexpr unsigned int Class_1007_97B1B85684D9E681_TypeDefinitionIndex = 52393;

	class Class_1007_97B1B85684D9E681 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1007_97B1B85684D9E681_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1007_97B1B85684D9E681_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1007_97B1B85684D9E681_METHOD_2_OFFSET))(a1);
		}

	};
