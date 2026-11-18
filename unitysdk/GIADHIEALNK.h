#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPPLDKIOIBD.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class FBAMLABJMKF;
class FMNAIOANOLK;
class LAAEPKNJKHA;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GIADHIEALNK_DCCBMINMDNL_OFFSET UNITYSDK_OFFSET(0x14CE7F00)
#define GIADHIEALNK_HANEKLCKKNP_OFFSET UNITYSDK_OFFSET(0x14CE8000)
#define GIADHIEALNK_HMHKPIACAPK_OFFSET UNITYSDK_OFFSET(0x14CE8CA0)
#define GIADHIEALNK_IIAAMALOPFN_OFFSET UNITYSDK_OFFSET(0x14CE7840)
#define GIADHIEALNK_IMDMILLCGED_1_OFFSET UNITYSDK_OFFSET(0x14CE8EB0)
#define GIADHIEALNK_IMDMILLCGED_OFFSET UNITYSDK_OFFSET(0x14CE7D40)
#define GIADHIEALNK_JODNGKLILPL_OFFSET UNITYSDK_OFFSET(0x14CE8C00)
#define GIADHIEALNK_KBNMONHEEIP_OFFSET UNITYSDK_OFFSET(0x14CE8890)
#define GIADHIEALNK_KCKBCGPJHIO_OFFSET UNITYSDK_OFFSET(0x14CE8B00)
#define GIADHIEALNK_LELDNDMDALG_OFFSET UNITYSDK_OFFSET(0x14CE7D30)
#define GIADHIEALNK_LMGONADCHBB_OFFSET UNITYSDK_OFFSET(0x14CE86A0)
#define GIADHIEALNK_NCAMEPBDKFL_OFFSET UNITYSDK_OFFSET(0x14CE7940)
#define GIADHIEALNK_OFAFCONBLDD_OFFSET UNITYSDK_OFFSET(0x14CE7950)
#define GIADHIEALNK__CTOR_OFFSET UNITYSDK_OFFSET(0x14CE78F0)

inline static constexpr unsigned int GIADHIEALNK_TypeDefinitionIndex = 67480;

class GIADHIEALNK : public ::HPPLDKIOIBD
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>*>* _GOKMIKPNNMB_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIADHIEALNK__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* IIAAMALOPFN()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIADHIEALNK_IIAAMALOPFN_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>*>* NCAMEPBDKFL()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIADHIEALNK_NCAMEPBDKFL_OFFSET))(this);
	}

	::System::Void OFAFCONBLDD(::LAAEPKNJKHA* EJPKBPLGOFH, ::FBAMLABJMKF* AKCCBOJKOJL, ::FBAMLABJMKF* HDEJNHDKCOO, ::MoleMole::HollowChessboard::HollowCell KAOHANABNKH, ::MoleMole::HollowChessboard::HollowCell ECHBPPIEIKI)
	{
		return ((::System::Void(*)(::PVOID, ::LAAEPKNJKHA*, ::FBAMLABJMKF*, ::FBAMLABJMKF*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + GIADHIEALNK_OFAFCONBLDD_OFFSET))(this, EJPKBPLGOFH, AKCCBOJKOJL, HDEJNHDKCOO, KAOHANABNKH, ECHBPPIEIKI);
	}

	::System::Void LELDNDMDALG(::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>*>*))((::PBYTE)hIl2Cpp + GIADHIEALNK_LELDNDMDALG_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::HollowChessboard::HollowEntity* IMDMILLCGED(::MoleMole::HollowChessboard::HollowChessboardUID LPALEBPKMNO, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::System::Boolean FPACJLIMHMA)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + GIADHIEALNK_IMDMILLCGED_OFFSET))(this, LPALEBPKMNO, EKPEBNCLJPM, FPACJLIMHMA);
	}

	::MoleMole::HollowChessboard::HollowEntity* DCCBMINMDNL(::FMNAIOANOLK* MNOFNKPIJCO, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::MoleMole::HollowChessboard::HollowChessboardUID FBBLINBFOHB)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::FMNAIOANOLK*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + GIADHIEALNK_DCCBMINMDNL_OFFSET))(this, MNOFNKPIJCO, EKPEBNCLJPM, FBBLINBFOHB);
	}

	::System::Void KBNMONHEEIP(::MoleMole::HollowChessboard::HollowChessboardUID EGCGJNIJLBN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + GIADHIEALNK_KBNMONHEEIP_OFFSET))(this, EGCGJNIJLBN);
	}

	::System::Void HANEKLCKKNP(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ, ::System::Boolean DBBIDCBDBDB, ::FMNAIOANOLK* MNOFNKPIJCO, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::MoleMole::HollowChessboard::HollowChessboardUID LPALEBPKMNO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::System::Boolean, ::FMNAIOANOLK*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + GIADHIEALNK_HANEKLCKKNP_OFFSET))(this, KECKGDFIALJ, DBBIDCBDBDB, MNOFNKPIJCO, EKPEBNCLJPM, LPALEBPKMNO);
	}

	static ::GIADHIEALNK* KCKBCGPJHIO()
	{
		return ((::GIADHIEALNK*(*)())((::PBYTE)hIl2Cpp + GIADHIEALNK_KCKBCGPJHIO_OFFSET))();
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowChessboard::HollowEntity*>* JODNGKLILPL()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowChessboard::HollowEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIADHIEALNK_JODNGKLILPL_OFFSET))(this);
	}

	::System::Void HMHKPIACAPK(::MoleMole::HollowChessboard::HollowEntity* OPINGACMDCL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + GIADHIEALNK_HMHKPIACAPK_OFFSET))(this, OPINGACMDCL);
	}

	::MoleMole::HollowChessboard::HollowEntity* IMDMILLCGED_1(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::System::Boolean FPACJLIMHMA)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + GIADHIEALNK_IMDMILLCGED_1_OFFSET))(this, EKPEBNCLJPM, FPACJLIMHMA);
	}

	::MoleMole::HollowChessboard::HollowEntity* LMGONADCHBB(::FMNAIOANOLK* MNOFNKPIJCO, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::MoleMole::HollowChessboard::HollowChessboardUID LPALEBPKMNO)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::FMNAIOANOLK*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + GIADHIEALNK_LMGONADCHBB_OFFSET))(this, MNOFNKPIJCO, EKPEBNCLJPM, LPALEBPKMNO);
	}
};
