#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_715_CD30530A5F138BE4_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15828FC0)
#define CLASS_715_CD30530A5F138BE4_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15828BC0)
#define CLASS_715_CD30530A5F138BE4_METHOD_OFFSET UNITYSDK_OFFSET(0x15829210)

inline static constexpr unsigned int Class_715_CD30530A5F138BE4_TypeDefinitionIndex = 52101;

	class Class_715_CD30530A5F138BE4 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_715_CD30530A5F138BE4_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_715_CD30530A5F138BE4_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_715_CD30530A5F138BE4_METHOD_2_OFFSET))(a1);
		}

	};
