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

#define FJCHBJKDLLH_AFCJHIGGPGD_OFFSET UNITYSDK_OFFSET(0x157B20C0)
#define FJCHBJKDLLH_AIFLMCJJFKB_OFFSET UNITYSDK_OFFSET(0x157B3D80)
#define FJCHBJKDLLH_AOODHACBLAB_OFFSET UNITYSDK_OFFSET(0x157B2610)
#define FJCHBJKDLLH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x157B5AF0)
#define FJCHBJKDLLH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x157B6220)
#define FJCHBJKDLLH_BAKGPPDHHGA_OFFSET UNITYSDK_OFFSET(0x157B4620)
#define FJCHBJKDLLH_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0x157B5640)
#define FJCHBJKDLLH_BHBCLBBOPFL_OFFSET UNITYSDK_OFFSET(0x157B25C0)
#define FJCHBJKDLLH_BMCHDHFDNDM_OFFSET UNITYSDK_OFFSET(0x157B1B90)
#define FJCHBJKDLLH_BOHMHMPLOAG_OFFSET UNITYSDK_OFFSET(0x157B53B0)
#define FJCHBJKDLLH_CBKENKHAJJC_OFFSET UNITYSDK_OFFSET(0x157B51A0)
#define FJCHBJKDLLH_CFLMMIMOJCE_OFFSET UNITYSDK_OFFSET(0x157B1AA0)
#define FJCHBJKDLLH_CLIILMNJPJM_OFFSET UNITYSDK_OFFSET(0x157B48F0)
#define FJCHBJKDLLH_CNDJMGIODLJ_OFFSET UNITYSDK_OFFSET(0x157B3BF0)
#define FJCHBJKDLLH_CNEKHDMHFKK_OFFSET UNITYSDK_OFFSET(0x157B2810)
#define FJCHBJKDLLH_CTOR_OFFSET UNITYSDK_OFFSET(0x157B6910)
#define FJCHBJKDLLH_DCODHLFNNGL_OFFSET UNITYSDK_OFFSET(0x157B17F0)
#define FJCHBJKDLLH_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0x157B54A0)
#define FJCHBJKDLLH_DFJOJCBFFAM_OFFSET UNITYSDK_OFFSET(0x157B2DD0)
#define FJCHBJKDLLH_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x157B1790)
#define FJCHBJKDLLH_DHONMHFMEAD_OFFSET UNITYSDK_OFFSET(0x157B3F70)
#define FJCHBJKDLLH_DJKOOKBHCOE_OFFSET UNITYSDK_OFFSET(0x157B2660)
#define FJCHBJKDLLH_DMAOAKCPNAA_OFFSET UNITYSDK_OFFSET(0x157B2E80)
#define FJCHBJKDLLH_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0x157B2C00)
#define FJCHBJKDLLH_EGACPDFCIJF_OFFSET UNITYSDK_OFFSET(0x157B5A00)
#define FJCHBJKDLLH_EIDKCJHNFKC_OFFSET UNITYSDK_OFFSET(0x157B5880)
#define FJCHBJKDLLH_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x157B1A10)
#define FJCHBJKDLLH_EMFHBBJJGHG_OFFSET UNITYSDK_OFFSET(0x157B1D50)
#define FJCHBJKDLLH_EMOPKJMCJCA_OFFSET UNITYSDK_OFFSET(0x157B44A0)
#define FJCHBJKDLLH_FPHCKKFDGGB_OFFSET UNITYSDK_OFFSET(0x157B2750)
#define FJCHBJKDLLH_GCODCEFGANN_OFFSET UNITYSDK_OFFSET(0x157B2570)
#define FJCHBJKDLLH_GDNKPFDOFEA_OFFSET UNITYSDK_OFFSET(0x157B5020)
#define FJCHBJKDLLH_GIFIPJIHMIK_OFFSET UNITYSDK_OFFSET(0x157B1DB0)
#define FJCHBJKDLLH_GJHGEGPKGJD_OFFSET UNITYSDK_OFFSET(0x157B31A0)
#define FJCHBJKDLLH_GLMLBDHNOAK_OFFSET UNITYSDK_OFFSET(0x157B1D00)
#define FJCHBJKDLLH_HDJHJFDNALE_OFFSET UNITYSDK_OFFSET(0x157B4D20)
#define FJCHBJKDLLH_HGMJKNEAANO_OFFSET UNITYSDK_OFFSET(0x157B4DE0)
#define FJCHBJKDLLH_HKLCKJEOOAI_OFFSET UNITYSDK_OFFSET(0x157B4A40)
#define FJCHBJKDLLH_IBAEONHKAKL_OFFSET UNITYSDK_OFFSET(0x157B5320)
#define FJCHBJKDLLH_IEDIAMMLPLF_OFFSET UNITYSDK_OFFSET(0x157B29F0)
#define FJCHBJKDLLH_IJFNEODDFMN_OFFSET UNITYSDK_OFFSET(0x157B2700)
#define FJCHBJKDLLH_IKLPNHHGMNG_OFFSET UNITYSDK_OFFSET(0x157B4F60)
#define FJCHBJKDLLH_IPMGACIGPOE_OFFSET UNITYSDK_OFFSET(0x157B4B70)
#define FJCHBJKDLLH_JBBPFHNIKNH_OFFSET UNITYSDK_OFFSET(0x157B3AE0)
#define FJCHBJKDLLH_JDNKPGMAMLH_OFFSET UNITYSDK_OFFSET(0x157B1E10)
#define FJCHBJKDLLH_JFEILMNOCMK_OFFSET UNITYSDK_OFFSET(0x157B50E0)
#define FJCHBJKDLLH_JKNIBKEGJBF_OFFSET UNITYSDK_OFFSET(0x157B5570)
#define FJCHBJKDLLH_JNJKGKLBCNI_OFFSET UNITYSDK_OFFSET(0x157B2BA0)
#define FJCHBJKDLLH_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0x157B3050)
#define FJCHBJKDLLH_KEJILDLIFLF_OFFSET UNITYSDK_OFFSET(0x157B4C60)
#define FJCHBJKDLLH_KFIECBFDHJL_OFFSET UNITYSDK_OFFSET(0x157B4EA0)
#define FJCHBJKDLLH_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0x157B57C0)
#define FJCHBJKDLLH_KMKEGNFJIOI_OFFSET UNITYSDK_OFFSET(0x157B2030)
#define FJCHBJKDLLH_KOGOJEIKDFI_OFFSET UNITYSDK_OFFSET(0x157B5700)
#define FJCHBJKDLLH_KPEOBKCBPIH_OFFSET UNITYSDK_OFFSET(0x157B3740)
#define FJCHBJKDLLH_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0x157B2B40)
#define FJCHBJKDLLH_LCKHFGECEEF_OFFSET UNITYSDK_OFFSET(0x157B4850)
#define FJCHBJKDLLH_MEEMEHCOOPG_OFFSET UNITYSDK_OFFSET(0x157B4710)
#define FJCHBJKDLLH_NFCABLOLFAJ_OFFSET UNITYSDK_OFFSET(0x157B42D0)
#define FJCHBJKDLLH_NFEPOFGAGIO_OFFSET UNITYSDK_OFFSET(0x157B5940)
#define FJCHBJKDLLH_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x157B1850)
#define FJCHBJKDLLH_NKLAKENCPIJ_OFFSET UNITYSDK_OFFSET(0x157B3500)
#define FJCHBJKDLLH_OGMLOCGLFEC_OFFSET UNITYSDK_OFFSET(0x157B49A0)
#define FJCHBJKDLLH_OGPAMKGAGJF_OFFSET UNITYSDK_OFFSET(0x157B1EE0)
#define FJCHBJKDLLH_OPOCPDBMELE_OFFSET UNITYSDK_OFFSET(0x157B26B0)
#define FJCHBJKDLLH_PBFGNMBMFII_OFFSET UNITYSDK_OFFSET(0x157B47E0)
#define FJCHBJKDLLH_PBKPKDLHHEI_OFFSET UNITYSDK_OFFSET(0x157B4520)
#define FJCHBJKDLLH_PDCHEOHHDMJ_OFFSET UNITYSDK_OFFSET(0x157B3B90)
#define FJCHBJKDLLH_PDPKAHJGCLM_OFFSET UNITYSDK_OFFSET(0x157B22B0)
#define FJCHBJKDLLH_PJBEGDLEPLJ_OFFSET UNITYSDK_OFFSET(0x157B5260)
#define FJCHBJKDLLH_PMDDFOEHFIO_OFFSET UNITYSDK_OFFSET(0x157B4420)
#define FJCHBJKDLLH__ONBIND_OFFSET UNITYSDK_OFFSET(0x157B1570)

