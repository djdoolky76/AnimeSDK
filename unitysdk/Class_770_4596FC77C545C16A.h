#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_770_4596FC77C545C16A_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14999110)
#define CLASS_770_4596FC77C545C16A_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14998D10)
#define CLASS_770_4596FC77C545C16A_METHOD_OFFSET UNITYSDK_OFFSET(0x14999340)

inline static constexpr unsigned int Class_770_4596FC77C545C16A_TypeDefinitionIndex = 51105;

	class Class_770_4596FC77C545C16A : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_770_4596FC77C545C16A_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_770_4596FC77C545C16A_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_770_4596FC77C545C16A_METHOD_2_OFFSET))(a1);
		}

	};
