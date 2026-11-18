#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MCFHEIFLHEN_IHOKLLDHGKB_OFFSET UNITYSDK_OFFSET(0x3CE9E0)
#define MCFHEIFLHEN_MDPBPBNMKJA_OFFSET UNITYSDK_OFFSET(0x359320)
#define MCFHEIFLHEN_NGKCMNGOHBG_OFFSET UNITYSDK_OFFSET(0x359150)
#define MCFHEIFLHEN_OMNKIBJCAAN_OFFSET UNITYSDK_OFFSET(0x52D8C0)
#define MCFHEIFLHEN__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int MCFHEIFLHEN_TypeDefinitionIndex = 87490;

struct alignas(4) MCFHEIFLHEN
{
	::System::Int32 _LECPDNBPLPO_k__BackingField; // 0x10
	::System::Int32 _JGKMJIIFBED_k__BackingField; // 0x14

	::System::Void _ctor(::System::Int32 PKMFBJMJCOO, ::System::Int32 CJPLACFCFBP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MCFHEIFLHEN__CTOR_OFFSET))(this, PKMFBJMJCOO, CJPLACFCFBP);
	}

	::System::Void NGKCMNGOHBG(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MCFHEIFLHEN_NGKCMNGOHBG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 IHOKLLDHGKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFHEIFLHEN_IHOKLLDHGKB_OFFSET))(this);
	}

	::System::Void OMNKIBJCAAN(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MCFHEIFLHEN_OMNKIBJCAAN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MDPBPBNMKJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFHEIFLHEN_MDPBPBNMKJA_OFFSET))(this);
	}
};
