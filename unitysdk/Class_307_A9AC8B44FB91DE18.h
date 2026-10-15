#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_307_A9AC8B44FB91DE18_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148CFA40)
#define CLASS_307_A9AC8B44FB91DE18_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148CF640)
#define CLASS_307_A9AC8B44FB91DE18_METHOD_OFFSET UNITYSDK_OFFSET(0x148CFC90)

inline static constexpr unsigned int Class_307_A9AC8B44FB91DE18_TypeDefinitionIndex = 50636;

	class Class_307_A9AC8B44FB91DE18 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_307_A9AC8B44FB91DE18_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_307_A9AC8B44FB91DE18_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_307_A9AC8B44FB91DE18_METHOD_2_OFFSET))(a1);
		}

	};
