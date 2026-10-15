#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_483_4C07053512EBF603_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14928460)
#define CLASS_483_4C07053512EBF603_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14928060)
#define CLASS_483_4C07053512EBF603_METHOD_OFFSET UNITYSDK_OFFSET(0x149286B0)

	class Class_483_4C07053512EBF603 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_483_4C07053512EBF603_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_483_4C07053512EBF603_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_483_4C07053512EBF603_METHOD_2_OFFSET))(a1);
		}

	};
