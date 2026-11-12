#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1012_5B81A49AFD893E35_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1589EC70)
#define CLASS_1012_5B81A49AFD893E35_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1589E870)
#define CLASS_1012_5B81A49AFD893E35_METHOD_OFFSET UNITYSDK_OFFSET(0x1589EEC0)

inline static constexpr unsigned int Class_1012_5B81A49AFD893E35_TypeDefinitionIndex = 52398;

	class Class_1012_5B81A49AFD893E35 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1012_5B81A49AFD893E35_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1012_5B81A49AFD893E35_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1012_5B81A49AFD893E35_METHOD_2_OFFSET))(a1);
		}

	};
