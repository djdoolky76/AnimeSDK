#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KOMAENPDJOC.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class LJNJMAOBIIM;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FICCKCGNALH_CPJLMFBCBGE_OFFSET UNITYSDK_OFFSET(0x140F9660)
#define FICCKCGNALH_GHDEFIIJAHH_OFFSET UNITYSDK_OFFSET(0x140F9490)
#define FICCKCGNALH_IIAAMALOPFN_OFFSET UNITYSDK_OFFSET(0x140F91F0)
#define FICCKCGNALH_IPBCLKEACGB_OFFSET UNITYSDK_OFFSET(0x140F9790)
#define FICCKCGNALH_OKDBJPEODMJ_OFFSET UNITYSDK_OFFSET(0x140F9480)
#define FICCKCGNALH__CTOR_OFFSET UNITYSDK_OFFSET(0x140F9350)

inline static constexpr unsigned int FICCKCGNALH_TypeDefinitionIndex = 59652;

class FICCKCGNALH : public ::KOMAENPDJOC
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* HJGKNKPHMBF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICCKCGNALH__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* IIAAMALOPFN()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FICCKCGNALH_IIAAMALOPFN_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* OKDBJPEODMJ()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FICCKCGNALH_OKDBJPEODMJ_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* GHDEFIIJAHH(::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + FICCKCGNALH_GHDEFIIJAHH_OFFSET))(this, BONICGBNDAA);
	}

	::System::Void CPJLMFBCBGE(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + FICCKCGNALH_CPJLMFBCBGE_OFFSET))(this, KECKGDFIALJ);
	}

	::MoleMole::HollowChessboard::HollowEntity* IPBCLKEACGB(::System::UInt32 GDIFMHPOMFB, ::MoleMole::HollowChessboard::HollowChessboardUID GNHEHOMMHPB, ::System::UInt32 DBNFCLEJONF, ::LJNJMAOBIIM*& LJBPECKCCEA)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::System::UInt32, ::MoleMole::HollowChessboard::HollowChessboardUID, ::System::UInt32, ::LJNJMAOBIIM*&))((::PBYTE)hIl2Cpp + FICCKCGNALH_IPBCLKEACGB_OFFSET))(this, GDIFMHPOMFB, GNHEHOMMHPB, DBNFCLEJONF, LJBPECKCCEA);
	}
};
