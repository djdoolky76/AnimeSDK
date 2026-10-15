#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class FBPOKMHMGKO;
class GMANGALFFPB;
class KNGADCOOODI;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class AbilityMaxHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterRemoveShield; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define HBIPKAEAEJE_AIOJNOHDCDM_OFFSET UNITYSDK_OFFSET(0x15BFB840)
#define HBIPKAEAEJE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15BFD190)
#define HBIPKAEAEJE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15BFD430)
#define HBIPKAEAEJE_BALIBNLMFAF_OFFSET UNITYSDK_OFFSET(0x15BFCE90)
#define HBIPKAEAEJE_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0x15BFCB90)
#define HBIPKAEAEJE_BKBKDDAIBNP_OFFSET UNITYSDK_OFFSET(0x15BFB380)
#define HBIPKAEAEJE_CLLJFELLOBF_OFFSET UNITYSDK_OFFSET(0x15BFB900)
#define HBIPKAEAEJE_COIGHOBFILM_OFFSET UNITYSDK_OFFSET(0x15BFB630)
#define HBIPKAEAEJE_CTOR_OFFSET UNITYSDK_OFFSET(0x15BFD6A0)
#define HBIPKAEAEJE_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15BFA270)
#define HBIPKAEAEJE_DIHBAHLOAOI_OFFSET UNITYSDK_OFFSET(0x15BFA790)
#define HBIPKAEAEJE_DMAOAKCPNAA_OFFSET UNITYSDK_OFFSET(0x15BFAD70)
#define HBIPKAEAEJE_DPGHDBPBMHA_OFFSET UNITYSDK_OFFSET(0x15BFA950)
#define HBIPKAEAEJE_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0x15BFAA90)
#define HBIPKAEAEJE_ECDBIHPFJCL_OFFSET UNITYSDK_OFFSET(0x15BFB4D0)
#define HBIPKAEAEJE_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15BFA320)
#define HBIPKAEAEJE_EPDGHMDIKMC_OFFSET UNITYSDK_OFFSET(0x15BFC8E0)
#define HBIPKAEAEJE_FAFHCIHGCIO_OFFSET UNITYSDK_OFFSET(0x15BFBBA0)
#define HBIPKAEAEJE_FHEBAMAAGPD_OFFSET UNITYSDK_OFFSET(0x15BFCFE0)
#define HBIPKAEAEJE_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x15BFCB00)
#define HBIPKAEAEJE_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x15BFCB50)
#define HBIPKAEAEJE_GET__SHIELDOVERRIDEANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x15BFCA90)
#define HBIPKAEAEJE_GILDLIKKFHC_OFFSET UNITYSDK_OFFSET(0x15BFD0A0)
#define HBIPKAEAEJE_GJMJLLHGCKP_OFFSET UNITYSDK_OFFSET(0x15BFC480)
#define HBIPKAEAEJE_GKCNPOGCJIF_OFFSET UNITYSDK_OFFSET(0x15BFAB80)
#define HBIPKAEAEJE_HGCLMFOKDNG_OFFSET UNITYSDK_OFFSET(0x15BFB320)
#define HBIPKAEAEJE_IEHGBOBCILB_OFFSET UNITYSDK_OFFSET(0x15BFCA30)
#define HBIPKAEAEJE_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x15BFA8C0)
#define HBIPKAEAEJE_JOHOCGGNMNB_OFFSET UNITYSDK_OFFSET(0x15BFC9A0)
#define HBIPKAEAEJE_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0x15BFAC90)
#define HBIPKAEAEJE_KCJAINDMOFO_OFFSET UNITYSDK_OFFSET(0x15BFA500)
#define HBIPKAEAEJE_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0x15BFCC50)
#define HBIPKAEAEJE_KHNLCACKMAH_OFFSET UNITYSDK_OFFSET(0x15BFCF50)
#define HBIPKAEAEJE_KLPGNEJBGIA_OFFSET UNITYSDK_OFFSET(0x15BFCDD0)
#define HBIPKAEAEJE_KMMOEMLIDME_OFFSET UNITYSDK_OFFSET(0x15BFCAB0)
#define HBIPKAEAEJE_KOGOJEIKDFI_OFFSET UNITYSDK_OFFSET(0x15BFCD10)
#define HBIPKAEAEJE_KOIEPHBLHID_OFFSET UNITYSDK_OFFSET(0x15BFAE10)
#define HBIPKAEAEJE_MKMCAJIBGIM_OFFSET UNITYSDK_OFFSET(0x15BFBF60)
#define HBIPKAEAEJE_NCNDAHNBFIM_OFFSET UNITYSDK_OFFSET(0x15BFA550)
#define HBIPKAEAEJE_NKEJAONOLAH_OFFSET UNITYSDK_OFFSET(0x15BFC940)
#define HBIPKAEAEJE_NLOMBELILNF_OFFSET UNITYSDK_OFFSET(0x15BFA6B0)
#define HBIPKAEAEJE_NNIAKHBHGAB_OFFSET UNITYSDK_OFFSET(0x15BFA600)
#define HBIPKAEAEJE_NPLMFDNEKIO_OFFSET UNITYSDK_OFFSET(0x15BFB190)
#define HBIPKAEAEJE_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x15BFA2D0)
#define HBIPKAEAEJE_ONRETURN_OFFSET UNITYSDK_OFFSET(0x15BFA460)
#define HBIPKAEAEJE_SET__SHIELDOVERRIDEANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x15BFCAA0)
#define HBIPKAEAEJE__ONBIND_OFFSET UNITYSDK_OFFSET(0x15BFA650)
#define HBIPKAEAEJE__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x15BFA9F0)
#define HBIPKAEAEJE___ONSETHPBREAKHINT_B__15_0_OFFSET UNITYSDK_OFFSET(0x15BFD6D0)

