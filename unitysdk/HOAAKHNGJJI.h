#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOAAKHNGJJI_BCGMGCLBBHF_OFFSET UNITYSDK_OFFSET(0x15383B20)
#define HOAAKHNGJJI_BEIFLFIIAAJ_OFFSET UNITYSDK_OFFSET(0x15383BA0)
#define HOAAKHNGJJI_EPCNIBKKPOC_OFFSET UNITYSDK_OFFSET(0x15383BB0)
#define HOAAKHNGJJI_LBBNBOBELEF_OFFSET UNITYSDK_OFFSET(0x15383B90)
#define HOAAKHNGJJI_OKEAPJCBDKB_OFFSET UNITYSDK_OFFSET(0x15383B30)
#define HOAAKHNGJJI_PDAADHDFGKP_OFFSET UNITYSDK_OFFSET(0x15383B40)
#define HOAAKHNGJJI__CTOR_OFFSET UNITYSDK_OFFSET(0x15383B10)

inline static constexpr unsigned int HOAAKHNGJJI_TypeDefinitionIndex = 62348;

class HOAAKHNGJJI : public ::System::Object
{
public:
	::System::Boolean _AKJEPBDGPFG_k__BackingField; // 0x10
	::System::Boolean _ANKFLIDINID_k__BackingField; // 0x11
	::System::Byte _padding0[0x2];
	::System::Single KKJKPJEGKJC; // 0x14
	::System::Single _PKCAFMDLFDG_k__BackingField; // 0x18

	::System::Void _ctor(::System::Boolean NNMFMPBGFFB, ::System::Boolean NNIODGODLBN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOAAKHNGJJI__CTOR_OFFSET))(this, NNMFMPBGFFB, NNIODGODLBN);
	}

	::System::Void BCGMGCLBBHF(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOAAKHNGJJI_BCGMGCLBBHF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean OKEAPJCBDKB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAAKHNGJJI_OKEAPJCBDKB_OFFSET))(this);
	}

	::System::Single PDAADHDFGKP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAAKHNGJJI_PDAADHDFGKP_OFFSET))(this);
	}

	::System::Single LBBNBOBELEF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAAKHNGJJI_LBBNBOBELEF_OFFSET))(this);
	}

	::System::Boolean BEIFLFIIAAJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAAKHNGJJI_BEIFLFIIAAJ_OFFSET))(this);
	}

	::System::Void EPCNIBKKPOC(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOAAKHNGJJI_EPCNIBKKPOC_OFFSET))(this, EGEGIMGMJHN);
	}
};
