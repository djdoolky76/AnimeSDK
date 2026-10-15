#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IAJHOPBAFPJ_HPBarType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/IGKFNIEJGLM.h"
class EFJCLCMOLGO;
class HEOLCLACIEI;
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

#define IAJHOPBAFPJ_AELHCNEJNEH_OFFSET UNITYSDK_OFFSET(0x15E07720)
#define IAJHOPBAFPJ_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0x15E08320)
#define IAJHOPBAFPJ_AIOJNOHDCDM_OFFSET UNITYSDK_OFFSET(0x15E08550)
#define IAJHOPBAFPJ_AKCFGBIPOCO_OFFSET UNITYSDK_OFFSET(0x15E06D30)
#define IAJHOPBAFPJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15E09740)
#define IAJHOPBAFPJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15E09A50)
#define IAJHOPBAFPJ_CCJBBIOCLIM_OFFSET UNITYSDK_OFFSET(0x15E07D90)
#define IAJHOPBAFPJ_CIHGFALFMFK_OFFSET UNITYSDK_OFFSET(0x15E093E0)
#define IAJHOPBAFPJ_CIINDFONDLC_OFFSET UNITYSDK_OFFSET(0x15E08C80)
#define IAJHOPBAFPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15E09D30)
#define IAJHOPBAFPJ_DFHKABOABGJ_OFFSET UNITYSDK_OFFSET(0x15E09130)
#define IAJHOPBAFPJ_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15E06980)
#define IAJHOPBAFPJ_DOJPGAOICJF_OFFSET UNITYSDK_OFFSET(0x15E08A50)
#define IAJHOPBAFPJ_EEMBDMEHHHH_OFFSET UNITYSDK_OFFSET(0x15E095C0)
#define IAJHOPBAFPJ_EJOEBMLDKKB_OFFSET UNITYSDK_OFFSET(0x15E094D0)
#define IAJHOPBAFPJ_EKCHAHDIEFH_OFFSET UNITYSDK_OFFSET(0x15E08CF0)
#define IAJHOPBAFPJ_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15E06B60)
#define IAJHOPBAFPJ_FDAMOKINFFE_OFFSET UNITYSDK_OFFSET(0x15E08AF0)
#define IAJHOPBAFPJ_FHGAGLNCNMO_OFFSET UNITYSDK_OFFSET(0x15E08F70)
#define IAJHOPBAFPJ_FOCOJHOAILK_OFFSET UNITYSDK_OFFSET(0x15E07360)
#define IAJHOPBAFPJ_GGMOIDNLJLG_OFFSET UNITYSDK_OFFSET(0x15E07960)
#define IAJHOPBAFPJ_GLPIALKAHDI_OFFSET UNITYSDK_OFFSET(0x15E08710)
#define IAJHOPBAFPJ_GNEJCDGCODK_OFFSET UNITYSDK_OFFSET(0x15E08680)
#define IAJHOPBAFPJ_GNPDMIGGLPF_OFFSET UNITYSDK_OFFSET(0x15E07910)
#define IAJHOPBAFPJ_HBDIIMMLMAM_OFFSET UNITYSDK_OFFSET(0x15E07060)
#define IAJHOPBAFPJ_HDJHJFDNALE_OFFSET UNITYSDK_OFFSET(0x15E08EB0)
#define IAJHOPBAFPJ_IDFNLGBEPBI_OFFSET UNITYSDK_OFFSET(0x15E07CC0)
#define IAJHOPBAFPJ_JOFJBBGDGNN_OFFSET UNITYSDK_OFFSET(0x15E07540)
#define IAJHOPBAFPJ_KEPPMBALPFC_OFFSET UNITYSDK_OFFSET(0x15E092E0)
#define IAJHOPBAFPJ_KHNLCACKMAH_OFFSET UNITYSDK_OFFSET(0x15E09060)
#define IAJHOPBAFPJ_KLOAJBKEKAA_OFFSET UNITYSDK_OFFSET(0x15E085B0)
#define IAJHOPBAFPJ_KOLBHPFLGHN_OFFSET UNITYSDK_OFFSET(0x15E08B60)
#define IAJHOPBAFPJ_LBBCPHPEHIO_OFFSET UNITYSDK_OFFSET(0x15E087A0)
#define IAJHOPBAFPJ_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0x15E06890)
#define IAJHOPBAFPJ_MFJOANOEHJD_OFFSET UNITYSDK_OFFSET(0x15E06F60)
#define IAJHOPBAFPJ_MGJPOLKDPKB_OFFSET UNITYSDK_OFFSET(0x15E08DE0)
#define IAJHOPBAFPJ_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15E06AF0)
#define IAJHOPBAFPJ_OMNOCGOKIDP_OFFSET UNITYSDK_OFFSET(0x15E079B0)
#define IAJHOPBAFPJ_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x15E067E0)
#define IAJHOPBAFPJ_ONRETURN_OFFSET UNITYSDK_OFFSET(0x15E06920)
#define IAJHOPBAFPJ_PAFCJJNEOOC_OFFSET UNITYSDK_OFFSET(0x15E07310)
#define IAJHOPBAFPJ_PDPKAHJGCLM_OFFSET UNITYSDK_OFFSET(0x15E08110)
#define IAJHOPBAFPJ_PEECLKDOHCJ_OFFSET UNITYSDK_OFFSET(0x15E096B0)
#define IAJHOPBAFPJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x15E06630)
#define IAJHOPBAFPJ__ONTICK_OFFSET UNITYSDK_OFFSET(0x15E07870)

