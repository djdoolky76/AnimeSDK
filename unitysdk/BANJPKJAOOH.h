#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEventType.h"
#include "unitysdk/System/Object.h"
class ECIIEBFKNMJ;
class GALEONNOFFJ;
class HAJDFCHFBGN;
class KAKADGHNMFK;
class LMJPODEEGKK;
namespace RPG::GameCore { class BaseChimeraDuelNode; }
namespace RPG::GameCore { class BaseChimeraDuelSaveEntitySelectionConfig; }
namespace RPG::GameCore { class ChimeraDuelBranchNode; }
namespace RPG::GameCore { class ChimeraDuelModifier; }
namespace RPG::GameCore { class ChimeraDuelModifierContainerNode; }
namespace RPG::GameCore { class ChimeraDuelNodeContainer; }
namespace RPG::GameCore { class ChimeraDuelParallelNode; }
namespace RPG::GameCore { class ChimeraDuelProbabilityNode; }
namespace RPG::GameCore { class ChimeraDuelRepeatNode; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BANJPKJAOOH_ACADLCONMIH_OFFSET UNITYSDK_OFFSET(0x15E780E0)
#define BANJPKJAOOH_AFNBGKICCEK_OFFSET UNITYSDK_OFFSET(0x15E76A10)
#define BANJPKJAOOH_ANMOOJGJOIG_OFFSET UNITYSDK_OFFSET(0x15E76A70)
#define BANJPKJAOOH_CKDJFJPPHMO_OFFSET UNITYSDK_OFFSET(0x15E78210)
#define BANJPKJAOOH_CTOR_OFFSET UNITYSDK_OFFSET(0x15E75030)
#define BANJPKJAOOH_DGFAHMOGNHL_OFFSET UNITYSDK_OFFSET(0x15E78B20)
#define BANJPKJAOOH_DGFIGNHNFIA_OFFSET UNITYSDK_OFFSET(0x15E795F0)
#define BANJPKJAOOH_DOAMDCEBJGC_OFFSET UNITYSDK_OFFSET(0x15E76060)
#define BANJPKJAOOH_DOIDDCJKPNG_OFFSET UNITYSDK_OFFSET(0x15E78EA0)
#define BANJPKJAOOH_EBJIGPOLGMC_OFFSET UNITYSDK_OFFSET(0x15E79120)
#define BANJPKJAOOH_EOKEONMHAII_OFFSET UNITYSDK_OFFSET(0x15E79CB0)
#define BANJPKJAOOH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15E75690)
#define BANJPKJAOOH_FFPGBIFHHKB_OFFSET UNITYSDK_OFFSET(0x15E79790)
#define BANJPKJAOOH_GMDODLPDGKA_OFFSET UNITYSDK_OFFSET(0x15E77730)
#define BANJPKJAOOH_HFEPPDCOAJL_OFFSET UNITYSDK_OFFSET(0x15E75A70)
#define BANJPKJAOOH_HOLJPHEMDNE_OFFSET UNITYSDK_OFFSET(0x15E78570)
#define BANJPKJAOOH_ICFIJEDMOFK_OFFSET UNITYSDK_OFFSET(0x15E75900)
#define BANJPKJAOOH_JMDEFKIHFPK_OFFSET UNITYSDK_OFFSET(0x15E79B10)
#define BANJPKJAOOH_LIKEFKJMLLA_OFFSET UNITYSDK_OFFSET(0x15E78430)
#define BANJPKJAOOH_MAPFMAJBDHJ_OFFSET UNITYSDK_OFFSET(0x15E79400)
#define BANJPKJAOOH_MDHGMKGAMKJ_OFFSET UNITYSDK_OFFSET(0x15E77560)
#define BANJPKJAOOH_MFHKBBDMBAE_OFFSET UNITYSDK_OFFSET(0x15E79EB0)
#define BANJPKJAOOH_NLILLKHEHLB_OFFSET UNITYSDK_OFFSET(0x15E78A80)
#define BANJPKJAOOH_OCBJIOLKHFI_OFFSET UNITYSDK_OFFSET(0x15E76800)
#define BANJPKJAOOH_PADMFHNKPAE_OFFSET UNITYSDK_OFFSET(0x15E771D0)

