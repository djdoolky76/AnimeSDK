#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationPointUIType.h"
#include "unitysdk/RPG/GameCore/ElationTimeTotalDamageToastType.h"
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

#define OEENEGJBMCO_AALDFFHJHGP_OFFSET UNITYSDK_OFFSET(0x1764E6D0)
#define OEENEGJBMCO_ALPNAAELBFC_OFFSET UNITYSDK_OFFSET(0x17650460)
#define OEENEGJBMCO_APEPKNLOLIA_OFFSET UNITYSDK_OFFSET(0x1764FD30)
#define OEENEGJBMCO_BEANEKEHPPG_OFFSET UNITYSDK_OFFSET(0x17650690)
#define OEENEGJBMCO_BEDELNKEKPA_OFFSET UNITYSDK_OFFSET(0x17650770)
#define OEENEGJBMCO_BEDNMBHKOFG_OFFSET UNITYSDK_OFFSET(0x1764F040)
#define OEENEGJBMCO_BHDIGADBLBE_OFFSET UNITYSDK_OFFSET(0x1764D3A0)
#define OEENEGJBMCO_BKECKPFADCH_OFFSET UNITYSDK_OFFSET(0x1764F2F0)
#define OEENEGJBMCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x17651900)
#define OEENEGJBMCO_CDNHJDBOIKO_OFFSET UNITYSDK_OFFSET(0x1764D680)
#define OEENEGJBMCO_CIGGLCBGCAB_OFFSET UNITYSDK_OFFSET(0x1764D520)
#define OEENEGJBMCO_CKLDBHDCBHA_OFFSET UNITYSDK_OFFSET(0x176511B0)
#define OEENEGJBMCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1764C140)
#define OEENEGJBMCO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1764C4B0)
#define OEENEGJBMCO_DJANBHDPOOJ_OFFSET UNITYSDK_OFFSET(0x17650B20)
#define OEENEGJBMCO_DPHLAHEFKFD_OFFSET UNITYSDK_OFFSET(0x1764F0A0)
#define OEENEGJBMCO_EDACHOOCCHG_OFFSET UNITYSDK_OFFSET(0x1764DEE0)
#define OEENEGJBMCO_EGCMAECGHML_OFFSET UNITYSDK_OFFSET(0x1764F960)
#define OEENEGJBMCO_EIJHOEGDDMF_OFFSET UNITYSDK_OFFSET(0x176517C0)
#define OEENEGJBMCO_EJNDGOHFDCK_OFFSET UNITYSDK_OFFSET(0x17650620)
#define OEENEGJBMCO_EKHJFBHPMDM_OFFSET UNITYSDK_OFFSET(0x1764DE40)
#define OEENEGJBMCO_EKKAFIMHDMD_OFFSET UNITYSDK_OFFSET(0x1764DF40)
#define OEENEGJBMCO_EKPBIKJGEEP_OFFSET UNITYSDK_OFFSET(0x1764D620)
#define OEENEGJBMCO_EMHKJNLAMCN_OFFSET UNITYSDK_OFFSET(0x1764FF70)
#define OEENEGJBMCO_EMKLAPMBEIG_OFFSET UNITYSDK_OFFSET(0x1764FBB0)
#define OEENEGJBMCO_EPEFODGJHPC_OFFSET UNITYSDK_OFFSET(0x1764DB10)
#define OEENEGJBMCO_FBNFBCOKMLL_OFFSET UNITYSDK_OFFSET(0x1764E640)
#define OEENEGJBMCO_FBOAHIFADDF_OFFSET UNITYSDK_OFFSET(0x1764C800)
#define OEENEGJBMCO_FCIBACMHGCM_OFFSET UNITYSDK_OFFSET(0x17650020)
#define OEENEGJBMCO_FIDLHCDPGAG_OFFSET UNITYSDK_OFFSET(0x17650A40)
#define OEENEGJBMCO_FINOMFJIFCH_OFFSET UNITYSDK_OFFSET(0x17650C50)
#define OEENEGJBMCO_GAIHEMDNLGH_OFFSET UNITYSDK_OFFSET(0x1764D910)
#define OEENEGJBMCO_GET_ELATIONPOINTMANAGER_OFFSET UNITYSDK_OFFSET(0x176517A0)
#define OEENEGJBMCO_GET_ELATIONPOINTUITYPE_OFFSET UNITYSDK_OFFSET(0x176518E0)
#define OEENEGJBMCO_GET_ELATIONPREVIEWCHARACTERDATA_OFFSET UNITYSDK_OFFSET(0x176518C0)
#define OEENEGJBMCO_GET_ELATIONSTATISTICS_OFFSET UNITYSDK_OFFSET(0x176518A0)
#define OEENEGJBMCO_GET_ELATIONTIMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x17651880)
#define OEENEGJBMCO_HHCJJGEIDLK_OFFSET UNITYSDK_OFFSET(0x17650CE0)
#define OEENEGJBMCO_HKLHKFOPDLM_OFFSET UNITYSDK_OFFSET(0x1764FC20)
#define OEENEGJBMCO_HLJFGLAGJCJ_OFFSET UNITYSDK_OFFSET(0x17650940)
#define OEENEGJBMCO_HOOFCEAJENP_OFFSET UNITYSDK_OFFSET(0x1764EAB0)
#define OEENEGJBMCO_HPFELHPMKFG_OFFSET UNITYSDK_OFFSET(0x1764E3D0)
#define OEENEGJBMCO_IKIIDEHCNLI_OFFSET UNITYSDK_OFFSET(0x1764F360)
#define OEENEGJBMCO_IMFAJJKLKMK_OFFSET UNITYSDK_OFFSET(0x17651060)
#define OEENEGJBMCO_IMNNMBPICGN_OFFSET UNITYSDK_OFFSET(0x17651630)
#define OEENEGJBMCO_KPIOEJOPIFM_OFFSET UNITYSDK_OFFSET(0x1764DA40)
#define OEENEGJBMCO_LBMGIDNGBKN_OFFSET UNITYSDK_OFFSET(0x1764F450)
#define OEENEGJBMCO_LIKOCFOJCFD_OFFSET UNITYSDK_OFFSET(0x17650FB0)
#define OEENEGJBMCO_MDIBPIJJIPE_OFFSET UNITYSDK_OFFSET(0x176513A0)
#define OEENEGJBMCO_MNDHMNAOOLP_OFFSET UNITYSDK_OFFSET(0x1764C990)
#define OEENEGJBMCO_NBFBHPBDIJN_OFFSET UNITYSDK_OFFSET(0x17651500)
#define OEENEGJBMCO_NFAFAJKMDKG_OFFSET UNITYSDK_OFFSET(0x17650E90)
#define OEENEGJBMCO_OBBKMHIAOJD_OFFSET UNITYSDK_OFFSET(0x17651200)
#define OEENEGJBMCO_OMLEBJDHBEP_OFFSET UNITYSDK_OFFSET(0x1764C9F0)
#define OEENEGJBMCO_PFGBHJCONAA_OFFSET UNITYSDK_OFFSET(0x1764D340)
#define OEENEGJBMCO_PPHKIFKEIMO_OFFSET UNITYSDK_OFFSET(0x17650380)
#define OEENEGJBMCO_SET_ELATIONPOINTMANAGER_OFFSET UNITYSDK_OFFSET(0x176517B0)
#define OEENEGJBMCO_SET_ELATIONPOINTUITYPE_OFFSET UNITYSDK_OFFSET(0x176518F0)
#define OEENEGJBMCO_SET_ELATIONPREVIEWCHARACTERDATA_OFFSET UNITYSDK_OFFSET(0x176518D0)
#define OEENEGJBMCO_SET_ELATIONSTATISTICS_OFFSET UNITYSDK_OFFSET(0x176518B0)
#define OEENEGJBMCO_SET_ELATIONTIMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x17651890)

