#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class GLJPMOJJLKN;

#define CIKLIIGFHOI_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0x14962930)
#define CIKLIIGFHOI_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x149626A0)
#define CIKLIIGFHOI_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x14962940)
#define CIKLIIGFHOI_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0x14962920)
#define CIKLIIGFHOI_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x14962890)
#define CIKLIIGFHOI_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14962770)
#define CIKLIIGFHOI__CCTOR_OFFSET UNITYSDK_OFFSET(0x149626F0)
#define CIKLIIGFHOI__CTOR_OFFSET UNITYSDK_OFFSET(0x149627D0)

inline static constexpr unsigned int CIKLIIGFHOI_TypeDefinitionIndex = 64226;

class CIKLIIGFHOI : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x20A; // 0x0
	::GLJPMOJJLKN* _FJAAAAACINE_k__BackingField; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIKLIIGFHOI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKLIIGFHOI__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKLIIGFHOI_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKLIIGFHOI_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKLIIGFHOI_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void JFNBOIBNHPA(::GLJPMOJJLKN* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GLJPMOJJLKN*))((::PBYTE)hIl2Cpp + CIKLIIGFHOI_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}

	::GLJPMOJJLKN* BLIOCCCNKDK()
	{
		return ((::GLJPMOJJLKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKLIIGFHOI_BLIOCCCNKDK_OFFSET))(this);
	}

	static ::CIKLIIGFHOI* JFDOOELFAOA()
	{
		return ((::CIKLIIGFHOI*(*)())((::PBYTE)hIl2Cpp + CIKLIIGFHOI_JFDOOELFAOA_OFFSET))();
	}
};
