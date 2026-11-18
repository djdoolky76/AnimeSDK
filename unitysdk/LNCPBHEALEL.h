#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowEntityMoveComponent_MoveCmd.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define LNCPBHEALEL_AEINPMHMMNM_OFFSET UNITYSDK_OFFSET(0x12598F80)
#define LNCPBHEALEL_BJKHFFBEOJJ_OFFSET UNITYSDK_OFFSET(0x12598FA0)
#define LNCPBHEALEL_EDDGKGLJLIN_OFFSET UNITYSDK_OFFSET(0x12598F50)
#define LNCPBHEALEL_GEDICFHHPOF_OFFSET UNITYSDK_OFFSET(0x12598FB0)
#define LNCPBHEALEL_KDHJODMIOHH_OFFSET UNITYSDK_OFFSET(0x12598F60)
#define LNCPBHEALEL_OAFBBNNDNFD_OFFSET UNITYSDK_OFFSET(0x12598F90)
#define LNCPBHEALEL__CTOR_OFFSET UNITYSDK_OFFSET(0x12598EC0)

inline static constexpr unsigned int LNCPBHEALEL_TypeDefinitionIndex = 38887;

class LNCPBHEALEL : public ::JGELKBLKFHE
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* _IBALLHBLNCD_k__BackingField; // 0x18
	::System::Boolean _JMFKBJKGFJO_k__BackingField; // 0x20
	::System::Byte _padding0[0x3];
	::MoleMole::HollowChessboard::HollowCell _NIBPNEHAGNG_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCPBHEALEL__CTOR_OFFSET))(this);
	}

	::System::Void EDDGKGLJLIN(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LNCPBHEALEL_EDDGKGLJLIN_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::HollowChessboard::HollowCell KDHJODMIOHH()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCPBHEALEL_KDHJODMIOHH_OFFSET))(this);
	}

	::System::Boolean AEINPMHMMNM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCPBHEALEL_AEINPMHMMNM_OFFSET))(this);
	}

	::System::Void OAFBBNNDNFD(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>*))((::PBYTE)hIl2Cpp + LNCPBHEALEL_OAFBBNNDNFD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* BJKHFFBEOJJ()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCPBHEALEL_BJKHFFBEOJJ_OFFSET))(this);
	}

	::System::Void GEDICFHHPOF(::MoleMole::HollowChessboard::HollowCell EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + LNCPBHEALEL_GEDICFHHPOF_OFFSET))(this, EGEGIMGMJHN);
	}
};
