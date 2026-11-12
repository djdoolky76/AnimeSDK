#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1155_FABF785A0FA89CD9_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1592F3C0)
#define CLASS_1155_FABF785A0FA89CD9_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1592EFC0)
#define CLASS_1155_FABF785A0FA89CD9_METHOD_OFFSET UNITYSDK_OFFSET(0x1592F610)

inline static constexpr unsigned int Class_1155_FABF785A0FA89CD9_TypeDefinitionIndex = 52541;

	class Class_1155_FABF785A0FA89CD9 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1155_FABF785A0FA89CD9_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1155_FABF785A0FA89CD9_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1155_FABF785A0FA89CD9_METHOD_2_OFFSET))(a1);
		}

	};
