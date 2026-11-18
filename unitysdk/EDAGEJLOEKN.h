#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class LPINFKKCING;

#define EDAGEJLOEKN_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0x10F1F550)
#define EDAGEJLOEKN_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x10F1F350)
#define EDAGEJLOEKN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x10F1F5F0)
#define EDAGEJLOEKN_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0x10F1F540)
#define EDAGEJLOEKN_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x10F1F560)
#define EDAGEJLOEKN_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x10F1F420)
#define EDAGEJLOEKN__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F1F3A0)
#define EDAGEJLOEKN__CTOR_OFFSET UNITYSDK_OFFSET(0x10F1F480)

inline static constexpr unsigned int EDAGEJLOEKN_TypeDefinitionIndex = 66498;

class EDAGEJLOEKN : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x218; // 0x0
	::LPINFKKCING* _FJAAAAACINE_k__BackingField; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDAGEJLOEKN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAGEJLOEKN__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAGEJLOEKN_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAGEJLOEKN_ONCLEAN_OFFSET))(this);
	}

	::System::Void JFNBOIBNHPA(::LPINFKKCING* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LPINFKKCING*))((::PBYTE)hIl2Cpp + EDAGEJLOEKN_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}

	::LPINFKKCING* BLIOCCCNKDK()
	{
		return ((::LPINFKKCING*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAGEJLOEKN_BLIOCCCNKDK_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAGEJLOEKN_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::EDAGEJLOEKN* JFDOOELFAOA()
	{
		return ((::EDAGEJLOEKN*(*)())((::PBYTE)hIl2Cpp + EDAGEJLOEKN_JFDOOELFAOA_OFFSET))();
	}
};
