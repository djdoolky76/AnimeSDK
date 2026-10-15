#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_915_F03B0335A60317B6_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149D29F0)
#define CLASS_915_F03B0335A60317B6_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149D25F0)
#define CLASS_915_F03B0335A60317B6_METHOD_OFFSET UNITYSDK_OFFSET(0x149D2C40)

inline static constexpr unsigned int Class_915_F03B0335A60317B6_TypeDefinitionIndex = 51250;

	class Class_915_F03B0335A60317B6 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_915_F03B0335A60317B6_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_915_F03B0335A60317B6_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_915_F03B0335A60317B6_METHOD_2_OFFSET))(a1);
		}

	};
