#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_264_482B0C3DF94F7047_METHOD_1_OFFSET UNITYSDK_OFFSET(0x16524860)
#define CLASS_264_482B0C3DF94F7047_METHOD_2_OFFSET UNITYSDK_OFFSET(0x16524430)
#define CLASS_264_482B0C3DF94F7047_METHOD_OFFSET UNITYSDK_OFFSET(0x16524AF0)

	class Class_264_482B0C3DF94F7047 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_264_482B0C3DF94F7047_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_264_482B0C3DF94F7047_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_264_482B0C3DF94F7047_METHOD_2_OFFSET))(a1);
		}

	};
