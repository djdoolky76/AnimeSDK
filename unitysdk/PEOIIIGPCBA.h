#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPPLDKIOIBD.h"
#include "unitysdk/JPAGJONBFID_DBCBFHKKAFH.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/PEOIIIGPCBA_CLMCOCIENLH.h"

class FBAMLABJMKF;
class FMNAIOANOLK;
class FNNMCGCCDEA;
class JCLMLILFGPJ;
class JMIGPHLOLAJ;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PEOIIIGPCBA_AEAMKPMJNIO_OFFSET UNITYSDK_OFFSET(0x1B9D5D00)
#define PEOIIIGPCBA_AHGNDBCENGA_OFFSET UNITYSDK_OFFSET(0x1B9D55E0)
#define PEOIIIGPCBA_BAPMLDKGDPE_OFFSET UNITYSDK_OFFSET(0x1B9D64B0)
#define PEOIIIGPCBA_DIOIJEGHPEA_OFFSET UNITYSDK_OFFSET(0x1B9D4F80)
#define PEOIIIGPCBA_FDLGHIGNKGN_OFFSET UNITYSDK_OFFSET(0x1B9D5150)
#define PEOIIIGPCBA_GPAOHEEKFCD_OFFSET UNITYSDK_OFFSET(0x1B9D3FE0)
#define PEOIIIGPCBA_HAHBICMLJEH_OFFSET UNITYSDK_OFFSET(0x1B9D47B0)
#define PEOIIIGPCBA_IADFEBGJFKN_OFFSET UNITYSDK_OFFSET(0x1B9D4540)
#define PEOIIIGPCBA_IIAAMALOPFN_OFFSET UNITYSDK_OFFSET(0x1B9D3F50)
#define PEOIIIGPCBA_IMFEPAHJELH_OFFSET UNITYSDK_OFFSET(0x1B9D46B0)
#define PEOIIIGPCBA_JGHEJIMBJKI_1_OFFSET UNITYSDK_OFFSET(0x1B9D5DB0)
#define PEOIIIGPCBA_JGHEJIMBJKI_OFFSET UNITYSDK_OFFSET(0x1B9D57D0)
#define PEOIIIGPCBA_KCKBCGPJHIO_OFFSET UNITYSDK_OFFSET(0x1B9D5C00)
#define PEOIIIGPCBA_KHNGELCAKKN_OFFSET UNITYSDK_OFFSET(0x1B9D6240)
#define PEOIIIGPCBA_NPDILIECFOM_OFFSET UNITYSDK_OFFSET(0x1B9D4B40)
#define PEOIIIGPCBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9D3F90)

inline static constexpr unsigned int PEOIIIGPCBA_TypeDefinitionIndex = 69165;

