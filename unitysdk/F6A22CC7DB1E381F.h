#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define F6A22CC7DB1E381F_A6BC392163E47184_OFFSET UNITYSDK_OFFSET(0x1873310)
#define F6A22CC7DB1E381F_B08DA2811838DB59_OFFSET UNITYSDK_OFFSET(0x1873320)
#define F6A22CC7DB1E381F_F11FFC6AA9E22040_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F6A22CC7DB1E381F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16514A0)
#define F6A22CC7DB1E381F__CTOR_OFFSET UNITYSDK_OFFSET(0x2759260)

inline static constexpr unsigned int F6A22CC7DB1E381F_TypeDefinitionIndex = 21516;

class F6A22CC7DB1E381F : public ::System::Attribute
{
public:
	::System::String* A9DFDE835E8FE4EF; // 0x10
	::System::Boolean F038BD0714EA4BC7; // 0x18
	::System::Boolean B7AC8A701A9CFFA7; // 0x19

	::System::Void A6BC392163E47184(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + F6A22CC7DB1E381F_A6BC392163E47184_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void B08DA2811838DB59(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + F6A22CC7DB1E381F_B08DA2811838DB59_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor(::System::String* F79B4D487F303AB2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F6A22CC7DB1E381F__CTOR_OFFSET))(this, F79B4D487F303AB2);
	}

	::System::Void F11FFC6AA9E22040(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F6A22CC7DB1E381F_F11FFC6AA9E22040_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6A22CC7DB1E381F__CTOR_1_OFFSET))(this);
	}
};
