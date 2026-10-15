#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_760_F4666D664DC3C725_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14995190)
#define CLASS_760_F4666D664DC3C725_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14994D90)
#define CLASS_760_F4666D664DC3C725_METHOD_OFFSET UNITYSDK_OFFSET(0x149953E0)

inline static constexpr unsigned int Class_760_F4666D664DC3C725_TypeDefinitionIndex = 51095;

	class Class_760_F4666D664DC3C725 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_760_F4666D664DC3C725_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_760_F4666D664DC3C725_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_760_F4666D664DC3C725_METHOD_2_OFFSET))(a1);
		}

	};