inline static constexpr unsigned int OEENEGJBMCO_TypeDefinitionIndex = 57263;

	class OEENEGJBMCO : public ::System::Object
	{
	public:
		::RPG::Client::UIController* HPNFDAIHCNI; // 0x10
		::JIPCKPDMOCH* _ElationStatistics_k__BackingField; // 0x18
		::RPG::Client::UIController* KJKBKHIINHF; // 0x20
		::ODCOIGDOFGH* _ElationPreviewCharacterData_k__BackingField; // 0x28
		::LCJPDOOLBEC* _ElationPointManager_k__BackingField; // 0x30
		::RPG::GameCore::TurnBasedGameMode* JADHLODNADK; // 0x38
		::NEPOAOEADBE* _ElationTimeInstance_k__BackingField; // 0x40
		::EJJAGEEGEKA* EIKLKLFBPME; // 0x48
		::LNGGBHCLAIG* HFBOOCBOCCI; // 0x50
		::RPG::GameCore::ElationPointUIType _ElationPointUIType_k__BackingField; // 0x58
		static ::Il2CppArray<::RPG::GameCore::EntityType>** StaticGet_CONNNJJMJKG()
		{
			return (::Il2CppArray<::RPG::GameCore::EntityType>**)UnitySDK::FromName("", "OEENEGJBMCO")->GetStaticField(0x6F310);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_ICOJIMDHAOH()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "OEENEGJBMCO")->GetStaticField(0x6F318);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_GMDPPJIKNIM()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OEENEGJBMCO")->GetStaticField(0x6F320);
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

		::System::Void LBMGIDNGBKN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OEENEGJBMCO_LBMGIDNGBKN_OFFSET))(this, a1);
		}

		::System::Void EGCMAECGHML(::IOKPMIHIPGM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOKPMIHIPGM))((::PBYTE)hIl2Cpp + OEENEGJBMCO_EGCMAECGHML_OFFSET))(this, a1);
		}

		::System::Void EMKLAPMBEIG(::RPG::GameCore::ElationPointUIType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElationPointUIType))((::PBYTE)hIl2Cpp + OEENEGJBMCO_EMKLAPMBEIG_OFFSET))(this, a1);
		}

		::System::Void HKLHKFOPDLM(::DPGIPECFINI a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPGIPECFINI))((::PBYTE)hIl2Cpp + OEENEGJBMCO_HKLHKFOPDLM_OFFSET))(this, a1);
		}

		::System::Void APEPKNLOLIA(::RPG::GameCore::ElationTimeTotalDamageToastType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElationTimeTotalDamageToastType))((::PBYTE)hIl2Cpp + OEENEGJBMCO_APEPKNLOLIA_OFFSET))(this, a1);
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

		::RPG::GameCore::ElationPointUIType get_ElationPointUIType()
		{
			return ((::RPG::GameCore::ElationPointUIType(*)(::PVOID))((::PBYTE)hIl2Cpp + OEENEGJBMCO_GET_ELATIONPOINTUITYPE_OFFSET))(this);
		}

		::System::Void set_ElationPointUIType(::RPG::GameCore::ElationPointUIType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElationPointUIType))((::PBYTE)hIl2Cpp + OEENEGJBMCO_SET_ELATIONPOINTUITYPE_OFFSET))(this, a1);
		}

	};
