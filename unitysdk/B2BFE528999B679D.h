#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define B2BFE528999B679D_A4375E786AE840DB_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B2BFE528999B679D_EECBC147C7D7E6A6_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define B2BFE528999B679D__CTOR_OFFSET UNITYSDK_OFFSET(0x27592A0)

inline static constexpr unsigned int B2BFE528999B679D_TypeDefinitionIndex = 21587;

class B2BFE528999B679D : public ::System::Attribute
{
public:
	::System::String* E5802C77B5D2F5E4; // 0x10
	::System::String* F2F5C584EF5BE10B; // 0x18

	::System::Void A4375E786AE840DB(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B2BFE528999B679D_A4375E786AE840DB_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void EECBC147C7D7E6A6(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B2BFE528999B679D_EECBC147C7D7E6A6_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor(::System::String* B047DDB1C1190179, ::System::String* B6E6AC2BC7A941A4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + B2BFE528999B679D__CTOR_OFFSET))(this, B047DDB1C1190179, B6E6AC2BC7A941A4);
	}
};
