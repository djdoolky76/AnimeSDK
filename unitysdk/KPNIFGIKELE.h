#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/COHIKABEMMM.h"
#include "unitysdk/EFOEOKBFJPJ.h"
#include "unitysdk/HDNPMMAAGNF.h"
#include "unitysdk/HFOOOAHPHGD.h"
#include "unitysdk/IBNBHLOKIKJ.h"
#include "unitysdk/IKKICCAKFHH.h"
#include "unitysdk/ILDKCGCLCOO.h"
#include "unitysdk/KPNIFGIKELE_PAGCKEBCODJ.h"
#include "unitysdk/KPNIFGIKELE_PGKFOMCMDFD.h"
#include "unitysdk/MGJKGALELBK.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/MoleMole/Config/CharacterAliveState.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/DamageHitType.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/Config/HitAnimDirectionType.h"
#include "unitysdk/MoleMole/Config/HitDataType.h"
#include "unitysdk/MoleMole/Config/HitForwardType.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/MoleMole/Config/TeamProperty.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BinaryTracingCore/Source/TracingTools/LogTagDefine_DisableLogTag.h"

class IKFKKMBEBBG;
class IPHLHGJBFLB;
class KPNIFGIKELE_BEBANOFCFII;
class MLFADFNMJFO;
namespace BinaryTracingCore::Source::TracingTools { class LogTagDefine_LogTag; }
namespace MoleMole::Config { class AttackTimeSlowConfig; }
namespace MoleMole::Config { class ConfigEntityAttackEffect; }
namespace MoleMole::Config { class ConfigHitEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPNIFGIKELE_AAMDDDALJPP_OFFSET UNITYSDK_OFFSET(0x1A2E2DF0)
#define KPNIFGIKELE_ABFDGHJNOIH_OFFSET UNITYSDK_OFFSET(0x1A2E24B0)
#define KPNIFGIKELE_AJFEJHODBMP_OFFSET UNITYSDK_OFFSET(0x1A2E3ED0)
#define KPNIFGIKELE_BAKMJGEAMLH_OFFSET UNITYSDK_OFFSET(0x1A2E3EB0)
#define KPNIFGIKELE_BDAJANNJBOO_OFFSET UNITYSDK_OFFSET(0x1A2E2180)
#define KPNIFGIKELE_BOPNADJGIFF_OFFSET UNITYSDK_OFFSET(0x1A2E4050)
#define KPNIFGIKELE_CCGMGCEOKIP_OFFSET UNITYSDK_OFFSET(0x1A2E4060)
#define KPNIFGIKELE_CCLDPAAHIFA_OFFSET UNITYSDK_OFFSET(0x1A2E4140)
#define KPNIFGIKELE_CNMADNMGJEH_OFFSET UNITYSDK_OFFSET(0x1A2E2ED0)
#define KPNIFGIKELE_DLIDNJNBFAE_OFFSET UNITYSDK_OFFSET(0x1A2E30F0)
#define KPNIFGIKELE_ECDIGFBJBHE_OFFSET UNITYSDK_OFFSET(0x1A2E1D00)
#define KPNIFGIKELE_EGNHDNNGODH_OFFSET UNITYSDK_OFFSET(0x1A2E31B0)
#define KPNIFGIKELE_ENNFIFHDJPB_OFFSET UNITYSDK_OFFSET(0x1A2E3E50)
#define KPNIFGIKELE_FMJCGFACPJC_OFFSET UNITYSDK_OFFSET(0x1A2E2300)
#define KPNIFGIKELE_FNLEGICANKE_OFFSET UNITYSDK_OFFSET(0x1A2E33C0)
#define KPNIFGIKELE_GGDEMGPHELO_OFFSET UNITYSDK_OFFSET(0x1A2E3EA0)
#define KPNIFGIKELE_GGOOGJBPBBC_OFFSET UNITYSDK_OFFSET(0x1A2E3970)
#define KPNIFGIKELE_GJDIPAIPMKG_OFFSET UNITYSDK_OFFSET(0x1A2E2190)
#define KPNIFGIKELE_HBDJBMLGOLH_OFFSET UNITYSDK_OFFSET(0x1A2E3350)
#define KPNIFGIKELE_HBHCFBOFOCB_OFFSET UNITYSDK_OFFSET(0x1A2E2EA0)
#define KPNIFGIKELE_HJCGMLPOCHB_OFFSET UNITYSDK_OFFSET(0x1A2E2080)
#define KPNIFGIKELE_HNGGABBMMKE_OFFSET UNITYSDK_OFFSET(0x1A2E3E80)
#define KPNIFGIKELE_IEIFANHJFFF_OFFSET UNITYSDK_OFFSET(0x1A2E2170)
#define KPNIFGIKELE_IONCNKAKGLG_OFFSET UNITYSDK_OFFSET(0x1A2E24A0)
#define KPNIFGIKELE_JDBILDHFBBB_OFFSET UNITYSDK_OFFSET(0x1A2E20F0)
#define KPNIFGIKELE_JFOHDPLGLJB_OFFSET UNITYSDK_OFFSET(0x1A2E2E90)
#define KPNIFGIKELE_JOGJNECFALP_OFFSET UNITYSDK_OFFSET(0x1A2E3D10)
#define KPNIFGIKELE_KJFNKPLODPJ_OFFSET UNITYSDK_OFFSET(0x1A2E3E70)
#define KPNIFGIKELE_KJMILOHDPAH_OFFSET UNITYSDK_OFFSET(0x1A2E3D20)
#define KPNIFGIKELE_KLIDOJJHDFM_1_OFFSET UNITYSDK_OFFSET(0x1A2E3A00)
#define KPNIFGIKELE_KLIDOJJHDFM_OFFSET UNITYSDK_OFFSET(0x1A2E2DA0)
#define KPNIFGIKELE_KPFCPMBJKEM_OFFSET UNITYSDK_OFFSET(0x1A2E3AB0)
#define KPNIFGIKELE_KPNKEEABDOK_OFFSET UNITYSDK_OFFSET(0x1A2E3A50)
#define KPNIFGIKELE_LCMKKMIFELA_OFFSET UNITYSDK_OFFSET(0x1A2E4000)
#define KPNIFGIKELE_LDMOBGAOEEC_OFFSET UNITYSDK_OFFSET(0x1A2E21E0)
#define KPNIFGIKELE_LFPGPFMIGLF_OFFSET UNITYSDK_OFFSET(0x1A2E3960)
#define KPNIFGIKELE_LJJCOGNNOIL_OFFSET UNITYSDK_OFFSET(0x1A2E2100)
#define KPNIFGIKELE_LJLCCJFNFIJ_OFFSET UNITYSDK_OFFSET(0x1A2E3E60)
#define KPNIFGIKELE_LNNKPMDBNHC_OFFSET UNITYSDK_OFFSET(0x1A2E3F60)
#define KPNIFGIKELE_LPMMDIKBGDK_OFFSET UNITYSDK_OFFSET(0x1A2E2EE0)
#define KPNIFGIKELE_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x1A2E1FF0)
#define KPNIFGIKELE_MINOOJADBCN_OFFSET UNITYSDK_OFFSET(0x1A2E2E70)
#define KPNIFGIKELE_MMLJHAPNOIM_OFFSET UNITYSDK_OFFSET(0x1A2E1FA0)
#define KPNIFGIKELE_MNFIEFOGOMC_OFFSET UNITYSDK_OFFSET(0x1A2E3E90)
#define KPNIFGIKELE_NBFGEHCFGJC_OFFSET UNITYSDK_OFFSET(0x1A2E2E80)
#define KPNIFGIKELE_NELKFHDELLB_OFFSET UNITYSDK_OFFSET(0x1A2E3D30)
#define KPNIFGIKELE_NIMBOKCFHFE_OFFSET UNITYSDK_OFFSET(0x1A2E3AC0)
#define KPNIFGIKELE_OGFKPEKIDID_OFFSET UNITYSDK_OFFSET(0x1A2E31A0)
#define KPNIFGIKELE_OKGKBKMOEGN_OFFSET UNITYSDK_OFFSET(0x1A2E2EC0)
#define KPNIFGIKELE_OKMFNBGNKME_OFFSET UNITYSDK_OFFSET(0x1A2E1F50)
#define KPNIFGIKELE_OLACONDEPFL_OFFSET UNITYSDK_OFFSET(0x1A2E3660)
#define KPNIFGIKELE_OMEDEAKDLOI_OFFSET UNITYSDK_OFFSET(0x1A2E3980)
#define KPNIFGIKELE_OMLKNOMNPGD_OFFSET UNITYSDK_OFFSET(0x1A2E3EC0)
#define KPNIFGIKELE_PBHCPNMBNDK_OFFSET UNITYSDK_OFFSET(0x1A2E3420)
#define KPNIFGIKELE_PENFPFFJEIN_OFFSET UNITYSDK_OFFSET(0x1A2E3410)
#define KPNIFGIKELE_PFNPAFJDEOA_OFFSET UNITYSDK_OFFSET(0x1A2E2110)
#define KPNIFGIKELE_PGJCGBDECPN_OFFSET UNITYSDK_OFFSET(0x1A2E2EB0)
#define KPNIFGIKELE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A2E24D0)
#define KPNIFGIKELE_POMGKNNDMAH_OFFSET UNITYSDK_OFFSET(0x1A2E24C0)
#define KPNIFGIKELE_PPEMDELOIGA_OFFSET UNITYSDK_OFFSET(0x1A2E3FF0)
#define KPNIFGIKELE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2E1C40)
#define KPNIFGIKELE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2E1B20)

inline static constexpr unsigned int KPNIFGIKELE_TypeDefinitionIndex = 42219;

class KPNIFGIKELE : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>** StaticGet_JJBPJGEGMFL()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(KPNIFGIKELE_TypeDefinitionIndex)->GetStaticField(0x4A130);
	}
	::System::String* ECKEAPEEDOI; // 0x10
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TeamProperty, ::System::Single>* CCBMAGGJKIC; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* IECBBDFBENN; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::Config::AttackTimeSlowConfig*>* BGNLMGEHFKP; // 0x28
	::System::String* BNPMPGJOCNM; // 0x30
	::MoleMole::Config::ConfigHitEffect* OGKIJBJHOHN; // 0x38
	::IBNBHLOKIKJ NEGAHADHFAI; // 0x40
	::MoleMole::EntityHandle GGHEDCMAIKP; // 0x50
	::MoleMole::Config::ConfigHitEffect* JEAPEGAOPPH; // 0x60
	::IPHLHGJBFLB* BCMHILOPAHH; // 0x68
	::System::String* NJNGEEBBPKH; // 0x70
	::KPNIFGIKELE_BEBANOFCFII* _NHEAGLNMMLN_k__BackingField; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* AFEKEKPKOKL; // 0x80
	::System::String* HFMDEEBDFAE; // 0x88
	::MoleMole::Config::ConfigHitEffect* EHAAHOFNGGA; // 0x90
	::MoleMole::EntityHandle CPNOMFGBDCP; // 0x98
	::System::Collections::Generic::List_1<::System::Single>* ALIJCELNPON; // 0xA8
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* IDIIFGLMHIO; // 0xB0
	::System::String* MOIINGLMGGG; // 0xB8
	::MoleMole::Config::ConfigEntityAttackEffect* JGECFCIKDGA; // 0xC0
	::MLFADFNMJFO* LBPBFHIPIBF; // 0xC8
	::IKFKKMBEBBG* BLLALILHGJK; // 0xD0
	::System::String* LNFPLNPPHCJ; // 0xD8
	::System::Int32 LGOBOGGADFP; // 0xE0
	::System::Single PFIFGGFGHIO; // 0xE4
	::System::Single MCPGEKMDANO; // 0xE8
	::EFOEOKBFJPJ CNMHHOHBHOO; // 0xEC
	::System::Single NLBKFCAFDOH; // 0xF0
	::ILDKCGCLCOO ODHAKKPPOHM; // 0xF4
	::System::Single ELDDDKFCPAF; // 0xFC
	::System::Single INGMNLOMFPH; // 0x100
	::System::Int32 KPNBDGCPDJB; // 0x104
	::System::Boolean DFKEBNEPBMF; // 0x108
	::System::Boolean NPDONIIFLMM; // 0x109
	::System::Boolean HAFNNMIEGNN; // 0x10A
	::System::Boolean LLFBOHCDELB; // 0x10B
	::HFOOOAHPHGD EPAODNKNBFI; // 0x10C
	::System::Boolean PFIJDAAIBJL; // 0x110
	::System::Boolean NMEJEEDHPOL; // 0x111
	::System::Boolean OGMHNKPEJCG; // 0x112
	::System::Boolean KAKPJNFMCIA; // 0x113
	::System::Single KDNFJAPIEAH; // 0x114
	::MoleMole::Config::DamageHitType CGABFPNPJIF; // 0x118
	::System::Single HOGJNLIOILH; // 0x11C
	::System::Single MAJOIJBEFIM; // 0x120
	::System::Single MJFGPLIKKDN; // 0x124
	::System::Int32 PPOLJNLAOLH; // 0x128
	::System::Single EKCOIIEEIDL; // 0x12C
	::System::Single ILCFIIELIBL; // 0x130
	::System::Single DKKHMPFOKJI; // 0x134
	::System::Boolean NDMAJMMFFKH; // 0x138
	::System::Boolean OAAKGGMJELF; // 0x139
	::System::Boolean JBACJFAJGOE; // 0x13A
	::System::Boolean GPNPHBBMHNO; // 0x13B
	::MoleMole::Config::BuffGroupName NINGBHIDDAA; // 0x13C
	::System::Single _HOALHJNPHNK_k__BackingField; // 0x140
	::System::Byte _padding0[0x4];
	::System::Double _MENCDNGLNFP_k__BackingField; // 0x148
	::System::Boolean CFHOLAHJJDM; // 0x150
	::System::Boolean OPEBHPJLNEN; // 0x151
	::System::Boolean NNNMPCNBMLF; // 0x152
	::System::Boolean KMJNLJIEEMO; // 0x153
	::System::Single JKMBFNMNHFG; // 0x154
	::System::Double _JOONPNKJCHJ_k__BackingField; // 0x158
	::System::Int32 EALMBGHEFML; // 0x160
	::System::Int32 OCOJAHKMHOL; // 0x164
	::MoleMole::Config::SpecialDamageTextType NEDKMFCFFJB; // 0x168
	::System::Single POKMIAKKBDB; // 0x16C
	::System::Single _GOMLPFCOJDO_k__BackingField; // 0x170
	::MoleMole::Config::HitForwardType ENOGCDMJLCG; // 0x174
	::System::Single NOBNPCGGNEJ; // 0x178
	::System::Boolean CEHGEDDEKCI; // 0x17C
	::System::Boolean LIGNHCABIHP; // 0x17D
	::System::Boolean FPPNCAMDNGM; // 0x17E
	::System::Boolean LGJNNJPLALO; // 0x17F
	::System::Single _LOCIDGPKGNP_k__BackingField; // 0x180
	::MoleMole::Config::SpecialDamageTextType ACKOJMBLDIN; // 0x184
	::System::Single _ENKKIBDDBDG_k__BackingField; // 0x188
	::MoleMole::Config::CharacterAliveState FAIPFCJJBMG; // 0x18C
	::System::UInt32 AFAOIKBJIGI; // 0x190
	::System::Single CGHBCFHOECJ; // 0x194
	::System::Boolean AIKLJEEIDBD; // 0x198
	::System::Boolean OKMJCMLIFPF; // 0x199
	::System::Boolean JMCNHEMGAHB; // 0x19A
	::System::Boolean EIKKLBGFJJC; // 0x19B
	::System::Single GBEGEADBIHD; // 0x19C
	::System::Single DCIMKMBBHPG; // 0x1A0
	::System::Single EJBJJLAGHGB; // 0x1A4
	::System::Double _MLICBMCIAMP_k__BackingField; // 0x1A8
	::MoleMole::Config::HitDataType OGIGOPHMJEP; // 0x1B0
	::System::Int32 PNKCMOFBGIB; // 0x1B4
	::System::UInt32 NHBCNMOFEJO; // 0x1B8
	::System::Single ANDFCIDJCKL; // 0x1BC
	::System::Int32 APOLFIJLPHA; // 0x1C0
	::System::Single GJEABLLNKFG; // 0x1C4
	::System::Double _BNPEGIMGIGD_k__BackingField; // 0x1C8
	::MGJKGALELBK HMFJEEBONFD; // 0x1D0
	::System::Single LACNBJKLOOJ; // 0x1D4
	::System::Single _DIOEBFPGOEH_k__BackingField; // 0x1D8
	::System::Int32 PAKHENNMFIK; // 0x1DC
	::System::Single NAFABBCKCBO; // 0x1E0
	::System::Single _GPALMJJEKCG_k__BackingField; // 0x1E4
	::System::Single MLMDCKHFPMK; // 0x1E8
	::System::Single OJOKDMAGPEK; // 0x1EC
	::MoleMole::Config::HitAnimDirectionType IKEFMMJGLFL; // 0x1F0
	::System::Int32 OEABJOMEEOK; // 0x1F4
	::System::Single _PGDMAEBIDBN_k__BackingField; // 0x1F8
	::System::Int32 FEDIOGAMOAE; // 0x1FC
	::System::Single ENENPECBCJE; // 0x200
	::System::Single NBDCBGCJLJN; // 0x204
	::System::Single NIIMLNNKENF; // 0x208
	::System::Int32 HPGEDCMKPCB; // 0x20C
	::MoleMole::Config::EntityType DFDKIIJDLLD; // 0x210
	::System::Int32 MJIDCCJMHLN; // 0x214
	::System::Int32 DJIPBCEDGIK; // 0x218
	::System::Single FMCCCOHLMAF; // 0x21C
	::System::Single HBGJAEALPJI; // 0x220
	::System::Boolean LAKLPNGHJDA; // 0x224
	::System::Boolean MBPCIGJBOJI; // 0x225
	::System::Boolean FONKIFOPPLP; // 0x226
	::System::Boolean KKCKEFHPKHJ; // 0x227
	::System::Single BANAFJHCGGC; // 0x228
	::System::Single _JLJEIMACPLB_k__BackingField; // 0x22C
	::System::Boolean MPEBPJKGMFD; // 0x230
	::System::Boolean IHFABELMMOI; // 0x231
	::System::Boolean MDDDPHINPIF; // 0x232
	::System::Boolean KPIOHEOJFCP; // 0x233
	::System::Int32 LDPMIJJNNCG; // 0x234
	::KPNIFGIKELE_PGKFOMCMDFD DKMOGPGCIBE; // 0x238
	::System::Byte _padding1[0x4];
	::System::Double KLNAGFBGCEP; // 0x240
	::System::Single KACHOAFFBJN; // 0x248
	::System::Single OOMEBEMGKFA; // 0x24C
	::System::Int32 HOLFIONFDEJ; // 0x250
	::System::Int32 AIKIICLDCFE; // 0x254
	::System::Single EOMLHEDALJK; // 0x258
	::System::Single KCHJHDCBFNH; // 0x25C
	::System::Single DICKPOJEODC; // 0x260
	::System::Single JHFHAAHOGCA; // 0x264
	::System::Int32 NNFBHFOFGEA; // 0x268
	::System::Int32 LALHMLLBDDG; // 0x26C
	::System::Single KNGCAAEEDDE; // 0x270
	::System::Single FMNFOKOLIFN; // 0x274
	::System::Single GDNBAKLDEHB; // 0x278
	::MoleMole::Config::DamageElementType HBMBILMFEII; // 0x27C
	::System::Int32 DJFHHJGDGGD; // 0x280
	::System::Single JFDFGAADENI; // 0x284
	::System::Single PGBIEPAOPGH; // 0x288
	::System::Boolean HCDICEECPCC; // 0x28C
	::System::Boolean EIDODNCPCDC; // 0x28D
	::System::Boolean LDMMCCJIPFN; // 0x28E
	::KPNIFGIKELE_PAGCKEBCODJ JCJDBGGHPIM; // 0x28F
	::System::Single JIKGMFGCJJC; // 0x290
	::System::Single BBMIFHJLHEH; // 0x294
	::System::Single NDKBDBBEJIK; // 0x298
	::System::Boolean EHODKHDLKAD; // 0x29C
	::System::Boolean NIHFNGKFAJN; // 0x29D
	::System::Boolean IDONPFJJPDE; // 0x29E
	::System::Boolean GJIJBENBIIJ; // 0x29F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPNIFGIKELE__CCTOR_OFFSET))();
	}

	::System::Void ECDIGFBJBHE(::COHIKABEMMM NNAKPHEJBHJ)
	{
		return ((::System::Void(*)(::PVOID, ::COHIKABEMMM))((::PBYTE)hIl2Cpp + KPNIFGIKELE_ECDIGFBJBHE_OFFSET))(this, NNAKPHEJBHJ);
	}

	static ::System::Void MMLJHAPNOIM(::KPNIFGIKELE* CMAOBDOAKEI)
	{
		return ((::System::Void(*)(::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + KPNIFGIKELE_MMLJHAPNOIM_OFFSET))(CMAOBDOAKEI);
	}

	::System::Void HJCGMLPOCHB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_HJCGMLPOCHB_OFFSET))(this);
	}

	::KPNIFGIKELE_BEBANOFCFII* JDBILDHFBBB()
	{
		return ((::KPNIFGIKELE_BEBANOFCFII*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_JDBILDHFBBB_OFFSET))(this);
	}

	::System::Single LJJCOGNNOIL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_LJJCOGNNOIL_OFFSET))(this);
	}

	::System::Boolean PFNPAFJDEOA(::IKKICCAKFHH LKNABNJCIMJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::IKKICCAKFHH))((::PBYTE)hIl2Cpp + KPNIFGIKELE_PFNPAFJDEOA_OFFSET))(this, LKNABNJCIMJ);
	}

	::System::Void IEIFANHJFFF(::MoleMole::Config::SpecialDamageTextType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SpecialDamageTextType))((::PBYTE)hIl2Cpp + KPNIFGIKELE_IEIFANHJFFF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BDAJANNJBOO(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPNIFGIKELE_BDAJANNJBOO_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Config::BuffGroupName GJDIPAIPMKG()
	{
		return ((::MoleMole::Config::BuffGroupName(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_GJDIPAIPMKG_OFFSET))(this);
	}

	::System::Void LDMOBGAOEEC(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KPNIFGIKELE_LDMOBGAOEEC_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Void FMJCGFACPJC(::KPNIFGIKELE* CMAOBDOAKEI)
	{
		return ((::System::Void(*)(::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + KPNIFGIKELE_FMJCGFACPJC_OFFSET))(CMAOBDOAKEI);
	}

	::System::Void IONCNKAKGLG(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + KPNIFGIKELE_IONCNKAKGLG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Double ABFDGHJNOIH()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_ABFDGHJNOIH_OFFSET))(this);
	}

	::System::Single POMGKNNDMAH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_POMGKNNDMAH_OFFSET))(this);
	}

	::System::Void MBKDOMFJFIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_MBKDOMFJFIG_OFFSET))(this);
	}

	::System::Void KLIDOJJHDFM(::BinaryTracingCore::Source::TracingTools::LogTagDefine_DisableLogTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::BinaryTracingCore::Source::TracingTools::LogTagDefine_DisableLogTag))((::PBYTE)hIl2Cpp + KPNIFGIKELE_KLIDOJJHDFM_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void AAMDDDALJPP(::IKKICCAKFHH LKNABNJCIMJ, ::System::Boolean GEGOALONGBI)
	{
		return ((::System::Void(*)(::PVOID, ::IKKICCAKFHH, ::System::Boolean))((::PBYTE)hIl2Cpp + KPNIFGIKELE_AAMDDDALJPP_OFFSET))(this, LKNABNJCIMJ, GEGOALONGBI);
	}

	::System::Single MINOOJADBCN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_MINOOJADBCN_OFFSET))(this);
	}

	::System::Single NBFGEHCFGJC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_NBFGEHCFGJC_OFFSET))(this);
	}

	::System::Void JFOHDPLGLJB(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KPNIFGIKELE_JFOHDPLGLJB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HBHCFBOFOCB(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + KPNIFGIKELE_HBHCFBOFOCB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PGJCGBDECPN(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPNIFGIKELE_PGJCGBDECPN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single OKGKBKMOEGN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_OKGKBKMOEGN_OFFSET))(this);
	}

	::System::Void CNMADNMGJEH(::KPNIFGIKELE_BEBANOFCFII* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE_BEBANOFCFII*))((::PBYTE)hIl2Cpp + KPNIFGIKELE_CNMADNMGJEH_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Void LPMMDIKBGDK(::KPNIFGIKELE* CMAOBDOAKEI)
	{
		return ((::System::Void(*)(::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + KPNIFGIKELE_LPMMDIKBGDK_OFFSET))(CMAOBDOAKEI);
	}

	static ::KPNIFGIKELE* DLIDNJNBFAE()
	{
		return ((::KPNIFGIKELE*(*)())((::PBYTE)hIl2Cpp + KPNIFGIKELE_DLIDNJNBFAE_OFFSET))();
	}

	::System::Void OGFKPEKIDID(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPNIFGIKELE_OGFKPEKIDID_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EGNHDNNGODH(::System::String* ICMKAIENEIH, ::System::Single DFOFJBEHHLC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + KPNIFGIKELE_EGNHDNNGODH_OFFSET))(this, ICMKAIENEIH, DFOFJBEHHLC);
	}

	::System::Boolean HBDJBMLGOLH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_HBDJBMLGOLH_OFFSET))(this);
	}

	::System::Double PENFPFFJEIN()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_PENFPFFJEIN_OFFSET))(this);
	}

	::System::Single PBHCPNMBNDK(::System::String* NMLPOJCGJMB)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KPNIFGIKELE_PBHCPNMBNDK_OFFSET))(this, NMLPOJCGJMB);
	}

	::System::Void LFPGPFMIGLF(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KPNIFGIKELE_LFPGPFMIGLF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Double GGOOGJBPBBC()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_GGOOGJBPBBC_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void KLIDOJJHDFM_1(::BinaryTracingCore::Source::TracingTools::LogTagDefine_LogTag* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::BinaryTracingCore::Source::TracingTools::LogTagDefine_LogTag*))((::PBYTE)hIl2Cpp + KPNIFGIKELE_KLIDOJJHDFM_1_OFFSET))(this, AELLPLBJELA);
	}

	::MoleMole::Config::SpecialDamageTextType KPNKEEABDOK()
	{
		return ((::MoleMole::Config::SpecialDamageTextType(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_KPNKEEABDOK_OFFSET))(this);
	}

	::System::Single KPFCPMBJKEM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_KPFCPMBJKEM_OFFSET))(this);
	}

	::System::Single OLACONDEPFL(::System::String* MCOHLHMKLIP, ::System::Single EIIDOADGOIF)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + KPNIFGIKELE_OLACONDEPFL_OFFSET))(this, MCOHLHMKLIP, EIIDOADGOIF);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* NIMBOKCFHFE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_NIMBOKCFHFE_OFFSET))(this);
	}

	::System::Void JOGJNECFALP(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPNIFGIKELE_JOGJNECFALP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KJMILOHDPAH(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPNIFGIKELE_KJMILOHDPAH_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Config::DamageElementType NELKFHDELLB()
	{
		return ((::MoleMole::Config::DamageElementType(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_NELKFHDELLB_OFFSET))(this);
	}

	::System::Boolean FNLEGICANKE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_FNLEGICANKE_OFFSET))(this);
	}

	::System::Void ENNFIFHDJPB(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPNIFGIKELE_ENNFIFHDJPB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Double LJLCCJFNFIJ()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_LJLCCJFNFIJ_OFFSET))(this);
	}

	::System::Single KJFNKPLODPJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_KJFNKPLODPJ_OFFSET))(this);
	}

	::System::Void HNGGABBMMKE(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + KPNIFGIKELE_HNGGABBMMKE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MNFIEFOGOMC(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPNIFGIKELE_MNFIEFOGOMC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GGDEMGPHELO(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + KPNIFGIKELE_GGDEMGPHELO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* BAKMJGEAMLH()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_BAKMJGEAMLH_OFFSET))(this);
	}

	::System::Int32 OMLKNOMNPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_OMLKNOMNPGD_OFFSET))(this);
	}

	::System::Boolean AJFEJHODBMP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_AJFEJHODBMP_OFFSET))(this);
	}

	::System::Boolean LNNKPMDBNHC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_LNNKPMDBNHC_OFFSET))(this);
	}

	::System::Void OMEDEAKDLOI(::MoleMole::EntityHandle EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + KPNIFGIKELE_OMEDEAKDLOI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single PPEMDELOIGA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_PPEMDELOIGA_OFFSET))(this);
	}

	::System::Boolean LCMKKMIFELA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_LCMKKMIFELA_OFFSET))(this);
	}

	::System::Boolean OKMFNBGNKME(::COHIKABEMMM NNAKPHEJBHJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::COHIKABEMMM))((::PBYTE)hIl2Cpp + KPNIFGIKELE_OKMFNBGNKME_OFFSET))(this, NNAKPHEJBHJ);
	}

	::System::Void BOPNADJGIFF(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPNIFGIKELE_BOPNADJGIFF_OFFSET))(this, EGEGIMGMJHN);
	}

	::HDNPMMAAGNF CCGMGCEOKIP()
	{
		return ((::HDNPMMAAGNF(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_CCGMGCEOKIP_OFFSET))(this);
	}

	::MoleMole::EntityHandle CCLDPAAHIFA()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNIFGIKELE_CCLDPAAHIFA_OFFSET))(this);
	}
};