inline static constexpr unsigned int HBIPKAEAEJE_TypeDefinitionIndex = 71485;

	class HBIPKAEAEJE : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* GFEJEMOJIAK; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::RPG::Client::PrefabLoadMeta* AGIHDGFPEFI; // 0x70
		::UnityEngine::GameObject* LDLPGEJCBBM; // 0x78
		::UnityEngine::GameObject* BMCBHAOIFIP; // 0x80
		::GMANGALFFPB* __ShieldOverrideAnimationName_k__BackingField; // 0x88
		::System::Action* HACFEIKFPOA; // 0x90
		::UnityEngine::Animation* BOBPNIENKBN; // 0x98
		::KNGADCOOODI* IBCGLDMLBMJ; // 0xA0
		::UnityEngine::Animation* MBLLJGMFJJF; // 0xA8
		::System::Boolean EDILAOJDGBM; // 0xB0
		::System::Byte _padding0[0x3];
		::System::Single DCOICMHAAPC; // 0xB4
		::System::Single IJJIEEHPFHI; // 0xB8
		// static const ::System::String* CEJMKFOOCDF; // 0x0
		// static const ::System::String* KJBGONHAHJG; // 0x0
		// static const ::System::String* ANHLFINHDCM; // 0x0
		// static const ::System::String* APLOLEFHMAJ; // 0x0
		// static const ::System::String* MHPDKFKMNCP; // 0x0
		// static const ::System::String* HEDDENOIDGH; // 0x0
		// static const ::System::String* IGCJGGMCGLD; // 0x0
		// static const ::System::Object JCFCJNCFGPC; // 0x0
		// static const ::System::Object KDEFFBGBJJC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_ONRETURN_OFFSET))(this);
		}

		::System::Void NNIAKHBHGAB(::GMANGALFFPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMANGALFFPB*))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_NNIAKHBHGAB_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIPKAEAEJE__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIPKAEAEJE__ONDISPOSE_OFFSET))(this);
		}

		::System::Void EBPDLMBPLBL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Void DMAOAKCPNAA(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_DMAOAKCPNAA_OFFSET))(this, a1);
		}

		::System::Void KOIEPHBLHID(::RPG::GameCore::AbilityCurrentShieldChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_KOIEPHBLHID_OFFSET))(this, a1);
		}

		::System::Void COIGHOBFILM(::RPG::GameCore::LevelCharacterRemoveShield* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRemoveShield*))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_COIGHOBFILM_OFFSET))(this, a1);
		}

		::System::Void AIOJNOHDCDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_AIOJNOHDCDM_OFFSET))(this);
		}

		::System::Void CLLJFELLOBF(::RPG::GameCore::AbilityMaxHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxHPChange*))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_CLLJFELLOBF_OFFSET))(this, a1);
		}

		::System::Void FAFHCIHGCIO(::FBPOKMHMGKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBPOKMHMGKO*))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_FAFHCIHGCIO_OFFSET))(this, a1);
		}

		::System::Boolean GKCNPOGCJIF(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_GKCNPOGCJIF_OFFSET))(this, a1);
		}

		::System::Int32 MKMCAJIBGIM(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_MKMCAJIBGIM_OFFSET))(this, a1);
		}

		::System::Void GJMJLLHGCKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_GJMJLLHGCKP_OFFSET))(this);
		}

		::System::Boolean KCJAINDMOFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_KCJAINDMOFO_OFFSET))(this);
		}

		::System::Void NLOMBELILNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_NLOMBELILNF_OFFSET))(this);
		}

		::System::Void NCNDAHNBFIM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_NCNDAHNBFIM_OFFSET))(this, a1);
		}

		::System::Void ECDBIHPFJCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_ECDBIHPFJCL_OFFSET))(this);
		}

		::System::Void NPLMFDNEKIO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_NPLMFDNEKIO_OFFSET))(this, a1);
		}

		::System::Void DIHBAHLOAOI(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_DIHBAHLOAOI_OFFSET))(this, a1);
		}

		::System::Void DPGHDBPBMHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_DPGHDBPBMHA_OFFSET))(this);
		}

		::System::Void BKBKDDAIBNP(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_BKBKDDAIBNP_OFFSET))(this, a1, a2);
		}

		::System::String* IEHGBOBCILB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_IEHGBOBCILB_OFFSET))(this);
		}

		::System::String* HGCLMFOKDNG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_HGCLMFOKDNG_OFFSET))(this);
		}

		::System::String* EPDGHMDIKMC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_EPDGHMDIKMC_OFFSET))(this);
		}

		::System::String* NKEJAONOLAH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_NKEJAONOLAH_OFFSET))(this);
		}

		::System::String* JOHOCGGNMNB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_JOHOCGGNMNB_OFFSET))(this);
		}

		::GMANGALFFPB* get__ShieldOverrideAnimationName()
		{
			return ((::GMANGALFFPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_GET__SHIELDOVERRIDEANIMATIONNAME_OFFSET))(this);
		}

		::System::Void set__ShieldOverrideAnimationName(::GMANGALFFPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMANGALFFPB*))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_SET__SHIELDOVERRIDEANIMATIONNAME_OFFSET))(this, a1);
		}

		::System::Void KMMOEMLIDME(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_KMMOEMLIDME_OFFSET))(this, a1);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_GET_INDEX_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_GET_TRANS_OFFSET))(this);
		}

		::System::Void BBPGKAAAHCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_BBPGKAAAHCH_OFFSET))(this, a1);
		}

		::System::Void KHCBFBGMKBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_KHCBFBGMKBJ_OFFSET))(this, a1);
		}

		::System::Void KOGOJEIKDFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_KOGOJEIKDFI_OFFSET))(this, a1);
		}

		::System::Void KLPGNEJBGIA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_KLPGNEJBGIA_OFFSET))(this, a1);
		}

		::System::Void BALIBNLMFAF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_BALIBNLMFAF_OFFSET))(this, a1);
		}

		::System::Void KHNLCACKMAH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_KHNLCACKMAH_OFFSET))(this, a1);
		}

		::System::Void FHEBAMAAGPD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_FHEBAMAAGPD_OFFSET))(this, a1);
		}

		::System::Void GILDLIKKFHC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_GILDLIKKFHC_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIPKAEAEJE_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Boolean __OnSetHpBreakHint_b__15_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HBIPKAEAEJE___ONSETHPBREAKHINT_B__15_0_OFFSET))(this, a1);
		}

	};
