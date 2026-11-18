#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJJEGAIJAMK.h"
#include "unitysdk/EFOAJCLMLDA.h"
#include "unitysdk/EFOEOKBFJPJ.h"
#include "unitysdk/KIDLMFFKPCO_FKPGNHNGGPM.h"
#include "unitysdk/KIDLMFFKPCO_IMHMKHINCIJ_GJCKNAMLCON.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/LayerMask.h"

class AEMCAOEICDG;
class GECDLDJODHD;
class GHLDLOHAOGM;
class JPKMBBAHKDH;
class KIDLMFFKPCO;
class KIDLMFFKPCO_DMLDPADNALP;
class KPNIFGIKELE;
class LineLighting;
class NEAPGKAPCJF;
class OECBDEANICM;
namespace MoleMole { class LaserElementScaleAdjustment_LaserLengthLinear; }
namespace MoleMole { class LaserSegments; }
namespace MoleMole { class MonoConfigurableCollider; }
namespace MoleMole { class MonoEffectPluginLaserLineLightingAggregation; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define KIDLMFFKPCO_IMHMKHINCIJ_ABFCMKEBEAN_OFFSET UNITYSDK_OFFSET(0x14FEAF60)
#define KIDLMFFKPCO_IMHMKHINCIJ_ADLGPOHGKCN_OFFSET UNITYSDK_OFFSET(0x14FE6770)
#define KIDLMFFKPCO_IMHMKHINCIJ_ADPBBPLBAOL_OFFSET UNITYSDK_OFFSET(0x12686B20)
#define KIDLMFFKPCO_IMHMKHINCIJ_AFKPBCIHJKC_OFFSET UNITYSDK_OFFSET(0x14FE5310)
#define KIDLMFFKPCO_IMHMKHINCIJ_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14FEB680)
#define KIDLMFFKPCO_IMHMKHINCIJ_BEAEPEIIPFG_OFFSET UNITYSDK_OFFSET(0x14FE7050)
#define KIDLMFFKPCO_IMHMKHINCIJ_BGKHEDMENHF_OFFSET UNITYSDK_OFFSET(0x14FE0DC0)
#define KIDLMFFKPCO_IMHMKHINCIJ_BMGEEIJFLIJ_OFFSET UNITYSDK_OFFSET(0x14FE3DC0)
#define KIDLMFFKPCO_IMHMKHINCIJ_BMNGLGONKDJ_OFFSET UNITYSDK_OFFSET(0x12689710)
#define KIDLMFFKPCO_IMHMKHINCIJ_BOJCENNJHFI_OFFSET UNITYSDK_OFFSET(0x126892F0)
#define KIDLMFFKPCO_IMHMKHINCIJ_BPHDNHAIHPH_OFFSET UNITYSDK_OFFSET(0x14FED330)
#define KIDLMFFKPCO_IMHMKHINCIJ_CADEJDJOMJF_OFFSET UNITYSDK_OFFSET(0x14FE2D40)
#define KIDLMFFKPCO_IMHMKHINCIJ_CFLPAGKIBMC_OFFSET UNITYSDK_OFFSET(0x14FE2FB0)
#define KIDLMFFKPCO_IMHMKHINCIJ_CKONHDEGNBN_OFFSET UNITYSDK_OFFSET(0x126890D0)
#define KIDLMFFKPCO_IMHMKHINCIJ_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x14FEB440)
#define KIDLMFFKPCO_IMHMKHINCIJ_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x14FEC220)
#define KIDLMFFKPCO_IMHMKHINCIJ_DLDIIKCMGIH_OFFSET UNITYSDK_OFFSET(0x14FEA600)
#define KIDLMFFKPCO_IMHMKHINCIJ_DNILNJAJHEA_OFFSET UNITYSDK_OFFSET(0x14FED580)
#define KIDLMFFKPCO_IMHMKHINCIJ_DNNHKMFACAK_OFFSET UNITYSDK_OFFSET(0x12686320)
#define KIDLMFFKPCO_IMHMKHINCIJ_DOCKMIPNODA_OFFSET UNITYSDK_OFFSET(0x14FE6AD0)
#define KIDLMFFKPCO_IMHMKHINCIJ_DPACAHKOPJE_OFFSET UNITYSDK_OFFSET(0x14FEA7F0)
#define KIDLMFFKPCO_IMHMKHINCIJ_EADCJCPEJNH_OFFSET UNITYSDK_OFFSET(0x12686500)
#define KIDLMFFKPCO_IMHMKHINCIJ_EBDPFCIDGAD_OFFSET UNITYSDK_OFFSET(0x14FE0BC0)
#define KIDLMFFKPCO_IMHMKHINCIJ_EPBJOODDHDG_OFFSET UNITYSDK_OFFSET(0x14FE77B0)
#define KIDLMFFKPCO_IMHMKHINCIJ_FDIMPKHGLFF_OFFSET UNITYSDK_OFFSET(0x12686430)
#define KIDLMFFKPCO_IMHMKHINCIJ_FFKHMKLHFEF_OFFSET UNITYSDK_OFFSET(0x14FE2780)
#define KIDLMFFKPCO_IMHMKHINCIJ_FGBPHGCCNPJ_OFFSET UNITYSDK_OFFSET(0x14FE5E50)
#define KIDLMFFKPCO_IMHMKHINCIJ_FHFDMFGCPJD_OFFSET UNITYSDK_OFFSET(0x14FEA950)
#define KIDLMFFKPCO_IMHMKHINCIJ_FHHIBLHCFLE_OFFSET UNITYSDK_OFFSET(0x14FED590)
#define KIDLMFFKPCO_IMHMKHINCIJ_FNAGAKCLGNO_OFFSET UNITYSDK_OFFSET(0x14FECDF0)
#define KIDLMFFKPCO_IMHMKHINCIJ_FNDOPNJLBBC_OFFSET UNITYSDK_OFFSET(0x14FEC670)
#define KIDLMFFKPCO_IMHMKHINCIJ_FNJCCBLGAFD_OFFSET UNITYSDK_OFFSET(0x14FEE390)
#define KIDLMFFKPCO_IMHMKHINCIJ_GFHNHOBMDJA_OFFSET UNITYSDK_OFFSET(0x14FE45A0)
#define KIDLMFFKPCO_IMHMKHINCIJ_GHDCBFHLKGC_OFFSET UNITYSDK_OFFSET(0x14FE0430)
#define KIDLMFFKPCO_IMHMKHINCIJ_GHDFFGDJIMH_OFFSET UNITYSDK_OFFSET(0x14FE81D0)
#define KIDLMFFKPCO_IMHMKHINCIJ_HAFPFGLCCCE_OFFSET UNITYSDK_OFFSET(0x14FE3740)
#define KIDLMFFKPCO_IMHMKHINCIJ_HNBIJEMMMPP_OFFSET UNITYSDK_OFFSET(0x14FE2450)
#define KIDLMFFKPCO_IMHMKHINCIJ_HOGDCMAPPJE_OFFSET UNITYSDK_OFFSET(0x126867F0)
#define KIDLMFFKPCO_IMHMKHINCIJ_IIJDACIILDP_OFFSET UNITYSDK_OFFSET(0x14FE8490)
#define KIDLMFFKPCO_IMHMKHINCIJ_INPBFEIEOBE_OFFSET UNITYSDK_OFFSET(0x14FECE70)
#define KIDLMFFKPCO_IMHMKHINCIJ_JCAGGGEGFKB_OFFSET UNITYSDK_OFFSET(0x14FE3B60)
#define KIDLMFFKPCO_IMHMKHINCIJ_JCELEDDMPFM_OFFSET UNITYSDK_OFFSET(0x14FE6BB0)
#define KIDLMFFKPCO_IMHMKHINCIJ_JDMOMHNKJIK_OFFSET UNITYSDK_OFFSET(0x126855B0)
#define KIDLMFFKPCO_IMHMKHINCIJ_JFBCCDNGJCB_OFFSET UNITYSDK_OFFSET(0x14FE2A90)
#define KIDLMFFKPCO_IMHMKHINCIJ_JGDFNAPMKDO_OFFSET UNITYSDK_OFFSET(0x12686810)
#define KIDLMFFKPCO_IMHMKHINCIJ_JKCBELAKMPP_OFFSET UNITYSDK_OFFSET(0x12685340)
#define KIDLMFFKPCO_IMHMKHINCIJ_KACMGFCPALN_OFFSET UNITYSDK_OFFSET(0x14FECD80)
#define KIDLMFFKPCO_IMHMKHINCIJ_KDLHNANMCGK_OFFSET UNITYSDK_OFFSET(0x14FEAD20)
#define KIDLMFFKPCO_IMHMKHINCIJ_KHOIFHHLDGF_OFFSET UNITYSDK_OFFSET(0x14FE3710)
#define KIDLMFFKPCO_IMHMKHINCIJ_KIJAJIHPBDL_OFFSET UNITYSDK_OFFSET(0x14FE6EE0)
#define KIDLMFFKPCO_IMHMKHINCIJ_KKNOHJMOEHA_OFFSET UNITYSDK_OFFSET(0x14FEC1B0)
#define KIDLMFFKPCO_IMHMKHINCIJ_KLJOFIPALIG_OFFSET UNITYSDK_OFFSET(0x126888B0)
#define KIDLMFFKPCO_IMHMKHINCIJ_KOBECEMEAPM_OFFSET UNITYSDK_OFFSET(0x14FE4B10)
#define KIDLMFFKPCO_IMHMKHINCIJ_LDBCIPDKANP_OFFSET UNITYSDK_OFFSET(0x12688FC0)
#define KIDLMFFKPCO_IMHMKHINCIJ_LDGBALKGFOP_OFFSET UNITYSDK_OFFSET(0x14FE3070)
#define KIDLMFFKPCO_IMHMKHINCIJ_LMFLIIKIECE_OFFSET UNITYSDK_OFFSET(0x14FED3A0)
#define KIDLMFFKPCO_IMHMKHINCIJ_LNHGAOICINC_OFFSET UNITYSDK_OFFSET(0x14FEA350)
#define KIDLMFFKPCO_IMHMKHINCIJ_LPIIEPEPCMD_OFFSET UNITYSDK_OFFSET(0x12688810)
#define KIDLMFFKPCO_IMHMKHINCIJ_MKDIKFDCMBI_OFFSET UNITYSDK_OFFSET(0x14FE05D0)
#define KIDLMFFKPCO_IMHMKHINCIJ_MKJMDKLAAPP_OFFSET UNITYSDK_OFFSET(0x14FE7F90)
#define KIDLMFFKPCO_IMHMKHINCIJ_MNOKNPLILBA_OFFSET UNITYSDK_OFFSET(0x12689060)
#define KIDLMFFKPCO_IMHMKHINCIJ_NAIGJLGFCEP_OFFSET UNITYSDK_OFFSET(0x14FEC940)
#define KIDLMFFKPCO_IMHMKHINCIJ_NECBIGNDJKB_OFFSET UNITYSDK_OFFSET(0x14FE7150)
#define KIDLMFFKPCO_IMHMKHINCIJ_NFEBBOHIHGM_OFFSET UNITYSDK_OFFSET(0x14FE2BD0)
#define KIDLMFFKPCO_IMHMKHINCIJ_NFJLCMPNOLD_OFFSET UNITYSDK_OFFSET(0x14FE70A0)
#define KIDLMFFKPCO_IMHMKHINCIJ_NGAIBPCGIMC_OFFSET UNITYSDK_OFFSET(0x14FE11A0)
#define KIDLMFFKPCO_IMHMKHINCIJ_NHOHCDKPIAP_OFFSET UNITYSDK_OFFSET(0x14FEA3C0)
#define KIDLMFFKPCO_IMHMKHINCIJ_NLHBCHGDLEP_OFFSET UNITYSDK_OFFSET(0x14FE8000)
#define KIDLMFFKPCO_IMHMKHINCIJ_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x12685AA0)
#define KIDLMFFKPCO_IMHMKHINCIJ_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x14FE8440)
#define KIDLMFFKPCO_IMHMKHINCIJ_OHNKNKIOFNF_OFFSET UNITYSDK_OFFSET(0x14FE54D0)
#define KIDLMFFKPCO_IMHMKHINCIJ_OKIAIHHBGHH_OFFSET UNITYSDK_OFFSET(0x14FE8010)
#define KIDLMFFKPCO_IMHMKHINCIJ_OOIMDEIOMAL_OFFSET UNITYSDK_OFFSET(0x14FECB80)
#define KIDLMFFKPCO_IMHMKHINCIJ_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x12689080)
#define KIDLMFFKPCO_IMHMKHINCIJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14FE45F0)
#define KIDLMFFKPCO_IMHMKHINCIJ_PJPDMJDKFIN_OFFSET UNITYSDK_OFFSET(0x126860C0)
#define KIDLMFFKPCO_IMHMKHINCIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14FE03E0)

inline static constexpr unsigned int KIDLMFFKPCO_IMHMKHINCIJ_TypeDefinitionIndex = 65718;

class KIDLMFFKPCO_IMHMKHINCIJ : public ::System::Object
{
public:
	::EFOAJCLMLDA EBBOMOHDEDB; // 0x10
	::Il2CppArray<::LineLighting*>* IPFOHBHNEAF; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>* KOIKFHFPOIO; // 0x58
	::EFOAJCLMLDA ACAOPOECJKC; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* JFJFGPGNNBN; // 0xA0
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* LIAPKPEPGHB; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* KGKAIOHGCLB; // 0xB0
	::MoleMole::MonoEffectPluginLaserLineLightingAggregation* FIJAIEJEFGM; // 0xB8
	::System::Collections::Generic::Dictionary_2<::MoleMole::LaserElementScaleAdjustment_LaserLengthLinear*, ::UnityEngine::Vector3>* OPNJNGCLBKC; // 0xC0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* BBIGEKAEFIH; // 0xC8
	::MoleMole::Battle::Entity* HNJGEAFHBLF; // 0xD0
	::System::Collections::Generic::List_1<::MoleMole::LaserElementScaleAdjustment_LaserLengthLinear*>* KAAMJLAEGGK; // 0xD8
	::MoleMole::MonoConfigurableCollider* JBNMEOKKAGK; // 0xE0
	::KIDLMFFKPCO_DMLDPADNALP* OFHHBLCLKIE; // 0xE8
	::UnityEngine::Transform* FAEHDLGGIOA; // 0xF0
	::MoleMole::Battle::Entity* JCKCPJIGMED; // 0xF8
	::UnityEngine::GameObject* JHHOOKMAJCO; // 0x100
	::MoleMole::Battle::Entity* BJOPJBNGJGL; // 0x108
	::KIDLMFFKPCO* EINLEKBHLNL; // 0x110
	::MoleMole::Battle::Entity* CJEPMLDDJKB; // 0x118
	::UnityEngine::GameObject* CLIGIFEAKFB; // 0x120
	::System::Collections::Generic::HashSet_1<::System::UInt32>* ONKAFMAMHDG; // 0x128
	::GECDLDJODHD* CEJENBBHBBG; // 0x130
	::UnityEngine::Transform* ANPPGDDFBDF; // 0x138
	::UnityEngine::GameObject* KCGGCAMEBIK; // 0x140
	::AEMCAOEICDG* DMJMDIBKNME; // 0x148
	::MoleMole::Battle::Entity* GBLONDGOLKG; // 0x150
	::KIDLMFFKPCO_DMLDPADNALP* EKLPFOAIBCG; // 0x158
	::System::Collections::Generic::List_1<::MoleMole::LaserSegments*>* ABMGIAEOGPK; // 0x160
	::UnityEngine::Vector3 JAHGKHFOFLF; // 0x168
	::System::Single IHFGKPBKDDB; // 0x174
	::UnityEngine::Vector3 JKNBCNNGHCC; // 0x178
	::System::Boolean EKHCNAILHPI; // 0x184
	::System::Boolean DIAAHJMMCBP; // 0x185
	::System::Boolean CIFLENFEEGN; // 0x186
	::System::Byte _padding0[0x1];
	::System::Single CPHLEBILECE; // 0x188
	::UnityEngine::Vector3 GGNJMKHMGNL; // 0x18C
	::UnityEngine::Vector3 GADKOJHAAGB; // 0x198
	::UnityEngine::Vector3 BIDCIHMKMCE; // 0x1A4
	::UnityEngine::RaycastHit OHNIGDINJMG; // 0x1B0
	::System::Single APOENHLGJOI; // 0x1E4
	::System::Single LOEMBHMOLNP; // 0x1E8
	::System::Boolean HGBLNCDJJAL; // 0x1EC
	::System::Boolean OKFGJOOICDM; // 0x1ED
	::System::Byte _padding1[0x2];
	::System::UInt32 HFCGOBLAIJK; // 0x1F0
	::System::Single GOEMCAMLKCK; // 0x1F4
	::UnityEngine::Vector3 LGOMGPPOMCE; // 0x1F8
	::System::Single FKBHHKHJMMM; // 0x204
	::KIDLMFFKPCO_FKPGNHNGGPM OOODHDLFDGL; // 0x208
	::UnityEngine::Vector3 NICBFOFEMLF; // 0x20C
	::UnityEngine::Vector3 CMBLNCIOKOA; // 0x218
	::System::Single BCOCGCLHLNE; // 0x224
	::UnityEngine::Vector3 CDPLNHAJDEP; // 0x228
	::System::Boolean DGHDBDMBLDL; // 0x234
	::System::Boolean PBANHKJFJKB; // 0x235
	::System::Boolean HIDKCIFCMEK; // 0x236
	::System::Boolean ADBNMNMMGHC; // 0x237
	::UnityEngine::Vector3 GCAHEBOBNMA; // 0x238
	::UnityEngine::Vector3 DNBGJMMIKFJ; // 0x244
	::System::Single ENGBLJOCGPE; // 0x250
	::UnityEngine::Vector3 JCMJAODJCAI; // 0x254
	::UnityEngine::Vector3 MADNFFOBLIL; // 0x260
	::System::Boolean GFHDCMLGKDG; // 0x26C
	::System::Boolean FCAEGPOCCJB; // 0x26D
	::System::Boolean JDOEGJNBOFO; // 0x26E
	::System::Boolean JKMCCBFILHK; // 0x26F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ__CTOR_OFFSET))(this);
	}

