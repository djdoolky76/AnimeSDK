#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1122_FF68C5A6CFE13F95_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A192C0)
#define CLASS_1122_FF68C5A6CFE13F95_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A18EC0)
#define CLASS_1122_FF68C5A6CFE13F95_METHOD_OFFSET UNITYSDK_OFFSET(0x14A19510)

inline static constexpr unsigned int Class_1122_FF68C5A6CFE13F95_TypeDefinitionIndex = 51457;

	class Class_1122_FF68C5A6CFE13F95 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1122_FF68C5A6CFE13F95_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1122_FF68C5A6CFE13F95_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1122_FF68C5A6CFE13F95_METHOD_2_OFFSET))(a1);
		}

	};
