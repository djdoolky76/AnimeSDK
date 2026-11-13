#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_83_721F49E40C7FA927_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14898920)
#define CLASS_83_721F49E40C7FA927_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148984F0)
#define CLASS_83_721F49E40C7FA927_METHOD_OFFSET UNITYSDK_OFFSET(0x14898BB0)

inline static constexpr unsigned int Class_83_721F49E40C7FA927_TypeDefinitionIndex = 51435;

	class Class_83_721F49E40C7FA927 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_83_721F49E40C7FA927_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_83_721F49E40C7FA927_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_83_721F49E40C7FA927_METHOD_2_OFFSET))(a1);
		}

	};
