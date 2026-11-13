#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_955_D419E330856FB530_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BE2ADE0)
#define CLASS_955_D419E330856FB530_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BE2A9E0)
#define CLASS_955_D419E330856FB530_METHOD_OFFSET UNITYSDK_OFFSET(0x1BE2B030)

inline static constexpr unsigned int Class_955_D419E330856FB530_TypeDefinitionIndex = 52341;

	class Class_955_D419E330856FB530 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_955_D419E330856FB530_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_955_D419E330856FB530_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_955_D419E330856FB530_METHOD_2_OFFSET))(a1);
		}

	};
