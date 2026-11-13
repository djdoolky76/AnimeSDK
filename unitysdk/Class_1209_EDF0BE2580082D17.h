#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1209_EDF0BE2580082D17_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BDC6460)
#define CLASS_1209_EDF0BE2580082D17_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BDC6060)
#define CLASS_1209_EDF0BE2580082D17_METHOD_OFFSET UNITYSDK_OFFSET(0x1BDC6690)

inline static constexpr unsigned int Class_1209_EDF0BE2580082D17_TypeDefinitionIndex = 52595;

	class Class_1209_EDF0BE2580082D17 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1209_EDF0BE2580082D17_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1209_EDF0BE2580082D17_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1209_EDF0BE2580082D17_METHOD_2_OFFSET))(a1);
		}

	};
