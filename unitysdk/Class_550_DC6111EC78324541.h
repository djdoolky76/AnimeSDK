#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_550_DC6111EC78324541_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14935460)
#define CLASS_550_DC6111EC78324541_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14935060)
#define CLASS_550_DC6111EC78324541_METHOD_OFFSET UNITYSDK_OFFSET(0x149356B0)

inline static constexpr unsigned int Class_550_DC6111EC78324541_TypeDefinitionIndex = 50884;

	class Class_550_DC6111EC78324541 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_550_DC6111EC78324541_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_550_DC6111EC78324541_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_550_DC6111EC78324541_METHOD_2_OFFSET))(a1);
		}

	};
