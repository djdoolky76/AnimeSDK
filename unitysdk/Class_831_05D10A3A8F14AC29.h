#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_831_05D10A3A8F14AC29_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149B1430)
#define CLASS_831_05D10A3A8F14AC29_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149B1030)
#define CLASS_831_05D10A3A8F14AC29_METHOD_OFFSET UNITYSDK_OFFSET(0x149B1680)

inline static constexpr unsigned int Class_831_05D10A3A8F14AC29_TypeDefinitionIndex = 51166;

	class Class_831_05D10A3A8F14AC29 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_831_05D10A3A8F14AC29_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_831_05D10A3A8F14AC29_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_831_05D10A3A8F14AC29_METHOD_2_OFFSET))(a1);
		}

	};
