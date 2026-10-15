#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_162_03EBC75C17FA59F3_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15B93C90)
#define CLASS_162_03EBC75C17FA59F3_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15B93860)
#define CLASS_162_03EBC75C17FA59F3_METHOD_OFFSET UNITYSDK_OFFSET(0x15B93F20)

inline static constexpr unsigned int Class_162_03EBC75C17FA59F3_TypeDefinitionIndex = 50463;

	class Class_162_03EBC75C17FA59F3 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_162_03EBC75C17FA59F3_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_162_03EBC75C17FA59F3_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_162_03EBC75C17FA59F3_METHOD_2_OFFSET))(a1);
		}

	};
