#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_123_52A49F6C838B0975_METHOD_1_OFFSET UNITYSDK_OFFSET(0xCF03F70)
#define CLASS_123_52A49F6C838B0975_METHOD_2_OFFSET UNITYSDK_OFFSET(0xCF03B40)
#define CLASS_123_52A49F6C838B0975_METHOD_OFFSET UNITYSDK_OFFSET(0xCF04200)

	class Class_123_52A49F6C838B0975 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_123_52A49F6C838B0975_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_123_52A49F6C838B0975_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_123_52A49F6C838B0975_METHOD_2_OFFSET))(a1);
		}

	};
