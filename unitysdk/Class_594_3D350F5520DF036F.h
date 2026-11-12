#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_594_3D350F5520DF036F_METHOD_1_OFFSET UNITYSDK_OFFSET(0x157F7A00)
#define CLASS_594_3D350F5520DF036F_METHOD_2_OFFSET UNITYSDK_OFFSET(0x157F7600)
#define CLASS_594_3D350F5520DF036F_METHOD_OFFSET UNITYSDK_OFFSET(0x157F7C50)

inline static constexpr unsigned int Class_594_3D350F5520DF036F_TypeDefinitionIndex = 51979;

	class Class_594_3D350F5520DF036F : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_594_3D350F5520DF036F_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_594_3D350F5520DF036F_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_594_3D350F5520DF036F_METHOD_2_OFFSET))(a1);
		}

	};
