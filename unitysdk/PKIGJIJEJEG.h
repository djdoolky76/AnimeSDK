#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BILNKKBKIAN;
class EIIAHKLHBKJ;
class KAPEMBCNNIG;
namespace RPG::Client { class MonsterPhaseChangeParams; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class AbilityCharacterModelChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class PlayCrossHairPreviewFadeIn; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define PKIGJIJEJEG_AIFLMCJJFKB_OFFSET UNITYSDK_OFFSET(0xC2B4A70)
#define PKIGJIJEJEG_AOJMBDBLBIL_OFFSET UNITYSDK_OFFSET(0xC2B7680)
#define PKIGJIJEJEG_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC2B79D0)
#define PKIGJIJEJEG_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC2B7C70)
#define PKIGJIJEJEG_BLGCKLHBOHE_OFFSET UNITYSDK_OFFSET(0xC2B7790)
#define PKIGJIJEJEG_BMCADFLIGNL_OFFSET UNITYSDK_OFFSET(0xC2B58D0)
#define PKIGJIJEJEG_CEMMOPOHNPO_OFFSET UNITYSDK_OFFSET(0xC2B7500)
#define PKIGJIJEJEG_CHLNOIGEGFC_OFFSET UNITYSDK_OFFSET(0xC2B5B40)
#define PKIGJIJEJEG_CLNCCDFPJNJ_OFFSET UNITYSDK_OFFSET(0xC2B64E0)
#define PKIGJIJEJEG_CTOR_OFFSET UNITYSDK_OFFSET(0xC2B7EE0)
#define PKIGJIJEJEG_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0xC2B7430)
#define PKIGJIJEJEG_DGBGEJOLBEO_OFFSET UNITYSDK_OFFSET(0xC2B7360)
#define PKIGJIJEJEG_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC2B5360)
#define PKIGJIJEJEG_DPGHDBPBMHA_OFFSET UNITYSDK_OFFSET(0xC2B6A50)
#define PKIGJIJEJEG_EEOHFNAMHNK_OFFSET UNITYSDK_OFFSET(0xC2B6650)
#define PKIGJIJEJEG_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC2B4EB0)
#define PKIGJIJEJEG_ENBLKNGDGPN_OFFSET UNITYSDK_OFFSET(0xC2B62F0)
#define PKIGJIJEJEG_GACBAPMHMLO_OFFSET UNITYSDK_OFFSET(0xC2B5010)
#define PKIGJIJEJEG_HCKDCGBGLPJ_OFFSET UNITYSDK_OFFSET(0xC2B6B10)
#define PKIGJIJEJEG_HMFLEJOMKJH_OFFSET UNITYSDK_OFFSET(0xC2B7910)
#define PKIGJIJEJEG_IAAOBCKAGPF_OFFSET UNITYSDK_OFFSET(0xC2B6530)
#define PKIGJIJEJEG_IHOGFNMFFAL_OFFSET UNITYSDK_OFFSET(0xC2B6A00)
#define PKIGJIJEJEG_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xC2B60E0)
#define PKIGJIJEJEG_KBMBJPINNFI_OFFSET UNITYSDK_OFFSET(0xC2B75C0)
#define PKIGJIJEJEG_KBNKCMBPFGE_OFFSET UNITYSDK_OFFSET(0xC2B6490)
#define PKIGJIJEJEG_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0xC2B6430)
#define PKIGJIJEJEG_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0xC2B63D0)
#define PKIGJIJEJEG_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0xC2B44D0)
#define PKIGJIJEJEG_MDIOIKCGIOL_OFFSET UNITYSDK_OFFSET(0xC2B5D30)
#define PKIGJIJEJEG_MIGKEDPKPJP_OFFSET UNITYSDK_OFFSET(0xC2B4530)
#define PKIGJIJEJEG_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0xC2B7220)
#define PKIGJIJEJEG_NCOFMMCPJNN_OFFSET UNITYSDK_OFFSET(0xC2B6140)
#define PKIGJIJEJEG_NICDCPPJNPF_OFFSET UNITYSDK_OFFSET(0xC2B6700)
#define PKIGJIJEJEG_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xC2B51A0)
#define PKIGJIJEJEG_NKFOGAFIBNG_OFFSET UNITYSDK_OFFSET(0xC2B6380)
#define PKIGJIJEJEG_NKMCHFEELIN_OFFSET UNITYSDK_OFFSET(0xC2B56D0)
#define PKIGJIJEJEG_OBCDAHMIING_OFFSET UNITYSDK_OFFSET(0xC2B5FB0)
#define PKIGJIJEJEG_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xC2B43C0)
#define PKIGJIJEJEG_ONRETURN_OFFSET UNITYSDK_OFFSET(0xC2B4F50)
#define PKIGJIJEJEG_PHBLOBANJIM_OFFSET UNITYSDK_OFFSET(0xC2B7850)
#define PKIGJIJEJEG_PLHBIGFGBCF_OFFSET UNITYSDK_OFFSET(0xC2B69B0)
#define PKIGJIJEJEG_POAJNJEKEGC_OFFSET UNITYSDK_OFFSET(0xC2B65A0)
#define PKIGJIJEJEG__ONBIND_OFFSET UNITYSDK_OFFSET(0xC2B5430)
#define PKIGJIJEJEG__ONTICK_OFFSET UNITYSDK_OFFSET(0xC2B5F10)

inline static constexpr unsigned int PKIGJIJEJEG_TypeDefinitionIndex = 71573;

