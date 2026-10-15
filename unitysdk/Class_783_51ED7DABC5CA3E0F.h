#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_783_51ED7DABC5CA3E0F_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1499E350)
#define CLASS_783_51ED7DABC5CA3E0F_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1499DF50)
#define CLASS_783_51ED7DABC5CA3E0F_METHOD_OFFSET UNITYSDK_OFFSET(0x1499E5A0)

	class Class_783_51ED7DABC5CA3E0F : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_783_51ED7DABC5CA3E0F_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_783_51ED7DABC5CA3E0F_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_783_51ED7DABC5CA3E0F_METHOD_2_OFFSET))(a1);
		}

	};
