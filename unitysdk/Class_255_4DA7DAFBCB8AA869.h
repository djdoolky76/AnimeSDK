#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_255_4DA7DAFBCB8AA869_METHOD_1_OFFSET UNITYSDK_OFFSET(0x18FA91B0)
#define CLASS_255_4DA7DAFBCB8AA869_METHOD_2_OFFSET UNITYSDK_OFFSET(0x18FA8D80)
#define CLASS_255_4DA7DAFBCB8AA869_METHOD_OFFSET UNITYSDK_OFFSET(0x18FA9440)

inline static constexpr unsigned int Class_255_4DA7DAFBCB8AA869_TypeDefinitionIndex = 51619;

	class Class_255_4DA7DAFBCB8AA869 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_255_4DA7DAFBCB8AA869_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_255_4DA7DAFBCB8AA869_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_255_4DA7DAFBCB8AA869_METHOD_2_OFFSET))(a1);
		}

	};
