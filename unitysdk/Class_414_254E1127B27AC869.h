#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_414_254E1127B27AC869_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148EE820)
#define CLASS_414_254E1127B27AC869_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148EE420)
#define CLASS_414_254E1127B27AC869_METHOD_OFFSET UNITYSDK_OFFSET(0x148EEA70)

inline static constexpr unsigned int Class_414_254E1127B27AC869_TypeDefinitionIndex = 50743;

	class Class_414_254E1127B27AC869 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_414_254E1127B27AC869_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_414_254E1127B27AC869_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_414_254E1127B27AC869_METHOD_2_OFFSET))(a1);
		}

	};
