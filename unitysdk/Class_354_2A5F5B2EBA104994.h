#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_354_2A5F5B2EBA104994_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148D6A80)
#define CLASS_354_2A5F5B2EBA104994_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148D6680)
#define CLASS_354_2A5F5B2EBA104994_METHOD_OFFSET UNITYSDK_OFFSET(0x148D6CD0)

inline static constexpr unsigned int Class_354_2A5F5B2EBA104994_TypeDefinitionIndex = 50683;

	class Class_354_2A5F5B2EBA104994 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_354_2A5F5B2EBA104994_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_354_2A5F5B2EBA104994_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_354_2A5F5B2EBA104994_METHOD_2_OFFSET))(a1);
		}

	};
