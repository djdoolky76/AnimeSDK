#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class OGADKOBJHJL;

#define OIOMEBDDFOD_DHIABOCFOOE_OFFSET UNITYSDK_OFFSET(0xFD8A650)
#define OIOMEBDDFOD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xFD8A410)
#define OIOMEBDDFOD_IFNIEBBINHF_OFFSET UNITYSDK_OFFSET(0xFD8A640)
#define OIOMEBDDFOD_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xFD8A5C0)
#define OIOMEBDDFOD_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xFD8A530)
#define OIOMEBDDFOD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xFD8A4E0)
#define OIOMEBDDFOD__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD8A460)
#define OIOMEBDDFOD__CTOR_OFFSET UNITYSDK_OFFSET(0xFD8A520)

inline static constexpr unsigned int OIOMEBDDFOD_TypeDefinitionIndex = 80491;

class OIOMEBDDFOD : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x23D; // 0x0
	::OGADKOBJHJL* _NPGGFNBMFAL_k__BackingField; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIOMEBDDFOD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOMEBDDFOD__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOMEBDDFOD_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOMEBDDFOD_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOMEBDDFOD_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::OIOMEBDDFOD* JFDOOELFAOA()
	{
		return ((::OIOMEBDDFOD*(*)())((::PBYTE)hIl2Cpp + OIOMEBDDFOD_JFDOOELFAOA_OFFSET))();
	}

	::System::Void IFNIEBBINHF(::OGADKOBJHJL* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::OGADKOBJHJL*))((::PBYTE)hIl2Cpp + OIOMEBDDFOD_IFNIEBBINHF_OFFSET))(this, EGEGIMGMJHN);
	}

	::OGADKOBJHJL* DHIABOCFOOE()
	{
		return ((::OGADKOBJHJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOMEBDDFOD_DHIABOCFOOE_OFFSET))(this);
	}
};
