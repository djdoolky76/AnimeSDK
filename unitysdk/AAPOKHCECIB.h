#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AAPOKHCECIB_IHOKLLDHGKB_OFFSET UNITYSDK_OFFSET(0x164358F0)
#define AAPOKHCECIB_MDPBPBNMKJA_OFFSET UNITYSDK_OFFSET(0x16435900)
#define AAPOKHCECIB_NGKCMNGOHBG_OFFSET UNITYSDK_OFFSET(0x164358E0)
#define AAPOKHCECIB_OMNKIBJCAAN_OFFSET UNITYSDK_OFFSET(0x16435910)
#define AAPOKHCECIB__CTOR_OFFSET UNITYSDK_OFFSET(0x164358D0)

inline static constexpr unsigned int AAPOKHCECIB_TypeDefinitionIndex = 41627;

class AAPOKHCECIB : public ::System::Object
{
public:
	::System::Int32 _JGKMJIIFBED_k__BackingField; // 0x10
	::System::Int32 _LECPDNBPLPO_k__BackingField; // 0x14

	::System::Void _ctor(::System::Int32 CJPLACFCFBP, ::System::Int32 PKMFBJMJCOO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AAPOKHCECIB__CTOR_OFFSET))(this, CJPLACFCFBP, PKMFBJMJCOO);
	}

	::System::Void NGKCMNGOHBG(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AAPOKHCECIB_NGKCMNGOHBG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 IHOKLLDHGKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPOKHCECIB_IHOKLLDHGKB_OFFSET))(this);
	}

	::System::Int32 MDPBPBNMKJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPOKHCECIB_MDPBPBNMKJA_OFFSET))(this);
	}

	::System::Void OMNKIBJCAAN(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AAPOKHCECIB_OMNKIBJCAAN_OFFSET))(this, EGEGIMGMJHN);
	}
};
