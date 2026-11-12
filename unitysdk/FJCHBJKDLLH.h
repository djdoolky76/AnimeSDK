#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class AAHPFGHKBOJ;
class ADBCFNJOHCM;
class GFBDEBECAKP;
class IFJOOOHNFPM;
class IGCPGEBDHPE;
class NEEIEEMHECI;
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityRevive; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ICharacterRowData; }
namespace RPG::GameCore { class LevelCharacterReviveFromRevivable; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define FJCHBJKDLLH_AFCJHIGGPGD_OFFSET UNITYSDK_OFFSET(0x166E09B0)
#define FJCHBJKDLLH_AIFLMCJJFKB_OFFSET UNITYSDK_OFFSET(0x166DFD40)
#define FJCHBJKDLLH_AOODHACBLAB_OFFSET UNITYSDK_OFFSET(0x166E1000)
#define FJCHBJKDLLH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x166E3BD0)
#define FJCHBJKDLLH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x166E4300)
#define FJCHBJKDLLH_BAKGPPDHHGA_OFFSET UNITYSDK_OFFSET(0x166E2780)
#define FJCHBJKDLLH_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0x166E3720)
#define FJCHBJKDLLH_BHBCLBBOPFL_OFFSET UNITYSDK_OFFSET(0x166E0FB0)
#define FJCHBJKDLLH_BMCHDHFDNDM_OFFSET UNITYSDK_OFFSET(0x166E0480)
#define FJCHBJKDLLH_BOHMHMPLOAG_OFFSET UNITYSDK_OFFSET(0x166E3490)
#define FJCHBJKDLLH_CBKENKHAJJC_OFFSET UNITYSDK_OFFSET(0x166E3280)
#define FJCHBJKDLLH_CFLMMIMOJCE_OFFSET UNITYSDK_OFFSET(0x166DFC40)
#define FJCHBJKDLLH_CLIILMNJPJM_OFFSET UNITYSDK_OFFSET(0x166E2A60)
#define FJCHBJKDLLH_CNDJMGIODLJ_OFFSET UNITYSDK_OFFSET(0x166E2500)
#define FJCHBJKDLLH_CNEKHDMHFKK_OFFSET UNITYSDK_OFFSET(0x166E1200)
#define FJCHBJKDLLH_CTOR_OFFSET UNITYSDK_OFFSET(0x166E49F0)
#define FJCHBJKDLLH_DCODHLFNNGL_OFFSET UNITYSDK_OFFSET(0x166DF990)
#define FJCHBJKDLLH_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0x166E3580)
#define FJCHBJKDLLH_DFJOJCBFFAM_OFFSET UNITYSDK_OFFSET(0x166E1750)
#define FJCHBJKDLLH_DHONMHFMEAD_OFFSET UNITYSDK_OFFSET(0x166E0080)
#define FJCHBJKDLLH_DJKOOKBHCOE_OFFSET UNITYSDK_OFFSET(0x166E1050)
#define FJCHBJKDLLH_DMAOAKCPNAA_OFFSET UNITYSDK_OFFSET(0x166E1800)
#define FJCHBJKDLLH_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0x166E1600)
#define FJCHBJKDLLH_EGACPDFCIJF_OFFSET UNITYSDK_OFFSET(0x166E3AE0)
#define FJCHBJKDLLH_EIDKCJHNFKC_OFFSET UNITYSDK_OFFSET(0x166E3960)
#define FJCHBJKDLLH_EMFHBBJJGHG_OFFSET UNITYSDK_OFFSET(0x166E0640)
#define FJCHBJKDLLH_EMOPKJMCJCA_OFFSET UNITYSDK_OFFSET(0x166E0EE0)
#define FJCHBJKDLLH_FPHCKKFDGGB_OFFSET UNITYSDK_OFFSET(0x166E1140)
#define FJCHBJKDLLH_GCODCEFGANN_OFFSET UNITYSDK_OFFSET(0x166E0F60)
#define FJCHBJKDLLH_GDNKPFDOFEA_OFFSET UNITYSDK_OFFSET(0x166E3100)
#define FJCHBJKDLLH_GIFIPJIHMIK_OFFSET UNITYSDK_OFFSET(0x166E06A0)
#define FJCHBJKDLLH_GJHGEGPKGJD_OFFSET UNITYSDK_OFFSET(0x166E1B50)
#define FJCHBJKDLLH_GLMLBDHNOAK_OFFSET UNITYSDK_OFFSET(0x166E05F0)
#define FJCHBJKDLLH_HDJHJFDNALE_OFFSET UNITYSDK_OFFSET(0x166E2E00)
#define FJCHBJKDLLH_HGMJKNEAANO_OFFSET UNITYSDK_OFFSET(0x166E2EC0)
#define FJCHBJKDLLH_HKLCKJEOOAI_OFFSET UNITYSDK_OFFSET(0x166E2B10)
#define FJCHBJKDLLH_IBAEONHKAKL_OFFSET UNITYSDK_OFFSET(0x166E3400)
#define FJCHBJKDLLH_IEDIAMMLPLF_OFFSET UNITYSDK_OFFSET(0x166E13E0)
#define FJCHBJKDLLH_IJFNEODDFMN_OFFSET UNITYSDK_OFFSET(0x166E10F0)
#define FJCHBJKDLLH_IKLPNHHGMNG_OFFSET UNITYSDK_OFFSET(0x166E3040)
#define FJCHBJKDLLH_IPMGACIGPOE_OFFSET UNITYSDK_OFFSET(0x166E2C50)
#define FJCHBJKDLLH_JBBPFHNIKNH_OFFSET UNITYSDK_OFFSET(0x166E1AA0)
#define FJCHBJKDLLH_JDNKPGMAMLH_OFFSET UNITYSDK_OFFSET(0x166E0700)
#define FJCHBJKDLLH_JFEILMNOCMK_OFFSET UNITYSDK_OFFSET(0x166E31C0)
#define FJCHBJKDLLH_JKNIBKEGJBF_OFFSET UNITYSDK_OFFSET(0x166E3650)
#define FJCHBJKDLLH_JNJKGKLBCNI_OFFSET UNITYSDK_OFFSET(0x166E15A0)
#define FJCHBJKDLLH_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0x166E1950)
#define FJCHBJKDLLH_KEJILDLIFLF_OFFSET UNITYSDK_OFFSET(0x166E2D40)
#define FJCHBJKDLLH_KFIECBFDHJL_OFFSET UNITYSDK_OFFSET(0x166E2F80)
#define FJCHBJKDLLH_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0x166E38A0)
#define FJCHBJKDLLH_KMKEGNFJIOI_OFFSET UNITYSDK_OFFSET(0x166E0920)
#define FJCHBJKDLLH_KOGOJEIKDFI_OFFSET UNITYSDK_OFFSET(0x166E37E0)
#define FJCHBJKDLLH_KPEOBKCBPIH_OFFSET UNITYSDK_OFFSET(0x166E2100)
#define FJCHBJKDLLH_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0x166E1540)
#define FJCHBJKDLLH_LCKHFGECEEF_OFFSET UNITYSDK_OFFSET(0x166E29C0)
#define FJCHBJKDLLH_MEEMEHCOOPG_OFFSET UNITYSDK_OFFSET(0x166E2870)
#define FJCHBJKDLLH_NFCABLOLFAJ_OFFSET UNITYSDK_OFFSET(0x166DFF30)
#define FJCHBJKDLLH_NFEPOFGAGIO_OFFSET UNITYSDK_OFFSET(0x166E3A20)
#define FJCHBJKDLLH_NKLAKENCPIJ_OFFSET UNITYSDK_OFFSET(0x166E1EB0)
#define FJCHBJKDLLH_OGMLOCGLFEC_OFFSET UNITYSDK_OFFSET(0x166E03E0)
#define FJCHBJKDLLH_OGPAMKGAGJF_OFFSET UNITYSDK_OFFSET(0x166E07D0)
#define FJCHBJKDLLH_OPOCPDBMELE_OFFSET UNITYSDK_OFFSET(0x166E10A0)
#define FJCHBJKDLLH_PBFGNMBMFII_OFFSET UNITYSDK_OFFSET(0x166E2950)
#define FJCHBJKDLLH_PBKPKDLHHEI_OFFSET UNITYSDK_OFFSET(0x166E2690)
#define FJCHBJKDLLH_PDCHEOHHDMJ_OFFSET UNITYSDK_OFFSET(0x166E24A0)
#define FJCHBJKDLLH_PDPKAHJGCLM_OFFSET UNITYSDK_OFFSET(0x166E0C20)
#define FJCHBJKDLLH_PJBEGDLEPLJ_OFFSET UNITYSDK_OFFSET(0x166E3340)
#define FJCHBJKDLLH_PMDDFOEHFIO_OFFSET UNITYSDK_OFFSET(0x166E0BA0)
#define FJCHBJKDLLH__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x166DF9F0)
#define FJCHBJKDLLH__ONBIND_OFFSET UNITYSDK_OFFSET(0x166DF540)
#define FJCHBJKDLLH__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x166DF920)
#define FJCHBJKDLLH__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x166DFBB0)

inline static constexpr unsigned int FJCHBJKDLLH_TypeDefinitionIndex = 73474;

