#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1326_DCD703047A39BF91_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BDFC740)
#define CLASS_1326_DCD703047A39BF91_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BDFC340)
#define CLASS_1326_DCD703047A39BF91_METHOD_OFFSET UNITYSDK_OFFSET(0x1BDFC990)

inline static constexpr unsigned int Class_1326_DCD703047A39BF91_TypeDefinitionIndex = 52715;

	class Class_1326_DCD703047A39BF91 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1326_DCD703047A39BF91_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1326_DCD703047A39BF91_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1326_DCD703047A39BF91_METHOD_2_OFFSET))(a1);
		}

	};
