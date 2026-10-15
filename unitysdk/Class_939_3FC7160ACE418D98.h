#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_939_3FC7160ACE418D98_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149D0810)
#define CLASS_939_3FC7160ACE418D98_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149D0410)
#define CLASS_939_3FC7160ACE418D98_METHOD_OFFSET UNITYSDK_OFFSET(0x149D0A60)

inline static constexpr unsigned int Class_939_3FC7160ACE418D98_TypeDefinitionIndex = 51274;

	class Class_939_3FC7160ACE418D98 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_939_3FC7160ACE418D98_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_939_3FC7160ACE418D98_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_939_3FC7160ACE418D98_METHOD_2_OFFSET))(a1);
		}

	};
