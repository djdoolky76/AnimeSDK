#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_130_A81FFD323EB8CC7F_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1661E4A0)
#define CLASS_130_A81FFD323EB8CC7F_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1661E070)
#define CLASS_130_A81FFD323EB8CC7F_METHOD_OFFSET UNITYSDK_OFFSET(0x1661E730)

inline static constexpr unsigned int Class_130_A81FFD323EB8CC7F_TypeDefinitionIndex = 50431;

	class Class_130_A81FFD323EB8CC7F : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_130_A81FFD323EB8CC7F_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_130_A81FFD323EB8CC7F_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_130_A81FFD323EB8CC7F_METHOD_2_OFFSET))(a1);
		}

	};
