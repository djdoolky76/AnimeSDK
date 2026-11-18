#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class BOIIFGLJIHD;

#define DOEKKCOHFPG_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0x1545DE00)
#define DOEKKCOHFPG_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1545DAA0)
#define DOEKKCOHFPG_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1545DC90)
#define DOEKKCOHFPG_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0x1545DDF0)
#define DOEKKCOHFPG_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1545DD60)
#define DOEKKCOHFPG_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1545DB70)
#define DOEKKCOHFPG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1545DAF0)
#define DOEKKCOHFPG__CTOR_OFFSET UNITYSDK_OFFSET(0x1545DBD0)

inline static constexpr unsigned int DOEKKCOHFPG_TypeDefinitionIndex = 45395;

class DOEKKCOHFPG : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x210; // 0x0
	::BOIIFGLJIHD* _FJAAAAACINE_k__BackingField; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOEKKCOHFPG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEKKCOHFPG__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEKKCOHFPG_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEKKCOHFPG_ONCLEAN_OFFSET))(this);
	}

	static ::DOEKKCOHFPG* JFDOOELFAOA()
	{
		return ((::DOEKKCOHFPG*(*)())((::PBYTE)hIl2Cpp + DOEKKCOHFPG_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEKKCOHFPG_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void JFNBOIBNHPA(::BOIIFGLJIHD* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::BOIIFGLJIHD*))((::PBYTE)hIl2Cpp + DOEKKCOHFPG_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}

	::BOIIFGLJIHD* BLIOCCCNKDK()
	{
		return ((::BOIIFGLJIHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEKKCOHFPG_BLIOCCCNKDK_OFFSET))(this);
	}
};
