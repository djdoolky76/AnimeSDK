#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_312_9179178F6BE37498_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148C6040)
#define CLASS_312_9179178F6BE37498_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148C5C40)
#define CLASS_312_9179178F6BE37498_METHOD_OFFSET UNITYSDK_OFFSET(0x148C6270)

inline static constexpr unsigned int Class_312_9179178F6BE37498_TypeDefinitionIndex = 50641;

	class Class_312_9179178F6BE37498 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_312_9179178F6BE37498_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_312_9179178F6BE37498_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_312_9179178F6BE37498_METHOD_2_OFFSET))(a1);
		}

	};
