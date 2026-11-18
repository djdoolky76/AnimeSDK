#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MFOOJKCBAFI.h"

class AIKGHHJKNCE;
namespace System { template <typename T1, typename T2> class Func_2; }

#define BAEEGIMDKED_HIADJABJGPB_OFFSET UNITYSDK_OFFSET(0x143C2320)
#define BAEEGIMDKED_JDIKBMILMFP_OFFSET UNITYSDK_OFFSET(0x143C2300)
#define BAEEGIMDKED_KKCGBHNOBJC_OFFSET UNITYSDK_OFFSET(0x143C2340)
#define BAEEGIMDKED_MAGCFCGKHPL_OFFSET UNITYSDK_OFFSET(0x143C2100)
#define BAEEGIMDKED_NEAILBHLBFF_OFFSET UNITYSDK_OFFSET(0x143C2120)
#define BAEEGIMDKED_PMNCEMDEOLE_OFFSET UNITYSDK_OFFSET(0x143C2310)
#define BAEEGIMDKED__CTOR_OFFSET UNITYSDK_OFFSET(0x143C22F0)

inline static constexpr unsigned int BAEEGIMDKED_TypeDefinitionIndex = 66634;

class BAEEGIMDKED : public ::System::Object
{
public:
	::System::Func_2<::MoleMole::HollowChessboard::HollowCell, ::AIKGHHJKNCE*>* _BMGBCHMIGJA_k__BackingField; // 0x10
	::MoleMole::HollowChessboard::HollowCell _HKMPDPOGBKF_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEEGIMDKED__CTOR_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell MAGCFCGKHPL()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEEGIMDKED_MAGCFCGKHPL_OFFSET))(this);
	}

	::MFOOJKCBAFI NEAILBHLBFF()
	{
		return ((::MFOOJKCBAFI(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEEGIMDKED_NEAILBHLBFF_OFFSET))(this);
	}

	::System::Void JDIKBMILMFP(::System::Func_2<::MoleMole::HollowChessboard::HollowCell, ::AIKGHHJKNCE*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::MoleMole::HollowChessboard::HollowCell, ::AIKGHHJKNCE*>*))((::PBYTE)hIl2Cpp + BAEEGIMDKED_JDIKBMILMFP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PMNCEMDEOLE(::MoleMole::HollowChessboard::HollowCell EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + BAEEGIMDKED_PMNCEMDEOLE_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::HollowChessboard::HollowCell HIADJABJGPB()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEEGIMDKED_HIADJABJGPB_OFFSET))(this);
	}

	::System::Func_2<::MoleMole::HollowChessboard::HollowCell, ::AIKGHHJKNCE*>* KKCGBHNOBJC()
	{
		return ((::System::Func_2<::MoleMole::HollowChessboard::HollowCell, ::AIKGHHJKNCE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEEGIMDKED_KKCGBHNOBJC_OFFSET))(this);
	}
};
