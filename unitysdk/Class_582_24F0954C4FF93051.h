#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_582_24F0954C4FF93051_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14941F80)
#define CLASS_582_24F0954C4FF93051_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14941B80)
#define CLASS_582_24F0954C4FF93051_METHOD_OFFSET UNITYSDK_OFFSET(0x149421D0)

inline static constexpr unsigned int Class_582_24F0954C4FF93051_TypeDefinitionIndex = 50916;

	class Class_582_24F0954C4FF93051 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_582_24F0954C4FF93051_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_582_24F0954C4FF93051_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_582_24F0954C4FF93051_METHOD_2_OFFSET))(a1);
		}

	};
