#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_737_F4666D664DC3C725_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15831B70)
#define CLASS_737_F4666D664DC3C725_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15831770)
#define CLASS_737_F4666D664DC3C725_METHOD_OFFSET UNITYSDK_OFFSET(0x15831DA0)

inline static constexpr unsigned int Class_737_F4666D664DC3C725_TypeDefinitionIndex = 52123;

	class Class_737_F4666D664DC3C725 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_737_F4666D664DC3C725_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_737_F4666D664DC3C725_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_737_F4666D664DC3C725_METHOD_2_OFFSET))(a1);
		}

	};
