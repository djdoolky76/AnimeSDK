#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_686_CB4CBC54FD169ABE_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14977CE0)
#define CLASS_686_CB4CBC54FD169ABE_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149778E0)
#define CLASS_686_CB4CBC54FD169ABE_METHOD_OFFSET UNITYSDK_OFFSET(0x14977F30)

	class Class_686_CB4CBC54FD169ABE : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_686_CB4CBC54FD169ABE_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_686_CB4CBC54FD169ABE_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_686_CB4CBC54FD169ABE_METHOD_2_OFFSET))(a1);
		}

	};
