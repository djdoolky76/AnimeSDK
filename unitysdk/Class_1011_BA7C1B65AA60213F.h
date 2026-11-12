#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1011_BA7C1B65AA60213F_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1589E610)
#define CLASS_1011_BA7C1B65AA60213F_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1589E210)
#define CLASS_1011_BA7C1B65AA60213F_METHOD_OFFSET UNITYSDK_OFFSET(0x1589E860)

inline static constexpr unsigned int Class_1011_BA7C1B65AA60213F_TypeDefinitionIndex = 52397;

	class Class_1011_BA7C1B65AA60213F : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1011_BA7C1B65AA60213F_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1011_BA7C1B65AA60213F_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1011_BA7C1B65AA60213F_METHOD_2_OFFSET))(a1);
		}

	};
