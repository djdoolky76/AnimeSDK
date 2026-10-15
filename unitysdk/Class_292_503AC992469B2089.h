#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_292_503AC992469B2089_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148BE100)
#define CLASS_292_503AC992469B2089_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148BDD00)
#define CLASS_292_503AC992469B2089_METHOD_OFFSET UNITYSDK_OFFSET(0x148BE350)

inline static constexpr unsigned int Class_292_503AC992469B2089_TypeDefinitionIndex = 50619;

	class Class_292_503AC992469B2089 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_292_503AC992469B2089_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_292_503AC992469B2089_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_292_503AC992469B2089_METHOD_2_OFFSET))(a1);
		}

	};
