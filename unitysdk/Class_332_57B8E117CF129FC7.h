#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_332_57B8E117CF129FC7_METHOD_1_OFFSET UNITYSDK_OFFSET(0x17972E30)
#define CLASS_332_57B8E117CF129FC7_METHOD_2_OFFSET UNITYSDK_OFFSET(0x17972A30)
#define CLASS_332_57B8E117CF129FC7_METHOD_OFFSET UNITYSDK_OFFSET(0x17973080)

inline static constexpr unsigned int Class_332_57B8E117CF129FC7_TypeDefinitionIndex = 51712;

	class Class_332_57B8E117CF129FC7 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_332_57B8E117CF129FC7_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_332_57B8E117CF129FC7_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_332_57B8E117CF129FC7_METHOD_2_OFFSET))(a1);
		}

	};
