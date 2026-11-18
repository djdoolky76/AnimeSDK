#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPPLDKIOIBD.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDJMJLHFMKJ_GGAEIBBAFKN_OFFSET UNITYSDK_OFFSET(0x16B660A0)
#define NDJMJLHFMKJ_IIAAMALOPFN_OFFSET UNITYSDK_OFFSET(0x16B65D80)
#define NDJMJLHFMKJ_LKDAIEDBCPL_OFFSET UNITYSDK_OFFSET(0x16B66240)
#define NDJMJLHFMKJ_OCLMBAACGAM_OFFSET UNITYSDK_OFFSET(0x16B668C0)
#define NDJMJLHFMKJ_OMFKLCPJINE_OFFSET UNITYSDK_OFFSET(0x16B666A0)
#define NDJMJLHFMKJ_PHKNLEPIGBF_OFFSET UNITYSDK_OFFSET(0x16B66620)
#define NDJMJLHFMKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16B65FC0)

inline static constexpr unsigned int NDJMJLHFMKJ_TypeDefinitionIndex = 39782;

class NDJMJLHFMKJ : public ::HPPLDKIOIBD
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*>* FALGCLAPJLE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJMJLHFMKJ__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* IIAAMALOPFN()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJMJLHFMKJ_IIAAMALOPFN_OFFSET))(this);
	}

	::System::Void GGAEIBBAFKN(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + NDJMJLHFMKJ_GGAEIBBAFKN_OFFSET))(this, KECKGDFIALJ);
	}

	::MoleMole::HollowChessboard::HollowEntity* LKDAIEDBCPL(::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + NDJMJLHFMKJ_LKDAIEDBCPL_OFFSET))(this, BONICGBNDAA, EKPEBNCLJPM);
	}

	::System::Void OMFKLCPJINE(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + NDJMJLHFMKJ_OMFKLCPJINE_OFFSET))(this, EKPEBNCLJPM);
	}

	::MoleMole::HollowChessboard::HollowEntity* PHKNLEPIGBF()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJMJLHFMKJ_PHKNLEPIGBF_OFFSET))(this);
	}

	::System::Boolean OCLMBAACGAM(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*&))((::PBYTE)hIl2Cpp + NDJMJLHFMKJ_OCLMBAACGAM_OFFSET))(this, EKPEBNCLJPM, IGAAKDOIPNN);
	}
};
