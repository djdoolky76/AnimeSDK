#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_240_78C1F24FFDB7832A_METHOD_1_OFFSET UNITYSDK_OFFSET(0xEB74F10)
#define CLASS_240_78C1F24FFDB7832A_METHOD_2_OFFSET UNITYSDK_OFFSET(0xEB74AE0)
#define CLASS_240_78C1F24FFDB7832A_METHOD_OFFSET UNITYSDK_OFFSET(0xEB751A0)

inline static constexpr unsigned int Class_240_78C1F24FFDB7832A_TypeDefinitionIndex = 50551;

	class Class_240_78C1F24FFDB7832A : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_240_78C1F24FFDB7832A_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_240_78C1F24FFDB7832A_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_240_78C1F24FFDB7832A_METHOD_2_OFFSET))(a1);
		}

	};