	::System::Void GHDCBFHLKGC(::System::Collections::Generic::HashSet_1<::System::UInt32>* MKLFCDAPBDH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_GHDCBFHLKGC_OFFSET))(this, MKLFCDAPBDH);
	}

	::UnityEngine::Vector3 MKDIKFDCMBI()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_MKDIKFDCMBI_OFFSET))(this);
	}

	::System::Void BGKHEDMENHF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_BGKHEDMENHF_OFFSET))(this);
	}

	::System::Void NGAIBPCGIMC(::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* ABLBFLBOEOG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* KBOGAJGAHFI, ::UnityEngine::Vector3 AKAGDEFAGJA, ::UnityEngine::Vector3 KPLGFGLGLPD, ::UnityEngine::Vector3 MNIAEGMKJEE, ::UnityEngine::Vector3& DAAEHEHLLLD, ::UnityEngine::LayerMask NAHOONGBABO, ::UnityEngine::LayerMask AAKMONELBAL, ::Il2CppArray<::UnityEngine::RaycastHit>* GMIMPIGMMOC, ::System::Single HPBDCELOKDH, ::System::Single IOMIOEPBPML, ::System::Boolean NHFEEPDAMMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::LayerMask, ::UnityEngine::LayerMask, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_NGAIBPCGIMC_OFFSET))(this, ABLBFLBOEOG, KBOGAJGAHFI, AKAGDEFAGJA, KPLGFGLGLPD, MNIAEGMKJEE, DAAEHEHLLLD, NAHOONGBABO, AAKMONELBAL, GMIMPIGMMOC, HPBDCELOKDH, IOMIOEPBPML, NHFEEPDAMMI);
	}

	::System::Void CFLPAGKIBMC(::KIDLMFFKPCO_DMLDPADNALP* AOKJEGNBALI, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::KIDLMFFKPCO_DMLDPADNALP*, ::System::Single))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_CFLPAGKIBMC_OFFSET))(this, AOKJEGNBALI, PMNLNNGEIFM);
	}

	::System::Void LDGBALKGFOP(::MoleMole::Battle::Entity* DJHFOGHIFEJ, ::KPNIFGIKELE* IKHJEGECGJA, ::JPKMBBAHKDH* DGPDIAIKJGM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::KPNIFGIKELE*, ::JPKMBBAHKDH*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_LDGBALKGFOP_OFFSET))(this, DJHFOGHIFEJ, IKHJEGECGJA, DGPDIAIKJGM);
	}

	::System::Void HNBIJEMMMPP(::UnityEngine::Vector3 AKAGDEFAGJA, ::UnityEngine::Vector3 KPLGFGLGLPD, ::System::Int32& OPIHEEFFDIP, ::UnityEngine::LayerMask KMOHKCADPNA, ::Il2CppArray<::UnityEngine::RaycastHit>* GMIMPIGMMOC, ::System::Single CPGCGMPMLMA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32&, ::UnityEngine::LayerMask, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_HNBIJEMMMPP_OFFSET))(this, AKAGDEFAGJA, KPLGFGLGLPD, OPIHEEFFDIP, KMOHKCADPNA, GMIMPIGMMOC, CPGCGMPMLMA);
	}

	::UnityEngine::RaycastHit KHOIFHHLDGF()
	{
		return ((::UnityEngine::RaycastHit(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_KHOIFHHLDGF_OFFSET))(this);
	}

	::System::Void HAFPFGLCCCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_HAFPFGLCCCE_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* JCAGGGEGFKB(::MoleMole::Config::ConfigEntityAnimEvent* JGINLLKLHGM, ::MoleMole::Battle::Entity* BFDPPMDEOFF)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEvent*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_JCAGGGEGFKB_OFFSET))(this, JGINLLKLHGM, BFDPPMDEOFF);
	}

	::System::Void BMGEEIJFLIJ(::System::Boolean MBEMOHDDEMA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_BMGEEIJFLIJ_OFFSET))(this, MBEMOHDDEMA);
	}

	::MoleMole::Battle::Entity* KOBECEMEAPM(::KIDLMFFKPCO_IMHMKHINCIJ_GJCKNAMLCON AELLPLBJELA, ::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Vector3 CFJFMMGPGKE)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::KIDLMFFKPCO_IMHMKHINCIJ_GJCKNAMLCON, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_KOBECEMEAPM_OFFSET))(this, AELLPLBJELA, CKPGOKHECCH, CFJFMMGPGKE);
	}

	::System::Void AFKPBCIHJKC(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_AFKPBCIHJKC_OFFSET))(this, PMNLNNGEIFM);
	}

	static ::System::Boolean NFEBBOHIHGM(::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* PILELGPBCLL, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_NFEBBOHIHGM_OFFSET))(PILELGPBCLL, KECKGDFIALJ);
	}

	::System::Void OHNKNKIOFNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_OHNKNKIOFNF_OFFSET))(this);
	}

	::System::Void FGBPHGCCNPJ(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_FGBPHGCCNPJ_OFFSET))(this, PMNLNNGEIFM);
	}

	::MoleMole::Battle::Entity* ADLGPOHGKCN(::System::String* IDOPOGOMOBE, ::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Vector3 CFJFMMGPGKE, ::UnityEngine::Vector3 CLMNLPKFBFA)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_ADLGPOHGKCN_OFFSET))(this, IDOPOGOMOBE, CKPGOKHECCH, CFJFMMGPGKE, CLMNLPKFBFA);
	}

	::System::Void DOCKMIPNODA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_DOCKMIPNODA_OFFSET))(this);
	}

	::System::Void GFHNHOBMDJA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_GFHNHOBMDJA_OFFSET))(this);
	}

	::System::Void JCELEDDMPFM(::System::Single AIFKDKEFKAC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_JCELEDDMPFM_OFFSET))(this, AIFKDKEFKAC);
	}

	::System::Void KIJAJIHPBDL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_KIJAJIHPBDL_OFFSET))(this);
	}

	::System::Void BEAEPEIIPFG(::System::Boolean ALMPKHHEOIO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_BEAEPEIIPFG_OFFSET))(this, ALMPKHHEOIO);
	}

	::UnityEngine::Vector3 NFJLCMPNOLD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_NFJLCMPNOLD_OFFSET))(this);
	}

	::System::Void NECBIGNDJKB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_NECBIGNDJKB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void MKJMDKLAAPP(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_MKJMDKLAAPP_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void NLHBCHGDLEP(::KIDLMFFKPCO_DMLDPADNALP* BKOLCDPOJAL)
	{
		return ((::System::Void(*)(::PVOID, ::KIDLMFFKPCO_DMLDPADNALP*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_NLHBCHGDLEP_OFFSET))(this, BKOLCDPOJAL);
	}

	::AJJEGAIJAMK OKIAIHHBGHH()
	{
		return ((::AJJEGAIJAMK(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_OKIAIHHBGHH_OFFSET))(this);
	}

	::System::Boolean CADEJDJOMJF(::System::Boolean NPPMJEIPMFC, ::UnityEngine::Collider* EHHHMFKHNAI, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Collider*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_CADEJDJOMJF_OFFSET))(this, NPPMJEIPMFC, EHHHMFKHNAI, KECKGDFIALJ);
	}

	::System::Void GHDFFGDJIMH(::UnityEngine::Vector3 AKAGDEFAGJA, ::UnityEngine::Vector3 KPLGFGLGLPD, ::UnityEngine::Vector3& DAAEHEHLLLD, ::System::Int32& OPIHEEFFDIP, ::UnityEngine::LayerMask KMOHKCADPNA, ::Il2CppArray<::UnityEngine::RaycastHit>* GMIMPIGMMOC, ::System::Single OGIHENKICBP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Int32&, ::UnityEngine::LayerMask, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_GHDFFGDJIMH_OFFSET))(this, AKAGDEFAGJA, KPLGFGLGLPD, DAAEHEHLLLD, OPIHEEFFDIP, KMOHKCADPNA, GMIMPIGMMOC, OGIHENKICBP);
	}

	::System::Void OENOEFBECOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_OENOEFBECOA_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* FFKHMKLHFEF(::UnityEngine::Collider* LNPGKDOBBFJ)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_FFKHMKLHFEF_OFFSET))(this, LNPGKDOBBFJ);
	}

	::System::Boolean IIJDACIILDP(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_IIJDACIILDP_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void FHFDMFGCPJD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_FHFDMFGCPJD_OFFSET))(this);
	}

	::UnityEngine::GameObject* KDLHNANMCGK()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_KDLHNANMCGK_OFFSET))(this);
	}

	::System::Void ABFCMKEBEAN(::MoleMole::Battle::Entity* DJHFOGHIFEJ, ::KPNIFGIKELE* IKHJEGECGJA, ::JPKMBBAHKDH* DGPDIAIKJGM, ::System::UInt32 KPBCENDNNDC, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EFOEOKBFJPJ>* IGECAGKFMJG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::KPNIFGIKELE*, ::JPKMBBAHKDH*, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EFOEOKBFJPJ>*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_ABFCMKEBEAN_OFFSET))(this, DJHFOGHIFEJ, IKHJEGECGJA, DGPDIAIKJGM, KPBCENDNNDC, IGECAGKFMJG);
	}

	static ::KIDLMFFKPCO_IMHMKHINCIJ* COKNIICCODC(::KIDLMFFKPCO* IJKIMCMPBCF, ::MoleMole::Battle::Entity* PNJNAAHKAIB, ::GECDLDJODHD* DFMKILICPFB, ::System::Single AIFKDKEFKAC, ::System::Single IOMIOEPBPML, ::System::Single HPBDCELOKDH)
	{
		return ((::KIDLMFFKPCO_IMHMKHINCIJ*(*)(::KIDLMFFKPCO*, ::MoleMole::Battle::Entity*, ::GECDLDJODHD*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_COKNIICCODC_OFFSET))(IJKIMCMPBCF, PNJNAAHKAIB, DFMKILICPFB, AIFKDKEFKAC, IOMIOEPBPML, HPBDCELOKDH);
	}

	::KIDLMFFKPCO_DMLDPADNALP* DLDIIKCMGIH(::UnityEngine::Animation* AOKJEGNBALI)
	{
		return ((::KIDLMFFKPCO_DMLDPADNALP*(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_DLDIIKCMGIH_OFFSET))(this, AOKJEGNBALI);
	}

	::System::Boolean LNHGAOICINC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_LNHGAOICINC_OFFSET))(this);
	}

	::System::Boolean JFBCCDNGJCB(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_JFBCCDNGJCB_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Boolean KKNOHJMOEHA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_KKNOHJMOEHA_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_DFJPMOOOLHM_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void FNDOPNJLBBC(::UnityEngine::GameObject* IEOJBLPFGOL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_FNDOPNJLBBC_OFFSET))(this, IEOJBLPFGOL);
	}

	::UnityEngine::GameObject* NAIGJLGFCEP()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_NAIGJLGFCEP_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* OOIMDEIOMAL(::NEAPGKAPCJF* JMDHBJMNBCP, ::MoleMole::Battle::Entity* MJPPILKEMBG)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::NEAPGKAPCJF*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_OOIMDEIOMAL_OFFSET))(this, JMDHBJMNBCP, MJPPILKEMBG);
	}

	::System::Void KACMGFCPALN(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_KACMGFCPALN_OFFSET))(this, PMNLNNGEIFM);
	}

	::UnityEngine::GameObject* NHOHCDKPIAP()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_NHOHCDKPIAP_OFFSET))(this);
	}

	::System::Void FNAGAKCLGNO(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_FNAGAKCLGNO_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Boolean INPBFEIEOBE(::MoleMole::Battle::Entity* JKELDNKGNDI, ::System::String* JIPHMFEGKHP, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* BFHMEKHAEHO, ::MoleMole::Config::ConfigEntityAnimEvent* JGINLLKLHGM)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_INPBFEIEOBE_OFFSET))(this, JKELDNKGNDI, JIPHMFEGKHP, BFHMEKHAEHO, JGINLLKLHGM);
	}

	::System::Void BBOMJDBNHIC(::KIDLMFFKPCO* IJKIMCMPBCF, ::MoleMole::Battle::Entity* PNJNAAHKAIB, ::GECDLDJODHD* DFMKILICPFB, ::System::Single AIFKDKEFKAC, ::System::Single CPGCGMPMLMA, ::System::Single HPBDCELOKDH)
	{
		return ((::System::Void(*)(::PVOID, ::KIDLMFFKPCO*, ::MoleMole::Battle::Entity*, ::GECDLDJODHD*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_BBOMJDBNHIC_OFFSET))(this, IJKIMCMPBCF, PNJNAAHKAIB, DFMKILICPFB, AIFKDKEFKAC, CPGCGMPMLMA, HPBDCELOKDH);
	}

	::System::Void PHOADBJGFBE(::System::Boolean MBONKHLJAMO, ::System::Boolean DMKHGCLNLKH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_PHOADBJGFBE_OFFSET))(this, MBONKHLJAMO, DMKHGCLNLKH);
	}

	::UnityEngine::Vector3 EBDPFCIDGAD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_EBDPFCIDGAD_OFFSET))(this);
	}

	::System::Void LMFLIIKIECE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_LMFLIIKIECE_OFFSET))(this);
	}

	::System::Void DNILNJAJHEA(::KIDLMFFKPCO_DMLDPADNALP* BKOLCDPOJAL)
	{
		return ((::System::Void(*)(::PVOID, ::KIDLMFFKPCO_DMLDPADNALP*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_DNILNJAJHEA_OFFSET))(this, BKOLCDPOJAL);
	}

	::System::Boolean BPHDNHAIHPH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_BPHDNHAIHPH_OFFSET))(this);
	}

	::System::Void FHHIBLHCFLE(::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* CMADCONDBMF, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* BFHMEKHAEHO, ::System::Collections::Generic::HashSet_1<::System::UInt32>* CALNAMNLIHK, ::System::Boolean IFNKJIEKMJN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_FHHIBLHCFLE_OFFSET))(this, CMADCONDBMF, BFHMEKHAEHO, CALNAMNLIHK, IFNKJIEKMJN);
	}

	::System::Void FNJCCBLGAFD(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_FNJCCBLGAFD_OFFSET))(this, PMNLNNGEIFM);
	}

	::AEMCAOEICDG* DPACAHKOPJE()
	{
		return ((::AEMCAOEICDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_DPACAHKOPJE_OFFSET))(this);
	}

	::System::Void EPBJOODDHDG(::UnityEngine::Vector3 CPILJNMFPJL, ::UnityEngine::Vector3 JCNEMPCJLGK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_EPBJOODDHDG_OFFSET))(this, CPILJNMFPJL, JCNEMPCJLGK);
	}

	::System::Void JKCBELAKMPP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_JKCBELAKMPP_OFFSET))(this);
	}

	::System::Boolean PJPDMJDKFIN(::System::Collections::Generic::HashSet_1<::System::String*>* JMDOANHOEJG, ::UnityEngine::Collider* EHHHMFKHNAI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_PJPDMJDKFIN_OFFSET))(this, JMDOANHOEJG, EHHHMFKHNAI);
	}

	::System::Void DNNHKMFACAK(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_DNNHKMFACAK_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void FDIMPKHGLFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_FDIMPKHGLFF_OFFSET))(this);
	}

	::System::Void EADCJCPEJNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_EADCJCPEJNH_OFFSET))(this);
	}

	::System::Void JDMOMHNKJIK(::OECBDEANICM* GEANDLGIKBC, ::System::Single NCBHCKGHFHE)
	{
		return ((::System::Void(*)(::PVOID, ::OECBDEANICM*, ::System::Single))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_JDMOMHNKJIK_OFFSET))(this, GEANDLGIKBC, NCBHCKGHFHE);
	}

	::UnityEngine::Vector3 HOGDCMAPPJE()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_HOGDCMAPPJE_OFFSET))(this);
	}

	::System::Void JGDFNAPMKDO(::LineLighting* PCKIBCOHLGH, ::EFOAJCLMLDA CGPHFNFCDAE, ::EFOAJCLMLDA GDMGPKIJCKA, ::System::Single AIFKDKEFKAC, ::KIDLMFFKPCO_FKPGNHNGGPM AIOMIBOFMJA)
	{
		return ((::System::Void(*)(::PVOID, ::LineLighting*, ::EFOAJCLMLDA, ::EFOAJCLMLDA, ::System::Single, ::KIDLMFFKPCO_FKPGNHNGGPM))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_JGDFNAPMKDO_OFFSET))(this, PCKIBCOHLGH, CGPHFNFCDAE, GDMGPKIJCKA, AIFKDKEFKAC, AIOMIBOFMJA);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean ADPBBPLBAOL(::System::Single PMNLNNGEIFM, ::System::Boolean IFNKJIEKMJN, ::System::Boolean NHFEEPDAMMI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_ADPBBPLBAOL_OFFSET))(this, PMNLNNGEIFM, IFNKJIEKMJN, NHFEEPDAMMI);
	}

	::System::Void KLJOFIPALIG(::UnityEngine::Vector3 AKAGDEFAGJA, ::UnityEngine::Vector3 KPLGFGLGLPD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_KLJOFIPALIG_OFFSET))(this, AKAGDEFAGJA, KPLGFGLGLPD);
	}

	::System::Void MNOKNPLILBA(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_MNOKNPLILBA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LDBCIPDKANP(::UnityEngine::RaycastHit EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_LDBCIPDKANP_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Vector3 LPIIEPEPCMD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_LPIIEPEPCMD_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void CKONHDEGNBN(::KIDLMFFKPCO_IMHMKHINCIJ_GJCKNAMLCON AELLPLBJELA, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::KIDLMFFKPCO_IMHMKHINCIJ_GJCKNAMLCON, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_CKONHDEGNBN_OFFSET))(this, AELLPLBJELA, KECKGDFIALJ);
	}

	::System::Void BOJCENNJHFI(::System::Boolean HPMMCENFOAM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_BOJCENNJHFI_OFFSET))(this, HPMMCENFOAM);
	}

	::MoleMole::MonoConfigurableCollider* BMNGLGONKDJ()
	{
		return ((::MoleMole::MonoConfigurableCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_IMHMKHINCIJ_BMNGLGONKDJ_OFFSET))(this);
	}
};
