#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBCMHADMLOP.h"
#include "unitysdk/RPG/GameCore/ESwitchHandGestureType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CCJJEJFDBIF_FJKKPFKKPMO;
class EKFMIDBJDIA;
class FIMDJOBJCNE;
class FMHFNGKMLEH_CatchItemData;
class GFANCGGPKPD;
namespace RPG::Client { class MonoControllableHand; }
namespace RPG::Client { class MonoDroneAirwallControl; }
namespace RPG::Client { class MonoHandOverlapTrigger; }
namespace RPG::Client { class SwitchHandPuzzleBoard; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define CCJJEJFDBIF_AADEMAGKCNL_OFFSET UNITYSDK_OFFSET(0xC742050)
#define CCJJEJFDBIF_AAJABKJOJOJ_OFFSET UNITYSDK_OFFSET(0xC741830)
#define CCJJEJFDBIF_ACNFOKDMCCC_OFFSET UNITYSDK_OFFSET(0xC7439C0)
#define CCJJEJFDBIF_ADJLNBJDKLJ_OFFSET UNITYSDK_OFFSET(0xC740CD0)
#define CCJJEJFDBIF_AGDDACKLFJJ_OFFSET UNITYSDK_OFFSET(0xC7431D0)
#define CCJJEJFDBIF_AKAMFKDAKOH_OFFSET UNITYSDK_OFFSET(0xC73DA10)
#define CCJJEJFDBIF_ALFJOCKJJNM_OFFSET UNITYSDK_OFFSET(0xC743900)
#define CCJJEJFDBIF_APDPODLCGCO_OFFSET UNITYSDK_OFFSET(0xC73CB70)
#define CCJJEJFDBIF_BABKEJAOIEK_OFFSET UNITYSDK_OFFSET(0xC742460)
#define CCJJEJFDBIF_BNDELOBMOCF_OFFSET UNITYSDK_OFFSET(0xC742820)
#define CCJJEJFDBIF_CBBCDCIAAJG_OFFSET UNITYSDK_OFFSET(0xC741720)
#define CCJJEJFDBIF_CBGCLFCIBII_OFFSET UNITYSDK_OFFSET(0xC741190)
#define CCJJEJFDBIF_CBLKJGANDCJ_OFFSET UNITYSDK_OFFSET(0xC743BB0)
#define CCJJEJFDBIF_CCKJJOCLPHI_OFFSET UNITYSDK_OFFSET(0xC7447E0)
#define CCJJEJFDBIF_CCTOR_OFFSET UNITYSDK_OFFSET(0xC744840)
#define CCJJEJFDBIF_CEABBDLEGGB_OFFSET UNITYSDK_OFFSET(0xC7409C0)
#define CCJJEJFDBIF_CIPFGCOCCMC_OFFSET UNITYSDK_OFFSET(0xC742A10)
#define CCJJEJFDBIF_CPDGFJBHLLB_OFFSET UNITYSDK_OFFSET(0xC743050)
#define CCJJEJFDBIF_CTOR_OFFSET UNITYSDK_OFFSET(0xC744810)
#define CCJJEJFDBIF_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xC7401B0)
#define CCJJEJFDBIF_DJHDFJGMNOF_OFFSET UNITYSDK_OFFSET(0xC7426C0)
#define CCJJEJFDBIF_DMCPKHJJPOD_OFFSET UNITYSDK_OFFSET(0xC7447C0)
#define CCJJEJFDBIF_DOPINACBPHJ_OFFSET UNITYSDK_OFFSET(0xC742880)
#define CCJJEJFDBIF_DPHABOHGKFL_OFFSET UNITYSDK_OFFSET(0xC740FD0)
#define CCJJEJFDBIF_EDNHLPJILIC_OFFSET UNITYSDK_OFFSET(0xC73CA60)
#define CCJJEJFDBIF_EGABJBLDEEG_OFFSET UNITYSDK_OFFSET(0xC742BC0)
#define CCJJEJFDBIF_FEIIJAMFLAB_OFFSET UNITYSDK_OFFSET(0xC740480)
#define CCJJEJFDBIF_GAEIAMICAOC_OFFSET UNITYSDK_OFFSET(0xC740860)
#define CCJJEJFDBIF_GET_NEEDLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC7447A0)
#define CCJJEJFDBIF_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0xC744790)
#define CCJJEJFDBIF_HALGHJFNBJD_OFFSET UNITYSDK_OFFSET(0xC73C8B0)
#define CCJJEJFDBIF_HOEGKOCEDOA_OFFSET UNITYSDK_OFFSET(0xC742150)
#define CCJJEJFDBIF_HPMEDBJGLCG_OFFSET UNITYSDK_OFFSET(0xC740710)
#define CCJJEJFDBIF_IMFPDOMNMFL_OFFSET UNITYSDK_OFFSET(0xC742670)
#define CCJJEJFDBIF_INAKCBODCOM_OFFSET UNITYSDK_OFFSET(0xC73F640)
#define CCJJEJFDBIF_IOHGLDILHIN_OFFSET UNITYSDK_OFFSET(0xC741560)
#define CCJJEJFDBIF_IOKHDJNEIMC_OFFSET UNITYSDK_OFFSET(0xC742CE0)
#define CCJJEJFDBIF_IPBLBMIGJED_OFFSET UNITYSDK_OFFSET(0xC743110)
#define CCJJEJFDBIF_JDFBIPBDNMN_OFFSET UNITYSDK_OFFSET(0xC73CF80)
#define CCJJEJFDBIF_JEOALCDBJJO_OFFSET UNITYSDK_OFFSET(0xC741370)
#define CCJJEJFDBIF_JGPKDNKKNJH_OFFSET UNITYSDK_OFFSET(0xC73E3E0)
#define CCJJEJFDBIF_JHFOBEAEDME_OFFSET UNITYSDK_OFFSET(0xC73D6B0)
#define CCJJEJFDBIF_JMAJKNPDBFN_OFFSET UNITYSDK_OFFSET(0xC742E80)
#define CCJJEJFDBIF_KAOIHHCJFDO_OFFSET UNITYSDK_OFFSET(0xC73E0E0)
#define CCJJEJFDBIF_KDBPOBOPDKC_OFFSET UNITYSDK_OFFSET(0xC742F10)
#define CCJJEJFDBIF_KOBPBJJHPBN_OFFSET UNITYSDK_OFFSET(0xC7444A0)
#define CCJJEJFDBIF_LAPGLMIFELJ_OFFSET UNITYSDK_OFFSET(0xC73F2E0)
#define CCJJEJFDBIF_LBFPCAFLCOH_OFFSET UNITYSDK_OFFSET(0xC743960)
#define CCJJEJFDBIF_LBNBHHFKAEF_OFFSET UNITYSDK_OFFSET(0xC742F70)
#define CCJJEJFDBIF_LDKOHGOIOJA_OFFSET UNITYSDK_OFFSET(0xC742750)
#define CCJJEJFDBIF_LEKLGDFAEFF_OFFSET UNITYSDK_OFFSET(0xC743240)
#define CCJJEJFDBIF_LGGGOMPGBBA_OFFSET UNITYSDK_OFFSET(0xC73EB80)
#define CCJJEJFDBIF_LPJOPLIAFFJ_OFFSET UNITYSDK_OFFSET(0xC740DE0)
#define CCJJEJFDBIF_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0xC7447D0)
#define CCJJEJFDBIF_MJPPEDMJGMO_OFFSET UNITYSDK_OFFSET(0xC7447F0)
#define CCJJEJFDBIF_MLHABAOIMJI_OFFSET UNITYSDK_OFFSET(0xC73EE80)
#define CCJJEJFDBIF_MOCPCLHLAHK_OFFSET UNITYSDK_OFFSET(0xC7432B0)
#define CCJJEJFDBIF_NBCPBAMOIKM_OFFSET UNITYSDK_OFFSET(0xC741620)
#define CCJJEJFDBIF_NKFEJMDMCGM_OFFSET UNITYSDK_OFFSET(0xC7447B0)
#define CCJJEJFDBIF_OBHAJEEKJHB_OFFSET UNITYSDK_OFFSET(0xC741090)
#define CCJJEJFDBIF_OHMCGLPMIKK_OFFSET UNITYSDK_OFFSET(0xC7420D0)
#define CCJJEJFDBIF_ONINIT_OFFSET UNITYSDK_OFFSET(0xC73C5B0)
#define CCJJEJFDBIF_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xC73E600)
#define CCJJEJFDBIF_PBMIDAAGIGN_OFFSET UNITYSDK_OFFSET(0xC742FE0)
#define CCJJEJFDBIF_PGOMIHLBENA_OFFSET UNITYSDK_OFFSET(0xC7412A0)
#define CCJJEJFDBIF_PLIONAKOBGG_OFFSET UNITYSDK_OFFSET(0xC73D1C0)
#define CCJJEJFDBIF_TICK_OFFSET UNITYSDK_OFFSET(0xC73F690)

inline static constexpr unsigned int CCJJEJFDBIF_TypeDefinitionIndex = 60299;

