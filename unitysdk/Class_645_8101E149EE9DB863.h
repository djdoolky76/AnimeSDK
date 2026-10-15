#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_645_8101E149EE9DB863_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14967800)
#define CLASS_645_8101E149EE9DB863_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14967400)
#define CLASS_645_8101E149EE9DB863_METHOD_OFFSET UNITYSDK_OFFSET(0x14967A50)

inline static constexpr unsigned int Class_645_8101E149EE9DB863_TypeDefinitionIndex = 50980;

	class Class_645_8101E149EE9DB863 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_645_8101E149EE9DB863_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_645_8101E149EE9DB863_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_645_8101E149EE9DB863_METHOD_2_OFFSET))(a1);
		}

	};