	class FJCHBJKDLLH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* IOOIBLCIDNJ; // 0x60
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x68
		::ADBCFNJOHCM* KDKMFALGELP; // 0x70
		::UnityEngine::UI::Image* KCCPPMJHIGJ; // 0x78
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x80
		::UnityEngine::Transform* OKOJFGPJACM; // 0x88
		::UnityEngine::Animation* PKMDOIIKKJB; // 0x90
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x98
		::GFBDEBECAKP* CKIDMFHDELD; // 0xA0
		::UnityEngine::Transform* POJILNFKGOO; // 0xA8
		::UnityEngine::Transform* FGHFLHBEGHJ; // 0xB0
		::ADBCFNJOHCM* FGMINNHPIHM; // 0xB8
		::RPG::GameCore::BattleInstance* HGGJPIPDJPC; // 0xC0
		::UnityEngine::Animator* BHIFGHJCNIB; // 0xC8
		::RPG::GameCore::AvatarDataComponent* HFKMDPCLJJB; // 0xD0
		::GFBDEBECAKP* FMDHHBLFGNM; // 0xD8
		::System::Boolean DIELMBKHGEM; // 0xE0
		::System::Boolean IIFDMMNEFGC; // 0xE1
		::System::Boolean OJKPNHFGPCI; // 0xE2
		::System::Byte _padding0[0x1];
		::System::Int32 IOEEFCBLBPP; // 0xE4
		::System::UInt32 MAAKDEFIIBB; // 0xE8
		::System::Int32 MKAEAKPHKOK; // 0xEC
		::System::Boolean EPOOKACMOJA; // 0xF0
		::System::Boolean KLLONGGOCKA; // 0xF1
		::System::Byte _padding1[0x2];
		::System::UInt32 IJNMMCIFHBL; // 0xF4
		::System::Int32 JFMHHNCIBEO; // 0xF8
		::System::Int32 PGIFKNEIJKM; // 0xFC
		::System::Int32 GOBOGHNGANM; // 0x100
		// static const ::System::String* ELJNLCCJMJG; // 0x0
		// static const ::System::String* NFLFFALHNEJ; // 0x0
		// static const ::System::String* KCEHPJJPPAA; // 0x0
		// static const ::System::String* JAIOHHEEPGJ; // 0x0
		// static const ::System::String* IIJJIJGHFBF; // 0x0
		// static const ::System::String* HBNGEFNPJEO; // 0x0
		// static const ::System::String* LDNAAOIKMPE; // 0x0
		// static const ::System::String* IIFENECAOBG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FJCHBJKDLLH__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void DCODHLFNNGL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_DCODHLFNNGL_OFFSET))(this, a1);
		}

		::System::Void CFLMMIMOJCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_CFLMMIMOJCE_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH__SETUPVIEW_OFFSET))(this);
		}

		::System::Void GLMLBDHNOAK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_GLMLBDHNOAK_OFFSET))(this, a1);
		}

		::System::Void EMFHBBJJGHG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_EMFHBBJJGHG_OFFSET))(this, a1);
		}

		::System::Void GIFIPJIHMIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_GIFIPJIHMIK_OFFSET))(this);
		}

		::System::Boolean JDNKPGMAMLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_JDNKPGMAMLH_OFFSET))(this);
		}

		::System::Void OGPAMKGAGJF(::RPG::GameCore::EntityRevive* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityRevive*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_OGPAMKGAGJF_OFFSET))(this, a1);
		}

		::System::Void KMKEGNFJIOI(::RPG::GameCore::LevelCharacterReviveFromRevivable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterReviveFromRevivable*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_KMKEGNFJIOI_OFFSET))(this, a1);
		}

		::System::Void AFCJHIGGPGD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_AFCJHIGGPGD_OFFSET))(this, a1);
		}

		::System::Void PDPKAHJGCLM(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_PDPKAHJGCLM_OFFSET))(this, a1);
		}

		::System::Void GCODCEFGANN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_GCODCEFGANN_OFFSET))(this);
		}

		::System::Void BHBCLBBOPFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_BHBCLBBOPFL_OFFSET))(this);
		}

		::System::Void AOODHACBLAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_AOODHACBLAB_OFFSET))(this);
		}

		::System::Void DJKOOKBHCOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_DJKOOKBHCOE_OFFSET))(this);
		}

		::System::Void OPOCPDBMELE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_OPOCPDBMELE_OFFSET))(this);
		}

		::System::Void IJFNEODDFMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_IJFNEODDFMN_OFFSET))(this);
		}

		::System::Void FPHCKKFDGGB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_FPHCKKFDGGB_OFFSET))(this, a1);
		}

		::System::Void CNEKHDMHFKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_CNEKHDMHFKK_OFFSET))(this);
		}

		::System::Void IEDIAMMLPLF(::IGCPGEBDHPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGCPGEBDHPE*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_IEDIAMMLPLF_OFFSET))(this, a1);
		}

		::System::Void LBPHINKONCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_LBPHINKONCH_OFFSET))(this);
		}

		::System::Void JNJKGKLBCNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_JNJKGKLBCNI_OFFSET))(this);
		}

		::System::Void EBPDLMBPLBL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void DMAOAKCPNAA(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_DMAOAKCPNAA_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Void GJHGEGPKGJD(::AAHPFGHKBOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAHPFGHKBOJ*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_GJHGEGPKGJD_OFFSET))(this, a1);
		}

		::System::Void NKLAKENCPIJ(::NEEIEEMHECI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEEIEEMHECI*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_NKLAKENCPIJ_OFFSET))(this, a1);
		}

		::System::Void KPEOBKCBPIH(::IFJOOOHNFPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFJOOOHNFPM*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_KPEOBKCBPIH_OFFSET))(this, a1);
		}

		::System::Void BMCHDHFDNDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_BMCHDHFDNDM_OFFSET))(this);
		}

		::System::Void DFJOJCBFFAM(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_DFJOJCBFFAM_OFFSET))(this, a1);
		}

		::System::Void JBBPFHNIKNH(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_JBBPFHNIKNH_OFFSET))(this, a1);
		}

		::System::Boolean PDCHEOHHDMJ(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_PDCHEOHHDMJ_OFFSET))(this, a1);
		}

		::System::Void CNDJMGIODLJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_CNDJMGIODLJ_OFFSET))(this, a1);
		}

		::System::Void AIFLMCJJFKB(::RPG::GameCore::ICharacterRowData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterRowData*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_AIFLMCJJFKB_OFFSET))(this, a1);
		}

		::System::Void DHONMHFMEAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_DHONMHFMEAD_OFFSET))(this);
		}

		::System::Void NFCABLOLFAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_NFCABLOLFAJ_OFFSET))(this);
		}

		::System::Void PMDDFOEHFIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_PMDDFOEHFIO_OFFSET))(this);
		}

		::System::Void EMOPKJMCJCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_EMOPKJMCJCA_OFFSET))(this);
		}

		::System::Void PBKPKDLHHEI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_PBKPKDLHHEI_OFFSET))(this, a1);
		}

		::System::Void PBFGNMBMFII(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_PBFGNMBMFII_OFFSET))(this, a1);
		}

		::System::Void OGMLOCGLFEC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_OGMLOCGLFEC_OFFSET))(this, a1);
		}

		::System::Void MEEMEHCOOPG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_MEEMEHCOOPG_OFFSET))(this, a1);
		}

		::System::Void CLIILMNJPJM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_CLIILMNJPJM_OFFSET))(this, a1);
		}

		::System::Boolean BAKGPPDHHGA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_BAKGPPDHHGA_OFFSET))(this);
		}

		::System::Boolean LCKHFGECEEF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_LCKHFGECEEF_OFFSET))(this);
		}

		::System::Void HKLCKJEOOAI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_HKLCKJEOOAI_OFFSET))(this, a1);
		}

		::System::Void IPMGACIGPOE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_IPMGACIGPOE_OFFSET))(this, a1);
		}

		::System::Void KEJILDLIFLF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_KEJILDLIFLF_OFFSET))(this, a1);
		}

		::System::Void HDJHJFDNALE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_HDJHJFDNALE_OFFSET))(this, a1);
		}

		::System::Void HGMJKNEAANO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_HGMJKNEAANO_OFFSET))(this, a1);
		}

		::System::Void KFIECBFDHJL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_KFIECBFDHJL_OFFSET))(this, a1);
		}

		::System::Void IKLPNHHGMNG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_IKLPNHHGMNG_OFFSET))(this, a1);
		}

		::System::Void GDNKPFDOFEA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_GDNKPFDOFEA_OFFSET))(this, a1);
		}

		::System::Void JFEILMNOCMK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_JFEILMNOCMK_OFFSET))(this, a1);
		}

		::System::Void CBKENKHAJJC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_CBKENKHAJJC_OFFSET))(this, a1);
		}

		::System::Void PJBEGDLEPLJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_PJBEGDLEPLJ_OFFSET))(this, a1);
		}

		::System::Void IBAEONHKAKL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_IBAEONHKAKL_OFFSET))(this, a1);
		}

		::System::Void BOHMHMPLOAG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_BOHMHMPLOAG_OFFSET))(this, a1);
		}

		::System::Void DDCDDLKFKNI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_DDCDDLKFKNI_OFFSET))(this, a1);
		}

		::System::Void JKNIBKEGJBF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_JKNIBKEGJBF_OFFSET))(this, a1);
		}

		::System::Void BBPGKAAAHCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_BBPGKAAAHCH_OFFSET))(this, a1);
		}

		::System::Void KOGOJEIKDFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_KOGOJEIKDFI_OFFSET))(this, a1);
		}

		::System::Void KHCBFBGMKBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_KHCBFBGMKBJ_OFFSET))(this, a1);
		}

		::System::Void EIDKCJHNFKC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_EIDKCJHNFKC_OFFSET))(this, a1);
		}

		::System::Void NFEPOFGAGIO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_NFEPOFGAGIO_OFFSET))(this, a1);
		}

		::System::Void EGACPDFCIJF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_EGACPDFCIJF_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
