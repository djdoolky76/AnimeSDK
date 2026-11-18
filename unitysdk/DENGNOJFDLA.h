#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/NEHONEPBLDM.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class EBEAAFHPBJG;
class FJIHJCPEMMN;
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define DENGNOJFDLA_AFAMABHDGMK_OFFSET UNITYSDK_OFFSET(0x149A14A0)
#define DENGNOJFDLA_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x149A14C0)
#define DENGNOJFDLA_DFIBDGKNBMP_OFFSET UNITYSDK_OFFSET(0x149A14E0)
#define DENGNOJFDLA_EJCBJBNINDL_OFFSET UNITYSDK_OFFSET(0x149A14D0)
#define DENGNOJFDLA_FONIBOPOFOB_OFFSET UNITYSDK_OFFSET(0x149A14F0)
#define DENGNOJFDLA_GEDEAKANAAB_OFFSET UNITYSDK_OFFSET(0x149A1590)
#define DENGNOJFDLA_JPDDOGCHFOF_OFFSET UNITYSDK_OFFSET(0x149A15A0)
#define DENGNOJFDLA_LNOLIPENODI_OFFSET UNITYSDK_OFFSET(0x149A1570)
#define DENGNOJFDLA_ONIJBGBCCNG_OFFSET UNITYSDK_OFFSET(0x149A1580)
#define DENGNOJFDLA__CTOR_OFFSET UNITYSDK_OFFSET(0x149A1410)

inline static constexpr unsigned int DENGNOJFDLA_TypeDefinitionIndex = 86026;

class DENGNOJFDLA : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowEntity* HPDIJCKCDLM; // 0x10
	::EBEAAFHPBJG* GPFPKBDAFEL; // 0x18
	::FJIHJCPEMMN* PLEJNGPGGGO; // 0x20
	::System::UInt64 _HECLOAGHAIJ_k__BackingField; // 0x28
	::System::Nullable_1<::System::Int32> NCEAEHKEPJN; // 0x30
	::NEHONEPBLDM _HMKBNOFNOCO_k__BackingField; // 0x38
	::MoleMole::HollowChessboard::HollowCell _BKFBGMCACHJ_k__BackingField; // 0x3C
	::System::Boolean HJKNDPOAHEE; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 _HBLEIHCPMMP_k__BackingField; // 0x4C
	::System::Int64 GBMANMNNENP; // 0x50

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowEntity* NCKMIGOHAGG, ::EBEAAFHPBJG* DMLJKKHOFEI, ::NEHONEPBLDM BMLBFOIJOOM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::EBEAAFHPBJG*, ::NEHONEPBLDM))((::PBYTE)hIl2Cpp + DENGNOJFDLA__CTOR_OFFSET))(this, NCKMIGOHAGG, DMLJKKHOFEI, BMLBFOIJOOM);
	}

	::MoleMole::HollowChessboard::HollowCell AFAMABHDGMK()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + DENGNOJFDLA_AFAMABHDGMK_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DENGNOJFDLA_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Void EJCBJBNINDL(::MoleMole::HollowChessboard::HollowCell EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + DENGNOJFDLA_EJCBJBNINDL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DFIBDGKNBMP(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DENGNOJFDLA_DFIBDGKNBMP_OFFSET))(this, EGEGIMGMJHN);
	}

	::FJIHJCPEMMN* FONIBOPOFOB()
	{
		return ((::FJIHJCPEMMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DENGNOJFDLA_FONIBOPOFOB_OFFSET))(this);
	}

	::System::Void LNOLIPENODI(::NEHONEPBLDM EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::NEHONEPBLDM))((::PBYTE)hIl2Cpp + DENGNOJFDLA_LNOLIPENODI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt64 ONIJBGBCCNG()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + DENGNOJFDLA_ONIJBGBCCNG_OFFSET))(this);
	}

	::NEHONEPBLDM GEDEAKANAAB()
	{
		return ((::NEHONEPBLDM(*)(::PVOID))((::PBYTE)hIl2Cpp + DENGNOJFDLA_GEDEAKANAAB_OFFSET))(this);
	}

	::System::Void JPDDOGCHFOF(::System::UInt64 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + DENGNOJFDLA_JPDDOGCHFOF_OFFSET))(this, EGEGIMGMJHN);
	}
};
