#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_359_890A845650289B1E_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148D8A60)
#define CLASS_359_890A845650289B1E_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148D8660)
#define CLASS_359_890A845650289B1E_METHOD_OFFSET UNITYSDK_OFFSET(0x148D8CB0)

inline static constexpr unsigned int Class_359_890A845650289B1E_TypeDefinitionIndex = 50688;

	class Class_359_890A845650289B1E : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_359_890A845650289B1E_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_359_890A845650289B1E_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_359_890A845650289B1E_METHOD_2_OFFSET))(a1);
		}

	};
