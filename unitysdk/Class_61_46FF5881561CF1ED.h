#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_61_46FF5881561CF1ED_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15AD8C90)
#define CLASS_61_46FF5881561CF1ED_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15AD8860)
#define CLASS_61_46FF5881561CF1ED_METHOD_OFFSET UNITYSDK_OFFSET(0x15AD8F20)

inline static constexpr unsigned int Class_61_46FF5881561CF1ED_TypeDefinitionIndex = 50362;

	class Class_61_46FF5881561CF1ED : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_61_46FF5881561CF1ED_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_61_46FF5881561CF1ED_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_61_46FF5881561CF1ED_METHOD_2_OFFSET))(a1);
		}

	};
