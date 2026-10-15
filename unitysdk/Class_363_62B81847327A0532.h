#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_363_62B81847327A0532_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148E5DC0)
#define CLASS_363_62B81847327A0532_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148E59C0)
#define CLASS_363_62B81847327A0532_METHOD_OFFSET UNITYSDK_OFFSET(0x148E5FF0)

	class Class_363_62B81847327A0532 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_363_62B81847327A0532_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_363_62B81847327A0532_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_363_62B81847327A0532_METHOD_2_OFFSET))(a1);
		}

	};
