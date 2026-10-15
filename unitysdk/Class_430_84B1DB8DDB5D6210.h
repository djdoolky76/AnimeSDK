#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_430_84B1DB8DDB5D6210_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148F4E00)
#define CLASS_430_84B1DB8DDB5D6210_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148F4A00)
#define CLASS_430_84B1DB8DDB5D6210_METHOD_OFFSET UNITYSDK_OFFSET(0x148F5050)

inline static constexpr unsigned int Class_430_84B1DB8DDB5D6210_TypeDefinitionIndex = 50759;

	class Class_430_84B1DB8DDB5D6210 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_430_84B1DB8DDB5D6210_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_430_84B1DB8DDB5D6210_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_430_84B1DB8DDB5D6210_METHOD_2_OFFSET))(a1);
		}

	};
