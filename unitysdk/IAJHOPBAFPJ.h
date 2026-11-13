#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IAJHOPBAFPJ_HPBarType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/IGKFNIEJGLM.h"
class HGKIKKOLLFA;
class JLLLBIBKBHJ;
class JPOKOHEHHLL;
class MOCALHHICIP;
class OIIJADEHJOB;
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityRallyHPChange; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define IAJHOPBAFPJ_AELHCNEJNEH_OFFSET UNITYSDK_OFFSET(0x19427ED0)
#define IAJHOPBAFPJ_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0x19428930)
#define IAJHOPBAFPJ_AIOJNOHDCDM_OFFSET UNITYSDK_OFFSET(0x19428B50)
#define IAJHOPBAFPJ_AKCFGBIPOCO_OFFSET UNITYSDK_OFFSET(0x194274D0)
#define IAJHOPBAFPJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x194299A0)
#define IAJHOPBAFPJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x19429C70)
#define IAJHOPBAFPJ_CCJBBIOCLIM_OFFSET UNITYSDK_OFFSET(0x19428390)
#define IAJHOPBAFPJ_CIHGFALFMFK_OFFSET UNITYSDK_OFFSET(0x19429730)
#define IAJHOPBAFPJ_CIINDFONDLC_OFFSET UNITYSDK_OFFSET(0x19428FC0)
#define IAJHOPBAFPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x19429F10)
#define IAJHOPBAFPJ_DFHKABOABGJ_OFFSET UNITYSDK_OFFSET(0x19429480)
#define IAJHOPBAFPJ_DOJPGAOICJF_OFFSET UNITYSDK_OFFSET(0x19428D90)
#define IAJHOPBAFPJ_EEMBDMEHHHH_OFFSET UNITYSDK_OFFSET(0x19429820)
#define IAJHOPBAFPJ_EKCHAHDIEFH_OFFSET UNITYSDK_OFFSET(0x19429040)
#define IAJHOPBAFPJ_FDAMOKINFFE_OFFSET UNITYSDK_OFFSET(0x19428E30)
#define IAJHOPBAFPJ_FHGAGLNCNMO_OFFSET UNITYSDK_OFFSET(0x194292C0)
#define IAJHOPBAFPJ_FOCOJHOAILK_OFFSET UNITYSDK_OFFSET(0x19427B20)
#define IAJHOPBAFPJ_GGMOIDNLJLG_OFFSET UNITYSDK_OFFSET(0x19428110)
#define IAJHOPBAFPJ_GLPIALKAHDI_OFFSET UNITYSDK_OFFSET(0x19428D10)
#define IAJHOPBAFPJ_GNEJCDGCODK_OFFSET UNITYSDK_OFFSET(0x19428C80)
#define IAJHOPBAFPJ_GNPDMIGGLPF_OFFSET UNITYSDK_OFFSET(0x194280C0)
#define IAJHOPBAFPJ_HBDIIMMLMAM_OFFSET UNITYSDK_OFFSET(0x19427810)
#define IAJHOPBAFPJ_HDJHJFDNALE_OFFSET UNITYSDK_OFFSET(0x19429200)
#define IAJHOPBAFPJ_IDFNLGBEPBI_OFFSET UNITYSDK_OFFSET(0x194282C0)
#define IAJHOPBAFPJ_JOFJBBGDGNN_OFFSET UNITYSDK_OFFSET(0x19427D00)
#define IAJHOPBAFPJ_KEPPMBALPFC_OFFSET UNITYSDK_OFFSET(0x19429630)
#define IAJHOPBAFPJ_KHNLCACKMAH_OFFSET UNITYSDK_OFFSET(0x194293B0)
#define IAJHOPBAFPJ_KLOAJBKEKAA_OFFSET UNITYSDK_OFFSET(0x19428BB0)
#define IAJHOPBAFPJ_KOLBHPFLGHN_OFFSET UNITYSDK_OFFSET(0x19428EA0)
#define IAJHOPBAFPJ_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0x19427160)
#define IAJHOPBAFPJ_MFJOANOEHJD_OFFSET UNITYSDK_OFFSET(0x19427710)
#define IAJHOPBAFPJ_MGJPOLKDPKB_OFFSET UNITYSDK_OFFSET(0x19429130)
#define IAJHOPBAFPJ_OMNOCGOKIDP_OFFSET UNITYSDK_OFFSET(0x19428160)
#define IAJHOPBAFPJ_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x194270B0)
#define IAJHOPBAFPJ_ONRETURN_OFFSET UNITYSDK_OFFSET(0x194271F0)
#define IAJHOPBAFPJ_PAFCJJNEOOC_OFFSET UNITYSDK_OFFSET(0x19427AD0)
#define IAJHOPBAFPJ_PDPKAHJGCLM_OFFSET UNITYSDK_OFFSET(0x19428720)
#define IAJHOPBAFPJ_PEECLKDOHCJ_OFFSET UNITYSDK_OFFSET(0x19429910)
#define IAJHOPBAFPJ__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x194273C0)
#define IAJHOPBAFPJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x19426D80)
#define IAJHOPBAFPJ__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x19427250)
#define IAJHOPBAFPJ__ONTICK_OFFSET UNITYSDK_OFFSET(0x19428020)
#define IAJHOPBAFPJ__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19427430)

