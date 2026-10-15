#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_646_7B2B06CF40664D11_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14967E60)
#define CLASS_646_7B2B06CF40664D11_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14967A60)
#define CLASS_646_7B2B06CF40664D11_METHOD_OFFSET UNITYSDK_OFFSET(0x149680B0)

	class Class_646_7B2B06CF40664D11 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_646_7B2B06CF40664D11_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_646_7B2B06CF40664D11_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_646_7B2B06CF40664D11_METHOD_2_OFFSET))(a1);
		}

	};
