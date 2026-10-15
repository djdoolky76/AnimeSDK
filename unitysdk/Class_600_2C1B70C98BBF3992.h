#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_600_2C1B70C98BBF3992_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14955AA0)
#define CLASS_600_2C1B70C98BBF3992_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149556A0)
#define CLASS_600_2C1B70C98BBF3992_METHOD_OFFSET UNITYSDK_OFFSET(0x14955CF0)

	class Class_600_2C1B70C98BBF3992 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_600_2C1B70C98BBF3992_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_600_2C1B70C98BBF3992_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_600_2C1B70C98BBF3992_METHOD_2_OFFSET))(a1);
		}

	};
