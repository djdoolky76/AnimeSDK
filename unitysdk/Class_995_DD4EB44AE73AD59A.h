#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_995_DD4EB44AE73AD59A_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149E6C10)
#define CLASS_995_DD4EB44AE73AD59A_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149E6810)
#define CLASS_995_DD4EB44AE73AD59A_METHOD_OFFSET UNITYSDK_OFFSET(0x149E6E60)

inline static constexpr unsigned int Class_995_DD4EB44AE73AD59A_TypeDefinitionIndex = 51330;

	class Class_995_DD4EB44AE73AD59A : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_995_DD4EB44AE73AD59A_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_995_DD4EB44AE73AD59A_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_995_DD4EB44AE73AD59A_METHOD_2_OFFSET))(a1);
		}

	};
