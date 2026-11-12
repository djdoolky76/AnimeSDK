#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_595_C610380EE54F69A0_METHOD_1_OFFSET UNITYSDK_OFFSET(0x157F8060)
#define CLASS_595_C610380EE54F69A0_METHOD_2_OFFSET UNITYSDK_OFFSET(0x157F7C60)
#define CLASS_595_C610380EE54F69A0_METHOD_OFFSET UNITYSDK_OFFSET(0x157F82B0)

inline static constexpr unsigned int Class_595_C610380EE54F69A0_TypeDefinitionIndex = 51980;

	class Class_595_C610380EE54F69A0 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_595_C610380EE54F69A0_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_595_C610380EE54F69A0_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_595_C610380EE54F69A0_METHOD_2_OFFSET))(a1);
		}

	};
