#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_44_5ACADDB4E3282961_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15830C90)
#define CLASS_44_5ACADDB4E3282961_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15830860)
#define CLASS_44_5ACADDB4E3282961_METHOD_OFFSET UNITYSDK_OFFSET(0x15830F00)

	class Class_44_5ACADDB4E3282961 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_44_5ACADDB4E3282961_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_44_5ACADDB4E3282961_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_44_5ACADDB4E3282961_METHOD_2_OFFSET))(a1);
		}

	};