inline static constexpr unsigned int FJCHBJKDLLH_TypeDefinitionIndex = 71488;

	class FJCHBJKDLLH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animator* BHIFGHJCNIB; // 0x60
		::GFBDEBECAKP* FMDHHBLFGNM; // 0x68
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x70
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x78
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x80
		::UnityEngine::Transform* FGHFLHBEGHJ; // 0x88
		::ADBCFNJOHCM* FGMINNHPIHM; // 0x90
		::GFBDEBECAKP* CKIDMFHDELD; // 0x98
		::UnityEngine::UI::Image* IOOIBLCIDNJ; // 0xA0
		::ADBCFNJOHCM* KDKMFALGELP; // 0xA8
		::RPG::GameCore::AvatarDataComponent* HFKMDPCLJJB; // 0xB0
		::UnityEngine::UI::Image* KCCPPMJHIGJ; // 0xB8
		::UnityEngine::Animation* PKMDOIIKKJB; // 0xC0
		::UnityEngine::Transform* POJILNFKGOO; // 0xC8
		::UnityEngine::Transform* OKOJFGPJACM; // 0xD0
		::RPG::GameCore::BattleInstance* HGGJPIPDJPC; // 0xD8
		::System::Boolean OJKPNHFGPCI; // 0xE0
		::System::Boolean KLLONGGOCKA; // 0xE1
		::System::Boolean IIFDMMNEFGC; // 0xE2
		::System::Byte _padding0[0x1];
		::System::Int32 IOEEFCBLBPP; // 0xE4
		::System::Boolean DIELMBKHGEM; // 0xE8
		::System::Boolean EPOOKACMOJA; // 0xE9
		::System::Byte _padding1[0x2];
		::System::Int32 PGIFKNEIJKM; // 0xEC
		::System::UInt32 MAAKDEFIIBB; // 0xF0
		::System::Int32 GOBOGHNGANM; // 0xF4
		::System::Int32 JFMHHNCIBEO; // 0xF8
		::System::UInt32 IJNMMCIFHBL; // 0xFC
		::System::Int32 MKAEAKPHKOK; // 0x100
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

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void DCODHLFNNGL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_DCODHLFNNGL_OFFSET))(this, a1);
		}

		::System::Void CFLMMIMOJCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_CFLMMIMOJCE_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCHBJKDLLH_EKGCGIDIFJJ_OFFSET))(this);
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
