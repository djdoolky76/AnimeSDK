#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_331_2A5F5B2EBA104994_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1577ED50)
#define CLASS_331_2A5F5B2EBA104994_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1577E950)
#define CLASS_331_2A5F5B2EBA104994_METHOD_OFFSET UNITYSDK_OFFSET(0x1577EFA0)

inline static constexpr unsigned int Class_331_2A5F5B2EBA104994_TypeDefinitionIndex = 51711;

	class Class_331_2A5F5B2EBA104994 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_331_2A5F5B2EBA104994_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_331_2A5F5B2EBA104994_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_331_2A5F5B2EBA104994_METHOD_2_OFFSET))(a1);
		}

	};
