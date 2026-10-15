#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_340_B3F3C52F151D58CB_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148DCB40)
#define CLASS_340_B3F3C52F151D58CB_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148DC740)
#define CLASS_340_B3F3C52F151D58CB_METHOD_OFFSET UNITYSDK_OFFSET(0x148DCD90)

inline static constexpr unsigned int Class_340_B3F3C52F151D58CB_TypeDefinitionIndex = 50669;

	class Class_340_B3F3C52F151D58CB : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_340_B3F3C52F151D58CB_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_340_B3F3C52F151D58CB_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_340_B3F3C52F151D58CB_METHOD_2_OFFSET))(a1);
		}

	};
