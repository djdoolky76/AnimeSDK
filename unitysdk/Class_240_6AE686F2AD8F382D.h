#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_240_6AE686F2AD8F382D_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1A5FAAB0)
#define CLASS_240_6AE686F2AD8F382D_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1A5FA680)
#define CLASS_240_6AE686F2AD8F382D_METHOD_OFFSET UNITYSDK_OFFSET(0x1A5FAD20)

inline static constexpr unsigned int Class_240_6AE686F2AD8F382D_TypeDefinitionIndex = 51601;

	class Class_240_6AE686F2AD8F382D : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_240_6AE686F2AD8F382D_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_240_6AE686F2AD8F382D_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_240_6AE686F2AD8F382D_METHOD_2_OFFSET))(a1);
		}

	};
