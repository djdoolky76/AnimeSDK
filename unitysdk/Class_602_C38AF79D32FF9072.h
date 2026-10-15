#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_602_C38AF79D32FF9072_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1494AD80)
#define CLASS_602_C38AF79D32FF9072_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1494A980)
#define CLASS_602_C38AF79D32FF9072_METHOD_OFFSET UNITYSDK_OFFSET(0x1494AFD0)

inline static constexpr unsigned int Class_602_C38AF79D32FF9072_TypeDefinitionIndex = 50937;

	class Class_602_C38AF79D32FF9072 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_602_C38AF79D32FF9072_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_602_C38AF79D32FF9072_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_602_C38AF79D32FF9072_METHOD_2_OFFSET))(a1);
		}

	};
