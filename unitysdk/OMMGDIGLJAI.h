#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPPLDKIOIBD.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class BBLDKBFLHJG;
class BEJIHCCDEPL;
class LOKPDNOHGJH_BJHFJALHFDH;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OMMGDIGLJAI_BEOMDJDPDIO_OFFSET UNITYSDK_OFFSET(0x15F83B90)
#define OMMGDIGLJAI_CKBFOCPGBDD_OFFSET UNITYSDK_OFFSET(0x15F83980)
#define OMMGDIGLJAI_IIAAMALOPFN_OFFSET UNITYSDK_OFFSET(0x15F83070)
#define OMMGDIGLJAI_KGNMMNPIDDA_OFFSET UNITYSDK_OFFSET(0x15F832B0)
#define OMMGDIGLJAI_NPPGECDJGEG_OFFSET UNITYSDK_OFFSET(0x15F83680)
#define OMMGDIGLJAI_PLBAKALMABD_1_OFFSET UNITYSDK_OFFSET(0x15F83DE0)
#define OMMGDIGLJAI_PLBAKALMABD_OFFSET UNITYSDK_OFFSET(0x15F837F0)
#define OMMGDIGLJAI__CTOR_OFFSET UNITYSDK_OFFSET(0x15F831D0)

inline static constexpr unsigned int OMMGDIGLJAI_TypeDefinitionIndex = 39281;

class OMMGDIGLJAI : public ::HPPLDKIOIBD
{
public:
	::BEJIHCCDEPL* GJDOPFHLELI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMGDIGLJAI__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* IIAAMALOPFN()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMGDIGLJAI_IIAAMALOPFN_OFFSET))(this);
	}

	::System::Void KGNMMNPIDDA(::MoleMole::HollowChessboard::HollowChessboardUID GNHEHOMMHPB, ::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ, ::BBLDKBFLHJG* NLKGIPLGJDL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowEntity*, ::BBLDKBFLHJG*))((::PBYTE)hIl2Cpp + OMMGDIGLJAI_KGNMMNPIDDA_OFFSET))(this, GNHEHOMMHPB, KECKGDFIALJ, NLKGIPLGJDL);
	}

	::MoleMole::HollowChessboard::HollowEntity* NPPGECDJGEG(::MoleMole::HollowChessboard::HollowChessboardUID GNHEHOMMHPB)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + OMMGDIGLJAI_NPPGECDJGEG_OFFSET))(this, GNHEHOMMHPB);
	}

	::System::Boolean PLBAKALMABD(::MoleMole::HollowChessboard::HollowChessboardUID GNHEHOMMHPB)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + OMMGDIGLJAI_PLBAKALMABD_OFFSET))(this, GNHEHOMMHPB);
	}

	::MoleMole::HollowChessboard::HollowEntity* CKBFOCPGBDD(::LOKPDNOHGJH_BJHFJALHFDH* PKMMGPPJCBJ)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::LOKPDNOHGJH_BJHFJALHFDH*))((::PBYTE)hIl2Cpp + OMMGDIGLJAI_CKBFOCPGBDD_OFFSET))(this, PKMMGPPJCBJ);
	}

	::MoleMole::HollowChessboard::HollowEntity* BEOMDJDPDIO(::LOKPDNOHGJH_BJHFJALHFDH* PKMMGPPJCBJ)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::LOKPDNOHGJH_BJHFJALHFDH*))((::PBYTE)hIl2Cpp + OMMGDIGLJAI_BEOMDJDPDIO_OFFSET))(this, PKMMGPPJCBJ);
	}

	::System::Void PLBAKALMABD_1(::MoleMole::HollowChessboard::HollowEntity* BGIPLABCLCE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + OMMGDIGLJAI_PLBAKALMABD_1_OFFSET))(this, BGIPLABCLCE);
	}
};
