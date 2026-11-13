#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_113_FD16E2951C5A0842_METHOD_1_OFFSET UNITYSDK_OFFSET(0x17BF9E80)
#define CLASS_113_FD16E2951C5A0842_METHOD_2_OFFSET UNITYSDK_OFFSET(0x17BF9A50)
#define CLASS_113_FD16E2951C5A0842_METHOD_OFFSET UNITYSDK_OFFSET(0x17BFA110)

inline static constexpr unsigned int Class_113_FD16E2951C5A0842_TypeDefinitionIndex = 51465;

	class Class_113_FD16E2951C5A0842 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_113_FD16E2951C5A0842_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_113_FD16E2951C5A0842_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_113_FD16E2951C5A0842_METHOD_2_OFFSET))(a1);
		}

	};