	class CCJJEJFDBIF : public ::HBCMHADMLOP
	{
	public:
		::System::String* PPKHJMJDKMB; // 0x20
		::RPG::GameCore::GameEntity* JCCHOIPFHHD; // 0x28
		::RPG::Client::MonoHandOverlapTrigger* KEJPFIAHINP; // 0x30
		::RPG::GameCore::GameEntity* MJMJCJNANAN; // 0x38
		::CCJJEJFDBIF_FJKKPFKKPMO* MEGKBJCPBAG; // 0x40
		::RPG::Client::MonoDroneAirwallControl* JACOMHFDIHJ; // 0x48
		::System::String* EHCLFCPIOEF; // 0x50
		::RPG::Client::MonoControllableHand* FKGPCCIKMNN; // 0x58
		::Il2CppArray<::System::Boolean>* CDHFGIOJHKI; // 0x60
		::UnityEngine::GameObject* DMJELFIBKLK; // 0x68
		::GFANCGGPKPD* NOLJIPMCEAK; // 0x70
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x78
		::RPG::Client::SwitchHandPuzzleBoard* CCAHGFIABKE; // 0x80
		::FIMDJOBJCNE* HECPNLCINOD; // 0x88
		::System::Int32 KMPIAHHLBCD; // 0x90
		::System::Single JOAAJHBNBPP; // 0x94
		::System::Single NDEBIONHCAM; // 0x98
		::System::UInt32 NJFKHPIHDEF; // 0x9C
		::System::Int32 MGJKJKMEPIO; // 0xA0
		::System::Single CBDFCIODHPP; // 0xA4
		::System::Single DDPJNLAFNAN; // 0xA8
		::System::Int32 BDGIOGJDHJC; // 0xAC
		::System::Int32 POANOEPIFAA; // 0xB0
		::System::Int32 CBCCNCFIOHM; // 0xB4
		::RPG::GameCore::ESwitchHandGestureType COEIKIBIGPH; // 0xB8
		::UnityEngine::Quaternion PACGNNNBPEI; // 0xBC
		::System::Boolean NLGNNHABDKB; // 0xCC
		::System::Boolean PKEHKEHEEKB; // 0xCD
		::System::Boolean LDPKMMMMGKF; // 0xCE
		::System::Boolean IKEHOCCHGAF; // 0xCF
		::System::Int32 AOHFPCGOBBI; // 0xD0
		::UnityEngine::Vector3 BJNKIKNBFOJ; // 0xD4
		::System::Int32 PFLIGKIGCAE; // 0xE0
		::System::Int32 LJBOLDNAPED; // 0xE4
		static ::System::Boolean* StaticGet_JJCHIFLGFIG()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CCJJEJFDBIF")->GetStaticField(0x4BB0);
		}

