#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_500_8F544F4E84F6064F_METHOD_1_OFFSET UNITYSDK_OFFSET(0x157D2B60)
#define CLASS_500_8F544F4E84F6064F_METHOD_2_OFFSET UNITYSDK_OFFSET(0x157D2760)
#define CLASS_500_8F544F4E84F6064F_METHOD_OFFSET UNITYSDK_OFFSET(0x157D2DB0)

inline static constexpr unsigned int Class_500_8F544F4E84F6064F_TypeDefinitionIndex = 51885;

	class Class_500_8F544F4E84F6064F : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_500_8F544F4E84F6064F_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_500_8F544F4E84F6064F_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_500_8F544F4E84F6064F_METHOD_2_OFFSET))(a1);
		}

	};
