#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_789_8B94EEC864E93FB4_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14994F50)
#define CLASS_789_8B94EEC864E93FB4_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14994B50)
#define CLASS_789_8B94EEC864E93FB4_METHOD_OFFSET UNITYSDK_OFFSET(0x14995180)

inline static constexpr unsigned int Class_789_8B94EEC864E93FB4_TypeDefinitionIndex = 51124;

	class Class_789_8B94EEC864E93FB4 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_789_8B94EEC864E93FB4_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_789_8B94EEC864E93FB4_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_789_8B94EEC864E93FB4_METHOD_2_OFFSET))(a1);
		}

	};
