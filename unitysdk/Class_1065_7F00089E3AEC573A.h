#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1065_7F00089E3AEC573A_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A02900)
#define CLASS_1065_7F00089E3AEC573A_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A02500)
#define CLASS_1065_7F00089E3AEC573A_METHOD_OFFSET UNITYSDK_OFFSET(0x14A02B50)

inline static constexpr unsigned int Class_1065_7F00089E3AEC573A_TypeDefinitionIndex = 51400;

	class Class_1065_7F00089E3AEC573A : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1065_7F00089E3AEC573A_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1065_7F00089E3AEC573A_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1065_7F00089E3AEC573A_METHOD_2_OFFSET))(a1);
		}

	};
