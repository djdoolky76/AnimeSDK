#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_455_0C314F4BAC56E696_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148FED00)
#define CLASS_455_0C314F4BAC56E696_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148FE900)
#define CLASS_455_0C314F4BAC56E696_METHOD_OFFSET UNITYSDK_OFFSET(0x148FEF50)

inline static constexpr unsigned int Class_455_0C314F4BAC56E696_TypeDefinitionIndex = 50784;

	class Class_455_0C314F4BAC56E696 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_455_0C314F4BAC56E696_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_455_0C314F4BAC56E696_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_455_0C314F4BAC56E696_METHOD_2_OFFSET))(a1);
		}

	};
