#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1061_9E0F4A2842EBF781_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A0C9A0)
#define CLASS_1061_9E0F4A2842EBF781_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A0C5A0)
#define CLASS_1061_9E0F4A2842EBF781_METHOD_OFFSET UNITYSDK_OFFSET(0x14A0CBF0)

	class Class_1061_9E0F4A2842EBF781 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1061_9E0F4A2842EBF781_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1061_9E0F4A2842EBF781_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1061_9E0F4A2842EBF781_METHOD_2_OFFSET))(a1);
		}

	};
