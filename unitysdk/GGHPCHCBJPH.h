#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class KKNFCPCJEKC;

#define GGHPCHCBJPH_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0x10EF1CF0)
#define GGHPCHCBJPH_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x10EF1A80)
#define GGHPCHCBJPH_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x10EF1D00)
#define GGHPCHCBJPH_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0x10EF1CE0)
#define GGHPCHCBJPH_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x10EF1C50)
#define GGHPCHCBJPH_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x10EF1B50)
#define GGHPCHCBJPH__CCTOR_OFFSET UNITYSDK_OFFSET(0x10EF1AD0)
#define GGHPCHCBJPH__CTOR_OFFSET UNITYSDK_OFFSET(0x10EF1B90)

inline static constexpr unsigned int GGHPCHCBJPH_TypeDefinitionIndex = 56089;

class GGHPCHCBJPH : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x202; // 0x0
	::KKNFCPCJEKC* _FJAAAAACINE_k__BackingField; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGHPCHCBJPH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHPCHCBJPH__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHPCHCBJPH_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHPCHCBJPH_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHPCHCBJPH_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void JFNBOIBNHPA(::KKNFCPCJEKC* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KKNFCPCJEKC*))((::PBYTE)hIl2Cpp + GGHPCHCBJPH_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}

	::KKNFCPCJEKC* BLIOCCCNKDK()
	{
		return ((::KKNFCPCJEKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHPCHCBJPH_BLIOCCCNKDK_OFFSET))(this);
	}

	static ::GGHPCHCBJPH* JFDOOELFAOA()
	{
		return ((::GGHPCHCBJPH*(*)())((::PBYTE)hIl2Cpp + GGHPCHCBJPH_JFDOOELFAOA_OFFSET))();
	}
};
