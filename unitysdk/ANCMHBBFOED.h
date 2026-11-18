#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CELEAAKFDPL.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/HCDCPDGBIMB.h"
#include "unitysdk/KAPINBBMLDJ.h"
#include "unitysdk/KGOEPEBCOOB.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EAvatarCameraShotType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/DHHLHIEPGCH.h"
#include "unitysdk/JPDHILFCILB.h"
#include "unitysdk/System/ValueTuple_2.h"

class AHAICPLGBAH;
class AHGFNANCLDH_BNMOKGABIFC;
class EAOMCKHAMBD;
class EEHJOPEJOCD;
class FCBNEBOPNIF;
class GAAJJLLEPDA;
class HGAJKHIMKJP;
class IPFNGDNNODB;
class JCADHFOKIHK;
class NHEBOOMFOMJ;
class PKDEEDPGBOD;
class POFIMLGOIGD;
class POFOFGILKAA;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Transform; }

#define ANCMHBBFOED_ABCBFDMEIEE_OFFSET UNITYSDK_OFFSET(0x1551B660)
#define ANCMHBBFOED_AGOOOAHHEHB_OFFSET UNITYSDK_OFFSET(0x155163D0)
#define ANCMHBBFOED_AHBAFMKBCGL_OFFSET UNITYSDK_OFFSET(0x15514B80)
#define ANCMHBBFOED_AJINNLNIHJC_OFFSET UNITYSDK_OFFSET(0x1551D2C0)
#define ANCMHBBFOED_AJKLLEDJEGL_OFFSET UNITYSDK_OFFSET(0x1551D550)
#define ANCMHBBFOED_AKIMLNBJKBN_OFFSET UNITYSDK_OFFSET(0x1551C8B0)
#define ANCMHBBFOED_AMJBIMNLBLA_OFFSET UNITYSDK_OFFSET(0x155180E0)
#define ANCMHBBFOED_AMODKFGCBPJ_OFFSET UNITYSDK_OFFSET(0x1551C630)
#define ANCMHBBFOED_AMPNBDJOHHA_OFFSET UNITYSDK_OFFSET(0x1853DE90)
#define ANCMHBBFOED_ANJGEOHJCBE_OFFSET UNITYSDK_OFFSET(0x15512300)
#define ANCMHBBFOED_AOLBEMCJPPC_OFFSET UNITYSDK_OFFSET(0x1551D540)
#define ANCMHBBFOED_BDMKIKLBNGA_OFFSET UNITYSDK_OFFSET(0x15518320)
#define ANCMHBBFOED_BEBLFMKHGKH_OFFSET UNITYSDK_OFFSET(0x1551B180)
#define ANCMHBBFOED_BKHOKLKECGB_OFFSET UNITYSDK_OFFSET(0x1551AD80)
#define ANCMHBBFOED_BLJOKPDJDDG_OFFSET UNITYSDK_OFFSET(0x15515DF0)
#define ANCMHBBFOED_BMFPLNOPCAO_OFFSET UNITYSDK_OFFSET(0x1551C990)
#define ANCMHBBFOED_BNDBPDNBMAC_OFFSET UNITYSDK_OFFSET(0x1551AEF0)
#define ANCMHBBFOED_CBGCKKBCKPK_OFFSET UNITYSDK_OFFSET(0x1551AF30)
#define ANCMHBBFOED_CBPJIAGIFMG_OFFSET UNITYSDK_OFFSET(0x15516A20)
#define ANCMHBBFOED_CCLJEALMALJ_OFFSET UNITYSDK_OFFSET(0x155175A0)
#define ANCMHBBFOED_CDAIEEMOOMN_OFFSET UNITYSDK_OFFSET(0x1551C140)
#define ANCMHBBFOED_CDPMIAGIKEG_OFFSET UNITYSDK_OFFSET(0x155130F0)
#define ANCMHBBFOED_CKINGEHLFIH_OFFSET UNITYSDK_OFFSET(0x15513D30)
#define ANCMHBBFOED_CKLBIJDCLBP_OFFSET UNITYSDK_OFFSET(0x15517290)
#define ANCMHBBFOED_CLNIGONFCGH_OFFSET UNITYSDK_OFFSET(0x15518390)
#define ANCMHBBFOED_CPGOJBMALKB_OFFSET UNITYSDK_OFFSET(0x15512FE0)
#define ANCMHBBFOED_DCKIAGHLLGN_OFFSET UNITYSDK_OFFSET(0x15518A90)
#define ANCMHBBFOED_DDNHODPOKFP_OFFSET UNITYSDK_OFFSET(0x15517BD0)
#define ANCMHBBFOED_DFILIFBBMLN_OFFSET UNITYSDK_OFFSET(0x15515A50)
#define ANCMHBBFOED_DIPLFFPMCJP_OFFSET UNITYSDK_OFFSET(0x1551D680)
#define ANCMHBBFOED_DJEBHPIAAMO_OFFSET UNITYSDK_OFFSET(0x1551CA50)
#define ANCMHBBFOED_DMBMHHBNANK_OFFSET UNITYSDK_OFFSET(0x15519EC0)
#define ANCMHBBFOED_DMFIKALJLMI_OFFSET UNITYSDK_OFFSET(0x15513A00)
#define ANCMHBBFOED_DNLGKGNBADN_OFFSET UNITYSDK_OFFSET(0x15515620)
#define ANCMHBBFOED_DONJGIPABLE_OFFSET UNITYSDK_OFFSET(0x15518440)
#define ANCMHBBFOED_DOOHPELFNGI_OFFSET UNITYSDK_OFFSET(0x1551D740)
#define ANCMHBBFOED_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1551D690)
#define ANCMHBBFOED_EEKANPIFLBH_OFFSET UNITYSDK_OFFSET(0x15517930)
#define ANCMHBBFOED_EPAABILPOOJ_OFFSET UNITYSDK_OFFSET(0x15516E50)
#define ANCMHBBFOED_FBICKCPEJLL_OFFSET UNITYSDK_OFFSET(0x15517150)
#define ANCMHBBFOED_FCDGJAJMHHD_OFFSET UNITYSDK_OFFSET(0x1551D350)
#define ANCMHBBFOED_FDBLPDEABIL_OFFSET UNITYSDK_OFFSET(0x1551AEE0)
#define ANCMHBBFOED_FDLJBJGJKMO_OFFSET UNITYSDK_OFFSET(0x1551D3F0)
#define ANCMHBBFOED_FEAFBHPKMCB_OFFSET UNITYSDK_OFFSET(0x15518F90)
#define ANCMHBBFOED_FHPCLMPAMMG_OFFSET UNITYSDK_OFFSET(0x155187B0)
#define ANCMHBBFOED_FKBPIFLGKOA_OFFSET UNITYSDK_OFFSET(0x155180A0)
#define ANCMHBBFOED_FKFGEICMMJI_OFFSET UNITYSDK_OFFSET(0x15517210)
#define ANCMHBBFOED_FLLIHNENPHE_OFFSET UNITYSDK_OFFSET(0x1551BFC0)
#define ANCMHBBFOED_FNACHECOODF_OFFSET UNITYSDK_OFFSET(0x155147E0)
#define ANCMHBBFOED_FOLOCLNNPFM_OFFSET UNITYSDK_OFFSET(0x15510610)
#define ANCMHBBFOED_GHIKPOHDEGM_OFFSET UNITYSDK_OFFSET(0x1551D360)
#define ANCMHBBFOED_GNDAGJDNBPC_OFFSET UNITYSDK_OFFSET(0x15513F20)
#define ANCMHBBFOED_GOAAKGPJJJP_OFFSET UNITYSDK_OFFSET(0x1551D5F0)
#define ANCMHBBFOED_HCPGALIGDFH_OFFSET UNITYSDK_OFFSET(0x15510430)
#define ANCMHBBFOED_HFHFMPOPPNB_OFFSET UNITYSDK_OFFSET(0x15517D30)
#define ANCMHBBFOED_HHFDJIJJNGK_OFFSET UNITYSDK_OFFSET(0x15510460)
#define ANCMHBBFOED_HHPFJINOFHI_OFFSET UNITYSDK_OFFSET(0x15517830)
#define ANCMHBBFOED_HIHMDMNJIIJ_OFFSET UNITYSDK_OFFSET(0x155158E0)
#define ANCMHBBFOED_HKIFCICJJBI_OFFSET UNITYSDK_OFFSET(0x155187C0)
#define ANCMHBBFOED_HLEGPCONGKL_OFFSET UNITYSDK_OFFSET(0x1551AE30)
#define ANCMHBBFOED_ICEHDFAJEIJ_OFFSET UNITYSDK_OFFSET(0x155128A0)
#define ANCMHBBFOED_ICPLONKNFHH_OFFSET UNITYSDK_OFFSET(0x1551B170)
#define ANCMHBBFOED_IDAMBIMFDLE_OFFSET UNITYSDK_OFFSET(0x1551D6A0)
#define ANCMHBBFOED_IDJFMLLMAKF_OFFSET UNITYSDK_OFFSET(0x15513EE0)
#define ANCMHBBFOED_IEMBIOEDNHN_OFFSET UNITYSDK_OFFSET(0x155139C0)
#define ANCMHBBFOED_IGMNDOMOMPP_OFFSET UNITYSDK_OFFSET(0x1551C280)
#define ANCMHBBFOED_IHEEBLGGLDJ_OFFSET UNITYSDK_OFFSET(0x1551C640)
#define ANCMHBBFOED_IHHPOIAECDM_OFFSET UNITYSDK_OFFSET(0x15518270)
#define ANCMHBBFOED_IIPHJIHIBBC_OFFSET UNITYSDK_OFFSET(0x15510830)
#define ANCMHBBFOED_IMJPPODOKOK_OFFSET UNITYSDK_OFFSET(0x1551AC50)
#define ANCMHBBFOED_INOHPMOAFND_1_OFFSET UNITYSDK_OFFSET(0x1551C650)
#define ANCMHBBFOED_INOHPMOAFND_OFFSET UNITYSDK_OFFSET(0x155187D0)
#define ANCMHBBFOED_JAIIPGDENPF_OFFSET UNITYSDK_OFFSET(0x1551C850)
#define ANCMHBBFOED_JBAPAPJOMFH_OFFSET UNITYSDK_OFFSET(0x15513C40)
#define ANCMHBBFOED_JCKJBPPKBKL_OFFSET UNITYSDK_OFFSET(0x1551C130)
#define ANCMHBBFOED_JCNFOHPLPFJ_OFFSET UNITYSDK_OFFSET(0x15513B30)
#define ANCMHBBFOED_JDDKKIJFBND_OFFSET UNITYSDK_OFFSET(0x15512E30)
#define ANCMHBBFOED_JDHPCJHBLCI_OFFSET UNITYSDK_OFFSET(0x155108B0)
#define ANCMHBBFOED_JEIHEMALELM_OFFSET UNITYSDK_OFFSET(0x15518710)
#define ANCMHBBFOED_JJCECLNIHEK_OFFSET UNITYSDK_OFFSET(0x1551D730)
#define ANCMHBBFOED_JLHBKJKDGDE_OFFSET UNITYSDK_OFFSET(0x15513E40)
#define ANCMHBBFOED_JLIKIPOOOGL_OFFSET UNITYSDK_OFFSET(0x1551ACE0)
#define ANCMHBBFOED_JLMKGFHCPND_OFFSET UNITYSDK_OFFSET(0x15514C10)
#define ANCMHBBFOED_JODCIHGHICN_OFFSET UNITYSDK_OFFSET(0x15514460)
#define ANCMHBBFOED_JPAIGJAGMFP_OFFSET UNITYSDK_OFFSET(0x1551C290)
#define ANCMHBBFOED_JPGNJEBPGJM_OFFSET UNITYSDK_OFFSET(0x15516330)
#define ANCMHBBFOED_JPHPLJFKBJB_OFFSET UNITYSDK_OFFSET(0x1551CAE0)
#define ANCMHBBFOED_JPJLHGHIOMA_OFFSET UNITYSDK_OFFSET(0x15517310)
#define ANCMHBBFOED_JPMNBOHLDPP_OFFSET UNITYSDK_OFFSET(0x1551D480)
#define ANCMHBBFOED_KAAMDKENNIM_OFFSET UNITYSDK_OFFSET(0x15513180)
#define ANCMHBBFOED_KEMMPODHFOK_OFFSET UNITYSDK_OFFSET(0x1551ACF0)
#define ANCMHBBFOED_KNAMLBOMBMK_OFFSET UNITYSDK_OFFSET(0x15519EB0)
#define ANCMHBBFOED_LAKHJJCLDKB_OFFSET UNITYSDK_OFFSET(0x155199F0)
#define ANCMHBBFOED_LANCLCHIMEN_OFFSET UNITYSDK_OFFSET(0x15512BF0)
#define ANCMHBBFOED_LDKLHJJIINL_OFFSET UNITYSDK_OFFSET(0x15519E00)
#define ANCMHBBFOED_LHMDBICGJKN_OFFSET UNITYSDK_OFFSET(0x15519F80)
#define ANCMHBBFOED_LIMKANIKAHH_OFFSET UNITYSDK_OFFSET(0x155132E0)
#define ANCMHBBFOED_LJEEJABBAHD_OFFSET UNITYSDK_OFFSET(0x15513C50)
#define ANCMHBBFOED_LLPJEODJJIE_OFFSET UNITYSDK_OFFSET(0x155107D0)
#define ANCMHBBFOED_LNGKLAOIAKE_OFFSET UNITYSDK_OFFSET(0x155184E0)
#define ANCMHBBFOED_LNMMMAKPDBG_OFFSET UNITYSDK_OFFSET(0x1551C230)
#define ANCMHBBFOED_LPMGKNKAKFD_OFFSET UNITYSDK_OFFSET(0x15519F90)
#define ANCMHBBFOED_MBFAIMBMCCH_OFFSET UNITYSDK_OFFSET(0x155128E0)
#define ANCMHBBFOED_MEHFMMCEIDA_OFFSET UNITYSDK_OFFSET(0x1551A0B0)
#define ANCMHBBFOED_MHGCGMMLEGK_OFFSET UNITYSDK_OFFSET(0x1551B190)
#define ANCMHBBFOED_MHMIGDBBJBM_OFFSET UNITYSDK_OFFSET(0x1551AE80)
#define ANCMHBBFOED_MKEIGFMHLHF_OFFSET UNITYSDK_OFFSET(0x15519920)
#define ANCMHBBFOED_MLJFLKCOHII_OFFSET UNITYSDK_OFFSET(0x1551CC10)
#define ANCMHBBFOED_MMCIBCHKMBC_OFFSET UNITYSDK_OFFSET(0x155184D0)
#define ANCMHBBFOED_NBOKLEHABCP_OFFSET UNITYSDK_OFFSET(0x15519D70)
#define ANCMHBBFOED_NJBFHOJBJMH_OFFSET UNITYSDK_OFFSET(0x155131E0)
#define ANCMHBBFOED_NKJJNAIPGHF_OFFSET UNITYSDK_OFFSET(0x15510F10)
#define ANCMHBBFOED_NMNOHGIFONK_OFFSET UNITYSDK_OFFSET(0x15513C60)
#define ANCMHBBFOED_NNNNFOLNPPA_OFFSET UNITYSDK_OFFSET(0x1551A020)
#define ANCMHBBFOED_NOIFIFCHKOO_OFFSET UNITYSDK_OFFSET(0x15514410)
#define ANCMHBBFOED_NPAFLBFAHPK_OFFSET UNITYSDK_OFFSET(0x15519A90)
#define ANCMHBBFOED_NPHBLJDPFHH_OFFSET UNITYSDK_OFFSET(0x15516250)
#define ANCMHBBFOED_OBBGADNNNOG_OFFSET UNITYSDK_OFFSET(0x1551CF60)
#define ANCMHBBFOED_OBLGPINNIBG_1_OFFSET UNITYSDK_OFFSET(0x1551A110)
#define ANCMHBBFOED_OBLGPINNIBG_OFFSET UNITYSDK_OFFSET(0x1551C1D0)
#define ANCMHBBFOED_OCMLJKCILLJ_OFFSET UNITYSDK_OFFSET(0x1551C9A0)
#define ANCMHBBFOED_ODCKAMEPCFN_OFFSET UNITYSDK_OFFSET(0x1551D5E0)
#define ANCMHBBFOED_OGDJMFAFDOO_OFFSET UNITYSDK_OFFSET(0x15517780)
#define ANCMHBBFOED_OGIKPHIAOOP_OFFSET UNITYSDK_OFFSET(0x15513060)
#define ANCMHBBFOED_OHMBHEPLALH_OFFSET UNITYSDK_OFFSET(0x155189B0)
#define ANCMHBBFOED_OIGJOHALEJA_OFFSET UNITYSDK_OFFSET(0x155199E0)
#define ANCMHBBFOED_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15512930)
#define ANCMHBBFOED_OMPDOHONEMB_OFFSET UNITYSDK_OFFSET(0x1551CB70)
#define ANCMHBBFOED_OOHPBACCKCH_OFFSET UNITYSDK_OFFSET(0x1551C9B0)
#define ANCMHBBFOED_OPODLOIEGEB_OFFSET UNITYSDK_OFFSET(0x15511C30)
#define ANCMHBBFOED_PEALKECEGND_OFFSET UNITYSDK_OFFSET(0x15513F70)
#define ANCMHBBFOED_PGFJGFGPNJA_OFFSET UNITYSDK_OFFSET(0x15514E80)
#define ANCMHBBFOED_PGHMADNMAHD_OFFSET UNITYSDK_OFFSET(0x15517660)
#define ANCMHBBFOED_PKFIGMCICNB_OFFSET UNITYSDK_OFFSET(0x1551B420)
#define ANCMHBBFOED_PPNLOBALFKG_OFFSET UNITYSDK_OFFSET(0x15510530)
#define ANCMHBBFOED__CTOR_OFFSET UNITYSDK_OFFSET(0x15517DD0)

