#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DKJPGJACALC_BKLKJOFCOBC_OFFSET UNITYSDK_OFFSET(0x132A0230)
#define DKJPGJACALC_BLGODAIJJOK_OFFSET UNITYSDK_OFFSET(0x132A0200)
#define DKJPGJACALC_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x132A0240)
#define DKJPGJACALC_LJLEEMAGNON_OFFSET UNITYSDK_OFFSET(0x132A0210)
#define DKJPGJACALC_MDMBBDIJNKC_OFFSET UNITYSDK_OFFSET(0x132A0220)
#define DKJPGJACALC_NGEJCOBOIOA_OFFSET UNITYSDK_OFFSET(0x132A01F0)
#define DKJPGJACALC_NLIDBONJPFC_OFFSET UNITYSDK_OFFSET(0x132A0280)
#define DKJPGJACALC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x132A00F0)
#define DKJPGJACALC__CTOR_OFFSET UNITYSDK_OFFSET(0x132A00E0)

inline static constexpr unsigned int DKJPGJACALC_TypeDefinitionIndex = 56481;

class DKJPGJACALC : public ::System::Object
{
public:
	::System::UInt32 _DKEMAFNMAHK_k__BackingField; // 0x10
	::System::Boolean _NEBJNAOBKKN_k__BackingField; // 0x14
	::System::Boolean _OKOCLGJNOEF_k__BackingField; // 0x15

	::System::Void _ctor(::System::UInt32 MDPGLDEFMJF, ::System::Boolean NKIGIEPAHNH, ::System::Boolean DBHHLBEHFLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DKJPGJACALC__CTOR_OFFSET))(this, MDPGLDEFMJF, NKIGIEPAHNH, DBHHLBEHFLI);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJPGJACALC_TOSTRING_OFFSET))(this);
	}

	::System::Void NGEJCOBOIOA(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DKJPGJACALC_NGEJCOBOIOA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BLGODAIJJOK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DKJPGJACALC_BLGODAIJJOK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 LJLEEMAGNON()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJPGJACALC_LJLEEMAGNON_OFFSET))(this);
	}

	::System::Boolean MDMBBDIJNKC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJPGJACALC_MDMBBDIJNKC_OFFSET))(this);
	}

	::System::Void BKLKJOFCOBC(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKJPGJACALC_BKLKJOFCOBC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJPGJACALC_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Boolean NLIDBONJPFC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJPGJACALC_NLIDBONJPFC_OFFSET))(this);
	}
};
