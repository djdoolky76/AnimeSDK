#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HIDPAPFBACC_PEMKCBJIKMO_LGMLFNANJCH_OFFSET UNITYSDK_OFFSET(0x1B7C4BF0)
#define HIDPAPFBACC_PEMKCBJIKMO_PNLGIIKJOAK_OFFSET UNITYSDK_OFFSET(0x1B7C4C00)
#define HIDPAPFBACC_PEMKCBJIKMO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7C4BE0)

inline static constexpr unsigned int HIDPAPFBACC_PEMKCBJIKMO_TypeDefinitionIndex = 12382;

class HIDPAPFBACC_PEMKCBJIKMO : public ::System::Object
{
public:
	::System::Int32 _MHFAHDJKBEE_k__BackingField; // 0x10
	::System::Int32 _NJDNMECCJHA_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDPAPFBACC_PEMKCBJIKMO__CTOR_OFFSET))(this);
	}

	::System::Void LGMLFNANJCH(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIDPAPFBACC_PEMKCBJIKMO_LGMLFNANJCH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PNLGIIKJOAK(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIDPAPFBACC_PEMKCBJIKMO_PNLGIIKJOAK_OFFSET))(this, EGEGIMGMJHN);
	}
};
