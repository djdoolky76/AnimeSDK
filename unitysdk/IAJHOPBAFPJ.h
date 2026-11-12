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

#define IAJHOPBAFPJ_AELHCNEJNEH_OFFSET UNITYSDK_OFFSET(0x16DBE420)
#define IAJHOPBAFPJ_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0x16DBEE70)
#define IAJHOPBAFPJ_AIOJNOHDCDM_OFFSET UNITYSDK_OFFSET(0x16DBF090)
#define IAJHOPBAFPJ_AKCFGBIPOCO_OFFSET UNITYSDK_OFFSET(0x16DBDA10)
#define IAJHOPBAFPJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16DBFED0)
#define IAJHOPBAFPJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16DC01A0)
#define IAJHOPBAFPJ_CCJBBIOCLIM_OFFSET UNITYSDK_OFFSET(0x16DBE8E0)
#define IAJHOPBAFPJ_CIHGFALFMFK_OFFSET UNITYSDK_OFFSET(0x16DBFC60)
#define IAJHOPBAFPJ_CIINDFONDLC_OFFSET UNITYSDK_OFFSET(0x16DBF500)
#define IAJHOPBAFPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16DC0440)
#define IAJHOPBAFPJ_DFHKABOABGJ_OFFSET UNITYSDK_OFFSET(0x16DBF9B0)
#define IAJHOPBAFPJ_DOJPGAOICJF_OFFSET UNITYSDK_OFFSET(0x16DBF2D0)
#define IAJHOPBAFPJ_EEMBDMEHHHH_OFFSET UNITYSDK_OFFSET(0x16DBFD50)
#define IAJHOPBAFPJ_EKCHAHDIEFH_OFFSET UNITYSDK_OFFSET(0x16DBF570)
#define IAJHOPBAFPJ_FDAMOKINFFE_OFFSET UNITYSDK_OFFSET(0x16DBF370)
#define IAJHOPBAFPJ_FHGAGLNCNMO_OFFSET UNITYSDK_OFFSET(0x16DBF7F0)
#define IAJHOPBAFPJ_FOCOJHOAILK_OFFSET UNITYSDK_OFFSET(0x16DBE070)
#define IAJHOPBAFPJ_GGMOIDNLJLG_OFFSET UNITYSDK_OFFSET(0x16DBE660)
#define IAJHOPBAFPJ_GLPIALKAHDI_OFFSET UNITYSDK_OFFSET(0x16DBF250)
#define IAJHOPBAFPJ_GNEJCDGCODK_OFFSET UNITYSDK_OFFSET(0x16DBF1C0)
#define IAJHOPBAFPJ_GNPDMIGGLPF_OFFSET UNITYSDK_OFFSET(0x16DBE610)
#define IAJHOPBAFPJ_HBDIIMMLMAM_OFFSET UNITYSDK_OFFSET(0x16DBDD50)
#define IAJHOPBAFPJ_HDJHJFDNALE_OFFSET UNITYSDK_OFFSET(0x16DBF730)
#define IAJHOPBAFPJ_IDFNLGBEPBI_OFFSET UNITYSDK_OFFSET(0x16DBE810)
#define IAJHOPBAFPJ_JOFJBBGDGNN_OFFSET UNITYSDK_OFFSET(0x16DBE250)
#define IAJHOPBAFPJ_KEPPMBALPFC_OFFSET UNITYSDK_OFFSET(0x16DBFB60)
#define IAJHOPBAFPJ_KHNLCACKMAH_OFFSET UNITYSDK_OFFSET(0x16DBF8E0)
#define IAJHOPBAFPJ_KLOAJBKEKAA_OFFSET UNITYSDK_OFFSET(0x16DBF0F0)
#define IAJHOPBAFPJ_KOLBHPFLGHN_OFFSET UNITYSDK_OFFSET(0x16DBF3E0)
#define IAJHOPBAFPJ_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0x16DBD6A0)
#define IAJHOPBAFPJ_MFJOANOEHJD_OFFSET UNITYSDK_OFFSET(0x16DBDC50)
#define IAJHOPBAFPJ_MGJPOLKDPKB_OFFSET UNITYSDK_OFFSET(0x16DBF660)
#define IAJHOPBAFPJ_OMNOCGOKIDP_OFFSET UNITYSDK_OFFSET(0x16DBE6B0)
#define IAJHOPBAFPJ_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x16DBD5F0)
#define IAJHOPBAFPJ_ONRETURN_OFFSET UNITYSDK_OFFSET(0x16DBD730)
#define IAJHOPBAFPJ_PAFCJJNEOOC_OFFSET UNITYSDK_OFFSET(0x16DBE010)
#define IAJHOPBAFPJ_PDPKAHJGCLM_OFFSET UNITYSDK_OFFSET(0x16DBEC60)
#define IAJHOPBAFPJ_PEECLKDOHCJ_OFFSET UNITYSDK_OFFSET(0x16DBFE40)
#define IAJHOPBAFPJ__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x16DBD900)
#define IAJHOPBAFPJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x16DBD2C0)
#define IAJHOPBAFPJ__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x16DBD790)
#define IAJHOPBAFPJ__ONTICK_OFFSET UNITYSDK_OFFSET(0x16DBE570)
#define IAJHOPBAFPJ__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16DBD970)

inline static constexpr unsigned int IAJHOPBAFPJ_TypeDefinitionIndex = 73707;

	class IAJHOPBAFPJ : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::HGKIKKOLLFA* INFKHFPPPCN; // 0x68
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x70
		::UnityEngine::Animation* KHONICBMFBP; // 0x78
		::UnityEngine::ParticleSystem* HDNJKMJLOOG; // 0x80
		::OIIJADEHJOB* OKHDAMMMMLI; // 0x88
		::UnityEngine::RectTransform* COMKFDLOADC; // 0x90
		::UnityEngine::Transform* OJGNPJNFLMB; // 0x98
		::JLLLBIBKBHJ* JCOAIELFALK; // 0xA0
		::UnityEngine::UI::Text* CBFPCIBCOHL; // 0xA8
		::System::Boolean AAGKIPFCNHO; // 0xB0
		::System::Boolean EHCNHMLLAIC; // 0xB1
		::System::Byte _padding0[0x2];
		::UnityEngine::Color DJECEPKOHIH; // 0xB4
		::System::Single IFOIKJADBIA; // 0xC4
		::UnityEngine::Color PCCDLCKDNNB; // 0xC8
		::System::Single HHPNEFNNMJE; // 0xD8
		::UnityEngine::Color MKGFHLODOGJ; // 0xDC
		::UnityEngine::Color PPLOPNFNEDE; // 0xEC
		::UnityEngine::Color FDLGJFFEKFN; // 0xFC
		::UnityEngine::Color AGAEOMDOKMJ; // 0x10C
		::System::Int32 NNHBIPEOPJN; // 0x11C
		::RPG::GameCore::FixPoint DODFNGKLPHK; // 0x120
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
