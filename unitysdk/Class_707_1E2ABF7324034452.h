#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_707_1E2ABF7324034452_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14974860)
#define CLASS_707_1E2ABF7324034452_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14974460)
#define CLASS_707_1E2ABF7324034452_METHOD_OFFSET UNITYSDK_OFFSET(0x14974AB0)

inline static constexpr unsigned int Class_707_1E2ABF7324034452_TypeDefinitionIndex = 51042;

	class Class_707_1E2ABF7324034452 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_707_1E2ABF7324034452_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_707_1E2ABF7324034452_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_707_1E2ABF7324034452_METHOD_2_OFFSET))(a1);
		}

	};
