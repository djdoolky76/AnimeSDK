#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_304_89650BA88104F926_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15774210)
#define CLASS_304_89650BA88104F926_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15773E10)
#define CLASS_304_89650BA88104F926_METHOD_OFFSET UNITYSDK_OFFSET(0x15774460)

inline static constexpr unsigned int Class_304_89650BA88104F926_TypeDefinitionIndex = 51684;

	class Class_304_89650BA88104F926 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_304_89650BA88104F926_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_304_89650BA88104F926_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_304_89650BA88104F926_METHOD_2_OFFSET))(a1);
		}

	};
