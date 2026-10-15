#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionItemType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class DEKDEPEBHNC;
class EBBJGCKIBAA;
class GEDMHFPPBHN;
class LODCPPPMJJG;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define LODCPPPMJJG_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xB7EF1D0)
#define LODCPPPMJJG_AGJAHIKDIPA_OFFSET UNITYSDK_OFFSET(0xB7EF860)
#define LODCPPPMJJG_APKIODKJKHL_OFFSET UNITYSDK_OFFSET(0xB7EF780)
#define LODCPPPMJJG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB7EE930)
#define LODCPPPMJJG_CENFKHIIPCN_OFFSET UNITYSDK_OFFSET(0xB7EF8E0)
#define LODCPPPMJJG_CMCPDEDILPC_OFFSET UNITYSDK_OFFSET(0xB7F0100)
#define LODCPPPMJJG_CPJGKLEFAHC_OFFSET UNITYSDK_OFFSET(0xB7EF340)
#define LODCPPPMJJG_CTOR_OFFSET UNITYSDK_OFFSET(0xB7EEBF0)
#define LODCPPPMJJG_DMFFGDIHMAB_OFFSET UNITYSDK_OFFSET(0xB7F0670)
#define LODCPPPMJJG_EADOPLNBMML_OFFSET UNITYSDK_OFFSET(0xB7EFB20)
#define LODCPPPMJJG_EDEIFPCNGIK_OFFSET UNITYSDK_OFFSET(0xB7F04D0)
#define LODCPPPMJJG_EDIOKNIHPOB_OFFSET UNITYSDK_OFFSET(0xB7F01E0)
#define LODCPPPMJJG_EFBMFNOACFA_OFFSET UNITYSDK_OFFSET(0xB7EFAD0)
#define LODCPPPMJJG_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0xB7EEEC0)
#define LODCPPPMJJG_FGNDGLAEFBO_OFFSET UNITYSDK_OFFSET(0xB7F0710)
#define LODCPPPMJJG_FMDKMOMLCGH_OFFSET UNITYSDK_OFFSET(0xB7EFD20)
#define LODCPPPMJJG_GDPHLPICABI_OFFSET UNITYSDK_OFFSET(0xB7EF5B0)
#define LODCPPPMJJG_GET_CURRENTTURNLIST_OFFSET UNITYSDK_OFFSET(0xB7F0880)
#define LODCPPPMJJG_HPBNJPHKKGO_OFFSET UNITYSDK_OFFSET(0xB7EF710)
#define LODCPPPMJJG_IKCEPANFDMH_OFFSET UNITYSDK_OFFSET(0xB7EF130)
#define LODCPPPMJJG_IKEADJKBMNG_OFFSET UNITYSDK_OFFSET(0xB7EFA40)
#define LODCPPPMJJG_IKKNIEAEPLP_OFFSET UNITYSDK_OFFSET(0xB7F05C0)
#define LODCPPPMJJG_JHMNNFBAJFM_OFFSET UNITYSDK_OFFSET(0xB7EFF90)
#define LODCPPPMJJG_KBIFBENFFIP_OFFSET UNITYSDK_OFFSET(0xB7F02E0)
#define LODCPPPMJJG_KMAJLAMIIGC_OFFSET UNITYSDK_OFFSET(0xB7EFDA0)
#define LODCPPPMJJG_LBDAGKKHEPF_OFFSET UNITYSDK_OFFSET(0xB7F0610)
#define LODCPPPMJJG_LOLEOPDAKBL_OFFSET UNITYSDK_OFFSET(0xB7EF990)
#define LODCPPPMJJG_MCNAPBIKMJK_OFFSET UNITYSDK_OFFSET(0xB7EFCD0)
#define LODCPPPMJJG_OCBGMPIANFB_OFFSET UNITYSDK_OFFSET(0xB7EF520)
#define LODCPPPMJJG_OEGPFELJIFD_OFFSET UNITYSDK_OFFSET(0xB7EFBF0)
#define LODCPPPMJJG_OGJCOGCLLGB_OFFSET UNITYSDK_OFFSET(0xB7EFF00)
#define LODCPPPMJJG_OMPGOFDOMKF_OFFSET UNITYSDK_OFFSET(0xB7EF3F0)
#define LODCPPPMJJG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB7EF280)
#define LODCPPPMJJG_PAHKLMMPFLD_OFFSET UNITYSDK_OFFSET(0xB7F0050)
#define LODCPPPMJJG_PPDAGPPKEJD_OFFSET UNITYSDK_OFFSET(0xB7EEF80)
#define LODCPPPMJJG_SET_CURRENTTURNLIST_OFFSET UNITYSDK_OFFSET(0xB7F0890)

