#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ABJMPKENACD;

#define ABJMPKENACD_NAFAEPACGHK_AJPBIGBIAII_OFFSET UNITYSDK_OFFSET(0x126416D0)
#define ABJMPKENACD_NAFAEPACGHK_DODNFIDNCNM_OFFSET UNITYSDK_OFFSET(0x126416C0)
#define ABJMPKENACD_NAFAEPACGHK_IGBPKODGPOG_OFFSET UNITYSDK_OFFSET(0x126416E0)
#define ABJMPKENACD_NAFAEPACGHK_ODBBCKNCIBK_OFFSET UNITYSDK_OFFSET(0x126416B0)
#define ABJMPKENACD_NAFAEPACGHK__CTOR_OFFSET UNITYSDK_OFFSET(0x126416A0)

inline static constexpr unsigned int ABJMPKENACD_NAFAEPACGHK_TypeDefinitionIndex = 88618;

class ABJMPKENACD_NAFAEPACGHK : public ::System::Object
{
public:
	::ABJMPKENACD* KLHPEBKNIFB; // 0x10
	::System::Boolean DNGEPOAHIOJ; // 0x18
	::System::Boolean DKFIHOMIDPC; // 0x19
	::System::Boolean JIOAEJFDLBD; // 0x1A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_NAFAEPACGHK__CTOR_OFFSET))(this);
	}

	::System::Boolean ODBBCKNCIBK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_NAFAEPACGHK_ODBBCKNCIBK_OFFSET))(this);
	}

	::System::Void DODNFIDNCNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_NAFAEPACGHK_DODNFIDNCNM_OFFSET))(this);
	}

	::System::Boolean AJPBIGBIAII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_NAFAEPACGHK_AJPBIGBIAII_OFFSET))(this);
	}

	::System::Void IGBPKODGPOG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_NAFAEPACGHK_IGBPKODGPOG_OFFSET))(this);
	}
};
