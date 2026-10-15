#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_440_9DDBF008764C1FA6_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148F8DA0)
#define CLASS_440_9DDBF008764C1FA6_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148F89A0)
#define CLASS_440_9DDBF008764C1FA6_METHOD_OFFSET UNITYSDK_OFFSET(0x148F8FD0)

inline static constexpr unsigned int Class_440_9DDBF008764C1FA6_TypeDefinitionIndex = 50769;

	class Class_440_9DDBF008764C1FA6 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_440_9DDBF008764C1FA6_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_440_9DDBF008764C1FA6_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_440_9DDBF008764C1FA6_METHOD_2_OFFSET))(a1);
		}

	};