inline static constexpr unsigned int ANCMHBBFOED_TypeDefinitionIndex = 55171;

class ANCMHBBFOED : public ::CELEAAKFDPL
{
public:
	// static const ::System::String* FIHMHKHMOFM; // 0x0
	// static const ::System::String* ILHGNEFDAOK; // 0x0
	// static const ::System::Int32 KJNOPLEGHJI = 0x1D164A3; // 0x0
	// static const ::System::Int32 BJGICDBIJHL = 0x5; // 0x0
	// static const ::System::String* DBOGMOCFJHI; // 0x0
	// static const ::System::String* FOOKCJLDPMO; // 0x0
	// static const ::System::String* MNKGHAGEMCH; // 0x0
	// static const ::System::String* EJJLAJGODHP; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* ICKHADBLMGI; // 0x2F8
	::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* NMOENIHOHLN; // 0x300
	::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* BBNDOOEOGMH; // 0x308
	::System::Action_2<::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*, ::KAPINBBMLDJ>* IAGEHGAOLMP; // 0x310
	::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* NPLCGIFABNE; // 0x318
	::System::Tuple_2<::System::Int32, ::System::Collections::Generic::List_1<::HCDCPDGBIMB>*>* GODLAHAOPLE; // 0x320
	::System::Collections::Generic::List_1<::System::Int32>* LMPNMBHDEDF; // 0x328
	::System::Collections::Generic::Queue_1<::KGOEPEBCOOB>* LFKJDGJDHPJ; // 0x330
	::System::Collections::Generic::List_1<::Share::EItemType>* PEMDMMCDONB; // 0x338
	::System::Action_1<::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*>* GPLMIDFCBNI; // 0x340
	::System::Boolean LOGLJEBMCFA; // 0x348
	::System::Boolean _PIACKNIPBFO_k__BackingField; // 0x349
	::System::Byte _padding0[0x2];
	::System::Int32 _KGJGHDBHABA_k__BackingField; // 0x34C
	::System::Single IIKHIKIHDNC; // 0x350
	::System::Int32 ICJOGDPNBPG; // 0x354
	::System::Double _HHACAMJFHDC_k__BackingField; // 0x358
	::System::Int32 _BJILHNDBCJO_k__BackingField; // 0x360
	::System::Single DFJFMEKPOAC; // 0x364
	::System::Boolean _CPNDHIPPHBF_k__BackingField; // 0x368
	::System::Boolean _PPLJLJCDADI_k__BackingField; // 0x369
	::System::Boolean NBGAKKAMFNK; // 0x36A
	::System::Byte _padding1[0x1];
	::Foundation::Coroutine::CoroutineHandle GNLAIEBHCPB; // 0x36C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED__CTOR_OFFSET))(this);
	}

	::System::Boolean HCPGALIGDFH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_HCPGALIGDFH_OFFSET))(this);
	}

	::System::Void PPNLOBALFKG(::MoleMole::Battle::Entity* DBIOAKNMBDM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_PPNLOBALFKG_OFFSET))(this, DBIOAKNMBDM);
	}

	::System::Void FOLOCLNNPFM(::FCBNEBOPNIF* CENFDFIKBDC)
	{
		return ((::System::Void(*)(::PVOID, ::FCBNEBOPNIF*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_FOLOCLNNPFM_OFFSET))(this, CENFDFIKBDC);
	}

	::System::Int32 LLPJEODJJIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_LLPJEODJJIE_OFFSET))(this);
	}

	::System::Void IIPHJIHIBBC(::System::Collections::Generic::List_1<::System::Int32>* LIJGJFHNMJM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_IIPHJIHIBBC_OFFSET))(this, LIJGJFHNMJM);
	}

	::System::Void NKJJNAIPGHF(::EEHJOPEJOCD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::EEHJOPEJOCD*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_NKJJNAIPGHF_OFFSET))(this, AAOCANGHBDG);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*> ANJGEOHJCBE(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* EIDHJDBNFJF, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* PAPNEOOMBFJ)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_ANJGEOHJCBE_OFFSET))(this, EIDHJDBNFJF, PAPNEOOMBFJ);
	}

	::System::Collections::Generic::List_1<::System::Int32>* ICEHDFAJEIJ()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_ICEHDFAJEIJ_OFFSET))(this);
	}

	::System::Void MBFAIMBMCCH(::NHEBOOMFOMJ* FOHOENDPLML)
	{
		return ((::System::Void(*)(::PVOID, ::NHEBOOMFOMJ*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_MBFAIMBMCCH_OFFSET))(this, FOHOENDPLML);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void LANCLCHIMEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_LANCLCHIMEN_OFFSET))(this);
	}

	::System::Void CPGOJBMALKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_CPGOJBMALKB_OFFSET))(this);
	}

	::System::String* OGIKPHIAOOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_OGIKPHIAOOP_OFFSET))(this);
	}

	::System::String* CDPMIAGIKEG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_CDPMIAGIKEG_OFFSET))(this);
	}

	::System::Boolean KAAMDKENNIM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_KAAMDKENNIM_OFFSET))(this);
	}

	::System::Void NJBFHOJBJMH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_NJBFHOJBJMH_OFFSET))(this);
	}

	::System::Boolean IEMBIOEDNHN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_IEMBIOEDNHN_OFFSET))(this);
	}

	::System::Int32 DMFIKALJLMI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_DMFIKALJLMI_OFFSET))(this);
	}

	::System::String* JCNFOHPLPFJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_JCNFOHPLPFJ_OFFSET))(this);
	}

	::System::Void JBAPAPJOMFH(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_JBAPAPJOMFH_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::ELocalPlayType LJEEJABBAHD()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_LJEEJABBAHD_OFFSET))(this);
	}

	::System::Void NMNOHGIFONK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_NMNOHGIFONK_OFFSET))(this);
	}

	::System::Boolean CKINGEHLFIH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_CKINGEHLFIH_OFFSET))(this);
	}

	::System::Void JLHBKJKDGDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_JLHBKJKDGDE_OFFSET))(this);
	}

	::System::Boolean IDJFMLLMAKF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_IDJFMLLMAKF_OFFSET))(this);
	}

	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType GNDAGJDNBPC(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType JIPPMBKLFHE)
	{
		return ((::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + ANCMHBBFOED_GNDAGJDNBPC_OFFSET))(this, JIPPMBKLFHE);
	}

	::System::Void PEALKECEGND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_PEALKECEGND_OFFSET))(this);
	}

	::System::Void JODCIHGHICN(::GAAJJLLEPDA* HEJIBNEHLIG)
	{
		return ((::System::Void(*)(::PVOID, ::GAAJJLLEPDA*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_JODCIHGHICN_OFFSET))(this, HEJIBNEHLIG);
	}

	::System::Void FNACHECOODF(::POFOFGILKAA* HEJIBNEHLIG)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_FNACHECOODF_OFFSET))(this, HEJIBNEHLIG);
	}

	::System::Void AHBAFMKBCGL(::MoleMole::Battle::Entity* DJMEFDIHNDO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_AHBAFMKBCGL_OFFSET))(this, DJMEFDIHNDO);
	}

	::System::Boolean HIHMDMNJIIJ(::MoleMole::Level::RatingType& NILNNELOMCG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Level::RatingType&))((::PBYTE)hIl2Cpp + ANCMHBBFOED_HIHMDMNJIIJ_OFFSET))(this, NILNNELOMCG);
	}

	::System::Collections::Generic::List_1<::HCDCPDGBIMB>* DFILIFBBMLN()
	{
		return ((::System::Collections::Generic::List_1<::HCDCPDGBIMB>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_DFILIFBBMLN_OFFSET))(this);
	}

	::System::Single NPHBLJDPFHH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_NPHBLJDPFHH_OFFSET))(this);
	}

	::System::Void AGOOOAHHEHB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_AGOOOAHHEHB_OFFSET))(this);
	}

	::System::Boolean CBPJIAGIFMG(::System::String* HHJKJMNLJFJ, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::JCADHFOKIHK* PJGGFENEIIA, ::JPDHILFCILB& BAEKDLIEIDO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::JPDHILFCILB&))((::PBYTE)hIl2Cpp + ANCMHBBFOED_CBPJIAGIFMG_OFFSET))(this, HHJKJMNLJFJ, KECKGDFIALJ, PJGGFENEIIA, BAEKDLIEIDO);
	}

	::System::Boolean EPAABILPOOJ(::System::String* HHJKJMNLJFJ, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::JCADHFOKIHK* PJGGFENEIIA, ::DHHLHIEPGCH& HFONONHMDCO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::DHHLHIEPGCH&))((::PBYTE)hIl2Cpp + ANCMHBBFOED_EPAABILPOOJ_OFFSET))(this, HHJKJMNLJFJ, KECKGDFIALJ, PJGGFENEIIA, HFONONHMDCO);
	}

	::System::Void FBICKCPEJLL(::AHAICPLGBAH* EPIDDDEJJDE, ::JCADHFOKIHK* BBIGNEKODHJ, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::AHAICPLGBAH*, ::JCADHFOKIHK*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_FBICKCPEJLL_OFFSET))(this, EPIDDDEJJDE, BBIGNEKODHJ, KECKGDFIALJ);
	}

	::System::Void FKFGEICMMJI(::AHAICPLGBAH* EPIDDDEJJDE, ::JCADHFOKIHK* BBIGNEKODHJ, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::AHAICPLGBAH*, ::JCADHFOKIHK*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_FKFGEICMMJI_OFFSET))(this, EPIDDDEJJDE, BBIGNEKODHJ, KECKGDFIALJ);
	}

	::System::Void CKLBIJDCLBP(::AHAICPLGBAH* EPIDDDEJJDE, ::JCADHFOKIHK* BBIGNEKODHJ, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::AHAICPLGBAH*, ::JCADHFOKIHK*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_CKLBIJDCLBP_OFFSET))(this, EPIDDDEJJDE, BBIGNEKODHJ, KECKGDFIALJ);
	}

	::System::Boolean JPJLHGHIOMA(::MoleMole::ESystemSettingType JELHEKJMJNI, ::System::Boolean& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + ANCMHBBFOED_JPJLHGHIOMA_OFFSET))(this, JELHEKJMJNI, IGAAKDOIPNN);
	}

	::MoleMole::UIBaseController* CCLJEALMALJ(::MoleMole::UIBaseController* IPDOACOBKDK, ::UnityEngine::Transform* JNLBPMKIFNK)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_CCLJEALMALJ_OFFSET))(this, IPDOACOBKDK, JNLBPMKIFNK);
	}

	::System::Boolean PGHMADNMAHD(::System::Action*& MLKJFHGGEKN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action*&))((::PBYTE)hIl2Cpp + ANCMHBBFOED_PGHMADNMAHD_OFFSET))(this, MLKJFHGGEKN);
	}

	::System::Boolean OGDJMFAFDOO(::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType& KJHGEBPALMD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType&))((::PBYTE)hIl2Cpp + ANCMHBBFOED_OGDJMFAFDOO_OFFSET))(this, KJHGEBPALMD);
	}

	::System::String* HHPFJINOFHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_HHPFJINOFHI_OFFSET))(this);
	}

	::System::String* EEKANPIFLBH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_EEKANPIFLBH_OFFSET))(this);
	}

	::System::Void DDNHODPOKFP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_DDNHODPOKFP_OFFSET))(this);
	}

	::System::Int32 HFHFMPOPPNB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_HFHFMPOPPNB_OFFSET))(this);
	}

	::System::Void FKBPIFLGKOA(::System::Boolean EBFCACIEKBC, ::PKDEEDPGBOD* KNHIFHIKHIO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::PKDEEDPGBOD*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_FKBPIFLGKOA_OFFSET))(this, EBFCACIEKBC, KNHIFHIKHIO);
	}

	::System::Collections::Generic::List_1<::HCDCPDGBIMB>* BLJOKPDJDDG(::System::Int32 DBAPPBHLMJP)
	{
		return ((::System::Collections::Generic::List_1<::HCDCPDGBIMB>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ANCMHBBFOED_BLJOKPDJDDG_OFFSET))(this, DBAPPBHLMJP);
	}

	::System::Void AMJBIMNLBLA(::KAPINBBMLDJ& FKMHMOELCIO, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*& GLOIMHAJJIE)
	{
		return ((::System::Void(*)(::PVOID, ::KAPINBBMLDJ&, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*&))((::PBYTE)hIl2Cpp + ANCMHBBFOED_AMJBIMNLBLA_OFFSET))(this, FKMHMOELCIO, GLOIMHAJJIE);
	}

	::System::Void IHHPOIAECDM(::System::Int32 FJCOGHANECN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ANCMHBBFOED_IHHPOIAECDM_OFFSET))(this, FJCOGHANECN);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* NOIFIFCHKOO()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_NOIFIFCHKOO_OFFSET))(this);
	}

	::System::Int32 CLNIGONFCGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_CLNIGONFCGH_OFFSET))(this);
	}

	::System::Boolean DONJGIPABLE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_DONJGIPABLE_OFFSET))(this);
	}

	::System::Double MMCIBCHKMBC()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_MMCIBCHKMBC_OFFSET))(this);
	}

	::System::Void LNGKLAOIAKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_LNGKLAOIAKE_OFFSET))(this);
	}

	::System::Void JEIHEMALELM(::AHAICPLGBAH* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::MoleMole::Battle::Entity* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::AHAICPLGBAH*, ::JCADHFOKIHK*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_JEIHEMALELM_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void FHPCLMPAMMG(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + ANCMHBBFOED_FHPCLMPAMMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HKIFCICJJBI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANCMHBBFOED_HKIFCICJJBI_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Void INOHPMOAFND(::HGAJKHIMKJP* OPILLGDHGDC)
	{
		return ((::System::Void(*)(::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_INOHPMOAFND_OFFSET))(OPILLGDHGDC);
	}

	::System::Void OHMBHEPLALH(::System::Int32 LLNCKEENHDH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ANCMHBBFOED_OHMBHEPLALH_OFFSET))(this, LLNCKEENHDH);
	}

	::System::Void DCKIAGHLLGN(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* HENPOHLEJJF, ::KAPINBBMLDJ KMMEPIAHNLA, ::System::Boolean JLINNGAELHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*, ::KAPINBBMLDJ, ::System::Boolean))((::PBYTE)hIl2Cpp + ANCMHBBFOED_DCKIAGHLLGN_OFFSET))(this, HENPOHLEJJF, KMMEPIAHNLA, JLINNGAELHN);
	}

	::System::Boolean MKEIGFMHLHF(::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType&))((::PBYTE)hIl2Cpp + ANCMHBBFOED_MKEIGFMHLHF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void BDMKIKLBNGA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_BDMKIKLBNGA_OFFSET))(this);
	}

	::System::Int32 OIGJOHALEJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_OIGJOHALEJA_OFFSET))(this);
	}

	::System::Boolean LAKHJJCLDKB(::MoleMole::Level::RatingType& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Level::RatingType&))((::PBYTE)hIl2Cpp + ANCMHBBFOED_LAKHJJCLDKB_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void NPAFLBFAHPK(::System::Int32 LKFLIHABLHP)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + ANCMHBBFOED_NPAFLBFAHPK_OFFSET))(LKFLIHABLHP);
	}

	::System::Void NBOKLEHABCP(::MoleMole::Battle::Entity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_NBOKLEHABCP_OFFSET))(this, MIALFKCCCPI);
	}

	::POFIMLGOIGD* HHFDJIJJNGK()
	{
		return ((::POFIMLGOIGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_HHFDJIJJNGK_OFFSET))(this);
	}

	::System::Void JDHPCJHBLCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_JDHPCJHBLCI_OFFSET))(this);
	}

	::System::Void OPODLOIEGEB(::EEHJOPEJOCD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::EEHJOPEJOCD*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_OPODLOIEGEB_OFFSET))(this, AAOCANGHBDG);
	}

	::System::String* LDKLHJJIINL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_LDKLHJJIINL_OFFSET))(this);
	}

	::System::Void KNAMLBOMBMK(::POFOFGILKAA* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_KNAMLBOMBMK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*> DMBMHHBNANK(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* MIALFKCCCPI, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* KMGKAIDEIBA)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_DMBMHHBNANK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void LHMDBICGJKN(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ANCMHBBFOED_LHMDBICGJKN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LPMGKNKAKFD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_LPMGKNKAKFD_OFFSET))(this);
	}

	::System::Void NNNNFOLNPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_NNNNFOLNPPA_OFFSET))(this);
	}

	::System::Void MEHFMMCEIDA(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_MEHFMMCEIDA_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void IMJPPODOKOK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_IMJPPODOKOK_OFFSET))(this);
	}

	::System::Void JLIKIPOOOGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_JLIKIPOOOGL_OFFSET))(this);
	}

	::System::String* KEMMPODHFOK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_KEMMPODHFOK_OFFSET))(this);
	}

	::System::Single JPGNJEBPGJM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_JPGNJEBPGJM_OFFSET))(this);
	}

	::System::Int32 BKHOKLKECGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_BKHOKLKECGB_OFFSET))(this);
	}

	::System::Boolean FDBLPDEABIL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_FDBLPDEABIL_OFFSET))(this);
	}

	::System::Void BNDBPDNBMAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_BNDBPDNBMAC_OFFSET))(this);
	}

	static ::System::Void CBGCKKBCKPK(::System::Int32 LKFLIHABLHP)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + ANCMHBBFOED_CBGCKKBCKPK_OFFSET))(LKFLIHABLHP);
	}

	::System::Boolean ICPLONKNFHH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_ICPLONKNFHH_OFFSET))(this);
	}

	::System::Double HLEGPCONGKL()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_HLEGPCONGKL_OFFSET))(this);
	}

	::System::Void FEAFBHPKMCB(::IPFNGDNNODB* KMCPMIHEJBN, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* NPLKLIPGEFL, ::KAPINBBMLDJ KMMEPIAHNLA, ::System::Boolean JLINNGAELHN)
	{
		return ((::System::Void(*)(::PVOID, ::IPFNGDNNODB*, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*, ::KAPINBBMLDJ, ::System::Boolean))((::PBYTE)hIl2Cpp + ANCMHBBFOED_FEAFBHPKMCB_OFFSET))(this, KMCPMIHEJBN, NPLKLIPGEFL, KMMEPIAHNLA, JLINNGAELHN);
	}

	::System::Void BEBLFMKHGKH(::EEHJOPEJOCD* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::EEHJOPEJOCD*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_BEBLFMKHGKH_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MHGCGMMLEGK(::System::Action_2<::System::Boolean, ::EAOMCKHAMBD*>* NPFIONPDFED, ::System::Int32 DIGMOMBMEIA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Boolean, ::EAOMCKHAMBD*>*, ::System::Int32))((::PBYTE)hIl2Cpp + ANCMHBBFOED_MHGCGMMLEGK_OFFSET))(this, NPFIONPDFED, DIGMOMBMEIA);
	}

	::System::Boolean PKFIGMCICNB(::KAPINBBMLDJ& FKMHMOELCIO, ::HGAJKHIMKJP*& IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::KAPINBBMLDJ&, ::HGAJKHIMKJP*&))((::PBYTE)hIl2Cpp + ANCMHBBFOED_PKFIGMCICNB_OFFSET))(this, FKMHMOELCIO, IPMMCGDMODG);
	}

	::System::Void ABCBFDMEIEE(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_ABCBFDMEIEE_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Boolean JCKJBPPKBKL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_JCKJBPPKBKL_OFFSET))(this);
	}

	::System::Boolean CDAIEEMOOMN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_CDAIEEMOOMN_OFFSET))(this);
	}

	::System::Void OBLGPINNIBG(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_OBLGPINNIBG_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void LNMMMAKPDBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_LNMMMAKPDBG_OFFSET))(this);
	}

	::System::Void IGMNDOMOMPP(::FCBNEBOPNIF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::FCBNEBOPNIF*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_IGMNDOMOMPP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void JPAIGJAGMFP(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_JPAIGJAGMFP_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void AMODKFGCBPJ(::MoleMole::Battle::Entity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_AMODKFGCBPJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void IHEEBLGGLDJ(::NHEBOOMFOMJ* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::NHEBOOMFOMJ*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_IHEEBLGGLDJ_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void INOHPMOAFND_1(::AHGFNANCLDH_BNMOKGABIFC* OPILLGDHGDC)
	{
		return ((::System::Void(*)(::AHGFNANCLDH_BNMOKGABIFC*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_INOHPMOAFND_1_OFFSET))(OPILLGDHGDC);
	}

	::System::Int32 JAIIPGDENPF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_JAIIPGDENPF_OFFSET))(this);
	}

	static ::System::Void DNLGKGNBADN()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANCMHBBFOED_DNLGKGNBADN_OFFSET))();
	}

	::System::Void AKIMLNBJKBN(::System::String* FJNOFJBMAGL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_AKIMLNBJKBN_OFFSET))(this, FJNOFJBMAGL);
	}

	::System::Void BMFPLNOPCAO(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ANCMHBBFOED_BMFPLNOPCAO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OCMLJKCILLJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANCMHBBFOED_OCMLJKCILLJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JLMKGFHCPND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_JLMKGFHCPND_OFFSET))(this);
	}

	::System::Boolean OOHPBACCKCH(::System::Action*& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action*&))((::PBYTE)hIl2Cpp + ANCMHBBFOED_OOHPBACCKCH_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void DJEBHPIAAMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_DJEBHPIAAMO_OFFSET))(this);
	}

	::System::Void JPHPLJFKBJB(::System::Collections::Generic::List_1<::System::Int32>* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_JPHPLJFKBJB_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::UIBaseController* OMPDOHONEMB(::MoleMole::UIBaseController* MIALFKCCCPI, ::UnityEngine::Transform* KMGKAIDEIBA)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_OMPDOHONEMB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean FLLIHNENPHE(::KAPINBBMLDJ& FKMHMOELCIO, ::HGAJKHIMKJP*& IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::KAPINBBMLDJ&, ::HGAJKHIMKJP*&))((::PBYTE)hIl2Cpp + ANCMHBBFOED_FLLIHNENPHE_OFFSET))(this, FKMHMOELCIO, IPMMCGDMODG);
	}

	::System::Void LIMKANIKAHH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_LIMKANIKAHH_OFFSET))(this);
	}

	::System::Void AJINNLNIHJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_AJINNLNIHJC_OFFSET))(this);
	}

	::System::Void FCDGJAJMHHD(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANCMHBBFOED_FCDGJAJMHHD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean GHIKPOHDEGM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_GHIKPOHDEGM_OFFSET))(this);
	}

	::System::Void FDLJBJGJKMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_FDLJBJGJKMO_OFFSET))(this);
	}

	::System::Boolean JPMNBOHLDPP(::MoleMole::ESystemSettingType MIALFKCCCPI, ::System::Boolean& KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + ANCMHBBFOED_JPMNBOHLDPP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Int32 AOLBEMCJPPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_AOLBEMCJPPC_OFFSET))(this);
	}

	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType AJKLLEDJEGL(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType MIALFKCCCPI)
	{
		return ((::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + ANCMHBBFOED_AJKLLEDJEGL_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void MLJFLKCOHII(::System::Int32 JPOHIDLDKEN, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* FANBCJLJAIA)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_MLJFLKCOHII_OFFSET))(JPOHIDLDKEN, FANBCJLJAIA);
	}

	::System::Void OBLGPINNIBG_1(::System::EventArgs* EIFONLCJOPG, ::System::Boolean JLINNGAELHN, ::System::Boolean CJJPCGKKJPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ANCMHBBFOED_OBLGPINNIBG_1_OFFSET))(this, EIFONLCJOPG, JLINNGAELHN, CJJPCGKKJPI);
	}

	::System::Int32 ODCKAMEPCFN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_ODCKAMEPCFN_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GOAAKGPJJJP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_GOAAKGPJJJP_OFFSET))(this);
	}

	::System::Int32 DIPLFFPMCJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_DIPLFFPMCJP_OFFSET))(this);
	}

	static ::System::Int32 MHMIGDBBJBM(::System::Double CKELOFDFEEM)
	{
		return ((::System::Int32(*)(::System::Double))((::PBYTE)hIl2Cpp + ANCMHBBFOED_MHMIGDBBJBM_OFFSET))(CKELOFDFEEM);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void JDDKKIJFBND(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_JDDKKIJFBND_OFFSET))(this, EJGDHCIBCJH);
	}

	static ::System::Void OBBGADNNNOG(::System::Int32 JPOHIDLDKEN, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* FANBCJLJAIA)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_OBBGADNNNOG_OFFSET))(JPOHIDLDKEN, FANBCJLJAIA);
	}

	::MoleMole::ESystemSettingType IDAMBIMFDLE(::MoleMole::ESystemSettingType JELHEKJMJNI)
	{
		return ((::MoleMole::ESystemSettingType(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + ANCMHBBFOED_IDAMBIMFDLE_OFFSET))(this, JELHEKJMJNI);
	}

	::System::Void PGFJGFGPNJA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_PGFJGFGPNJA_OFFSET))(this);
	}

	::System::Void JJCECLNIHEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_JJCECLNIHEK_OFFSET))(this);
	}

	::System::Boolean DOOHPELFNGI(::HGAJKHIMKJP*& PMHJBOFDPEJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::HGAJKHIMKJP*&))((::PBYTE)hIl2Cpp + ANCMHBBFOED_DOOHPELFNGI_OFFSET))(this, PMHJBOFDPEJ);
	}

	::System::Void AMPNBDJOHHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_AMPNBDJOHHA_OFFSET))(this);
	}
};
