#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_310_CF3F3A064839840B_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15776830)
#define CLASS_310_CF3F3A064839840B_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15776430)
#define CLASS_310_CF3F3A064839840B_METHOD_OFFSET UNITYSDK_OFFSET(0x15776A80)

inline static constexpr unsigned int Class_310_CF3F3A064839840B_TypeDefinitionIndex = 51690;

	class Class_310_CF3F3A064839840B : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_310_CF3F3A064839840B_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_310_CF3F3A064839840B_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_310_CF3F3A064839840B_METHOD_2_OFFSET))(a1);
		}

	};