inline static constexpr unsigned int IAJHOPBAFPJ_TypeDefinitionIndex = 73706;

	class IAJHOPBAFPJ : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::UnityEngine::UI::Text* CBFPCIBCOHL; // 0x70
		::JLLLBIBKBHJ* JCOAIELFALK; // 0x78
		::UnityEngine::ParticleSystem* HDNJKMJLOOG; // 0x80
		::HGKIKKOLLFA* INFKHFPPPCN; // 0x88
		::UnityEngine::Animation* KHONICBMFBP; // 0x90
		::UnityEngine::RectTransform* COMKFDLOADC; // 0x98
		::UnityEngine::Transform* OJGNPJNFLMB; // 0xA0
		::OIIJADEHJOB* OKHDAMMMMLI; // 0xA8
		::UnityEngine::Color MKGFHLODOGJ; // 0xB0
		::System::Single IFOIKJADBIA; // 0xC0
		::System::Single HHPNEFNNMJE; // 0xC4
		::UnityEngine::Color AGAEOMDOKMJ; // 0xC8
		::System::Int32 NNHBIPEOPJN; // 0xD8
		::System::Boolean AAGKIPFCNHO; // 0xDC
		::System::Boolean EHCNHMLLAIC; // 0xDD
		::System::Byte _padding0[0x2];
		::RPG::GameCore::FixPoint DODFNGKLPHK; // 0xE0
		::UnityEngine::Color DJECEPKOHIH; // 0xE8
		::UnityEngine::Color FDLGJFFEKFN; // 0xF8
		::UnityEngine::Color PCCDLCKDNNB; // 0x108
		::UnityEngine::Color PPLOPNFNEDE; // 0x118
		// static const ::System::String* BKOOGOBKBBK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ__ONBIND_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_ONRETURN_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ__SETUPVIEW_OFFSET))(this);
		}

		::System::Void AKCFGBIPOCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_AKCFGBIPOCO_OFFSET))(this);
		}

		::System::Single FOCOJHOAILK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_FOCOJHOAILK_OFFSET))(this);
		}

		::System::Single JOFJBBGDGNN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_JOFJBBGDGNN_OFFSET))(this);
		}

		::System::Single AELHCNEJNEH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_AELHCNEJNEH_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ__ONTICK_OFFSET))(this, a1);
		}

		::System::Void GNPDMIGGLPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_GNPDMIGGLPF_OFFSET))(this);
		}

		::System::Void GGMOIDNLJLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_GGMOIDNLJLG_OFFSET))(this);
		}

		::System::Void IDFNLGBEPBI(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_IDFNLGBEPBI_OFFSET))(this, a1);
		}

		::System::Void PDPKAHJGCLM(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_PDPKAHJGCLM_OFFSET))(this, a1);
		}

		::System::Void AGIJFEPDKMM(::RPG::GameCore::AbilityRallyHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityRallyHPChange*))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_AGIJFEPDKMM_OFFSET))(this, a1);
		}

		::System::Void AIOJNOHDCDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_AIOJNOHDCDM_OFFSET))(this);
		}

		::System::Void KLOAJBKEKAA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_KLOAJBKEKAA_OFFSET))(this, a1);
		}

		::System::Void GNEJCDGCODK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_GNEJCDGCODK_OFFSET))(this, a1);
		}

		::System::Void GLPIALKAHDI(::MOCALHHICIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOCALHHICIP*))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_GLPIALKAHDI_OFFSET))(this, a1);
		}

		::System::Void DOJPGAOICJF(::JPOKOHEHHLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPOKOHEHHLL*))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_DOJPGAOICJF_OFFSET))(this, a1);
		}

		::System::Void FDAMOKINFFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_FDAMOKINFFE_OFFSET))(this);
		}

		::System::Void HBDIIMMLMAM(::IAJHOPBAFPJ_HPBarType a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJHOPBAFPJ_HPBarType))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_HBDIIMMLMAM_OFFSET))(this, a1);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void OMNOCGOKIDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_OMNOCGOKIDP_OFFSET))(this);
		}

		::System::Void MFJOANOEHJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_MFJOANOEHJD_OFFSET))(this);
		}

		::System::Void CCJBBIOCLIM(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_CCJBBIOCLIM_OFFSET))(this, a1);
		}

		::System::Void KOLBHPFLGHN(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_KOLBHPFLGHN_OFFSET))(this, a1, a2);
		}

		::System::Void CIINDFONDLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_CIINDFONDLC_OFFSET))(this);
		}

		::System::Void EKCHAHDIEFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_EKCHAHDIEFH_OFFSET))(this);
		}

		::System::Void MGJPOLKDPKB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_MGJPOLKDPKB_OFFSET))(this, a1);
		}

		::System::Void PAFCJJNEOOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_PAFCJJNEOOC_OFFSET))(this);
		}

		::System::Void HDJHJFDNALE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_HDJHJFDNALE_OFFSET))(this, a1);
		}

		::System::Void FHGAGLNCNMO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_FHGAGLNCNMO_OFFSET))(this, a1);
		}

		::System::Void KHNLCACKMAH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_KHNLCACKMAH_OFFSET))(this, a1);
		}

		::System::Void DFHKABOABGJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_DFHKABOABGJ_OFFSET))(this, a1);
		}

		::System::Void KEPPMBALPFC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_KEPPMBALPFC_OFFSET))(this, a1);
		}

		::System::Void CIHGFALFMFK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_CIHGFALFMFK_OFFSET))(this, a1);
		}

		::System::Void EEMBDMEHHHH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_EEMBDMEHHHH_OFFSET))(this, a1);
		}

		::System::Void PEECLKDOHCJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_PEECLKDOHCJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
