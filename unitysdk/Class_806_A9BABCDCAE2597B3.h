#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_806_A9BABCDCAE2597B3_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1584D030)
#define CLASS_806_A9BABCDCAE2597B3_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1584CC30)
#define CLASS_806_A9BABCDCAE2597B3_METHOD_OFFSET UNITYSDK_OFFSET(0x1584D280)

inline static constexpr unsigned int Class_806_A9BABCDCAE2597B3_TypeDefinitionIndex = 52192;

	class Class_806_A9BABCDCAE2597B3 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_806_A9BABCDCAE2597B3_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_806_A9BABCDCAE2597B3_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_806_A9BABCDCAE2597B3_METHOD_2_OFFSET))(a1);
		}

	};
