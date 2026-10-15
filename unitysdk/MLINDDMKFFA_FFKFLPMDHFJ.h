#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Nullable_1.h"
class AMFNPJFKAOH;
class CELAKJDDDOH;
class DBHGOLFACFL;
class DBHGOLFACFL_KHDEKEEMOCE;
class JOOHEPGEHNK;
class KCJNGDLDKFG;
class MLINDDMKFFA;
class MPEOLIBNMGE;
class NDCLBAKBEIP;
class NDFBOPJIKAG;
class OJCGAGMLEGN;
class PJPPGJEDCOG;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentTreeEntranceViewModel_Factory; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MLINDDMKFFA_FFKFLPMDHFJ_BLAFOEHBHFI_OFFSET UNITYSDK_OFFSET(0xB9AFFD0)
#define MLINDDMKFFA_FFKFLPMDHFJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB9AF3C0)
#define MLINDDMKFFA_FFKFLPMDHFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB9AF380)
#define MLINDDMKFFA_FFKFLPMDHFJ_EBPJNFPNBMJ_OFFSET UNITYSDK_OFFSET(0xB9AF570)
#define MLINDDMKFFA_FFKFLPMDHFJ_MPDJHBPCMDM_OFFSET UNITYSDK_OFFSET(0xB9AFCF0)
#define MLINDDMKFFA_FFKFLPMDHFJ___CREATEREQUIREMENTINFOS_B__11_0_OFFSET UNITYSDK_OFFSET(0xB9B02C0)

inline static constexpr unsigned int MLINDDMKFFA_FFKFLPMDHFJ_TypeDefinitionIndex = 79639;

	class MLINDDMKFFA_FFKFLPMDHFJ : public ::System::Object
	{
	public:
		::KCJNGDLDKFG* JGJPOOFDENC; // 0x10
		::DBHGOLFACFL_KHDEKEEMOCE* DBGBKJCANHM; // 0x18
		::AMFNPJFKAOH* BDLGFMBOOGC; // 0x20
		::MPEOLIBNMGE* MOOEPGBJJAF; // 0x28
		::OJCGAGMLEGN* EACKIMBKBJF; // 0x30
		::JOOHEPGEHNK* PONKAEHCHGF; // 0x38
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel_Factory* ADFPAJCDEPN; // 0x40
		::NDCLBAKBEIP* AFKPGPDBMKH; // 0x48
		::System::Void _ctor(::MPEOLIBNMGE* a1, ::AMFNPJFKAOH* a2, ::OJCGAGMLEGN* a3, ::NDCLBAKBEIP* a4, ::JOOHEPGEHNK* a5, ::DBHGOLFACFL_KHDEKEEMOCE* a6, ::KCJNGDLDKFG* a7, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel_Factory* a8)
		{
			return ((::System::Void(*)(::PVOID, ::MPEOLIBNMGE*, ::AMFNPJFKAOH*, ::OJCGAGMLEGN*, ::NDCLBAKBEIP*, ::JOOHEPGEHNK*, ::DBHGOLFACFL_KHDEKEEMOCE*, ::KCJNGDLDKFG*, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel_Factory*))((::PBYTE)hIl2Cpp + MLINDDMKFFA_FFKFLPMDHFJ_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::MLINDDMKFFA* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::MLINDDMKFFA*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLINDDMKFFA_FFKFLPMDHFJ_BPLPBPMEODA_OFFSET))(this, a1);
		}

		::System::Void BLAFOEHBHFI(::MLINDDMKFFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLINDDMKFFA*))((::PBYTE)hIl2Cpp + MLINDDMKFFA_FFKFLPMDHFJ_BLAFOEHBHFI_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::CELAKJDDDOH*>* EBPJNFPNBMJ(::PJPPGJEDCOG* a1)
		{
			return ((::System::Collections::Generic::List_1<::CELAKJDDDOH*>*(*)(::PVOID, ::PJPPGJEDCOG*))((::PBYTE)hIl2Cpp + MLINDDMKFFA_FFKFLPMDHFJ_EBPJNFPNBMJ_OFFSET))(this, a1);
		}

		::DBHGOLFACFL* MPDJHBPCMDM(::System::Nullable_1<::System::UInt32> a1)
		{
			return ((::DBHGOLFACFL*(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + MLINDDMKFFA_FFKFLPMDHFJ_MPDJHBPCMDM_OFFSET))(this, a1);
		}

		::NDFBOPJIKAG* __CreateRequirementInfos_b__11_0(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
		{
			return ((::NDFBOPJIKAG*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + MLINDDMKFFA_FFKFLPMDHFJ___CREATEREQUIREMENTINFOS_B__11_0_OFFSET))(this, a1);
		}

	};
