#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_663_CB4CBC54FD169ABE_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15814540)
#define CLASS_663_CB4CBC54FD169ABE_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15814140)
#define CLASS_663_CB4CBC54FD169ABE_METHOD_OFFSET UNITYSDK_OFFSET(0x15814790)

inline static constexpr unsigned int Class_663_CB4CBC54FD169ABE_TypeDefinitionIndex = 52049;

	class Class_663_CB4CBC54FD169ABE : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_663_CB4CBC54FD169ABE_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_663_CB4CBC54FD169ABE_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_663_CB4CBC54FD169ABE_METHOD_2_OFFSET))(a1);
		}

	};