inline static constexpr unsigned int LODCPPPMJJG_TypeDefinitionIndex = 71308;

	class LODCPPPMJJG : public ::System::Object
	{
	public:
		::EBBJGCKIBAA* AEBBPNCLBDD; // 0x10
		::Il2CppArray<::System::Func_3<::GEDMHFPPBHN*, ::GEDMHFPPBHN*, ::System::Int32>*>* MJKHBCNKCBI; // 0x18
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::DEKDEPEBHNC*>* IIPLKNINIFN; // 0x20
		::GEDMHFPPBHN* CBAPAEPPPNA; // 0x28
		::System::Collections::Generic::Dictionary_2<::DEKDEPEBHNC*, ::System::Int32>* INIHIOCLIJB; // 0x30
		::System::Collections::Generic::List_1<::GEDMHFPPBHN*>* _CurrentTurnList_k__BackingField; // 0x38
		::RPG::GameCore::TurnBasedGameMode* BHJDJDPLCLP; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ActionItemType, ::System::Int32>* JOOLFOKHODK; // 0x48
		::System::Nullable_1<::System::Int32> GOJLBBNPHKM; // 0x50
		::System::Int32 NHCNGMOCABD; // 0x58
		::System::Boolean DCEPPGFKEIN; // 0x5C
		// static const ::System::Object AACIHBHMFCE; // 0x0
		// static const ::System::String* FJAPAADCDHC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LODCPPPMJJG_CTOR_OFFSET))(this);
		}

		static ::LODCPPPMJJG* BPLPBPMEODA(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::LODCPPPMJJG*(*)(::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + LODCPPPMJJG_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void EGFCFCBHJJP(::GEDMHFPPBHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + LODCPPPMJJG_EGFCFCBHJJP_OFFSET))(this, a1);
		}

		::System::Boolean IKCEPANFDMH(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LODCPPPMJJG_IKCEPANFDMH_OFFSET))(this, a1);
		}

		::System::Boolean AALCFBOGFKP(::GEDMHFPPBHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + LODCPPPMJJG_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Collections::Generic::List_1<::GEDMHFPPBHN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GEDMHFPPBHN*>*))((::PBYTE)hIl2Cpp + LODCPPPMJJG_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void PPDAGPPKEJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LODCPPPMJJG_PPDAGPPKEJD_OFFSET))(this);
		}

		::System::Void GDPHLPICABI(::GEDMHFPPBHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + LODCPPPMJJG_GDPHLPICABI_OFFSET))(this, a1);
		}

		::GEDMHFPPBHN* APKIODKJKHL(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2)
		{
			return ((::GEDMHFPPBHN*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + LODCPPPMJJG_APKIODKJKHL_OFFSET))(this, a1, a2);
		}

		::System::Boolean AGJAHIKDIPA(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + LODCPPPMJJG_AGJAHIKDIPA_OFFSET))(this, a1, a2);
		}

		::System::Boolean CENFKHIIPCN(::DEKDEPEBHNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + LODCPPPMJJG_CENFKHIIPCN_OFFSET))(this, a1);
		}

		::System::Boolean LOLEOPDAKBL(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + LODCPPPMJJG_LOLEOPDAKBL_OFFSET))(this, a1, a2);
		}

		::System::Void IKEADJKBMNG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LODCPPPMJJG_IKEADJKBMNG_OFFSET))(this, a1);
		}

		::System::Void EFBMFNOACFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LODCPPPMJJG_EFBMFNOACFA_OFFSET))(this);
		}

		::System::Boolean HPBNJPHKKGO(::GEDMHFPPBHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + LODCPPPMJJG_HPBNJPHKKGO_OFFSET))(this, a1);
		}

		::System::Int32 EADOPLNBMML(::GEDMHFPPBHN* a1, ::GEDMHFPPBHN* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::GEDMHFPPBHN*, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + LODCPPPMJJG_EADOPLNBMML_OFFSET))(this, a1, a2);
		}

		::System::Int32 OEGPFELJIFD(::GEDMHFPPBHN* a1, ::GEDMHFPPBHN* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::GEDMHFPPBHN*, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + LODCPPPMJJG_OEGPFELJIFD_OFFSET))(this, a1, a2);
		}

		::System::Boolean MCNAPBIKMJK(::GEDMHFPPBHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + LODCPPPMJJG_MCNAPBIKMJK_OFFSET))(this, a1);
		}

		::System::Int32 FMDKMOMLCGH(::GEDMHFPPBHN* a1, ::GEDMHFPPBHN* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::GEDMHFPPBHN*, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + LODCPPPMJJG_FMDKMOMLCGH_OFFSET))(this, a1, a2);
		}

		::System::Int32 OGJCOGCLLGB(::GEDMHFPPBHN* a1, ::GEDMHFPPBHN* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::GEDMHFPPBHN*, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + LODCPPPMJJG_OGJCOGCLLGB_OFFSET))(this, a1, a2);
		}

		::System::Int32 JHMNNFBAJFM(::RPG::Client::ActionItemType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + LODCPPPMJJG_JHMNNFBAJFM_OFFSET))(this, a1);
		}

		::System::Int32 PAHKLMMPFLD(::GEDMHFPPBHN* a1, ::GEDMHFPPBHN* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::GEDMHFPPBHN*, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + LODCPPPMJJG_PAHKLMMPFLD_OFFSET))(this, a1, a2);
		}

		::System::Boolean CMCPDEDILPC(::GEDMHFPPBHN* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEDMHFPPBHN*, ::System::Int32))((::PBYTE)hIl2Cpp + LODCPPPMJJG_CMCPDEDILPC_OFFSET))(this, a1, a2);
		}

		::System::Void CPJGKLEFAHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LODCPPPMJJG_CPJGKLEFAHC_OFFSET))(this);
		}

		::System::Void OMPGOFDOMKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LODCPPPMJJG_OMPGOFDOMKF_OFFSET))(this);
		}

		::System::Void OCBGMPIANFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LODCPPPMJJG_OCBGMPIANFB_OFFSET))(this);
		}

		::GEDMHFPPBHN* KBIFBENFFIP()
		{
			return ((::GEDMHFPPBHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LODCPPPMJJG_KBIFBENFFIP_OFFSET))(this);
		}

		::GEDMHFPPBHN* EDEIFPCNGIK()
		{
			return ((::GEDMHFPPBHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LODCPPPMJJG_EDEIFPCNGIK_OFFSET))(this);
		}

		::System::Int32 EDIOKNIHPOB(::DEKDEPEBHNC* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + LODCPPPMJJG_EDIOKNIHPOB_OFFSET))(this, a1);
		}

		::System::Boolean IKKNIEAEPLP(::DEKDEPEBHNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + LODCPPPMJJG_IKKNIEAEPLP_OFFSET))(this, a1);
		}

		::System::Boolean DMFFGDIHMAB(::DEKDEPEBHNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + LODCPPPMJJG_DMFFGDIHMAB_OFFSET))(this, a1);
		}

		static ::System::Int32 LBDAGKKHEPF(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + LODCPPPMJJG_LBDAGKKHEPF_OFFSET))(a1);
		}

		::System::Int32 KMAJLAMIIGC(::GEDMHFPPBHN* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + LODCPPPMJJG_KMAJLAMIIGC_OFFSET))(this, a1);
		}

		::GEDMHFPPBHN* FGNDGLAEFBO()
		{
			return ((::GEDMHFPPBHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LODCPPPMJJG_FGNDGLAEFBO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::GEDMHFPPBHN*>* get_CurrentTurnList()
		{
			return ((::System::Collections::Generic::List_1<::GEDMHFPPBHN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LODCPPPMJJG_GET_CURRENTTURNLIST_OFFSET))(this);
		}

		::System::Void set_CurrentTurnList(::System::Collections::Generic::List_1<::GEDMHFPPBHN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GEDMHFPPBHN*>*))((::PBYTE)hIl2Cpp + LODCPPPMJJG_SET_CURRENTTURNLIST_OFFSET))(this, a1);
		}

	};
