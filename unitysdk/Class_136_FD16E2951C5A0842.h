#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_136_FD16E2951C5A0842_METHOD_1_OFFSET UNITYSDK_OFFSET(0xB5E2F30)
#define CLASS_136_FD16E2951C5A0842_METHOD_2_OFFSET UNITYSDK_OFFSET(0xB5E2B00)
#define CLASS_136_FD16E2951C5A0842_METHOD_OFFSET UNITYSDK_OFFSET(0xB5E31C0)

inline static constexpr unsigned int Class_136_FD16E2951C5A0842_TypeDefinitionIndex = 50437;

	class Class_136_FD16E2951C5A0842 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_136_FD16E2951C5A0842_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_136_FD16E2951C5A0842_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_136_FD16E2951C5A0842_METHOD_2_OFFSET))(a1);
		}

	};
