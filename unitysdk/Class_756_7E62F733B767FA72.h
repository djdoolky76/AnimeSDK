#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_756_7E62F733B767FA72_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14987E90)
#define CLASS_756_7E62F733B767FA72_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14987A90)
#define CLASS_756_7E62F733B767FA72_METHOD_OFFSET UNITYSDK_OFFSET(0x149880C0)

inline static constexpr unsigned int Class_756_7E62F733B767FA72_TypeDefinitionIndex = 51091;

	class Class_756_7E62F733B767FA72 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_756_7E62F733B767FA72_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_756_7E62F733B767FA72_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_756_7E62F733B767FA72_METHOD_2_OFFSET))(a1);
		}

	};
