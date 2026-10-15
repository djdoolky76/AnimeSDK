#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_978_D419E330856FB530_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149EB9F0)
#define CLASS_978_D419E330856FB530_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149EB5F0)
#define CLASS_978_D419E330856FB530_METHOD_OFFSET UNITYSDK_OFFSET(0x149EBC40)

inline static constexpr unsigned int Class_978_D419E330856FB530_TypeDefinitionIndex = 51313;

	class Class_978_D419E330856FB530 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_978_D419E330856FB530_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_978_D419E330856FB530_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_978_D419E330856FB530_METHOD_2_OFFSET))(a1);
		}

	};
