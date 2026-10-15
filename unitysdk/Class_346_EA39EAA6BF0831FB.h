#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_346_EA39EAA6BF0831FB_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148E0480)
#define CLASS_346_EA39EAA6BF0831FB_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148E0080)
#define CLASS_346_EA39EAA6BF0831FB_METHOD_OFFSET UNITYSDK_OFFSET(0x148E06D0)

inline static constexpr unsigned int Class_346_EA39EAA6BF0831FB_TypeDefinitionIndex = 50675;

	class Class_346_EA39EAA6BF0831FB : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_346_EA39EAA6BF0831FB_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_346_EA39EAA6BF0831FB_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_346_EA39EAA6BF0831FB_METHOD_2_OFFSET))(a1);
		}

	};
