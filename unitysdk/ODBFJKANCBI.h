#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Battle/InspireZoneOperationType.h"

#define ODBFJKANCBI_AHKEKFABLMG_OFFSET UNITYSDK_OFFSET(0xB30F520)
#define ODBFJKANCBI_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xB30F620)
#define ODBFJKANCBI_EHEOKNPLNJC_OFFSET UNITYSDK_OFFSET(0xB30F510)
#define ODBFJKANCBI_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xB30F360)
#define ODBFJKANCBI_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xB30F690)
#define ODBFJKANCBI_JLKDNKLDDOE_OFFSET UNITYSDK_OFFSET(0xB30F450)
#define ODBFJKANCBI_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xB30F590)
#define ODBFJKANCBI_NNJHNGKIMEC_OFFSET UNITYSDK_OFFSET(0xB30F500)
#define ODBFJKANCBI_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xB30F2F0)
#define ODBFJKANCBI__CCTOR_OFFSET UNITYSDK_OFFSET(0xB30F3B0)
#define ODBFJKANCBI__CTOR_OFFSET UNITYSDK_OFFSET(0xB30F430)

inline static constexpr unsigned int ODBFJKANCBI_TypeDefinitionIndex = 58587;

class ODBFJKANCBI : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x7C; // 0x0
	::MoleMole::Battle::InspireZoneOperationType NKCABEGNGMF; // 0x48
	::System::Boolean GFIFGFNNPCL; // 0x4C
	::System::Byte _padding0[0x3];
	::System::Int32 AFNILNBJJKD; // 0x50
	::System::Single OOCPIKODCJH; // 0x54
	::System::Single HIKAPBJBCEE; // 0x58
	::System::Single AHHNIMLKAGG; // 0x5C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODBFJKANCBI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBFJKANCBI__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBFJKANCBI_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBFJKANCBI_GETCLASSID_OFFSET))(this);
	}

	::System::Void JLKDNKLDDOE(::MoleMole::Battle::InspireZoneOperationType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::InspireZoneOperationType))((::PBYTE)hIl2Cpp + ODBFJKANCBI_JLKDNKLDDOE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 NNJHNGKIMEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBFJKANCBI_NNJHNGKIMEC_OFFSET))(this);
	}

	::MoleMole::Battle::InspireZoneOperationType EHEOKNPLNJC()
	{
		return ((::MoleMole::Battle::InspireZoneOperationType(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBFJKANCBI_EHEOKNPLNJC_OFFSET))(this);
	}

	::System::Void AHKEKFABLMG(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODBFJKANCBI_AHKEKFABLMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBFJKANCBI_MEFBHFEOKGH_OFFSET))(this);
	}

	::ODBFJKANCBI* BBOMJDBNHIC()
	{
		return ((::ODBFJKANCBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBFJKANCBI_BBOMJDBNHIC_OFFSET))(this);
	}

	static ::ODBFJKANCBI* JFDOOELFAOA()
	{
		return ((::ODBFJKANCBI*(*)())((::PBYTE)hIl2Cpp + ODBFJKANCBI_JFDOOELFAOA_OFFSET))();
	}
};
