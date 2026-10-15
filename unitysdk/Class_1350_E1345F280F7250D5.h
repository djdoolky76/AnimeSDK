#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1350_E1345F280F7250D5_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14AE27D0)
#define CLASS_1350_E1345F280F7250D5_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14AE23D0)
#define CLASS_1350_E1345F280F7250D5_METHOD_OFFSET UNITYSDK_OFFSET(0x14AE2A00)

inline static constexpr unsigned int Class_1350_E1345F280F7250D5_TypeDefinitionIndex = 51688;

	class Class_1350_E1345F280F7250D5 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1350_E1345F280F7250D5_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1350_E1345F280F7250D5_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1350_E1345F280F7250D5_METHOD_2_OFFSET))(a1);
		}

	};
