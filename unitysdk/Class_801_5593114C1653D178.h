#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_801_5593114C1653D178_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BB667F0)
#define CLASS_801_5593114C1653D178_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BB663F0)
#define CLASS_801_5593114C1653D178_METHOD_OFFSET UNITYSDK_OFFSET(0x1BB66A20)

inline static constexpr unsigned int Class_801_5593114C1653D178_TypeDefinitionIndex = 52187;

	class Class_801_5593114C1653D178 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_801_5593114C1653D178_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_801_5593114C1653D178_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_801_5593114C1653D178_METHOD_2_OFFSET))(a1);
		}

	};
