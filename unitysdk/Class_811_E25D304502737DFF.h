#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_811_E25D304502737DFF_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1499DAD0)
#define CLASS_811_E25D304502737DFF_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1499D6D0)
#define CLASS_811_E25D304502737DFF_METHOD_OFFSET UNITYSDK_OFFSET(0x1499DD20)

inline static constexpr unsigned int Class_811_E25D304502737DFF_TypeDefinitionIndex = 51146;

	class Class_811_E25D304502737DFF : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_811_E25D304502737DFF_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_811_E25D304502737DFF_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_811_E25D304502737DFF_METHOD_2_OFFSET))(a1);
		}

	};
