#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDEFMHBFDKL;
namespace RPG::Client { class TimeSpaceCrisscrossLightsBehavior_LLOPNELAIGC; }

#define PIINMLJJIAF_CTOR_OFFSET UNITYSDK_OFFSET(0xCB914C0)
#define PIINMLJJIAF_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xCB914A0)
#define PIINMLJJIAF_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xCB91480)
#define PIINMLJJIAF_GET_X_OFFSET UNITYSDK_OFFSET(0xCB91440)
#define PIINMLJJIAF_GET_Y_OFFSET UNITYSDK_OFFSET(0xCB91460)
#define PIINMLJJIAF_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xCB914B0)
#define PIINMLJJIAF_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0xCB91490)
#define PIINMLJJIAF_SET_X_OFFSET UNITYSDK_OFFSET(0xCB91450)
#define PIINMLJJIAF_SET_Y_OFFSET UNITYSDK_OFFSET(0xCB91470)

inline static constexpr unsigned int PIINMLJJIAF_TypeDefinitionIndex = 72199;

	class PIINMLJJIAF : public ::System::Object
	{
	public:
		::IDEFMHBFDKL* JIOHGPCINFI; // 0x10
		::RPG::Client::TimeSpaceCrisscrossLightsBehavior_LLOPNELAIGC* GANKCDOEOCF; // 0x18
		::System::Single _X_k__BackingField; // 0x20
		::System::Single _Height_k__BackingField; // 0x24
		::System::Single _Y_k__BackingField; // 0x28
		::System::Boolean IJIJEFDMAND; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Single _Width_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIINMLJJIAF_CTOR_OFFSET))(this);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIINMLJJIAF_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIINMLJJIAF_SET_X_OFFSET))(this, a1);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIINMLJJIAF_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIINMLJJIAF_SET_Y_OFFSET))(this, a1);
		}

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIINMLJJIAF_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_Width(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIINMLJJIAF_SET_WIDTH_OFFSET))(this, a1);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIINMLJJIAF_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_Height(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIINMLJJIAF_SET_HEIGHT_OFFSET))(this, a1);
		}

	};
