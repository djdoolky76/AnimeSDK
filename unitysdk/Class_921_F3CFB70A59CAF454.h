#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_921_F3CFB70A59CAF454_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149D4FF0)
#define CLASS_921_F3CFB70A59CAF454_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149D4BF0)
#define CLASS_921_F3CFB70A59CAF454_METHOD_OFFSET UNITYSDK_OFFSET(0x149D5240)

	class Class_921_F3CFB70A59CAF454 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_921_F3CFB70A59CAF454_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_921_F3CFB70A59CAF454_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_921_F3CFB70A59CAF454_METHOD_2_OFFSET))(a1);
		}

	};
