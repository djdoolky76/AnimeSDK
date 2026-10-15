#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_576_DC084D0EB62CA0F4_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1494ACE0)
#define CLASS_576_DC084D0EB62CA0F4_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1494A8E0)
#define CLASS_576_DC084D0EB62CA0F4_METHOD_OFFSET UNITYSDK_OFFSET(0x1494AF10)

inline static constexpr unsigned int Class_576_DC084D0EB62CA0F4_TypeDefinitionIndex = 50910;

	class Class_576_DC084D0EB62CA0F4 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_576_DC084D0EB62CA0F4_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_576_DC084D0EB62CA0F4_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_576_DC084D0EB62CA0F4_METHOD_2_OFFSET))(a1);
		}

	};
