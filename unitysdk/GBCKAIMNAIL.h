#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class DLLHOAFAMMD;

#define GBCKAIMNAIL_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0xBB7FDA0)
#define GBCKAIMNAIL_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xBB7FB90)
#define GBCKAIMNAIL_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xBB7FD20)
#define GBCKAIMNAIL_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0xBB7FDB0)
#define GBCKAIMNAIL_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xBB7FDC0)
#define GBCKAIMNAIL_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xBB7FC60)
#define GBCKAIMNAIL__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB7FBE0)
#define GBCKAIMNAIL__CTOR_OFFSET UNITYSDK_OFFSET(0xBB7FD00)

inline static constexpr unsigned int GBCKAIMNAIL_TypeDefinitionIndex = 55231;

class GBCKAIMNAIL : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x215; // 0x0
	::DLLHOAFAMMD* _FJAAAAACINE_k__BackingField; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBCKAIMNAIL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCKAIMNAIL__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCKAIMNAIL_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCKAIMNAIL_ONCLEAN_OFFSET))(this);
	}

	static ::GBCKAIMNAIL* JFDOOELFAOA()
	{
		return ((::GBCKAIMNAIL*(*)())((::PBYTE)hIl2Cpp + GBCKAIMNAIL_JFDOOELFAOA_OFFSET))();
	}

	::DLLHOAFAMMD* BLIOCCCNKDK()
	{
		return ((::DLLHOAFAMMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCKAIMNAIL_BLIOCCCNKDK_OFFSET))(this);
	}

	::System::Void JFNBOIBNHPA(::DLLHOAFAMMD* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DLLHOAFAMMD*))((::PBYTE)hIl2Cpp + GBCKAIMNAIL_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCKAIMNAIL_MEFBHFEOKGH_OFFSET))(this);
	}
};
