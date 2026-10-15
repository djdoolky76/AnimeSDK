#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_581_A86A53EBA858DB76_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14941920)
#define CLASS_581_A86A53EBA858DB76_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14941520)
#define CLASS_581_A86A53EBA858DB76_METHOD_OFFSET UNITYSDK_OFFSET(0x14941B70)

inline static constexpr unsigned int Class_581_A86A53EBA858DB76_TypeDefinitionIndex = 50915;

	class Class_581_A86A53EBA858DB76 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_581_A86A53EBA858DB76_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_581_A86A53EBA858DB76_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_581_A86A53EBA858DB76_METHOD_2_OFFSET))(a1);
		}

	};
