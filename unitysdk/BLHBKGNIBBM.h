#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIData.h"
class CNADKCFAIEB;
class DCGIDEKLGAJ;
class ECJOICEMEGG;
class KALGLFPKCGH;
class MOCALHHICIP;
class PFMAHFAJHLC_MEBEAAGEOKK;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonsterHPBarStyle; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityDirtyHPChange; }
namespace RPG::GameCore { class AbilityMaxHPChange; }
namespace RPG::GameCore { class AbilityRallyHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TriggerUINotifyParam; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define BLHBKGNIBBM_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0xC401CD0)
#define BLHBKGNIBBM_AIGLPGDHLKO_OFFSET UNITYSDK_OFFSET(0xC4034B0)
#define BLHBKGNIBBM_AIKDLOJOJOC_OFFSET UNITYSDK_OFFSET(0xC403270)
#define BLHBKGNIBBM_AIOJNOHDCDM_OFFSET UNITYSDK_OFFSET(0xC401EC0)
#define BLHBKGNIBBM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC403D70)
#define BLHBKGNIBBM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC4041D0)
#define BLHBKGNIBBM_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0xC403A40)
#define BLHBKGNIBBM_BDHKBPHAFKP_OFFSET UNITYSDK_OFFSET(0xC402830)
#define BLHBKGNIBBM_BLJMEDLHDJI_OFFSET UNITYSDK_OFFSET(0xC403330)
#define BLHBKGNIBBM_CCJBBIOCLIM_OFFSET UNITYSDK_OFFSET(0xC4012F0)
#define BLHBKGNIBBM_CDPPNHNHJBK_OFFSET UNITYSDK_OFFSET(0xC401C00)
#define BLHBKGNIBBM_CIHGFALFMFK_OFFSET UNITYSDK_OFFSET(0xC403830)
#define BLHBKGNIBBM_CIINDFONDLC_OFFSET UNITYSDK_OFFSET(0xC403090)
#define BLHBKGNIBBM_CTOR_OFFSET UNITYSDK_OFFSET(0xC404610)
#define BLHBKGNIBBM_DFHKMNFAMEO_OFFSET UNITYSDK_OFFSET(0xC401400)
#define BLHBKGNIBBM_DMAOAKCPNAA_OFFSET UNITYSDK_OFFSET(0xC402410)
#define BLHBKGNIBBM_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0xC4020E0)
#define BLHBKGNIBBM_EDADOIOIJEL_OFFSET UNITYSDK_OFFSET(0xC4017B0)
#define BLHBKGNIBBM_EKCHAHDIEFH_OFFSET UNITYSDK_OFFSET(0xC400790)
#define BLHBKGNIBBM_FHGAGLNCNMO_OFFSET UNITYSDK_OFFSET(0xC403630)
#define BLHBKGNIBBM_FMAMJMEFMNC_OFFSET UNITYSDK_OFFSET(0xC402F70)
#define BLHBKGNIBBM_FNKFKLJFODH_OFFSET UNITYSDK_OFFSET(0xC401BB0)
#define BLHBKGNIBBM_GLPIALKAHDI_OFFSET UNITYSDK_OFFSET(0xC401F60)
#define BLHBKGNIBBM_GMPPAPLKJNO_OFFSET UNITYSDK_OFFSET(0xC402380)
#define BLHBKGNIBBM_GNPDMIGGLPF_OFFSET UNITYSDK_OFFSET(0xC400E40)
#define BLHBKGNIBBM_HDJHJFDNALE_OFFSET UNITYSDK_OFFSET(0xC4030F0)
#define BLHBKGNIBBM_HOBCJKNLMGF_OFFSET UNITYSDK_OFFSET(0xC4018F0)
#define BLHBKGNIBBM_IBNEIAKMDKB_OFFSET UNITYSDK_OFFSET(0xC400A90)
#define BLHBKGNIBBM_JCAEBCJGCDM_OFFSET UNITYSDK_OFFSET(0xC402310)
#define BLHBKGNIBBM_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xC400B80)
#define BLHBKGNIBBM_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0xC402640)
#define BLHBKGNIBBM_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0xC403BC0)
#define BLHBKGNIBBM_KHNLCACKMAH_OFFSET UNITYSDK_OFFSET(0xC403720)
#define BLHBKGNIBBM_KJEFLAFAAOB_OFFSET UNITYSDK_OFFSET(0xC4031B0)
#define BLHBKGNIBBM_KLOAJBKEKAA_OFFSET UNITYSDK_OFFSET(0xC401B60)
#define BLHBKGNIBBM_KOGOJEIKDFI_OFFSET UNITYSDK_OFFSET(0xC403B00)
#define BLHBKGNIBBM_KOLBHPFLGHN_OFFSET UNITYSDK_OFFSET(0xC402FD0)
#define BLHBKGNIBBM_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0xC4000C0)
#define BLHBKGNIBBM_LLNMAFEKGAF_OFFSET UNITYSDK_OFFSET(0xC403570)
#define BLHBKGNIBBM_MFJOANOEHJD_OFFSET UNITYSDK_OFFSET(0xC400860)
#define BLHBKGNIBBM_MJLMLHIOMEI_OFFSET UNITYSDK_OFFSET(0xC402DE0)
#define BLHBKGNIBBM_NDIPOLGGHHF_OFFSET UNITYSDK_OFFSET(0xC402920)
#define BLHBKGNIBBM_NFGHPHBFEGE_OFFSET UNITYSDK_OFFSET(0xC403920)
#define BLHBKGNIBBM_NLAODGOLFKG_OFFSET UNITYSDK_OFFSET(0xC401670)
#define BLHBKGNIBBM_OFGBGCLLCPO_OFFSET UNITYSDK_OFFSET(0xC401A50)
#define BLHBKGNIBBM_OMNOCGOKIDP_OFFSET UNITYSDK_OFFSET(0xC401090)
#define BLHBKGNIBBM_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xC400070)
#define BLHBKGNIBBM_ONRETURN_OFFSET UNITYSDK_OFFSET(0xC4001A0)
#define BLHBKGNIBBM_PAICDHFMCGK_OFFSET UNITYSDK_OFFSET(0xC401FF0)
#define BLHBKGNIBBM_PDHIABLOAIP_OFFSET UNITYSDK_OFFSET(0xC4033F0)
#define BLHBKGNIBBM_PDPKAHJGCLM_OFFSET UNITYSDK_OFFSET(0xC400E90)
#define BLHBKGNIBBM_PHMEJMELDOB_OFFSET UNITYSDK_OFFSET(0xC403C80)
#define BLHBKGNIBBM__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xC4002B0)
#define BLHBKGNIBBM__ONBIND_OFFSET UNITYSDK_OFFSET(0xC3FF970)
#define BLHBKGNIBBM__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC400CA0)
#define BLHBKGNIBBM__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC4001F0)
#define BLHBKGNIBBM__ONTICK_OFFSET UNITYSDK_OFFSET(0xC400D60)
#define BLHBKGNIBBM__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC400450)
#define BLHBKGNIBBM___FORCEPLAYHPTWEEN_B__36_0_OFFSET UNITYSDK_OFFSET(0xC404670)

