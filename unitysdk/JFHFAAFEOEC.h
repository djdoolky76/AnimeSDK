#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCFECOBCMIE.h"
#include "unitysdk/HPPLDKIOIBD.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class AMMIEAEEEGB;
class FAIKBPENCON;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JFHFAAFEOEC_GNNDLOEJHJO_OFFSET UNITYSDK_OFFSET(0x165A3080)
#define JFHFAAFEOEC_IIAAMALOPFN_OFFSET UNITYSDK_OFFSET(0x165A2540)
#define JFHFAAFEOEC_IMDLPDIKBPJ_OFFSET UNITYSDK_OFFSET(0x165A31D0)
#define JFHFAAFEOEC_LPOJDDJDKPK_OFFSET UNITYSDK_OFFSET(0x165A2610)
#define JFHFAAFEOEC_NGCBLBMKMJP_1_OFFSET UNITYSDK_OFFSET(0x165A2BE0)
#define JFHFAAFEOEC_NGCBLBMKMJP_OFFSET UNITYSDK_OFFSET(0x165A2AB0)
#define JFHFAAFEOEC__CTOR_OFFSET UNITYSDK_OFFSET(0x165A25C0)

inline static constexpr unsigned int JFHFAAFEOEC_TypeDefinitionIndex = 75745;

class JFHFAAFEOEC : public ::HPPLDKIOIBD
{
public:
	::GCFECOBCMIE OABJPIOMIHO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHFAAFEOEC__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* IIAAMALOPFN()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHFAAFEOEC_IIAAMALOPFN_OFFSET))(this);
	}

	::System::Void LPOJDDJDKPK(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ, ::MoleMole::HollowChessboard::HollowChessboardUID EGCGJNIJLBN, ::MoleMole::HollowChessboard::HollowCell ABHBKFJKINO, ::System::Int32 DPJLKNKHIKA, ::System::Boolean JBJFINAFFKO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JFHFAAFEOEC_LPOJDDJDKPK_OFFSET))(this, KECKGDFIALJ, EGCGJNIJLBN, ABHBKFJKINO, DPJLKNKHIKA, JBJFINAFFKO);
	}

	::MoleMole::HollowChessboard::HollowEntity* NGCBLBMKMJP(::FAIKBPENCON* LJBPECKCCEA, ::System::Boolean JBJFINAFFKO)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::FAIKBPENCON*, ::System::Boolean))((::PBYTE)hIl2Cpp + JFHFAAFEOEC_NGCBLBMKMJP_OFFSET))(this, LJBPECKCCEA, JBJFINAFFKO);
	}

	::System::Void GNNDLOEJHJO(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFHFAAFEOEC_GNNDLOEJHJO_OFFSET))(this, NJNCGJLHLKC);
	}

	::MoleMole::HollowChessboard::HollowEntity* NGCBLBMKMJP_1(::MoleMole::HollowChessboard::HollowChessboardUID EGCGJNIJLBN, ::System::Int32 DPJLKNKHIKA, ::MoleMole::HollowChessboard::HollowCell ABHBKFJKINO, ::System::UInt32 MAIFPFDKHCB, ::System::Boolean JBJFINAFFKO)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + JFHFAAFEOEC_NGCBLBMKMJP_1_OFFSET))(this, EGCGJNIJLBN, DPJLKNKHIKA, ABHBKFJKINO, MAIFPFDKHCB, JBJFINAFFKO);
	}

	::MoleMole::HollowChessboard::HollowEntity* IMDLPDIKBPJ(::System::Int32 DPJLKNKHIKA, ::AMMIEAEEEGB* LJBPECKCCEA)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::System::Int32, ::AMMIEAEEEGB*))((::PBYTE)hIl2Cpp + JFHFAAFEOEC_IMDLPDIKBPJ_OFFSET))(this, DPJLKNKHIKA, LJBPECKCCEA);
	}
};
