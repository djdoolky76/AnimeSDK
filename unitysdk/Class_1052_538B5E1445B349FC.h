#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1052_538B5E1445B349FC_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A09060)
#define CLASS_1052_538B5E1445B349FC_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A08C60)
#define CLASS_1052_538B5E1445B349FC_METHOD_OFFSET UNITYSDK_OFFSET(0x14A092B0)

inline static constexpr unsigned int Class_1052_538B5E1445B349FC_TypeDefinitionIndex = 51387;

	class Class_1052_538B5E1445B349FC : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1052_538B5E1445B349FC_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1052_538B5E1445B349FC_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1052_538B5E1445B349FC_METHOD_2_OFFSET))(a1);
		}

	};
