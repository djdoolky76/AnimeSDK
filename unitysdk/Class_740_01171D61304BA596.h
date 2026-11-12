#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_740_01171D61304BA596_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15832E30)
#define CLASS_740_01171D61304BA596_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15832A30)
#define CLASS_740_01171D61304BA596_METHOD_OFFSET UNITYSDK_OFFSET(0x15833060)

inline static constexpr unsigned int Class_740_01171D61304BA596_TypeDefinitionIndex = 52126;

	class Class_740_01171D61304BA596 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_740_01171D61304BA596_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_740_01171D61304BA596_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_740_01171D61304BA596_METHOD_2_OFFSET))(a1);
		}

	};
