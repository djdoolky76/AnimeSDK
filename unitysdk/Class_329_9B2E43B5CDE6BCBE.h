#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_329_9B2E43B5CDE6BCBE_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148D85C0)
#define CLASS_329_9B2E43B5CDE6BCBE_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148D81C0)
#define CLASS_329_9B2E43B5CDE6BCBE_METHOD_OFFSET UNITYSDK_OFFSET(0x148D8810)

	class Class_329_9B2E43B5CDE6BCBE : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_329_9B2E43B5CDE6BCBE_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_329_9B2E43B5CDE6BCBE_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_329_9B2E43B5CDE6BCBE_METHOD_2_OFFSET))(a1);
		}

	};
