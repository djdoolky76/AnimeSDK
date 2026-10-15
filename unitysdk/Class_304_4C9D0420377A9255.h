#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_304_4C9D0420377A9255_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148CE740)
#define CLASS_304_4C9D0420377A9255_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148CE340)
#define CLASS_304_4C9D0420377A9255_METHOD_OFFSET UNITYSDK_OFFSET(0x148CE990)

	class Class_304_4C9D0420377A9255 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_304_4C9D0420377A9255_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_304_4C9D0420377A9255_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_304_4C9D0420377A9255_METHOD_2_OFFSET))(a1);
		}

	};
