#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPPLDKIOIBD.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class HIIMKPAKPLJ;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GPGILDCPHPK_IBJGIHENGLK_OFFSET UNITYSDK_OFFSET(0x15F41AD0)
#define GPGILDCPHPK_IIAAMALOPFN_OFFSET UNITYSDK_OFFSET(0x15F40FB0)
#define GPGILDCPHPK_ILCJDKHMOLD_OFFSET UNITYSDK_OFFSET(0x15F41350)
#define GPGILDCPHPK_JPNBJGJMKGC_OFFSET UNITYSDK_OFFSET(0x15F41FA0)
#define GPGILDCPHPK_KCKBCGPJHIO_OFFSET UNITYSDK_OFFSET(0x15F41250)
#define GPGILDCPHPK_NCLMHFPBPOA_OFFSET UNITYSDK_OFFSET(0x15F41D40)
#define GPGILDCPHPK__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F411B0)
#define GPGILDCPHPK__CTOR_OFFSET UNITYSDK_OFFSET(0x15F41160)

inline static constexpr unsigned int GPGILDCPHPK_TypeDefinitionIndex = 86300;

class GPGILDCPHPK : public ::HPPLDKIOIBD
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>*>** StaticGet_GLOHGKGJAII()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>*>**)Il2CppClass::FromTypeDefinitionIndex(GPGILDCPHPK_TypeDefinitionIndex)->GetStaticField(0x463C0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGILDCPHPK__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPGILDCPHPK__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* IIAAMALOPFN()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGILDCPHPK_IIAAMALOPFN_OFFSET))(this);
	}

	static ::GPGILDCPHPK* KCKBCGPJHIO()
	{
		return ((::GPGILDCPHPK*(*)())((::PBYTE)hIl2Cpp + GPGILDCPHPK_KCKBCGPJHIO_OFFSET))();
	}

	::MoleMole::HollowChessboard::HollowEntity* ILCJDKHMOLD(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::MoleMole::HollowChessboard::HollowChessboardUID IACHFFGPFMF)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + GPGILDCPHPK_ILCJDKHMOLD_OFFSET))(this, EKPEBNCLJPM, IACHFFGPFMF);
	}

	::System::Void IBJGIHENGLK(::MoleMole::HollowChessboard::HollowChessboardUID JOJDECGDBDH, ::MoleMole::HollowChessboard::HollowChessboardUID PNKAPOMGHCF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + GPGILDCPHPK_IBJGIHENGLK_OFFSET))(this, JOJDECGDBDH, PNKAPOMGHCF);
	}

	::System::Boolean NCLMHFPBPOA(::MoleMole::HollowChessboard::HollowChessboardUID GNHEHOMMHPB)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + GPGILDCPHPK_NCLMHFPBPOA_OFFSET))(this, GNHEHOMMHPB);
	}

	static ::HIIMKPAKPLJ* JPNBJGJMKGC(::MoleMole::HollowChessboard::HollowChessboardUID GNHEHOMMHPB, ::MoleMole::HollowChessboard::HollowCell CKPGOKHECCH)
	{
		return ((::HIIMKPAKPLJ*(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + GPGILDCPHPK_JPNBJGJMKGC_OFFSET))(GNHEHOMMHPB, CKPGOKHECCH);
	}
};