inline static constexpr unsigned int BLHBKGNIBBM_TypeDefinitionIndex = 73810;

	class BLHBKGNIBBM : public ::FMPCODLIOLG
	{
	public:
		::ECJOICEMEGG* OPHCFDAACGK; // 0x60
		::UnityEngine::RectTransform* COMKFDLOADC; // 0x68
		::UnityEngine::Transform* GHPLBANFEKF; // 0x70
		::UnityEngine::Animation* KHONICBMFBP; // 0x78
		::UnityEngine::Transform* HCOGIJGBHFB; // 0x80
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x88
		::CNADKCFAIEB* IIEBIBMCGNB; // 0x90
		::RPG::Client::MonsterHPBarStyle* GIMDNPHGDEJ; // 0x98
		::RPG::Client::LocalizedText* LEFJHMGFOCH; // 0xA0
		::DCGIDEKLGAJ* OKHDAMMMMLI; // 0xA8
		::KALGLFPKCGH* LFFBIIPBPJJ; // 0xB0
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0xB8
		::System::Boolean AAGKIPFCNHO; // 0xC0
		::System::Byte _padding0[0x3];
		::System::Single HHPNEFNNMJE; // 0xC4
		::UnityEngine::Color JPMHGCKOJBC; // 0xC8
		::System::Single IFOIKJADBIA; // 0xD8
		::UnityEngine::Color PPLOPNFNEDE; // 0xDC
		::System::Single AAHFGHOCABH; // 0xEC
		::UnityEngine::Color MKGFHLODOGJ; // 0xF0
		// static const ::System::String* IALFONPILCN; // 0x0
		// static const ::System::String* BKOOGOBKBBK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM__ONBIND_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_ONRETURN_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BLHBKGNIBBM__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM__SETUPVIEW_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLHBKGNIBBM__ONTICK_OFFSET))(this, a1);
		}

		::System::Void GNPDMIGGLPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_GNPDMIGGLPF_OFFSET))(this);
		}

		::System::Void PDPKAHJGCLM(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_PDPKAHJGCLM_OFFSET))(this, a1);
		}

		::System::Void DFHKMNFAMEO(::RPG::GameCore::AbilityMaxHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxHPChange*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_DFHKMNFAMEO_OFFSET))(this, a1);
		}

		::System::Void EDADOIOIJEL(::RPG::GameCore::AbilityDirtyHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityDirtyHPChange*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_EDADOIOIJEL_OFFSET))(this, a1);
		}

		::System::Void OFGBGCLLCPO(::RPG::GameCore::TriggerUINotifyParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerUINotifyParam*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_OFGBGCLLCPO_OFFSET))(this, a1);
		}

		::System::Void KLOAJBKEKAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_KLOAJBKEKAA_OFFSET))(this);
		}

		::System::Void FNKFKLJFODH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_FNKFKLJFODH_OFFSET))(this);
		}

		::System::Void CDPPNHNHJBK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_CDPPNHNHJBK_OFFSET))(this, a1);
		}

		::System::Void AGIJFEPDKMM(::RPG::GameCore::AbilityRallyHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityRallyHPChange*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_AGIJFEPDKMM_OFFSET))(this, a1);
		}

		::System::Void AIOJNOHDCDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_AIOJNOHDCDM_OFFSET))(this);
		}

		::System::Void GLPIALKAHDI(::MOCALHHICIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOCALHHICIP*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_GLPIALKAHDI_OFFSET))(this, a1);
		}

		::System::Void PAICDHFMCGK(::RPG::GameCore::StageInvasionMonsterUIData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageInvasionMonsterUIData))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_PAICDHFMCGK_OFFSET))(this, a1);
		}

		::System::Void EBPDLMBPLBL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void DMAOAKCPNAA(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_DMAOAKCPNAA_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Boolean JCAEBCJGCDM(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_JCAEBCJGCDM_OFFSET))(this, a1);
		}

		::System::Void GMPPAPLKJNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_GMPPAPLKJNO_OFFSET))(this);
		}

		::System::Void BDHKBPHAFKP(::PFMAHFAJHLC_MEBEAAGEOKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFMAHFAJHLC_MEBEAAGEOKK*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_BDHKBPHAFKP_OFFSET))(this, a1);
		}

		::System::Void NDIPOLGGHHF(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_NDIPOLGGHHF_OFFSET))(this, a1, a2);
		}

		::System::Void MJLMLHIOMEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_MJLMLHIOMEI_OFFSET))(this);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void OMNOCGOKIDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_OMNOCGOKIDP_OFFSET))(this);
		}

		::System::Void NLAODGOLFKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_NLAODGOLFKG_OFFSET))(this);
		}

		::System::Void HOBCJKNLMGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_HOBCJKNLMGF_OFFSET))(this);
		}

		::System::Boolean FMAMJMEFMNC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_FMAMJMEFMNC_OFFSET))(this);
		}

		::System::Void MFJOANOEHJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_MFJOANOEHJD_OFFSET))(this);
		}

		::System::Void CCJBBIOCLIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_CCJBBIOCLIM_OFFSET))(this);
		}

		::System::Void KOLBHPFLGHN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_KOLBHPFLGHN_OFFSET))(this, a1);
		}

		::System::Void CIINDFONDLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_CIINDFONDLC_OFFSET))(this);
		}

		::System::Void EKCHAHDIEFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_EKCHAHDIEFH_OFFSET))(this);
		}

		::System::Void IBNEIAKMDKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_IBNEIAKMDKB_OFFSET))(this);
		}

		::System::Void HDJHJFDNALE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_HDJHJFDNALE_OFFSET))(this, a1);
		}

		::System::Void KJEFLAFAAOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_KJEFLAFAAOB_OFFSET))(this, a1);
		}

		::System::Void AIKDLOJOJOC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_AIKDLOJOJOC_OFFSET))(this, a1);
		}

		::System::Void BLJMEDLHDJI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_BLJMEDLHDJI_OFFSET))(this, a1);
		}

		::System::Void PDHIABLOAIP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_PDHIABLOAIP_OFFSET))(this, a1);
		}

		::System::Void AIGLPGDHLKO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_AIGLPGDHLKO_OFFSET))(this, a1);
		}

		::System::Void LLNMAFEKGAF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_LLNMAFEKGAF_OFFSET))(this, a1);
		}

		::System::Void FHGAGLNCNMO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_FHGAGLNCNMO_OFFSET))(this, a1);
		}

		::System::Void KHNLCACKMAH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_KHNLCACKMAH_OFFSET))(this, a1);
		}

		::System::Void CIHGFALFMFK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_CIHGFALFMFK_OFFSET))(this, a1);
		}

		::System::Void NFGHPHBFEGE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_NFGHPHBFEGE_OFFSET))(this, a1);
		}

		::System::Void BBPGKAAAHCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_BBPGKAAAHCH_OFFSET))(this, a1);
		}

		::System::Void KOGOJEIKDFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_KOGOJEIKDFI_OFFSET))(this, a1);
		}

		::System::Void KHCBFBGMKBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_KHCBFBGMKBJ_OFFSET))(this, a1);
		}

		::System::Void PHMEJMELDOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_PHMEJMELDOB_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void __ForcePlayHPTween_b__36_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM___FORCEPLAYHPTWEEN_B__36_0_OFFSET))(this);
		}

	};
