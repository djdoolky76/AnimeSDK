#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LBPFAIFLOAN_IHOKLLDHGKB_OFFSET UNITYSDK_OFFSET(0x16358920)
#define LBPFAIFLOAN_MDPBPBNMKJA_OFFSET UNITYSDK_OFFSET(0x16358940)
#define LBPFAIFLOAN_NGKCMNGOHBG_OFFSET UNITYSDK_OFFSET(0x16358930)
#define LBPFAIFLOAN_OMNKIBJCAAN_OFFSET UNITYSDK_OFFSET(0x16358950)
#define LBPFAIFLOAN__CTOR_OFFSET UNITYSDK_OFFSET(0x16358910)

inline static constexpr unsigned int LBPFAIFLOAN_TypeDefinitionIndex = 74093;

class LBPFAIFLOAN : public ::System::Object
{
public:
	::System::Int32 _LECPDNBPLPO_k__BackingField; // 0x10
	::System::Int32 _JGKMJIIFBED_k__BackingField; // 0x14

	::System::Void _ctor(::System::Int32 PKMFBJMJCOO, ::System::Int32 CJPLACFCFBP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LBPFAIFLOAN__CTOR_OFFSET))(this, PKMFBJMJCOO, CJPLACFCFBP);
	}

	::System::Int32 IHOKLLDHGKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPFAIFLOAN_IHOKLLDHGKB_OFFSET))(this);
	}

	::System::Void NGKCMNGOHBG(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LBPFAIFLOAN_NGKCMNGOHBG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MDPBPBNMKJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPFAIFLOAN_MDPBPBNMKJA_OFFSET))(this);
	}

	::System::Void OMNKIBJCAAN(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LBPFAIFLOAN_OMNKIBJCAAN_OFFSET))(this, EGEGIMGMJHN);
	}
};
