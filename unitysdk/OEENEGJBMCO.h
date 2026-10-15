#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DPGIPECFINI.h"
#include "unitysdk/IOKPMIHIPGM.h"
#include "unitysdk/LBPACBKOGLF.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
class DEKDEPEBHNC;
class EJJAGEEGEKA;
class EKFMIDBJDIA;
class ENGBNDIPDJL;
class JIPCKPDMOCH;
class LCJPDOOLBEC;
class LNGGBHCLAIG;
class NEPOAOEADBE;
class ODCOIGDOFGH;
class PHKFMKDHNBO;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OEENEGJBMCO_AALDFFHJHGP_OFFSET UNITYSDK_OFFSET(0xBE214C0)
#define OEENEGJBMCO_ALPNAAELBFC_OFFSET UNITYSDK_OFFSET(0xBE22D10)
#define OEENEGJBMCO_APEPKNLOLIA_OFFSET UNITYSDK_OFFSET(0xBE22680)
#define OEENEGJBMCO_BEANEKEHPPG_OFFSET UNITYSDK_OFFSET(0xBE22F40)
#define OEENEGJBMCO_BEDELNKEKPA_OFFSET UNITYSDK_OFFSET(0xBE23020)
#define OEENEGJBMCO_BEDNMBHKOFG_OFFSET UNITYSDK_OFFSET(0xBE21E30)
#define OEENEGJBMCO_BHDIGADBLBE_OFFSET UNITYSDK_OFFSET(0xBE20190)
#define OEENEGJBMCO_BKECKPFADCH_OFFSET UNITYSDK_OFFSET(0xBE220E0)
#define OEENEGJBMCO_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE24180)
#define OEENEGJBMCO_CDNHJDBOIKO_OFFSET UNITYSDK_OFFSET(0xBE20470)
#define OEENEGJBMCO_CIGGLCBGCAB_OFFSET UNITYSDK_OFFSET(0xBE20310)
#define OEENEGJBMCO_CKLDBHDCBHA_OFFSET UNITYSDK_OFFSET(0xBE23A50)
#define OEENEGJBMCO_CTOR_OFFSET UNITYSDK_OFFSET(0xBE1EF40)
#define OEENEGJBMCO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE1F2A0)
#define OEENEGJBMCO_DJANBHDPOOJ_OFFSET UNITYSDK_OFFSET(0xBE233C0)
#define OEENEGJBMCO_DPHLAHEFKFD_OFFSET UNITYSDK_OFFSET(0xBE21E90)
#define OEENEGJBMCO_EDACHOOCCHG_OFFSET UNITYSDK_OFFSET(0xBE20CD0)
#define OEENEGJBMCO_EGCMAECGHML_OFFSET UNITYSDK_OFFSET(0xBE22460)
#define OEENEGJBMCO_EIJHOEGDDMF_OFFSET UNITYSDK_OFFSET(0xBE24060)
#define OEENEGJBMCO_EJNDGOHFDCK_OFFSET UNITYSDK_OFFSET(0xBE22ED0)
#define OEENEGJBMCO_EKHJFBHPMDM_OFFSET UNITYSDK_OFFSET(0xBE20C30)
#define OEENEGJBMCO_EKKAFIMHDMD_OFFSET UNITYSDK_OFFSET(0xBE20D30)
#define OEENEGJBMCO_EKPBIKJGEEP_OFFSET UNITYSDK_OFFSET(0xBE20410)
#define OEENEGJBMCO_EMHKJNLAMCN_OFFSET UNITYSDK_OFFSET(0xBE22830)
#define OEENEGJBMCO_EPEFODGJHPC_OFFSET UNITYSDK_OFFSET(0xBE20900)
#define OEENEGJBMCO_FBNFBCOKMLL_OFFSET UNITYSDK_OFFSET(0xBE21430)
#define OEENEGJBMCO_FBOAHIFADDF_OFFSET UNITYSDK_OFFSET(0xBE1F5F0)
#define OEENEGJBMCO_FCIBACMHGCM_OFFSET UNITYSDK_OFFSET(0xBE228E0)
#define OEENEGJBMCO_FIDLHCDPGAG_OFFSET UNITYSDK_OFFSET(0xBE232E0)
#define OEENEGJBMCO_FINOMFJIFCH_OFFSET UNITYSDK_OFFSET(0xBE234F0)
#define OEENEGJBMCO_GAIHEMDNLGH_OFFSET UNITYSDK_OFFSET(0xBE20700)
#define OEENEGJBMCO_GET_ELATIONPOINTMANAGER_OFFSET UNITYSDK_OFFSET(0xBE24040)
#define OEENEGJBMCO_GET_ELATIONPREVIEWCHARACTERDATA_OFFSET UNITYSDK_OFFSET(0xBE24160)
#define OEENEGJBMCO_GET_ELATIONSTATISTICS_OFFSET UNITYSDK_OFFSET(0xBE24140)
#define OEENEGJBMCO_GET_ELATIONTIMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xBE24120)
#define OEENEGJBMCO_HHCJJGEIDLK_OFFSET UNITYSDK_OFFSET(0xBE23580)
#define OEENEGJBMCO_HKLHKFOPDLM_OFFSET UNITYSDK_OFFSET(0xBE22580)
#define OEENEGJBMCO_HLJFGLAGJCJ_OFFSET UNITYSDK_OFFSET(0xBE231E0)
#define OEENEGJBMCO_HOOFCEAJENP_OFFSET UNITYSDK_OFFSET(0xBE218A0)
#define OEENEGJBMCO_HPFELHPMKFG_OFFSET UNITYSDK_OFFSET(0xBE211C0)
#define OEENEGJBMCO_IKIIDEHCNLI_OFFSET UNITYSDK_OFFSET(0xBE22150)
#define OEENEGJBMCO_IMFAJJKLKMK_OFFSET UNITYSDK_OFFSET(0xBE23900)
#define OEENEGJBMCO_IMNNMBPICGN_OFFSET UNITYSDK_OFFSET(0xBE23ED0)
#define OEENEGJBMCO_KPIOEJOPIFM_OFFSET UNITYSDK_OFFSET(0xBE20830)
#define OEENEGJBMCO_LBMGIDNGBKN_OFFSET UNITYSDK_OFFSET(0xBE22240)
#define OEENEGJBMCO_LIKOCFOJCFD_OFFSET UNITYSDK_OFFSET(0xBE23850)
#define OEENEGJBMCO_MDIBPIJJIPE_OFFSET UNITYSDK_OFFSET(0xBE23C40)
#define OEENEGJBMCO_MNDHMNAOOLP_OFFSET UNITYSDK_OFFSET(0xBE1F780)
#define OEENEGJBMCO_NBFBHPBDIJN_OFFSET UNITYSDK_OFFSET(0xBE23DA0)
#define OEENEGJBMCO_NFAFAJKMDKG_OFFSET UNITYSDK_OFFSET(0xBE23730)
#define OEENEGJBMCO_OBBKMHIAOJD_OFFSET UNITYSDK_OFFSET(0xBE23AA0)
#define OEENEGJBMCO_OMLEBJDHBEP_OFFSET UNITYSDK_OFFSET(0xBE1F7E0)
#define OEENEGJBMCO_PFGBHJCONAA_OFFSET UNITYSDK_OFFSET(0xBE20130)
#define OEENEGJBMCO_PPHKIFKEIMO_OFFSET UNITYSDK_OFFSET(0xBE22C30)
#define OEENEGJBMCO_SET_ELATIONPOINTMANAGER_OFFSET UNITYSDK_OFFSET(0xBE24050)
#define OEENEGJBMCO_SET_ELATIONPREVIEWCHARACTERDATA_OFFSET UNITYSDK_OFFSET(0xBE24170)
#define OEENEGJBMCO_SET_ELATIONSTATISTICS_OFFSET UNITYSDK_OFFSET(0xBE24150)
#define OEENEGJBMCO_SET_ELATIONTIMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xBE24130)