		// static const ::System::String* DAIANGHGOLL; // 0x0
		// static const ::System::Object ACCJKGEKHKP; // 0x0
		// static const ::System::Object HKDAGBONAAE; // 0x0
		// static const ::System::Object BKEECMJHLDH; // 0x0
		// static const ::System::Object GLJPKIPOLMA; // 0x0
		// static const ::System::Object AHGOEDFCODF; // 0x0
		// static const ::System::Object DCIFKDHLOFK; // 0x0
		// static const ::System::Object LMNKGNFAOHP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCJJEJFDBIF_CCTOR_OFFSET))();
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_ONUNINIT_OFFSET))(this);
		}

		::System::Void INAKCBODCOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_INAKCBODCOM_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_TICK_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void FEIIJAMFLAB(::RPG::GameCore::ESwitchHandGestureType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ESwitchHandGestureType))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_FEIIJAMFLAB_OFFSET))(this, a1);
		}

		::System::Void ADJLNBJDKLJ(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::String* a3, ::System::Single a4, ::System::Action_1<::System::Boolean>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*, ::System::Single, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_ADJLNBJDKLJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DPHABOHGKFL(::RPG::GameCore::GameEntity* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_DPHABOHGKFL_OFFSET))(this, a1, a2);
		}

		::System::Void OBHAJEEKJHB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_OBHAJEEKJHB_OFFSET))(this, a1);
		}

		::System::Void CBGCLFCIBII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_CBGCLFCIBII_OFFSET))(this);
		}

		::System::Void PGOMIHLBENA(::RPG::GameCore::GameEntity* a1, ::FMHFNGKMLEH_CatchItemData* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::FMHFNGKMLEH_CatchItemData*, ::System::Action*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_PGOMIHLBENA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IOHGLDILHIN(::RPG::GameCore::GameEntity* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_IOHGLDILHIN_OFFSET))(this, a1, a2);
		}

		::System::Void NBCPBAMOIKM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_NBCPBAMOIKM_OFFSET))(this, a1);
		}

		::System::Void CBBCDCIAAJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_CBBCDCIAAJG_OFFSET))(this);
		}

		::System::Boolean AAJABKJOJOJ(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::AdventureHitConfig* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::AdventureHitConfig*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_AAJABKJOJOJ_OFFSET))(this, a1, a2);
		}

		::System::Void BABKEJAOIEK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_BABKEJAOIEK_OFFSET))(this, a1);
		}

		::System::Void IMFPDOMNMFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_IMFPDOMNMFL_OFFSET))(this);
		}

		::System::Boolean DJHDFJGMNOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_DJHDFJGMNOF_OFFSET))(this);
		}

		::System::Boolean LDKOHGOIOJA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_LDKOHGOIOJA_OFFSET))(this, a1);
		}

		::System::Void BNDELOBMOCF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_BNDELOBMOCF_OFFSET))(this, a1);
		}

		::System::Void CIPFGCOCCMC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_CIPFGCOCCMC_OFFSET))(this, a1);
		}

		::System::Void EGABJBLDEEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_EGABJBLDEEG_OFFSET))(this);
		}

		::System::Void CEABBDLEGGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_CEABBDLEGGB_OFFSET))(this);
		}

		::System::Void APDPODLCGCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_APDPODLCGCO_OFFSET))(this);
		}

		::System::Void JGPKDNKKNJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_JGPKDNKKNJH_OFFSET))(this);
		}

		::System::Void JDFBIPBDNMN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_JDFBIPBDNMN_OFFSET))(this, a1);
		}

		::System::Void PLIONAKOBGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_PLIONAKOBGG_OFFSET))(this);
		}

		::System::Void AKAMFKDAKOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_AKAMFKDAKOH_OFFSET))(this);
		}

		::System::Void HPMEDBJGLCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_HPMEDBJGLCG_OFFSET))(this);
		}

		::System::Void LAPGLMIFELJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_LAPGLMIFELJ_OFFSET))(this);
		}

		::System::Void IOKHDJNEIMC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_IOKHDJNEIMC_OFFSET))(this, a1);
		}

		::System::Void KAOIHHCJFDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_KAOIHHCJFDO_OFFSET))(this);
		}

		::System::Void LGGGOMPGBBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_LGGGOMPGBBA_OFFSET))(this);
		}

		::System::Void JMAJKNPDBFN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_JMAJKNPDBFN_OFFSET))(this, a1);
		}

		::System::Void KDBPOBOPDKC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_KDBPOBOPDKC_OFFSET))(this, a1);
		}

		::System::Void LBNBHHFKAEF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_LBNBHHFKAEF_OFFSET))(this, a1);
		}

		::System::Void PBMIDAAGIGN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_PBMIDAAGIGN_OFFSET))(this, a1);
		}

		::System::Void CPDGFJBHLLB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_CPDGFJBHLLB_OFFSET))(this, a1);
		}

		::System::Void IPBLBMIGJED(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_IPBLBMIGJED_OFFSET))(this, a1);
		}

		::System::Void AGDDACKLFJJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_AGDDACKLFJJ_OFFSET))(this, a1);
		}

		::System::Void LEKLGDFAEFF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_LEKLGDFAEFF_OFFSET))(this, a1);
		}

		::System::Void JHFOBEAEDME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_JHFOBEAEDME_OFFSET))(this);
		}

		::System::Void MOCPCLHLAHK(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_MOCPCLHLAHK_OFFSET))(this, a1, a2);
		}

		::System::Void ALFJOCKJJNM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_ALFJOCKJJNM_OFFSET))(this, a1);
		}

		::System::Void LBFPCAFLCOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_LBFPCAFLCOH_OFFSET))(this, a1);
		}

		::FIMDJOBJCNE* GAEIAMICAOC()
		{
			return ((::FIMDJOBJCNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_GAEIAMICAOC_OFFSET))(this);
		}

		::System::Void HALGHJFNBJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_HALGHJFNBJD_OFFSET))(this);
		}

		::System::Void EDNHLPJILIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_EDNHLPJILIC_OFFSET))(this);
		}

		::System::Void MLHABAOIMJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_MLHABAOIMJI_OFFSET))(this);
		}

		::System::Void HOEGKOCEDOA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_HOEGKOCEDOA_OFFSET))(this, a1);
		}

		::System::Void DOPINACBPHJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_DOPINACBPHJ_OFFSET))(this, a1);
		}

		::System::Void LPJOPLIAFFJ(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_LPJOPLIAFFJ_OFFSET))(this, a1, a2);
		}

		::System::Void JEOALCDBJJO(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_JEOALCDBJJO_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ACNFOKDMCCC()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_ACNFOKDMCCC_OFFSET))(this);
		}

		::System::String* CBLKJGANDCJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_CBLKJGANDCJ_OFFSET))(this, a1);
		}

		::System::String* KOBPBJJHPBN(::UnityEngine::Vector3 a1)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_KOBPBJJHPBN_OFFSET))(this, a1);
		}

		::System::Void AADEMAGKCNL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_AADEMAGKCNL_OFFSET))(this, a1);
		}

		::System::Void OHMCGLPMIKK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_OHMCGLPMIKK_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_GET_NEEDTICK_OFFSET))(this);
		}

		::System::Boolean get_NeedLateUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_GET_NEEDLATEUPDATE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* NKFEJMDMCGM()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_NKFEJMDMCGM_OFFSET))(this);
		}

		::RPG::GameCore::ESwitchHandGestureType DMCPKHJJPOD()
		{
			return ((::RPG::GameCore::ESwitchHandGestureType(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_DMCPKHJJPOD_OFFSET))(this);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_MJGKNFEILLI_OFFSET))(this);
		}

		::RPG::Client::SwitchHandPuzzleBoard* CCKJJOCLPHI()
		{
			return ((::RPG::Client::SwitchHandPuzzleBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_CCKJJOCLPHI_OFFSET))(this);
		}

		::UnityEngine::Collider* MJPPEDMJGMO()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_MJPPEDMJGMO_OFFSET))(this);
		}

	};
