#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAPGFKLGCDH.h"
#include "unitysdk/RPG/GameCore/AdventureBehaviorClampAlertLevel.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureMuteLevel.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureNormalActiveReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class NOEBJBDLNGN;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class AdventureModifierInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BDENDNDOFLF_BCADFDPNKPM_OFFSET UNITYSDK_OFFSET(0x162F60A0)
#define BDENDNDOFLF_BDGKLLDIGHP_OFFSET UNITYSDK_OFFSET(0x162F4630)
#define BDENDNDOFLF_BHPBLNMINMB_OFFSET UNITYSDK_OFFSET(0x162F5270)
#define BDENDNDOFLF_BMAIHLIDLEA_OFFSET UNITYSDK_OFFSET(0x162F6740)
#define BDENDNDOFLF_CEPJHGNMKJD_OFFSET UNITYSDK_OFFSET(0x162F42A0)
#define BDENDNDOFLF_CFBAIGBNLFP_OFFSET UNITYSDK_OFFSET(0x162F56D0)
#define BDENDNDOFLF_CTOR_OFFSET UNITYSDK_OFFSET(0x162F3FD0)
#define BDENDNDOFLF_DJGNHODODOL_OFFSET UNITYSDK_OFFSET(0x162F5880)
#define BDENDNDOFLF_DLOFGILFCLJ_OFFSET UNITYSDK_OFFSET(0x162F5840)
#define BDENDNDOFLF_ECOEBCJBLMP_OFFSET UNITYSDK_OFFSET(0x162F4CD0)
#define BDENDNDOFLF_EDCIPKJLODO_OFFSET UNITYSDK_OFFSET(0x162F58C0)
#define BDENDNDOFLF_FDKEHBDDNGC_OFFSET UNITYSDK_OFFSET(0x162F5C40)
#define BDENDNDOFLF_FEFBEMMLCCG_OFFSET UNITYSDK_OFFSET(0x162F4A70)
#define BDENDNDOFLF_FEOAHINLCED_OFFSET UNITYSDK_OFFSET(0x162F67E0)
#define BDENDNDOFLF_FODLMMGOFPO_OFFSET UNITYSDK_OFFSET(0x162F4730)
#define BDENDNDOFLF_GBNIAOLEOFE_OFFSET UNITYSDK_OFFSET(0x162F5E00)
#define BDENDNDOFLF_GGEGGPLILGJ_OFFSET UNITYSDK_OFFSET(0x162F48C0)
#define BDENDNDOFLF_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x162F4190)
#define BDENDNDOFLF_HIMAIOCMNKE_OFFSET UNITYSDK_OFFSET(0x162F6650)
#define BDENDNDOFLF_HLFCCAJFIIM_OFFSET UNITYSDK_OFFSET(0x162F5440)
#define BDENDNDOFLF_IDJBJOLAKFP_OFFSET UNITYSDK_OFFSET(0x162F5C00)
#define BDENDNDOFLF_IEHGJKIODLM_OFFSET UNITYSDK_OFFSET(0x162F5B70)
#define BDENDNDOFLF_IEIOJGLPLAM_OFFSET UNITYSDK_OFFSET(0x162F67C0)
#define BDENDNDOFLF_IFDJHFIIMKM_OFFSET UNITYSDK_OFFSET(0x162F4C10)
#define BDENDNDOFLF_JJLALJJCOAG_OFFSET UNITYSDK_OFFSET(0x162F67D0)
#define BDENDNDOFLF_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0x162F4A60)
#define BDENDNDOFLF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x162F5650)
#define BDENDNDOFLF_JLMHGAGIMBP_OFFSET UNITYSDK_OFFSET(0x162F62A0)
#define BDENDNDOFLF_JPAMAEKNHLG_OFFSET UNITYSDK_OFFSET(0x162F5E50)
#define BDENDNDOFLF_KGNOHFBNHFJ_OFFSET UNITYSDK_OFFSET(0x162F46B0)
#define BDENDNDOFLF_KKMPFDINMLC_OFFSET UNITYSDK_OFFSET(0x162F5540)
#define BDENDNDOFLF_LHFAHBLANCB_OFFSET UNITYSDK_OFFSET(0x162F5A20)
#define BDENDNDOFLF_LICLBMEDGJM_OFFSET UNITYSDK_OFFSET(0x162F5B10)
#define BDENDNDOFLF_NDAENKCAIJF_OFFSET UNITYSDK_OFFSET(0x162F4560)
#define BDENDNDOFLF_NJCCGCENCCI_OFFSET UNITYSDK_OFFSET(0x162F5C80)
#define BDENDNDOFLF_NJJPDDKMEMI_OFFSET UNITYSDK_OFFSET(0x162F5710)
#define BDENDNDOFLF_NJMLJIHEHFB_OFFSET UNITYSDK_OFFSET(0x162F4A00)
#define BDENDNDOFLF_NMBINPGPEPA_OFFSET UNITYSDK_OFFSET(0x162F6420)
#define BDENDNDOFLF_NMJGILFHFPC_OFFSET UNITYSDK_OFFSET(0x162F5BC0)
#define BDENDNDOFLF_ODBMAOOOGHP_OFFSET UNITYSDK_OFFSET(0x162F57E0)
#define BDENDNDOFLF_PGNEIMEGPOJ_OFFSET UNITYSDK_OFFSET(0x162F5220)

	class BDENDNDOFLF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* LLOGJCLBCGN; // 0x10
		::RPG::GameCore::GameEntity* OBFKHPMDNKN; // 0x18
		::System::Collections::Generic::List_1<::EAPGFKLGCDH>* ODAACJCCPAN; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::AdventureModifierInstance*>* LDDDMGDCLGO; // 0x28
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x30
		::NOEBJBDLNGN* KDKKFJKEIAA; // 0x38
		::System::Collections::Generic::List_1<::EAPGFKLGCDH>* FPCKFNCPPLP; // 0x40
		::System::Collections::Generic::List_1<::System::String*>* BMJGIAAOBOB; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AdventureModifierInstance*>* JCJLGKFCKDG; // 0x50
		::System::Boolean KIKHJBBMOBN; // 0x58
		::System::Boolean HKAHNIFPKEF; // 0x59
		::System::Boolean GCFMLJJNIJF; // 0x5A
		::System::Boolean EBAGPLMMGDO; // 0x5B
		::System::Boolean FKAGIEIOHLH; // 0x5C
		::System::Boolean KJHIFBPHDLG; // 0x5D
		::System::Boolean MAMPCMIJKDF; // 0x5E
		::System::Byte _padding0[0x1];
		::RPG::GameCore::AdventureFeatureMuteLevel LIDHBHJCJOP; // 0x60
		::System::Int32 LEBLFCFMCIN; // 0x64
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BDENDNDOFLF_CTOR_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDENDNDOFLF_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void NDAENKCAIJF(::RPG::GameCore::AdventureModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + BDENDNDOFLF_NDAENKCAIJF_OFFSET))(this, a1);
		}

		::System::Void KGNOHFBNHFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BDENDNDOFLF_KGNOHFBNHFJ_OFFSET))(this, a1);
		}

		::System::Void GGEGGPLILGJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BDENDNDOFLF_GGEGGPLILGJ_OFFSET))(this, a1);
		}

		::System::Void NJMLJIHEHFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDENDNDOFLF_NJMLJIHEHFB_OFFSET))(this);
		}

		::System::Void IFDJHFIIMKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDENDNDOFLF_IFDJHFIIMKM_OFFSET))(this);
		}

		::System::Void ECOEBCJBLMP(::System::Boolean a1, ::RPG::GameCore::AdventureModifierInstance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + BDENDNDOFLF_ECOEBCJBLMP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AdventureBehaviorClampAlertLevel KKMPFDINMLC(::System::Boolean a1)
		{
			return ((::RPG::GameCore::AdventureBehaviorClampAlertLevel(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BDENDNDOFLF_KKMPFDINMLC_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BDENDNDOFLF_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void CFBAIGBNLFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDENDNDOFLF_CFBAIGBNLFP_OFFSET))(this);
		}

		::System::Boolean NJJPDDKMEMI(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BDENDNDOFLF_NJJPDDKMEMI_OFFSET))(this, a1);
		}

		::System::Boolean ODBMAOOOGHP(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BDENDNDOFLF_ODBMAOOOGHP_OFFSET))(this, a1);
		}

		::System::Void DLOFGILFCLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDENDNDOFLF_DLOFGILFCLJ_OFFSET))(this);
		}

		::System::Void DJGNHODODOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDENDNDOFLF_DJGNHODODOL_OFFSET))(this);
		}

		::System::Void EDCIPKJLODO(::RPG::GameCore::AdventureModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + BDENDNDOFLF_EDCIPKJLODO_OFFSET))(this, a1);
		}

		::System::Void LHFAHBLANCB(::RPG::GameCore::AdventureModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + BDENDNDOFLF_LHFAHBLANCB_OFFSET))(this, a1);
		}

		::System::Void LICLBMEDGJM(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + BDENDNDOFLF_LICLBMEDGJM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IEHGJKIODLM(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BDENDNDOFLF_IEHGJKIODLM_OFFSET))(this, a1, a2);
		}

		::System::Void NMJGILFHFPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDENDNDOFLF_NMJGILFHFPC_OFFSET))(this);
		}

		::System::Void IDJBJOLAKFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDENDNDOFLF_IDJBJOLAKFP_OFFSET))(this);
		}

		::RPG::GameCore::AdventureFeatureMuteLevel FDKEHBDDNGC()
		{
			return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + BDENDNDOFLF_FDKEHBDDNGC_OFFSET))(this);
		}

		::RPG::GameCore::AdventureModifierInstance* BDGKLLDIGHP()
		{
			return ((::RPG::GameCore::AdventureModifierInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDENDNDOFLF_BDGKLLDIGHP_OFFSET))(this);
		}

		::System::Void HLFCCAJFIIM(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BDENDNDOFLF_HLFCCAJFIIM_OFFSET))(this, a1, a2);
		}

		::System::Void BHPBLNMINMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDENDNDOFLF_BHPBLNMINMB_OFFSET))(this);
		}

		::System::Void FEFBEMMLCCG(::RPG::GameCore::AdventureFeatureMuteLevel a1, ::RPG::GameCore::AdventureFeatureMuteLevel a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureFeatureMuteLevel, ::RPG::GameCore::AdventureFeatureMuteLevel))((::PBYTE)hIl2Cpp + BDENDNDOFLF_FEFBEMMLCCG_OFFSET))(this, a1, a2);
		}

		::System::Boolean PGNEIMEGPOJ(::RPG::GameCore::AdventureFeatureMuteLevel a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureFeatureMuteLevel))((::PBYTE)hIl2Cpp + BDENDNDOFLF_PGNEIMEGPOJ_OFFSET))(this, a1);
		}

		::System::Boolean GBNIAOLEOFE(::RPG::GameCore::AdventureFeatureMuteLevel a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureFeatureMuteLevel))((::PBYTE)hIl2Cpp + BDENDNDOFLF_GBNIAOLEOFE_OFFSET))(this, a1);
		}

		::System::Void NJCCGCENCCI(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BDENDNDOFLF_NJCCGCENCCI_OFFSET))(this, a1, a2);
		}

		::System::Void FODLMMGOFPO(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BDENDNDOFLF_FODLMMGOFPO_OFFSET))(this, a1, a2);
		}

		::System::Void JPAMAEKNHLG(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BDENDNDOFLF_JPAMAEKNHLG_OFFSET))(this, a1, a2);
		}

		::System::Void CEPJHGNMKJD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BDENDNDOFLF_CEPJHGNMKJD_OFFSET))(this, a1);
		}

		::System::Void BCADFDPNKPM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BDENDNDOFLF_BCADFDPNKPM_OFFSET))(this, a1);
		}

		::System::Void JLMHGAGIMBP(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + BDENDNDOFLF_JLMHGAGIMBP_OFFSET))(this, a1, a2);
		}

		::System::Void NMBINPGPEPA(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + BDENDNDOFLF_NMBINPGPEPA_OFFSET))(this, a1, a2);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDENDNDOFLF_JKEONEEPIHH_OFFSET))(this);
		}

		::System::Boolean HIMAIOCMNKE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDENDNDOFLF_HIMAIOCMNKE_OFFSET))(this);
		}

		::System::Boolean BMAIHLIDLEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDENDNDOFLF_BMAIHLIDLEA_OFFSET))(this);
		}

		::System::Boolean IEIOJGLPLAM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDENDNDOFLF_IEIOJGLPLAM_OFFSET))(this);
		}

		::System::Boolean JJLALJJCOAG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDENDNDOFLF_JJLALJJCOAG_OFFSET))(this);
		}

		::System::Boolean FEOAHINLCED()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDENDNDOFLF_FEOAHINLCED_OFFSET))(this);
		}

	};
