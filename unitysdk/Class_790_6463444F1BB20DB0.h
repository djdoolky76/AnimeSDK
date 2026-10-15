#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_790_6463444F1BB20DB0_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149A0F70)
#define CLASS_790_6463444F1BB20DB0_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149A0B70)
#define CLASS_790_6463444F1BB20DB0_METHOD_OFFSET UNITYSDK_OFFSET(0x149A11C0)

	class Class_790_6463444F1BB20DB0 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_790_6463444F1BB20DB0_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_790_6463444F1BB20DB0_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_790_6463444F1BB20DB0_METHOD_2_OFFSET))(a1);
		}

	};
