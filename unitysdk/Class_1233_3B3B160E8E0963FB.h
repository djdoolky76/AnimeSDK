#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1233_3B3B160E8E0963FB_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1594E200)
#define CLASS_1233_3B3B160E8E0963FB_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1594DE00)
#define CLASS_1233_3B3B160E8E0963FB_METHOD_OFFSET UNITYSDK_OFFSET(0x1594E430)

inline static constexpr unsigned int Class_1233_3B3B160E8E0963FB_TypeDefinitionIndex = 52619;

	class Class_1233_3B3B160E8E0963FB : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1233_3B3B160E8E0963FB_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1233_3B3B160E8E0963FB_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1233_3B3B160E8E0963FB_METHOD_2_OFFSET))(a1);
		}

	};