	class PKIGJIJEJEG : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::UIFollow3DTarget* CDKAMAHHCPO; // 0x60
		::KAPEMBCNNIG* IGHAHBNLIJA; // 0x68
		::UnityEngine::GameObject* FNNIKECJGLJ; // 0x70
		::RPG::Client::PrefabLoadMeta* LOKKKIBGMPC; // 0x78
		::RPG::Client::PipelineCameraEngine* EGBDJHPFMCD; // 0x80
		::System::String* PCJFCKONFJN; // 0x88
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x90
		::RPG::Client::PrefabLoadMeta* KMGHGLFMEGF; // 0x98
		::UnityEngine::Transform* LFGMLJCCPCH; // 0xA0
		::UnityEngine::Transform* DOGLKOGBIDN; // 0xA8
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0xB0
		::UnityEngine::Transform* FFMIEEALFCB; // 0xB8
		::UnityEngine::Animation* ODIMJBJLHDC; // 0xC0
		::System::String* KBABKKNBNOG; // 0xC8
		::UnityEngine::GameObject* PLFKIKCBHMJ; // 0xD0
		::UnityEngine::Vector3 KLBPBINJONP; // 0xD8
		::System::Boolean MICNJFEPEBH; // 0xE4
		::System::Boolean MHEAIOMEGCA; // 0xE5
		::System::Boolean NJHCOHGHAPL; // 0xE6
		::System::Boolean MKGJHIHCDCL; // 0xE7
		::System::Boolean OBMPBDFOBPC; // 0xE8
		::System::Boolean AMLLNAODLIH; // 0xE9
		::System::Boolean JKCKKCGFCBM; // 0xEA
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 JMHGLBIJNDI; // 0xEC
		// static const ::System::String* KKAPAKIEFIP; // 0x0
		// static const ::System::String* PEFOHJGAAAB; // 0x0
		// static const ::System::String* GFFBEDCMFIJ; // 0x0
		// static const ::System::String* MFKDGEKILLP; // 0x0
		// static const ::System::String* OGFKHBHBLOC; // 0x0
		// static const ::System::String* OEFEBDAOFGJ; // 0x0
		// static const ::System::Object CGBOONEACNL; // 0x0
		// static const ::System::Object DEKEGMIPLEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_CTOR_OFFSET))(this);
		}

		::System::Void OnAcquire(::BILNKKBKIAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BILNKKBKIAN*))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_ONRETURN_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PKIGJIJEJEG__ONTICK_OFFSET))(this, a1);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void ENBLKNGDGPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_ENBLKNGDGPN_OFFSET))(this);
		}

		::System::Boolean NKFOGAFIBNG(::KAPEMBCNNIG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAPEMBCNNIG*))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_NKFOGAFIBNG_OFFSET))(this, a1);
		}

		::System::Void LCJLLGBJENF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_LCJLLGBJENF_OFFSET))(this);
		}

		::System::Void LBPHINKONCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_LBPHINKONCH_OFFSET))(this);
		}

		::System::Void KBNKCMBPFGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_KBNKCMBPFGE_OFFSET))(this);
		}

		::System::Void CLNCCDFPJNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_CLNCCDFPJNJ_OFFSET))(this);
		}

		::System::Void IAAOBCKAGPF(::RPG::Client::MonsterPhaseChangeParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterPhaseChangeParams*))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_IAAOBCKAGPF_OFFSET))(this, a1);
		}

		::System::Void POAJNJEKEGC(::RPG::GameCore::AbilityCharacterModelChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCharacterModelChange*))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_POAJNJEKEGC_OFFSET))(this, a1);
		}

		::System::Void EEOHFNAMHNK(::EIIAHKLHBKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIIAHKLHBKJ*))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_EEOHFNAMHNK_OFFSET))(this, a1);
		}

		::System::Void NICDCPPJNPF(::RPG::GameCore::PlayCrossHairPreviewFadeIn* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayCrossHairPreviewFadeIn*))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_NICDCPPJNPF_OFFSET))(this, a1);
		}

		::System::Void PLHBIGFGBCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_PLHBIGFGBCF_OFFSET))(this);
		}

		::System::Void IHOGFNMFFAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_IHOGFNMFFAL_OFFSET))(this);
		}

		::System::Void MIGKEDPKPJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_MIGKEDPKPJP_OFFSET))(this);
		}

		::System::Void AIFLMCJJFKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_AIFLMCJJFKB_OFFSET))(this);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void MDIOIKCGIOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_MDIOIKCGIOL_OFFSET))(this);
		}

		::System::Void CHLNOIGEGFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_CHLNOIGEGFC_OFFSET))(this);
		}

		::System::Void BMCADFLIGNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_BMCADFLIGNL_OFFSET))(this);
		}

		::System::Void GACBAPMHMLO(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_GACBAPMHMLO_OFFSET))(this, a1, a2);
		}

		::System::Void DPGHDBPBMHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_DPGHDBPBMHA_OFFSET))(this);
		}

		::System::Void OBCDAHMIING()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_OBCDAHMIING_OFFSET))(this);
		}

		::System::Void NCOFMMCPJNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_NCOFMMCPJNN_OFFSET))(this);
		}

		::System::Void NKMCHFEELIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_NKMCHFEELIN_OFFSET))(this);
		}

		::System::Void HCKDCGBGLPJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_HCKDCGBGLPJ_OFFSET))(this, a1);
		}

		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::Void DGBGEJOLBEO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_DGBGEJOLBEO_OFFSET))(this, a1);
		}

		::System::Void DDCDDLKFKNI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_DDCDDLKFKNI_OFFSET))(this, a1);
		}

		::System::Void CEMMOPOHNPO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_CEMMOPOHNPO_OFFSET))(this, a1);
		}

		::System::Void KBMBJPINNFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_KBMBJPINNFI_OFFSET))(this, a1);
		}

		::System::Void AOJMBDBLBIL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_AOJMBDBLBIL_OFFSET))(this, a1);
		}

		::System::Void BLGCKLHBOHE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_BLGCKLHBOHE_OFFSET))(this, a1);
		}

		::System::Void PHBLOBANJIM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_PHBLOBANJIM_OFFSET))(this, a1);
		}

		::System::Void HMFLEJOMKJH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_HMFLEJOMKJH_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIGJIJEJEG_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
