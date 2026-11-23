#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }

#define SYSTEM_ARRAY_F4E827A9D722F53C_A4CFF253D56ECB2D_OFFSET UNITYSDK_OFFSET(0x3BE5550)
#define SYSTEM_ARRAY_F4E827A9D722F53C_E6CAD58306FCDCB5_OFFSET UNITYSDK_OFFSET(0x3D14CF0)
#define SYSTEM_ARRAY_F4E827A9D722F53C_EB0354AC58FB077D_OFFSET UNITYSDK_OFFSET(0x3D14DB0)
#define SYSTEM_ARRAY_F4E827A9D722F53C_F0D2AFBD3CAE7F65_OFFSET UNITYSDK_OFFSET(0x27A9040)
#define SYSTEM_ARRAY_F4E827A9D722F53C__CTOR_OFFSET UNITYSDK_OFFSET(0x3D14D10)

namespace System
{
	inline static constexpr unsigned int Array_F4E827A9D722F53C_TypeDefinitionIndex = 10900;

	class Array_F4E827A9D722F53C : public ::System::Object
	{
	public:
		::System::Array* E9F0E24F3EFC2D07; // 0x10
		::System::Int32 A02AF894637B3DAE; // 0x18
		::System::Int32 E54BC8DEFF39D527; // 0x1C

		::System::Void _ctor(::System::Array* EDF8D5B13A3EE433)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_F4E827A9D722F53C__CTOR_OFFSET))(this, EDF8D5B13A3EE433);
		}

		::System::Boolean E6CAD58306FCDCB5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_F4E827A9D722F53C_E6CAD58306FCDCB5_OFFSET))(this);
		}

		::System::Void F0D2AFBD3CAE7F65()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_F4E827A9D722F53C_F0D2AFBD3CAE7F65_OFFSET))(this);
		}

		::System::Object* A4CFF253D56ECB2D()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_F4E827A9D722F53C_A4CFF253D56ECB2D_OFFSET))(this);
		}

		::System::Object* EB0354AC58FB077D()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_F4E827A9D722F53C_EB0354AC58FB077D_OFFSET))(this);
		}
	};
}
