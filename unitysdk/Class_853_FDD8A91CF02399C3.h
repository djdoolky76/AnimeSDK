#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_853_FDD8A91CF02399C3_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149BA010)
#define CLASS_853_FDD8A91CF02399C3_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149B9C10)
#define CLASS_853_FDD8A91CF02399C3_METHOD_OFFSET UNITYSDK_OFFSET(0x149BA260)

	class Class_853_FDD8A91CF02399C3 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_853_FDD8A91CF02399C3_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_853_FDD8A91CF02399C3_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_853_FDD8A91CF02399C3_METHOD_2_OFFSET))(a1);
		}

	};