inline static constexpr unsigned int IAJHOPBAFPJ_TypeDefinitionIndex = 71715;

	class IAJHOPBAFPJ : public ::FMPCODLIOLG
	{
	public:
		::OIIJADEHJOB* OKHDAMMMMLI; // 0x60
		::UnityEngine::UI::Text* CBFPCIBCOHL; // 0x68
		::UnityEngine::Animation* KHONICBMFBP; // 0x70
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x78
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x80
		::UnityEngine::RectTransform* COMKFDLOADC; // 0x88
		::HEOLCLACIEI* IIEBIBMCGNB; // 0x90
		::UnityEngine::Transform* OJGNPJNFLMB; // 0x98
		::JLLLBIBKBHJ* JCOAIELFALK; // 0xA0
		::UnityEngine::ParticleSystem* HDNJKMJLOOG; // 0xA8
		::HGKIKKOLLFA* INFKHFPPPCN; // 0xB0
		::UnityEngine::Color PCCDLCKDNNB; // 0xB8
		::UnityEngine::Color DJECEPKOHIH; // 0xC8
		::System::Boolean EHCNHMLLAIC; // 0xD8
		::System::Boolean AAGKIPFCNHO; // 0xD9
		::System::Byte _padding0[0x2];
		::UnityEngine::Color AGAEOMDOKMJ; // 0xDC
		::UnityEngine::Color MKGFHLODOGJ; // 0xEC
		::System::Single HHPNEFNNMJE; // 0xFC
		::System::Single IFOIKJADBIA; // 0x100
		::UnityEngine::Color FDLGJFFEKFN; // 0x104
		::System::Int32 NNHBIPEOPJN; // 0x114
		::UnityEngine::Color PPLOPNFNEDE; // 0x118
		::RPG::GameCore::FixPoint DODFNGKLPHK; // 0x128
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

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_EKGCGIDIFJJ_OFFSET))(this);
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

		::System::Void LBBCPHPEHIO(::EFJCLCMOLGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFJCLCMOLGO*))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_LBBCPHPEHIO_OFFSET))(this, a1);
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

		::System::Void EJOEBMLDKKB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAJHOPBAFPJ_EJOEBMLDKKB_OFFSET))(this, a1);
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