class PEOIIIGPCBA : public ::HPPLDKIOIBD
{
public:
	::FNNMCGCCDEA* LCEFPENBOMM; // 0x10
	::FNNMCGCCDEA* OMKDLNPIOFF; // 0x18
	::FNNMCGCCDEA* NKECGKAJGBD; // 0x20
	::System::Boolean BFGJENDKPKH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOIIIGPCBA__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* IIAAMALOPFN()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOIIIGPCBA_IIAAMALOPFN_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* GPAOHEEKFCD(::PEOIIIGPCBA_CLMCOCIENLH NALICHNFMKI)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::PEOIIIGPCBA_CLMCOCIENLH))((::PBYTE)hIl2Cpp + PEOIIIGPCBA_GPAOHEEKFCD_OFFSET))(this, NALICHNFMKI);
	}

	::System::Boolean HAHBICMLJEH(::FBAMLABJMKF* COBEJJHGMPO, ::MoleMole::HollowChessboard::HollowCell AEPEPHHADNP, ::FMNAIOANOLK* MLCFEGOMFGH, ::PEOIIIGPCBA_CLMCOCIENLH& OAMOPGONEHA)
	{
		return ((::System::Boolean(*)(::PVOID, ::FBAMLABJMKF*, ::MoleMole::HollowChessboard::HollowCell, ::FMNAIOANOLK*, ::PEOIIIGPCBA_CLMCOCIENLH&))((::PBYTE)hIl2Cpp + PEOIIIGPCBA_HAHBICMLJEH_OFFSET))(this, COBEJJHGMPO, AEPEPHHADNP, MLCFEGOMFGH, OAMOPGONEHA);
	}

	::System::Void DIOIJEGHPEA(::FBAMLABJMKF* COBEJJHGMPO, ::MoleMole::HollowChessboard::HollowCell AEPEPHHADNP, ::FMNAIOANOLK* MLCFEGOMFGH)
	{
		return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*, ::MoleMole::HollowChessboard::HollowCell, ::FMNAIOANOLK*))((::PBYTE)hIl2Cpp + PEOIIIGPCBA_DIOIJEGHPEA_OFFSET))(this, COBEJJHGMPO, AEPEPHHADNP, MLCFEGOMFGH);
	}

	static ::System::Boolean FDLGHIGNKGN(::PEOIIIGPCBA_CLMCOCIENLH NALICHNFMKI, ::JMIGPHLOLAJ* IDGBKCLIBEK, ::JCLMLILFGPJ* DFFOOHINDEJ)
	{
		return ((::System::Boolean(*)(::PEOIIIGPCBA_CLMCOCIENLH, ::JMIGPHLOLAJ*, ::JCLMLILFGPJ*))((::PBYTE)hIl2Cpp + PEOIIIGPCBA_FDLGHIGNKGN_OFFSET))(NALICHNFMKI, IDGBKCLIBEK, DFFOOHINDEJ);
	}

	static ::System::Void IMFEPAHJELH(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ, ::JMIGPHLOLAJ* IDGBKCLIBEK)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowEntity*, ::JMIGPHLOLAJ*))((::PBYTE)hIl2Cpp + PEOIIIGPCBA_IMFEPAHJELH_OFFSET))(KECKGDFIALJ, IDGBKCLIBEK);
	}

	static ::System::Boolean AHGNDBCENGA(::FBAMLABJMKF* COBEJJHGMPO, ::MoleMole::HollowChessboard::HollowCell AEPEPHHADNP)
	{
		return ((::System::Boolean(*)(::FBAMLABJMKF*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + PEOIIIGPCBA_AHGNDBCENGA_OFFSET))(COBEJJHGMPO, AEPEPHHADNP);
	}

	::System::Boolean JGHEJIMBJKI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEOIIIGPCBA_JGHEJIMBJKI_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::PEOIIIGPCBA* KCKBCGPJHIO()
	{
		return ((::PEOIIIGPCBA*(*)())((::PBYTE)hIl2Cpp + PEOIIIGPCBA_KCKBCGPJHIO_OFFSET))();
	}

	::System::Void AEAMKPMJNIO(::FBAMLABJMKF* COBEJJHGMPO, ::MoleMole::HollowChessboard::HollowCell AEPEPHHADNP, ::FMNAIOANOLK* MLCFEGOMFGH)
	{
		return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*, ::MoleMole::HollowChessboard::HollowCell, ::FMNAIOANOLK*))((::PBYTE)hIl2Cpp + PEOIIIGPCBA_AEAMKPMJNIO_OFFSET))(this, COBEJJHGMPO, AEPEPHHADNP, MLCFEGOMFGH);
	}

	::System::Boolean JGHEJIMBJKI_1(::MoleMole::HollowChessboard::HollowChessboardUID GNHEHOMMHPB, ::MoleMole::HollowChessboard::HollowCell AEPEPHHADNP)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + PEOIIIGPCBA_JGHEJIMBJKI_1_OFFSET))(this, GNHEHOMMHPB, AEPEPHHADNP);
	}

	::System::Void KHNGELCAKKN(::MoleMole::HollowChessboard::HollowEntity* BCJNKEMJECH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + PEOIIIGPCBA_KHNGELCAKKN_OFFSET))(this, BCJNKEMJECH);
	}

	::System::Void BAPMLDKGDPE(::MoleMole::HollowChessboard::HollowEntity* BCJNKEMJECH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + PEOIIIGPCBA_BAPMLDKGDPE_OFFSET))(this, BCJNKEMJECH);
	}

	static ::JMIGPHLOLAJ* IADFEBGJFKN(::JPAGJONBFID_DBCBFHKKAFH& ELEIACDBIPL, ::PEOIIIGPCBA_CLMCOCIENLH NALICHNFMKI, ::JCLMLILFGPJ* DFFOOHINDEJ)
	{
		return ((::JMIGPHLOLAJ*(*)(::JPAGJONBFID_DBCBFHKKAFH&, ::PEOIIIGPCBA_CLMCOCIENLH, ::JCLMLILFGPJ*))((::PBYTE)hIl2Cpp + PEOIIIGPCBA_IADFEBGJFKN_OFFSET))(ELEIACDBIPL, NALICHNFMKI, DFFOOHINDEJ);
	}

	::System::Void NPDILIECFOM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOIIIGPCBA_NPDILIECFOM_OFFSET))(this);
	}
};
