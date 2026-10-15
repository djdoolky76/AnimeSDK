#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_812_6064DF9F85EAD0AC_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149A9B10)
#define CLASS_812_6064DF9F85EAD0AC_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149A9710)
#define CLASS_812_6064DF9F85EAD0AC_METHOD_OFFSET UNITYSDK_OFFSET(0x149A9D60)

	class Class_812_6064DF9F85EAD0AC : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_812_6064DF9F85EAD0AC_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_812_6064DF9F85EAD0AC_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_812_6064DF9F85EAD0AC_METHOD_2_OFFSET))(a1);
		}

	};
