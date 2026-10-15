#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_302_F8370F475589A429_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148CDAA0)
#define CLASS_302_F8370F475589A429_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148CD6A0)
#define CLASS_302_F8370F475589A429_METHOD_OFFSET UNITYSDK_OFFSET(0x148CDCD0)

inline static constexpr unsigned int Class_302_F8370F475589A429_TypeDefinitionIndex = 50631;

	class Class_302_F8370F475589A429 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_302_F8370F475589A429_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_302_F8370F475589A429_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_302_F8370F475589A429_METHOD_2_OFFSET))(a1);
		}

	};