	class BANJPKJAOOH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelEventType>* PMBACELLNND; // 0x10
		::LMJPODEEGKK* FKINCGODJEP; // 0x18
		::ECIIEBFKNMJ* PDENFEFCAGN; // 0x20
		::System::Void _ctor(::LMJPODEEGKK* a1, ::ECIIEBFKNMJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LMJPODEEGKK*, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + BANJPKJAOOH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANJPKJAOOH_EXECUTE_OFFSET))(this);
		}

		::System::Void ICFIJEDMOFK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANJPKJAOOH_ICFIJEDMOFK_OFFSET))(this, a1);
		}

		::System::Void HFEPPDCOAJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANJPKJAOOH_HFEPPDCOAJL_OFFSET))(this);
		}

		::KAKADGHNMFK* DOAMDCEBJGC()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANJPKJAOOH_DOAMDCEBJGC_OFFSET))(this);
		}

		::System::Int32 ANMOOJGJOIG(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + BANJPKJAOOH_ANMOOJGJOIG_OFFSET))(this, a1);
		}

		::System::Void OCBJIOLKHFI(::KAKADGHNMFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + BANJPKJAOOH_OCBJIOLKHFI_OFFSET))(this, a1);
		}

		::System::Void ACADLCONMIH(::KAKADGHNMFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + BANJPKJAOOH_ACADLCONMIH_OFFSET))(this, a1);
		}

		::System::Void GMDODLPDGKA(::KAKADGHNMFK* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::System::Action*))((::PBYTE)hIl2Cpp + BANJPKJAOOH_GMDODLPDGKA_OFFSET))(this, a1, a2);
		}

		::System::Boolean MDHGMKGAMKJ(::KAKADGHNMFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + BANJPKJAOOH_MDHGMKGAMKJ_OFFSET))(this, a1);
		}

		::System::Boolean PADMFHNKPAE(::KAKADGHNMFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + BANJPKJAOOH_PADMFHNKPAE_OFFSET))(this, a1);
		}

		::System::Boolean CKDJFJPPHMO(::KAKADGHNMFK* a1, ::HAJDFCHFBGN* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAKADGHNMFK*, ::HAJDFCHFBGN*))((::PBYTE)hIl2Cpp + BANJPKJAOOH_CKDJFJPPHMO_OFFSET))(this, a1, a2);
		}

		::System::Boolean DOIDDCJKPNG(::HAJDFCHFBGN* a1, ::RPG::GameCore::ChimeraDuelModifier* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::RPG::GameCore::ChimeraDuelModifier*))((::PBYTE)hIl2Cpp + BANJPKJAOOH_DOIDDCJKPNG_OFFSET))(this, a1, a2);
		}

		::System::Boolean DGFAHMOGNHL(::KAKADGHNMFK* a1, ::RPG::GameCore::ChimeraDuelNodeContainer* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAKADGHNMFK*, ::RPG::GameCore::ChimeraDuelNodeContainer*))((::PBYTE)hIl2Cpp + BANJPKJAOOH_DGFAHMOGNHL_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>* LIKEFKJMLLA(::KAKADGHNMFK* a1, ::HAJDFCHFBGN* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>*(*)(::PVOID, ::KAKADGHNMFK*, ::HAJDFCHFBGN*))((::PBYTE)hIl2Cpp + BANJPKJAOOH_LIKEFKJMLLA_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>* EBJIGPOLGMC(::KAKADGHNMFK* a1, ::HAJDFCHFBGN* a2, ::Il2CppArray<::RPG::GameCore::BaseChimeraDuelNode*>* a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>*(*)(::PVOID, ::KAKADGHNMFK*, ::HAJDFCHFBGN*, ::Il2CppArray<::RPG::GameCore::BaseChimeraDuelNode*>*))((::PBYTE)hIl2Cpp + BANJPKJAOOH_EBJIGPOLGMC_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>* MAPFMAJBDHJ(::KAKADGHNMFK* a1, ::HAJDFCHFBGN* a2, ::RPG::GameCore::ChimeraDuelModifierContainerNode* a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>*(*)(::PVOID, ::KAKADGHNMFK*, ::HAJDFCHFBGN*, ::RPG::GameCore::ChimeraDuelModifierContainerNode*))((::PBYTE)hIl2Cpp + BANJPKJAOOH_MAPFMAJBDHJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>* EOKEONMHAII(::KAKADGHNMFK* a1, ::HAJDFCHFBGN* a2, ::RPG::GameCore::ChimeraDuelProbabilityNode* a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>*(*)(::PVOID, ::KAKADGHNMFK*, ::HAJDFCHFBGN*, ::RPG::GameCore::ChimeraDuelProbabilityNode*))((::PBYTE)hIl2Cpp + BANJPKJAOOH_EOKEONMHAII_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>* DGFIGNHNFIA(::KAKADGHNMFK* a1, ::HAJDFCHFBGN* a2, ::RPG::GameCore::ChimeraDuelBranchNode* a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>*(*)(::PVOID, ::KAKADGHNMFK*, ::HAJDFCHFBGN*, ::RPG::GameCore::ChimeraDuelBranchNode*))((::PBYTE)hIl2Cpp + BANJPKJAOOH_DGFIGNHNFIA_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>* FFPGBIFHHKB(::KAKADGHNMFK* a1, ::HAJDFCHFBGN* a2, ::RPG::GameCore::ChimeraDuelRepeatNode* a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>*(*)(::PVOID, ::KAKADGHNMFK*, ::HAJDFCHFBGN*, ::RPG::GameCore::ChimeraDuelRepeatNode*))((::PBYTE)hIl2Cpp + BANJPKJAOOH_FFPGBIFHHKB_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ChimeraDuelModifier*>* JMDEFKIHFPK(::KAKADGHNMFK* a1, ::HAJDFCHFBGN* a2, ::RPG::GameCore::ChimeraDuelParallelNode* a3)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ChimeraDuelModifier*>*(*)(::PVOID, ::KAKADGHNMFK*, ::HAJDFCHFBGN*, ::RPG::GameCore::ChimeraDuelParallelNode*))((::PBYTE)hIl2Cpp + BANJPKJAOOH_JMDEFKIHFPK_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig*>* NLILLKHEHLB(::KAKADGHNMFK* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig*>*(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + BANJPKJAOOH_NLILLKHEHLB_OFFSET))(this, a1);
		}

		::System::Void HOLJPHEMDNE(::KAKADGHNMFK* a1, ::HAJDFCHFBGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::HAJDFCHFBGN*))((::PBYTE)hIl2Cpp + BANJPKJAOOH_HOLJPHEMDNE_OFFSET))(this, a1, a2);
		}

		::System::Void MFHKBBDMBAE(::KAKADGHNMFK* a1, ::KAKADGHNMFK* a2, ::HAJDFCHFBGN* a3, ::KAKADGHNMFK* a4)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::KAKADGHNMFK*, ::HAJDFCHFBGN*, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + BANJPKJAOOH_MFHKBBDMBAE_OFFSET))(this, a1, a2, a3, a4);
		}

		::GALEONNOFFJ* AFNBGKICCEK()
		{
			return ((::GALEONNOFFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANJPKJAOOH_AFNBGKICCEK_OFFSET))(this);
		}

	};
