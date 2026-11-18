#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KOMAENPDJOC.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class NBGLGKLHEMP;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IACCNAKACFG_IIAAMALOPFN_OFFSET UNITYSDK_OFFSET(0x15396FB0)
#define IACCNAKACFG_OABIJPPGKBP_OFFSET UNITYSDK_OFFSET(0x153973C0)
#define IACCNAKACFG_OKDBJPEODMJ_OFFSET UNITYSDK_OFFSET(0x15397640)
#define IACCNAKACFG__CTOR_OFFSET UNITYSDK_OFFSET(0x153972E0)

inline static constexpr unsigned int IACCNAKACFG_TypeDefinitionIndex = 40391;

class IACCNAKACFG : public ::KOMAENPDJOC
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* DDPCJKIDGFA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IACCNAKACFG__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* IIAAMALOPFN()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IACCNAKACFG_IIAAMALOPFN_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* OABIJPPGKBP(::NBGLGKLHEMP* PPGJHBGONFM, ::MoleMole::HollowChessboard::HollowChessboardUID EGCGJNIJLBN, ::MoleMole::HollowChessboard::HollowCell KHBGGLHMJFD)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::NBGLGKLHEMP*, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + IACCNAKACFG_OABIJPPGKBP_OFFSET))(this, PPGJHBGONFM, EGCGJNIJLBN, KHBGGLHMJFD);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* OKDBJPEODMJ()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IACCNAKACFG_OKDBJPEODMJ_OFFSET))(this);
	}
};
