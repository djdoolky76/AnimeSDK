#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/ODLGMOGLBJO.h"

#define BHIJBOPMGGM_BCBOBFLCKHG_OFFSET UNITYSDK_OFFSET(0x14ECE930)
#define BHIJBOPMGGM_DIBKBIFGLOC_OFFSET UNITYSDK_OFFSET(0x14ECE7F0)
#define BHIJBOPMGGM_ENOFBFILLME_OFFSET UNITYSDK_OFFSET(0x14ECE940)
#define BHIJBOPMGGM_FMIKHNCGHEI_OFFSET UNITYSDK_OFFSET(0x14ECE800)
#define BHIJBOPMGGM_GAPJBOFEHOK_OFFSET UNITYSDK_OFFSET(0x14ECE780)
#define BHIJBOPMGGM_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14ECE680)
#define BHIJBOPMGGM_JCPCNJKIJDB_OFFSET UNITYSDK_OFFSET(0x14ECE7E0)
#define BHIJBOPMGGM_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x14ECE8A0)
#define BHIJBOPMGGM_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x14ECE810)
#define BHIJBOPMGGM_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14ECE610)
#define BHIJBOPMGGM__CCTOR_OFFSET UNITYSDK_OFFSET(0x14ECE6D0)
#define BHIJBOPMGGM__CTOR_OFFSET UNITYSDK_OFFSET(0x14ECE750)

inline static constexpr unsigned int BHIJBOPMGGM_TypeDefinitionIndex = 57607;

class BHIJBOPMGGM : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x54; // 0x0
	::System::Int32 JDPALODFFJJ; // 0x48
	::System::Boolean FBILHHBPEHD; // 0x4C
	::System::Byte _padding0[0x3];
	::ODLGMOGLBJO MFFILDNPFJG; // 0x50
	::System::Single _BKBLPDLMFMO_k__BackingField; // 0x64
	::ODLGMOGLBJO GBKHDAPLHKG; // 0x68

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHIJBOPMGGM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIJBOPMGGM__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIJBOPMGGM_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIJBOPMGGM_GETCLASSID_OFFSET))(this);
	}

	::System::Void GAPJBOFEHOK(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BHIJBOPMGGM_GAPJBOFEHOK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 JCPCNJKIJDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIJBOPMGGM_JCPCNJKIJDB_OFFSET))(this);
	}

	::ODLGMOGLBJO& DIBKBIFGLOC()
	{
		return ((::ODLGMOGLBJO&(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIJBOPMGGM_DIBKBIFGLOC_OFFSET))(this);
	}

	::ODLGMOGLBJO& FMIKHNCGHEI()
	{
		return ((::ODLGMOGLBJO&(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIJBOPMGGM_FMIKHNCGHEI_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIJBOPMGGM_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::BHIJBOPMGGM* JFDOOELFAOA()
	{
		return ((::BHIJBOPMGGM*(*)())((::PBYTE)hIl2Cpp + BHIJBOPMGGM_JFDOOELFAOA_OFFSET))();
	}

	::System::Void BCBOBFLCKHG(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BHIJBOPMGGM_BCBOBFLCKHG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single ENOFBFILLME()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIJBOPMGGM_ENOFBFILLME_OFFSET))(this);
	}
};
