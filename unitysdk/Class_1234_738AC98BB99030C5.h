#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1234_738AC98BB99030C5_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A45840)
#define CLASS_1234_738AC98BB99030C5_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A45440)
#define CLASS_1234_738AC98BB99030C5_METHOD_OFFSET UNITYSDK_OFFSET(0x14A45A90)

inline static constexpr unsigned int Class_1234_738AC98BB99030C5_TypeDefinitionIndex = 51569;

	class Class_1234_738AC98BB99030C5 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1234_738AC98BB99030C5_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1234_738AC98BB99030C5_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1234_738AC98BB99030C5_METHOD_2_OFFSET))(a1);
		}

	};