inline static constexpr unsigned int OEENEGJBMCO_TypeDefinitionIndex = 56051;

	class OEENEGJBMCO : public ::System::Object
	{
	public:
		::RPG::Client::UIController* KJKBKHIINHF; // 0x10
		::LNGGBHCLAIG* HFBOOCBOCCI; // 0x18
		::NEPOAOEADBE* _ElationTimeInstance_k__BackingField; // 0x20
		::RPG::Client::UIController* HPNFDAIHCNI; // 0x28
		::LCJPDOOLBEC* _ElationPointManager_k__BackingField; // 0x30
		::ODCOIGDOFGH* _ElationPreviewCharacterData_k__BackingField; // 0x38
		::EJJAGEEGEKA* EIKLKLFBPME; // 0x40
		::RPG::GameCore::TurnBasedGameMode* JADHLODNADK; // 0x48
		::JIPCKPDMOCH* _ElationStatistics_k__BackingField; // 0x50
		static ::RPG::GameCore::JsonEnum** StaticGet_ICOJIMDHAOH()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "OEENEGJBMCO")->GetStaticField(0x5FA40);
		}

		static ::Il2CppArray<::RPG::GameCore::EntityType>** StaticGet_CONNNJJMJKG()
		{
			return (::Il2CppArray<::RPG::GameCore::EntityType>**)UnitySDK::FromName("", "OEENEGJBMCO")->GetStaticField(0x5FA48);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_GMDPPJIKNIM()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OEENEGJBMCO")->GetStaticField(0x5FA50);
		}

		// static const ::System::Object CDCGHNLKLJC; // 0x0
		// static const ::System::Object CIBNAMAJFIK; // 0x0
		// static const ::System::String* PLCIENDOJFJ; // 0x0
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEENEGJBMCO_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEENEGJBMCO_DISPOSE_OFFSET))(this);
		}

		::System::Void FBOAHIFADDF(::LBPACBKOGLF a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBPACBKOGLF))((::PBYTE)hIl2Cpp + OEENEGJBMCO_FBOAHIFADDF_OFFSET))(this, a1);
		}

		::System::Boolean CIGGLCBGCAB(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OEENEGJBMCO_CIGGLCBGCAB_OFFSET))(this, a1);
		}

		::System::Boolean EKHJFBHPMDM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEENEGJBMCO_EKHJFBHPMDM_OFFSET))(this);
		}

		::System::Boolean EKKAFIMHDMD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEENEGJBMCO_EKKAFIMHDMD_OFFSET))(this);
		}

		::System::Void FBNFBCOKMLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEENEGJBMCO_FBNFBCOKMLL_OFFSET))(this);
		}

		::System::Void HOOFCEAJENP(::PHKFMKDHNBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHKFMKDHNBO*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_HOOFCEAJENP_OFFSET))(this, a1);
		}

		::System::Boolean BKECKPFADCH(::DEKDEPEBHNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_BKECKPFADCH_OFFSET))(this, a1);
		}

		static ::System::Void IKIIDEHCNLI(::System::Collections::Generic::List_1<::PHKFMKDHNBO*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::PHKFMKDHNBO*>*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_IKIIDEHCNLI_OFFSET))(a1);
		}

		::System::Void LBMGIDNGBKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEENEGJBMCO_LBMGIDNGBKN_OFFSET))(this);
		}

		::System::Void EGCMAECGHML(::IOKPMIHIPGM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOKPMIHIPGM))((::PBYTE)hIl2Cpp + OEENEGJBMCO_EGCMAECGHML_OFFSET))(this, a1);
		}

		::System::Void HKLHKFOPDLM(::DPGIPECFINI a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPGIPECFINI))((::PBYTE)hIl2Cpp + OEENEGJBMCO_HKLHKFOPDLM_OFFSET))(this, a1);
		}

		::System::Void APEPKNLOLIA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OEENEGJBMCO_APEPKNLOLIA_OFFSET))(this, a1);
		}

		::System::Void OMLEBJDHBEP(::LBPACBKOGLF a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBPACBKOGLF))((::PBYTE)hIl2Cpp + OEENEGJBMCO_OMLEBJDHBEP_OFFSET))(this, a1);
		}

		::System::Void AALDFFHJHGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEENEGJBMCO_AALDFFHJHGP_OFFSET))(this);
		}

		::NEPOAOEADBE* EMHKJNLAMCN(::LBPACBKOGLF a1)
		{
			return ((::NEPOAOEADBE*(*)(::PVOID, ::LBPACBKOGLF))((::PBYTE)hIl2Cpp + OEENEGJBMCO_EMHKJNLAMCN_OFFSET))(this, a1);
		}

		::System::Boolean PPHKIFKEIMO(::DEKDEPEBHNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_PPHKIFKEIMO_OFFSET))(this, a1);
		}

		::System::Boolean KPIOEJOPIFM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEENEGJBMCO_KPIOEJOPIFM_OFFSET))(this);
		}

		::System::Void ALPNAAELBFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEENEGJBMCO_ALPNAAELBFC_OFFSET))(this);
		}

		::System::Void MNDHMNAOOLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEENEGJBMCO_MNDHMNAOOLP_OFFSET))(this);
		}

		::DEKDEPEBHNC* HPFELHPMKFG(::PHKFMKDHNBO* a1)
		{
			return ((::DEKDEPEBHNC*(*)(::PVOID, ::PHKFMKDHNBO*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_HPFELHPMKFG_OFFSET))(this, a1);
		}

		::System::Void FCIBACMHGCM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OEENEGJBMCO_FCIBACMHGCM_OFFSET))(this, a1);
		}

		::System::Void EPEFODGJHPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEENEGJBMCO_EPEFODGJHPC_OFFSET))(this);
		}

		::System::Void CDNHJDBOIKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEENEGJBMCO_CDNHJDBOIKO_OFFSET))(this);
		}

		::System::Void EJNDGOHFDCK(::ENGBNDIPDJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENGBNDIPDJL*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_EJNDGOHFDCK_OFFSET))(this, a1);
		}

		::System::Boolean BEANEKEHPPG(::ENGBNDIPDJL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENGBNDIPDJL*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_BEANEKEHPPG_OFFSET))(this, a1);
		}

		::System::Boolean BEDELNKEKPA(::DEKDEPEBHNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_BEDELNKEKPA_OFFSET))(this, a1);
		}

		::System::Void HLJFGLAGJCJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_HLJFGLAGJCJ_OFFSET))(this, a1);
		}

		::System::Void DJANBHDPOOJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_DJANBHDPOOJ_OFFSET))(this, a1);
		}

		::System::Void FINOMFJIFCH(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_FINOMFJIFCH_OFFSET))(this, a1);
		}

		::System::Void HHCJJGEIDLK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_HHCJJGEIDLK_OFFSET))(this, a1);
		}

		::System::Void NFAFAJKMDKG(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_NFAFAJKMDKG_OFFSET))(this, a1);
		}

		::System::Boolean LIKOCFOJCFD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_LIKOCFOJCFD_OFFSET))(this, a1);
		}

		::System::Void FIDLHCDPGAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEENEGJBMCO_FIDLHCDPGAG_OFFSET))(this);
		}

		::System::Void GAIHEMDNLGH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_GAIHEMDNLGH_OFFSET))(this, a1);
		}

		::System::Void IMFAJJKLKMK(::System::Nullable_1<::RPG::GameCore::FixPoint> a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_IMFAJJKLKMK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BHDIGADBLBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEENEGJBMCO_BHDIGADBLBE_OFFSET))(this);
		}

		static ::System::Int32 CKLDBHDCBHA(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + OEENEGJBMCO_CKLDBHDCBHA_OFFSET))(a1);
		}

		static ::System::Int32 DPHLAHEFKFD(::PHKFMKDHNBO* a1, ::PHKFMKDHNBO* a2)
		{
			return ((::System::Int32(*)(::PHKFMKDHNBO*, ::PHKFMKDHNBO*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_DPHLAHEFKFD_OFFSET))(a1, a2);
		}

		static ::System::Int32 OBBKMHIAOJD(::PHKFMKDHNBO* a1, ::PHKFMKDHNBO* a2)
		{
			return ((::System::Int32(*)(::PHKFMKDHNBO*, ::PHKFMKDHNBO*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_OBBKMHIAOJD_OFFSET))(a1, a2);
		}

		static ::System::Int32 MDIBPIJJIPE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_MDIBPIJJIPE_OFFSET))(a1, a2);
		}

		static ::System::Int32 NBFBHPBDIJN(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_NBFBHPBDIJN_OFFSET))(a1, a2);
		}

		static ::System::Int32 IMNNMBPICGN(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_IMNNMBPICGN_OFFSET))(a1, a2);
		}

		::LCJPDOOLBEC* get_ElationPointManager()
		{
			return ((::LCJPDOOLBEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEENEGJBMCO_GET_ELATIONPOINTMANAGER_OFFSET))(this);
		}

		::System::Void set_ElationPointManager(::LCJPDOOLBEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCJPDOOLBEC*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_SET_ELATIONPOINTMANAGER_OFFSET))(this, a1);
		}

		::System::Boolean BEDNMBHKOFG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEENEGJBMCO_BEDNMBHKOFG_OFFSET))(this);
		}

		::System::Boolean EIJHOEGDDMF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEENEGJBMCO_EIJHOEGDDMF_OFFSET))(this);
		}

		::System::Boolean PFGBHJCONAA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEENEGJBMCO_PFGBHJCONAA_OFFSET))(this);
		}

		::System::Boolean EDACHOOCCHG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEENEGJBMCO_EDACHOOCCHG_OFFSET))(this);
		}

		::System::Boolean EKPBIKJGEEP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEENEGJBMCO_EKPBIKJGEEP_OFFSET))(this);
		}

		::NEPOAOEADBE* get_ElationTimeInstance()
		{
			return ((::NEPOAOEADBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEENEGJBMCO_GET_ELATIONTIMEINSTANCE_OFFSET))(this);
		}

		::System::Void set_ElationTimeInstance(::NEPOAOEADBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEPOAOEADBE*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_SET_ELATIONTIMEINSTANCE_OFFSET))(this, a1);
		}

		::JIPCKPDMOCH* get_ElationStatistics()
		{
			return ((::JIPCKPDMOCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEENEGJBMCO_GET_ELATIONSTATISTICS_OFFSET))(this);
		}

		::System::Void set_ElationStatistics(::JIPCKPDMOCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIPCKPDMOCH*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_SET_ELATIONSTATISTICS_OFFSET))(this, a1);
		}

		::ODCOIGDOFGH* get_ElationPreviewCharacterData()
		{
			return ((::ODCOIGDOFGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEENEGJBMCO_GET_ELATIONPREVIEWCHARACTERDATA_OFFSET))(this);
		}

		::System::Void set_ElationPreviewCharacterData(::ODCOIGDOFGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODCOIGDOFGH*))((::PBYTE)hIl2Cpp + OEENEGJBMCO_SET_ELATIONPREVIEWCHARACTERDATA_OFFSET))(this, a1);
		}

	};
