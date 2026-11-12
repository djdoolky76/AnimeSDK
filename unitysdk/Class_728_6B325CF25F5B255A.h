#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_728_6B325CF25F5B255A_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1582E280)
#define CLASS_728_6B325CF25F5B255A_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1582DE80)
#define CLASS_728_6B325CF25F5B255A_METHOD_OFFSET UNITYSDK_OFFSET(0x1582E4D0)

inline static constexpr unsigned int Class_728_6B325CF25F5B255A_TypeDefinitionIndex = 52114;

	class Class_728_6B325CF25F5B255A : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_728_6B325CF25F5B255A_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_728_6B325CF25F5B255A_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_728_6B325CF25F5B255A_METHOD_2_OFFSET))(a1);
		}

	};
