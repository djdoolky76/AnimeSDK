#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_766_8B94EEC864E93FB4_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1583D290)
#define CLASS_766_8B94EEC864E93FB4_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1583CE90)
#define CLASS_766_8B94EEC864E93FB4_METHOD_OFFSET UNITYSDK_OFFSET(0x1583D4E0)

inline static constexpr unsigned int Class_766_8B94EEC864E93FB4_TypeDefinitionIndex = 52152;

	class Class_766_8B94EEC864E93FB4 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_766_8B94EEC864E93FB4_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_766_8B94EEC864E93FB4_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_766_8B94EEC864E93FB4_METHOD_2_OFFSET))(a1);
		}

	};
