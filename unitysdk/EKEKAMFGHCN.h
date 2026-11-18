#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPPLDKIOIBD.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/PAKCOHANNNO.h"
#include "unitysdk/JPAGJONBFID_OHLJJOCHIGO.h"

class AMMIEAEEEGB;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EKEKAMFGHCN_CLBFKDCKAMK_OFFSET UNITYSDK_OFFSET(0x11A97C60)
#define EKEKAMFGHCN_EFGOADGCJMA_OFFSET UNITYSDK_OFFSET(0x11A97900)
#define EKEKAMFGHCN_ELIODOCGBAF_OFFSET UNITYSDK_OFFSET(0x11A97570)
#define EKEKAMFGHCN_GPAOHEEKFCD_OFFSET UNITYSDK_OFFSET(0x11A96AF0)
#define EKEKAMFGHCN_IIAAMALOPFN_OFFSET UNITYSDK_OFFSET(0x11A96A40)
#define EKEKAMFGHCN_JNGMCEEIHMK_OFFSET UNITYSDK_OFFSET(0x11A97E10)
#define EKEKAMFGHCN_JODNGKLILPL_OFFSET UNITYSDK_OFFSET(0x11A974D0)
#define EKEKAMFGHCN_LAMOHHGCDDN_OFFSET UNITYSDK_OFFSET(0x11A977D0)
#define EKEKAMFGHCN_MPFOPJGOMOA_OFFSET UNITYSDK_OFFSET(0x11A97660)
#define EKEKAMFGHCN__CTOR_OFFSET UNITYSDK_OFFSET(0x11A97820)

inline static constexpr unsigned int EKEKAMFGHCN_TypeDefinitionIndex = 49296;

class EKEKAMFGHCN : public ::HPPLDKIOIBD
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*>* OJLBENHDGPK; // 0x10
	::PAKCOHANNNO CDBPFKJOIFH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEKAMFGHCN__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* IIAAMALOPFN()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEKAMFGHCN_IIAAMALOPFN_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* GPAOHEEKFCD(::AMMIEAEEEGB* JKHIHIBHDPH)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::AMMIEAEEEGB*))((::PBYTE)hIl2Cpp + EKEKAMFGHCN_GPAOHEEKFCD_OFFSET))(this, JKHIHIBHDPH);
	}

	::System::Void LAMOHHGCDDN(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + EKEKAMFGHCN_LAMOHHGCDDN_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void EFGOADGCJMA(::System::UInt32 ACKLJLNMJGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EKEKAMFGHCN_EFGOADGCJMA_OFFSET))(this, ACKLJLNMJGD);
	}

	::System::Boolean ELIODOCGBAF(::AMMIEAEEEGB* JKHIHIBHDPH, ::JPAGJONBFID_OHLJJOCHIGO& HGDMBHDKFPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::AMMIEAEEEGB*, ::JPAGJONBFID_OHLJJOCHIGO&))((::PBYTE)hIl2Cpp + EKEKAMFGHCN_ELIODOCGBAF_OFFSET))(this, JKHIHIBHDPH, HGDMBHDKFPK);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowChessboard::HollowEntity*>* JODNGKLILPL()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowChessboard::HollowEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEKAMFGHCN_JODNGKLILPL_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* CLBFKDCKAMK(::System::UInt32 ACHBBPJIBIE)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EKEKAMFGHCN_CLBFKDCKAMK_OFFSET))(this, ACHBBPJIBIE);
	}

	::System::Void JNGMCEEIHMK(::MoleMole::HollowChessboard::HollowChessboardUID GOGLFLDGDJF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + EKEKAMFGHCN_JNGMCEEIHMK_OFFSET))(this, GOGLFLDGDJF);
	}

	::System::Void MPFOPJGOMOA(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + EKEKAMFGHCN_MPFOPJGOMOA_OFFSET))(this, KECKGDFIALJ);
	}
};
