#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_395_0D001F578E7DD452_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15798430)
#define CLASS_395_0D001F578E7DD452_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15798030)
#define CLASS_395_0D001F578E7DD452_METHOD_OFFSET UNITYSDK_OFFSET(0x15798680)

inline static constexpr unsigned int Class_395_0D001F578E7DD452_TypeDefinitionIndex = 51775;

	class Class_395_0D001F578E7DD452 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_395_0D001F578E7DD452_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_395_0D001F578E7DD452_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_395_0D001F578E7DD452_METHOD_2_OFFSET))(a1);
		}

	};
