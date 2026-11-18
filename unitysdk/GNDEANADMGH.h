#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowEntityMoveComponent_MoveCmd.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define GNDEANADMGH_BJKHFFBEOJJ_OFFSET UNITYSDK_OFFSET(0x17A03660)
#define GNDEANADMGH_DNDACGJFHIK_OFFSET UNITYSDK_OFFSET(0x17A035D0)
#define GNDEANADMGH_GEDICFHHPOF_OFFSET UNITYSDK_OFFSET(0x17A035F0)
#define GNDEANADMGH_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17A03180)
#define GNDEANADMGH_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x17A034B0)
#define GNDEANADMGH_KDHJODMIOHH_OFFSET UNITYSDK_OFFSET(0x17A03490)
#define GNDEANADMGH_KOLJAGDAKMP_OFFSET UNITYSDK_OFFSET(0x17A033E0)
#define GNDEANADMGH_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x17A033F0)
#define GNDEANADMGH_OAFBBNNDNFD_OFFSET UNITYSDK_OFFSET(0x17A03480)
#define GNDEANADMGH_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17A03250)
#define GNDEANADMGH__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A031D0)
#define GNDEANADMGH__CTOR_OFFSET UNITYSDK_OFFSET(0x17A03330)

inline static constexpr unsigned int GNDEANADMGH_TypeDefinitionIndex = 61662;

class GNDEANADMGH : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x238; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* _IBALLHBLNCD_k__BackingField; // 0x50
	::MoleMole::HollowChessboard::HollowCell _LEGMLBHHEDP_k__BackingField; // 0x58
	::MoleMole::HollowChessboard::HollowCell FFGDHCMPPCJ; // 0x64

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNDEANADMGH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNDEANADMGH__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNDEANADMGH_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNDEANADMGH_ONCLEAN_OFFSET))(this);
	}

	::System::Void KOLJAGDAKMP(::MoleMole::HollowChessboard::HollowCell EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + GNDEANADMGH_KOLJAGDAKMP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNDEANADMGH_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void OAFBBNNDNFD(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>*))((::PBYTE)hIl2Cpp + GNDEANADMGH_OAFBBNNDNFD_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::HollowChessboard::HollowCell KDHJODMIOHH()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + GNDEANADMGH_KDHJODMIOHH_OFFSET))(this);
	}

	static ::GNDEANADMGH* JFDOOELFAOA()
	{
		return ((::GNDEANADMGH*(*)())((::PBYTE)hIl2Cpp + GNDEANADMGH_JFDOOELFAOA_OFFSET))();
	}

	::MoleMole::HollowChessboard::HollowCell DNDACGJFHIK()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + GNDEANADMGH_DNDACGJFHIK_OFFSET))(this);
	}

	::System::Void GEDICFHHPOF(::MoleMole::HollowChessboard::HollowCell EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + GNDEANADMGH_GEDICFHHPOF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* BJKHFFBEOJJ()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNDEANADMGH_BJKHFFBEOJJ_OFFSET))(this);
	}
};
