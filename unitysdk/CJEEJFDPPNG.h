#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NCAGIGPOPFN.h"
#include "unitysdk/RPG/GameCore/CharacterFollowDirMode.h"
#include "unitysdk/RPG/GameCore/CharacterFollowOffsetMode.h"
#include "unitysdk/RPG/GameCore/CharacterFormationType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/TeamLocationType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/BEABFKCFPNC.h"
#include "unitysdk/GLLGBICKGLG.h"
class CFDGKEDFBJP;
class CJEEJFDPPNG;
class GELIALJDFBL;
class HLHIKGINAHB;
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class CustomTeamFormationConfig; }
namespace RPG::GameCore { class CustomTeamFormationParam; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LocationConfig; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TeamFormationComponent; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CJEEJFDPPNG_AALBNKDBHBF_OFFSET UNITYSDK_OFFSET(0xDB71320)
#define CJEEJFDPPNG_ABAMLKJJPCE_OFFSET UNITYSDK_OFFSET(0xDB6FD70)
#define CJEEJFDPPNG_AGAHONIDKCN_OFFSET UNITYSDK_OFFSET(0xDB76AA0)
#define CJEEJFDPPNG_AGAILCJGLAC_OFFSET UNITYSDK_OFFSET(0xDB762A0)
#define CJEEJFDPPNG_AJLCJJOOOOE_OFFSET UNITYSDK_OFFSET(0xDB75D60)
#define CJEEJFDPPNG_ANFKHCNBJMC_OFFSET UNITYSDK_OFFSET(0xDB770E0)
#define CJEEJFDPPNG_ANIGJLBJCOO_OFFSET UNITYSDK_OFFSET(0xDB76D90)
#define CJEEJFDPPNG_BCFPMGHLOMH_OFFSET UNITYSDK_OFFSET(0xDB777B0)
#define CJEEJFDPPNG_BHEFHGFJHOC_OFFSET UNITYSDK_OFFSET(0xDB71EF0)
#define CJEEJFDPPNG_BOENFELPEDE_OFFSET UNITYSDK_OFFSET(0xDB70680)
#define CJEEJFDPPNG_BPOCMFLAFOL_OFFSET UNITYSDK_OFFSET(0xDB71030)
#define CJEEJFDPPNG_CBMEPCFAGME_OFFSET UNITYSDK_OFFSET(0xDB77170)
#define CJEEJFDPPNG_CDAKOKAACNF_OFFSET UNITYSDK_OFFSET(0xDB6EBB0)
#define CJEEJFDPPNG_CFGPGONPMIL_OFFSET UNITYSDK_OFFSET(0xDB776F0)
#define CJEEJFDPPNG_CHMHBKAEPMJ_OFFSET UNITYSDK_OFFSET(0xDB77220)
#define CJEEJFDPPNG_CJGFLNAFDIL_OFFSET UNITYSDK_OFFSET(0xDB76F60)
#define CJEEJFDPPNG_CMPNLJMAODB_OFFSET UNITYSDK_OFFSET(0xDB76020)
#define CJEEJFDPPNG_CTOR_OFFSET UNITYSDK_OFFSET(0xDB6E6A0)
#define CJEEJFDPPNG_DCBMEHFOPGO_OFFSET UNITYSDK_OFFSET(0xDB772D0)
#define CJEEJFDPPNG_DDOGOHPJLJB_OFFSET UNITYSDK_OFFSET(0xDB76D50)
#define CJEEJFDPPNG_DHHKIMCIJBN_OFFSET UNITYSDK_OFFSET(0xDB76DA0)
#define CJEEJFDPPNG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDB70070)
#define CJEEJFDPPNG_DKIDPGEHOJG_OFFSET UNITYSDK_OFFSET(0xDB77700)
#define CJEEJFDPPNG_DLNHGNLAMDD_OFFSET UNITYSDK_OFFSET(0xDB77750)
#define CJEEJFDPPNG_DOKJNBGNLGK_OFFSET UNITYSDK_OFFSET(0xDB751B0)
#define CJEEJFDPPNG_EAFGBHOKJPN_OFFSET UNITYSDK_OFFSET(0xDB73640)
#define CJEEJFDPPNG_EAMFEOGKKPN_OFFSET UNITYSDK_OFFSET(0xDB763A0)
#define CJEEJFDPPNG_EBANGPBOABP_OFFSET UNITYSDK_OFFSET(0xDB6FE30)
#define CJEEJFDPPNG_EBHAPKMJKBF_OFFSET UNITYSDK_OFFSET(0xDB76D80)
#define CJEEJFDPPNG_ECAIDNGLMED_OFFSET UNITYSDK_OFFSET(0xDB707F0)
#define CJEEJFDPPNG_ECPEMPFLHKG_OFFSET UNITYSDK_OFFSET(0xDB76F50)
#define CJEEJFDPPNG_EGNPPLLBDCC_OFFSET UNITYSDK_OFFSET(0xDB77730)
#define CJEEJFDPPNG_EJHFIELGAOA_OFFSET UNITYSDK_OFFSET(0xDB75350)
#define CJEEJFDPPNG_EOABMHMNJFH_OFFSET UNITYSDK_OFFSET(0xDB71AD0)
#define CJEEJFDPPNG_EOLDLJNBIBB_OFFSET UNITYSDK_OFFSET(0xDB6EF70)
#define CJEEJFDPPNG_EPONGNKPMBM_OFFSET UNITYSDK_OFFSET(0xDB76BF0)
#define CJEEJFDPPNG_FAGLGLPFHKM_OFFSET UNITYSDK_OFFSET(0xDB71E60)
#define CJEEJFDPPNG_FCPBBEMDCPE_OFFSET UNITYSDK_OFFSET(0xDB77660)
#define CJEEJFDPPNG_FFJAEOGJGOA_OFFSET UNITYSDK_OFFSET(0xDB709A0)
#define CJEEJFDPPNG_FHJDBGDOEMH_OFFSET UNITYSDK_OFFSET(0xDB77210)
#define CJEEJFDPPNG_GAMEFGPKGHG_OFFSET UNITYSDK_OFFSET(0xDB77370)
#define CJEEJFDPPNG_GBHPHDEAPOF_OFFSET UNITYSDK_OFFSET(0xDB73940)
#define CJEEJFDPPNG_GET_ISINIT_OFFSET UNITYSDK_OFFSET(0xDB76D30)
#define CJEEJFDPPNG_GFGMKNCALNO_OFFSET UNITYSDK_OFFSET(0xDB76720)
#define CJEEJFDPPNG_GGNGLLCEHLD_OFFSET UNITYSDK_OFFSET(0xDB6E8B0)
#define CJEEJFDPPNG_GLDAHBMNMGB_OFFSET UNITYSDK_OFFSET(0xDB774B0)
#define CJEEJFDPPNG_GLOLFOJCHGN_OFFSET UNITYSDK_OFFSET(0xDB76C60)
#define CJEEJFDPPNG_HDDKNFJAEJD_OFFSET UNITYSDK_OFFSET(0xDB75E20)
#define CJEEJFDPPNG_HJOCAJEPHNJ_OFFSET UNITYSDK_OFFSET(0xDB6FF70)
#define CJEEJFDPPNG_HKJBGDMKKDF_OFFSET UNITYSDK_OFFSET(0xDB776C0)
#define CJEEJFDPPNG_HLCBGCENAID_OFFSET UNITYSDK_OFFSET(0xDB76DC0)
#define CJEEJFDPPNG_HLIOPKDGACJ_OFFSET UNITYSDK_OFFSET(0xDB77100)
#define CJEEJFDPPNG_HMNJBLGKEMG_OFFSET UNITYSDK_OFFSET(0xDB724A0)
#define CJEEJFDPPNG_HPBKJIBKAHE_OFFSET UNITYSDK_OFFSET(0xDB70D60)
#define CJEEJFDPPNG_IBHAICJIOGL_OFFSET UNITYSDK_OFFSET(0xDB70010)
#define CJEEJFDPPNG_IDENBEBKGIN_OFFSET UNITYSDK_OFFSET(0xDB76950)
#define CJEEJFDPPNG_INDJPMEHMOJ_OFFSET UNITYSDK_OFFSET(0xDB76890)
#define CJEEJFDPPNG_IPHFALCKBDK_OFFSET UNITYSDK_OFFSET(0xDB6F0D0)
#define CJEEJFDPPNG_JCKJFLIHPCG_OFFSET UNITYSDK_OFFSET(0xDB770F0)
#define CJEEJFDPPNG_JIDFJLEMCNH_OFFSET UNITYSDK_OFFSET(0xDB74570)
#define CJEEJFDPPNG_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0xDB76D60)
#define CJEEJFDPPNG_JKHMHOHFKED_OFFSET UNITYSDK_OFFSET(0xDB72210)
#define CJEEJFDPPNG_JLFAJHJHLIN_OFFSET UNITYSDK_OFFSET(0xDB77080)
#define CJEEJFDPPNG_JNKDHLGDIGC_OFFSET UNITYSDK_OFFSET(0xDB6EE00)
#define CJEEJFDPPNG_KCIAKGIOGOD_OFFSET UNITYSDK_OFFSET(0xDB70AA0)
#define CJEEJFDPPNG_KDNFJJOJAKL_OFFSET UNITYSDK_OFFSET(0xDB76DB0)
#define CJEEJFDPPNG_KHJFKKAHKDJ_OFFSET UNITYSDK_OFFSET(0xDB773D0)
#define CJEEJFDPPNG_KLPOGAIPHCN_OFFSET UNITYSDK_OFFSET(0xDB76E30)
#define CJEEJFDPPNG_KNGCMBIADOO_OFFSET UNITYSDK_OFFSET(0xDB769F0)
#define CJEEJFDPPNG_KOOJOGNHFJB_OFFSET UNITYSDK_OFFSET(0xDB77060)
#define CJEEJFDPPNG_LEKBMKDGBEJ_OFFSET UNITYSDK_OFFSET(0xDB772C0)
#define CJEEJFDPPNG_LGABMJBOCJN_OFFSET UNITYSDK_OFFSET(0xDB77590)
#define CJEEJFDPPNG_LGBKDDEKLKG_OFFSET UNITYSDK_OFFSET(0xDB6FA20)
#define CJEEJFDPPNG_LHJAJPKFBFF_OFFSET UNITYSDK_OFFSET(0xDB75C40)
#define CJEEJFDPPNG_LHKJKMMHHDD_OFFSET UNITYSDK_OFFSET(0xDB777D0)
#define CJEEJFDPPNG_LKGMFMHJNNF_OFFSET UNITYSDK_OFFSET(0xDB759A0)
#define CJEEJFDPPNG_LMCEDCHJKFF_1_OFFSET UNITYSDK_OFFSET(0xDB6E7C0)
#define CJEEJFDPPNG_LMCEDCHJKFF_2_OFFSET UNITYSDK_OFFSET(0xDB6ED10)
#define CJEEJFDPPNG_LMCEDCHJKFF_3_OFFSET UNITYSDK_OFFSET(0xDB6F010)
#define CJEEJFDPPNG_LMCEDCHJKFF_4_OFFSET UNITYSDK_OFFSET(0xDB6F210)
#define CJEEJFDPPNG_LMCEDCHJKFF_5_OFFSET UNITYSDK_OFFSET(0xDB6F540)
#define CJEEJFDPPNG_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xDB6E760)
#define CJEEJFDPPNG_LNLIMENPEJB_OFFSET UNITYSDK_OFFSET(0xDB73A40)
#define CJEEJFDPPNG_LOIAKLCMGNH_OFFSET UNITYSDK_OFFSET(0xDB6FAC0)
#define CJEEJFDPPNG_LONOMEOICEL_OFFSET UNITYSDK_OFFSET(0xDB72280)
#define CJEEJFDPPNG_LOOBEGPPGJF_OFFSET UNITYSDK_OFFSET(0xDB77070)
#define CJEEJFDPPNG_LPLCFKBBCKA_OFFSET UNITYSDK_OFFSET(0xDB76F40)
#define CJEEJFDPPNG_MDGNFMEIBGK_OFFSET UNITYSDK_OFFSET(0xDB752E0)
#define CJEEJFDPPNG_MDGNHGMLFLL_OFFSET UNITYSDK_OFFSET(0xDB732C0)
#define CJEEJFDPPNG_MGGILHBGPOB_OFFSET UNITYSDK_OFFSET(0xDB774A0)
#define CJEEJFDPPNG_MLEOMGBCBLI_OFFSET UNITYSDK_OFFSET(0xDB71080)
#define CJEEJFDPPNG_MMAJAGGPCFB_OFFSET UNITYSDK_OFFSET(0xDB6F320)
#define CJEEJFDPPNG_MMEFAGDFFKN_OFFSET UNITYSDK_OFFSET(0xDB77490)
#define CJEEJFDPPNG_MMNCEDCELBK_OFFSET UNITYSDK_OFFSET(0xDB77740)
#define CJEEJFDPPNG_NBGEPBMFGHH_OFFSET UNITYSDK_OFFSET(0xDB6F9A0)
#define CJEEJFDPPNG_NFCGMKCBBDO_OFFSET UNITYSDK_OFFSET(0xDB77530)
#define CJEEJFDPPNG_NIICKMMPFGK_OFFSET UNITYSDK_OFFSET(0xDB753F0)
#define CJEEJFDPPNG_NJIPNINBEIA_OFFSET UNITYSDK_OFFSET(0xDB753A0)
#define CJEEJFDPPNG_NJOBMENFBFJ_OFFSET UNITYSDK_OFFSET(0xDB6ECB0)
#define CJEEJFDPPNG_NKOPNEPLAIK_OFFSET UNITYSDK_OFFSET(0xDB6EAE0)
#define CJEEJFDPPNG_NMNEGHEOIMA_OFFSET UNITYSDK_OFFSET(0xDB705C0)
#define CJEEJFDPPNG_NPCHELDGCLA_OFFSET UNITYSDK_OFFSET(0xDB70B60)
#define CJEEJFDPPNG_OELFJPNJNIJ_OFFSET UNITYSDK_OFFSET(0xDB77710)
#define CJEEJFDPPNG_OENMLLBDBDK_OFFSET UNITYSDK_OFFSET(0xDB776D0)
#define CJEEJFDPPNG_OHGAMHJKFBE_OFFSET UNITYSDK_OFFSET(0xDB770D0)
#define CJEEJFDPPNG_OHHFPEGIHFE_OFFSET UNITYSDK_OFFSET(0xDB6FBD0)
#define CJEEJFDPPNG_OLBFFKHDHKG_OFFSET UNITYSDK_OFFSET(0xDB76FE0)
#define CJEEJFDPPNG_PDDIPBIIAOE_OFFSET UNITYSDK_OFFSET(0xDB776E0)
#define CJEEJFDPPNG_PEIHFFIEMPH_OFFSET UNITYSDK_OFFSET(0xDB775A0)
#define CJEEJFDPPNG_PGNBIMKEGCL_OFFSET UNITYSDK_OFFSET(0xDB759F0)
#define CJEEJFDPPNG_PJHANELKBEB_OFFSET UNITYSDK_OFFSET(0xDB77430)
#define CJEEJFDPPNG_PMPHNHMNPIK_OFFSET UNITYSDK_OFFSET(0xDB76D70)
#define CJEEJFDPPNG_POMEOPJKKND_OFFSET UNITYSDK_OFFSET(0xDB75290)
#define CJEEJFDPPNG_SET_ISINIT_OFFSET UNITYSDK_OFFSET(0xDB76D40)
#define CJEEJFDPPNG_TICK_OFFSET UNITYSDK_OFFSET(0xDB76300)

inline static constexpr unsigned int CJEEJFDPPNG_TypeDefinitionIndex = 58167;

	class CJEEJFDPPNG : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PredicateConfig*, ::GELIALJDFBL*>* GCAFGMELAFG; // 0x18
		::RPG::GameCore::GameEntity* GFHDGMOLOFD; // 0x20
		::RPG::GameCore::LocationConfig* NFIHPPHLDKJ; // 0x28
		::RPG::GameCore::LocationConfig* ODAFACFNABG; // 0x30
		::RPG::GameCore::TransformComponent* OBGPOPIPBLG; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* FKDDBPLGOCF; // 0x40
		::RPG::GameCore::CustomTeamFormationConfig* FJGONIAOIEE; // 0x48
		::RPG::GameCore::GameEntity* JKCODHICFAJ; // 0x50
		::RPG::GameCore::TransformComponent* PDGDCPLEPFC; // 0x58
		::Il2CppArray<::RPG::GameCore::CustomTeamFormationConfig*>* JLKJIIFJPPE; // 0x60
		::CFDGKEDFBJP* LNGACEKGEPP; // 0x68
		::RPG::GameCore::LocationConfig* HEBJDKAHOBP; // 0x70
		::System::String* AMLDCHNLCJL; // 0x78
		::CJEEJFDPPNG* DGOIGKCOPDM; // 0x80
		::System::Collections::Generic::List_1<::CJEEJFDPPNG*>* JMBDGDIPCAE; // 0x88
		::System::String* AJFDPFFFJBM; // 0x90
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CustomTeamFormationConfig*, ::Il2CppArray<::NCAGIGPOPFN>*>* DDIAKOELLEK; // 0x98
		::RPG::GameCore::TeamFormationComponent* BCKCNKFLBIA; // 0xA0
		::RPG::GameCore::CustomTeamFormationConfig* OKMLEEJBKKD; // 0xA8
		::RPG::GameCore::GameEntity* DIANKCLIHEB; // 0xB0
		::RPG::GameCore::GameEntity* PCFNDGGAFJN; // 0xB8
		::System::Collections::Generic::List_1<::System::String*>* LFPKFFNFKDK; // 0xC0
		::System::Int32 NBIDHNMFKIL; // 0xC8
		::RPG::MVector3 KKHNIJICIKM; // 0xCC
		::System::Single HENGLGPOFOI; // 0xD8
		::RPG::MVector3 DLJPGDKAFPK; // 0xDC
		::System::Single CDEGBABEKID; // 0xE8
		::System::Int32 MBMOOAAJBAM; // 0xEC
		::System::Single LEIICJKCNLE; // 0xF0
		::RPG::GameCore::CharacterFormationType HMNGEJKAGJD; // 0xF4
		::System::Boolean LFFIBIPAJMI; // 0xF8
		::System::Boolean CHGNKBABDBN; // 0xF9
		::System::Boolean AHCGENHKAPB; // 0xFA
		::System::Boolean FJBLJFDJDCO; // 0xFB
		::System::UInt32 LHEOFIKLFEN; // 0xFC
		::System::Single GBGNCJLOGPE; // 0x100
		::System::Single CEIHAJMEFBC; // 0x104
		::System::Int32 LIDNFOGLEGH; // 0x108
		::System::Boolean CFPBMNJPLIF; // 0x10C
		::System::Boolean FMNEEONAMNO; // 0x10D
		::System::Boolean LAOBKDACIJL; // 0x10E
		::System::Boolean GKLOHIIKLGF; // 0x10F
		::System::Single HGGJCKMMPMK; // 0x110
		::System::Int32 FOGELAKHFBN; // 0x114
		::System::Int32 KDMFPLGLCKD; // 0x118
		::RPG::MVector3 PELECFBOOHH; // 0x11C
		::RPG::MVector3 EEFIPLANIPG; // 0x128
		::System::Single MGACOKJIOOC; // 0x134
		::System::Single GHNKMICNNBN; // 0x138
		::RPG::MVector3 PCDHFOLHJOD; // 0x13C
		::System::Single EGLPMKKJFGF; // 0x148
		::RPG::GameCore::TeamType AHJJPBGGOMK; // 0x14C
		::RPG::GameCore::CharacterFollowOffsetMode HLPNDPNNCEB; // 0x150
		::System::Boolean NNBAIHNIPFE; // 0x154
		::System::Boolean CCDNIAAHGEC; // 0x155
		::System::Boolean JDNHEJFPNDE; // 0x156
		::System::Boolean CMECMIFBDAA; // 0x157
		::System::Boolean _IsInit_k__BackingField; // 0x158
		::System::Boolean JDDPJFADMAK; // 0x159
		::System::Boolean CGNOAEGMAAL; // 0x15A
		::System::Boolean KNCGINHCAOD; // 0x15B
		::RPG::MVector3 MNDGILKJBAA; // 0x15C
		::RPG::MVector3 FFCMIHDOPMG; // 0x168
		::RPG::GameCore::TeamLocationType DIOCIIPFHKK; // 0x174
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::BEABFKCFPNC a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEABFKCFPNC))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void LMCEDCHJKFF_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_LMCEDCHJKFF_1_OFFSET))(this, a1, a2);
		}

		::System::Void LMCEDCHJKFF_2(::RPG::MVector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_LMCEDCHJKFF_2_OFFSET))(this, a1, a2);
		}

		::System::Void LMCEDCHJKFF_3(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_LMCEDCHJKFF_3_OFFSET))(this, a1, a2);
		}

		::System::Void LMCEDCHJKFF_4(::RPG::GameCore::GameEntity* a1, ::RPG::MVector3 a2, ::System::Single a3, ::RPG::GameCore::CharacterFollowOffsetMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::System::Single, ::RPG::GameCore::CharacterFollowOffsetMode))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_LMCEDCHJKFF_4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LMCEDCHJKFF_5(::HLHIKGINAHB* a1, ::RPG::GameCore::CharacterConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HLHIKGINAHB*, ::RPG::GameCore::CharacterConfig*))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_LMCEDCHJKFF_5_OFFSET))(this, a1, a2);
		}

		::System::Void ABAMLKJJPCE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_ABAMLKJJPCE_OFFSET))(this, a1);
		}

		::System::Void IBHAICJIOGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_IBHAICJIOGL_OFFSET))(this);
		}

		::System::Void GGNGLLCEHLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_GGNGLLCEHLD_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_DISPOSE_OFFSET))(this);
		}

		::System::Void EOLDLJNBIBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_EOLDLJNBIBB_OFFSET))(this);
		}

		::System::Void JNKDHLGDIGC(::RPG::MVector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_JNKDHLGDIGC_OFFSET))(this, a1, a2);
		}

		::System::Void CDAKOKAACNF(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_CDAKOKAACNF_OFFSET))(this, a1, a2);
		}

		::System::Void HJOCAJEPHNJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_HJOCAJEPHNJ_OFFSET))(this, a1);
		}

		::System::Void BPOCMFLAFOL(::RPG::GameCore::LocationConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LocationConfig*))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_BPOCMFLAFOL_OFFSET))(this, a1);
		}

		::System::Void LGBKDDEKLKG(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::RPG::GameCore::CustomTeamFormationConfig*>* a2, ::Il2CppArray<::RPG::GameCore::CustomTeamFormationParam*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::RPG::GameCore::CustomTeamFormationConfig*>*, ::Il2CppArray<::RPG::GameCore::CustomTeamFormationParam*>*))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_LGBKDDEKLKG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EBANGPBOABP(::RPG::MVector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_EBANGPBOABP_OFFSET))(this, a1, a2);
		}

		::System::Boolean AALBNKDBHBF(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_AALBNKDBHBF_OFFSET))(this, a1);
		}

		::System::Void BHEFHGFJHOC(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_BHEFHGFJHOC_OFFSET))(this, a1, a2);
		}

		::System::Void MDGNHGMLFLL(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_MDGNHGMLFLL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LONOMEOICEL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_LONOMEOICEL_OFFSET))(this, a1);
		}

		::System::Void FFJAEOGJGOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_FFJAEOGJGOA_OFFSET))(this);
		}

		::System::Single EAFGBHOKJPN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_EAFGBHOKJPN_OFFSET))(this);
		}

		::System::Void GBHPHDEAPOF(::RPG::GameCore::CustomTeamFormationConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CustomTeamFormationConfig*))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_GBHPHDEAPOF_OFFSET))(this, a1);
		}

		::System::Boolean EOABMHMNJFH(::GLLGBICKGLG a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GLLGBICKGLG))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_EOABMHMNJFH_OFFSET))(this, a1);
		}

		::System::Boolean JIDFJLEMCNH(::RPG::GameCore::CustomTeamFormationConfig* a1, ::GLLGBICKGLG a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CustomTeamFormationConfig*, ::GLLGBICKGLG))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_JIDFJLEMCNH_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::RPG::GameCore::CustomTeamFormationConfig*>* MLEOMGBCBLI(::Il2CppArray<::RPG::GameCore::CustomTeamFormationConfig*>* a1, ::Il2CppArray<::RPG::GameCore::CustomTeamFormationParam*>* a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::CustomTeamFormationConfig*>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::CustomTeamFormationConfig*>*, ::Il2CppArray<::RPG::GameCore::CustomTeamFormationParam*>*))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_MLEOMGBCBLI_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::CustomTeamFormationParam* DOKJNBGNLGK(::Il2CppArray<::RPG::GameCore::CustomTeamFormationParam*>* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::CustomTeamFormationParam*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::CustomTeamFormationParam*>*, ::System::String*))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_DOKJNBGNLGK_OFFSET))(this, a1, a2);
		}

		::System::Boolean LNLIMENPEJB(::RPG::GameCore::CustomTeamFormationConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CustomTeamFormationConfig*))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_LNLIMENPEJB_OFFSET))(this, a1);
		}

		::System::Void POMEOPJKKND(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_POMEOPJKKND_OFFSET))(this, a1);
		}

		::System::Void MDGNFMEIBGK(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_MDGNFMEIBGK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EJHFIELGAOA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_EJHFIELGAOA_OFFSET))(this, a1);
		}

		::System::Void NJIPNINBEIA(::RPG::GameCore::LocationConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LocationConfig*))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_NJIPNINBEIA_OFFSET))(this, a1);
		}

		::System::Void IPHFALCKBDK(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_IPHFALCKBDK_OFFSET))(this, a1, a2);
		}

		::System::Void LKGMFMHJNNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_LKGMFMHJNNF_OFFSET))(this);
		}

		::System::Void MMAJAGGPCFB(::RPG::GameCore::GameEntity* a1, ::RPG::MVector3 a2, ::System::Single a3, ::RPG::GameCore::CharacterFollowOffsetMode a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::System::Single, ::RPG::GameCore::CharacterFollowOffsetMode, ::System::Boolean))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_MMAJAGGPCFB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void NJOBMENFBFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_NJOBMENFBFJ_OFFSET))(this, a1);
		}

		::System::Void HDDKNFJAEJD(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_HDDKNFJAEJD_OFFSET))(this, a1, a2);
		}

		::System::Void CMPNLJMAODB(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_CMPNLJMAODB_OFFSET))(this, a1, a2);
		}

		::System::Void AGAILCJGLAC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_AGAILCJGLAC_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_TICK_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::LocationConfig* EAMFEOGKKPN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::LocationConfig*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_EAMFEOGKKPN_OFFSET))(a1);
		}

		::System::Void KCIAKGIOGOD(::RPG::GameCore::CharacterFormationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterFormationType))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_KCIAKGIOGOD_OFFSET))(this, a1);
		}

		::System::Void HPBKJIBKAHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_HPBKJIBKAHE_OFFSET))(this);
		}

		::System::Void NPCHELDGCLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_NPCHELDGCLA_OFFSET))(this);
		}

		::System::Void NIICKMMPFGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_NIICKMMPFGK_OFFSET))(this);
		}

		::System::Void GFGMKNCALNO(::CJEEJFDPPNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJEEJFDPPNG*))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_GFGMKNCALNO_OFFSET))(this, a1);
		}

		::System::Void INDJPMEHMOJ(::CJEEJFDPPNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJEEJFDPPNG*))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_INDJPMEHMOJ_OFFSET))(this, a1);
		}

		::System::Void NMNEGHEOIMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_NMNEGHEOIMA_OFFSET))(this);
		}

		::System::Void PGNBIMKEGCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_PGNBIMKEGCL_OFFSET))(this);
		}

		::System::Void LHJAJPKFBFF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_LHJAJPKFBFF_OFFSET))(this, a1);
		}

		::System::Void HMNJBLGKEMG(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::CharacterFollowOffsetMode a2, ::RPG::GameCore::CharacterFollowDirMode a3, ::RPG::MVector3 a4, ::System::Single a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::CharacterFollowOffsetMode, ::RPG::GameCore::CharacterFollowDirMode, ::RPG::MVector3, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_HMNJBLGKEMG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void BOENFELPEDE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_BOENFELPEDE_OFFSET))(this, a1);
		}

		::System::Void KNGCMBIADOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_KNGCMBIADOO_OFFSET))(this);
		}

		::System::Void AGAHONIDKCN(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TeamType a2, ::RPG::GameCore::TeamType a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_AGAHONIDKCN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EPONGNKPMBM(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_EPONGNKPMBM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AJLCJJOOOOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_AJLCJJOOOOE_OFFSET))(this);
		}

		::System::Void ECAIDNGLMED(::RPG::GameCore::CharacterFormationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterFormationType))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_ECAIDNGLMED_OFFSET))(this, a1);
		}

		::System::Void GLOLFOJCHGN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_GLOLFOJCHGN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_GET_ISINIT_OFFSET))(this);
		}

		::System::Void set_IsInit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_SET_ISINIT_OFFSET))(this, a1);
		}

		::RPG::GameCore::TransformComponent* DDOGOHPJLJB()
		{
			return ((::RPG::GameCore::TransformComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_DDOGOHPJLJB_OFFSET))(this);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_JKEONEEPIHH_OFFSET))(this);
		}

		::System::Boolean PMPHNHMNPIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_PMPHNHMNPIK_OFFSET))(this);
		}

		::RPG::GameCore::TeamFormationComponent* EBHAPKMJKBF()
		{
			return ((::RPG::GameCore::TeamFormationComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_EBHAPKMJKBF_OFFSET))(this);
		}

		::RPG::GameCore::CharacterFormationType ANIGJLBJCOO()
		{
			return ((::RPG::GameCore::CharacterFormationType(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_ANIGJLBJCOO_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* DHHKIMCIJBN()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_DHHKIMCIJBN_OFFSET))(this);
		}

		::RPG::GameCore::TransformComponent* KDNFJJOJAKL()
		{
			return ((::RPG::GameCore::TransformComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_KDNFJJOJAKL_OFFSET))(this);
		}

		::RPG::MVector3 FAGLGLPFHKM()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_FAGLGLPFHKM_OFFSET))(this);
		}

		::System::Void OHHFPEGIHFE(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_OHHFPEGIHFE_OFFSET))(this, a1);
		}

		::System::Single HLCBGCENAID()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_HLCBGCENAID_OFFSET))(this);
		}

		::System::Void KLPOGAIPHCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_KLPOGAIPHCN_OFFSET))(this, a1);
		}

		::System::Single LPLCFKBBCKA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_LPLCFKBBCKA_OFFSET))(this);
		}

		::System::Boolean ECPEMPFLHKG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_ECPEMPFLHKG_OFFSET))(this);
		}

		::System::Boolean CJGFLNAFDIL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_CJGFLNAFDIL_OFFSET))(this);
		}

		::System::Boolean OLBFFKHDHKG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_OLBFFKHDHKG_OFFSET))(this);
		}

		::System::Int32 KOOJOGNHFJB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_KOOJOGNHFJB_OFFSET))(this);
		}

		::System::Int32 LOOBEGPPGJF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_LOOBEGPPGJF_OFFSET))(this);
		}

		::BEABFKCFPNC JLFAJHJHLIN()
		{
			return ((::BEABFKCFPNC(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_JLFAJHJHLIN_OFFSET))(this);
		}

		::System::Int32 OHGAMHJKFBE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_OHGAMHJKFBE_OFFSET))(this);
		}

		::System::Int32 ANFKHCNBJMC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_ANFKHCNBJMC_OFFSET))(this);
		}

		::System::Int32 JCKJFLIHPCG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_JCKJFLIHPCG_OFFSET))(this);
		}

		::System::Boolean HLIOPKDGACJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_HLIOPKDGACJ_OFFSET))(this);
		}

		::System::Void CBMEPCFAGME(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_CBMEPCFAGME_OFFSET))(this, a1);
		}

		::System::Boolean FHJDBGDOEMH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_FHJDBGDOEMH_OFFSET))(this);
		}

		::System::Void CHMHBKAEPMJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_CHMHBKAEPMJ_OFFSET))(this, a1);
		}

		::System::Boolean LEKBMKDGBEJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_LEKBMKDGBEJ_OFFSET))(this);
		}

		::System::Void DCBMEHFOPGO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_DCBMEHFOPGO_OFFSET))(this, a1);
		}

		::System::Boolean GAMEFGPKGHG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_GAMEFGPKGHG_OFFSET))(this);
		}

		::System::Boolean JKHMHOHFKED(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_JKHMHOHFKED_OFFSET))(this, a1);
		}

		::System::Boolean KHJFKKAHKDJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_KHJFKKAHKDJ_OFFSET))(this);
		}

		::System::Boolean PJHANELKBEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_PJHANELKBEB_OFFSET))(this);
		}

		::RPG::GameCore::TeamLocationType MMEFAGDFFKN()
		{
			return ((::RPG::GameCore::TeamLocationType(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_MMEFAGDFFKN_OFFSET))(this);
		}

		::System::Void NBGEPBMFGHH(::RPG::GameCore::TeamLocationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamLocationType))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_NBGEPBMFGHH_OFFSET))(this, a1);
		}

		::System::UInt32 MGGILHBGPOB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_MGGILHBGPOB_OFFSET))(this);
		}

		::RPG::GameCore::LocationConfig* GLDAHBMNMGB()
		{
			return ((::RPG::GameCore::LocationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_GLDAHBMNMGB_OFFSET))(this);
		}

		::RPG::GameCore::LocationConfig* NKOPNEPLAIK()
		{
			return ((::RPG::GameCore::LocationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_NKOPNEPLAIK_OFFSET))(this);
		}

		::RPG::GameCore::LocationConfig* NFCGMKCBBDO()
		{
			return ((::RPG::GameCore::LocationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_NFCGMKCBBDO_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* LGABMJBOCJN()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_LGABMJBOCJN_OFFSET))(this);
		}

		::RPG::GameCore::CharacterFormationType LOIAKLCMGNH()
		{
			return ((::RPG::GameCore::CharacterFormationType(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_LOIAKLCMGNH_OFFSET))(this);
		}

		::System::String* FCPBBEMDCPE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_FCPBBEMDCPE_OFFSET))(this);
		}

		::System::Single HKJBGDMKKDF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_HKJBGDMKKDF_OFFSET))(this);
		}

		::System::Single OENMLLBDBDK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_OENMLLBDBDK_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* PDDIPBIIAOE()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_PDDIPBIIAOE_OFFSET))(this);
		}

		::CJEEJFDPPNG* CFGPGONPMIL()
		{
			return ((::CJEEJFDPPNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_CFGPGONPMIL_OFFSET))(this);
		}

		::RPG::GameCore::CharacterFollowOffsetMode DKIDPGEHOJG()
		{
			return ((::RPG::GameCore::CharacterFollowOffsetMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_DKIDPGEHOJG_OFFSET))(this);
		}

		::RPG::MVector3 OELFJPNJNIJ()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_OELFJPNJNIJ_OFFSET))(this);
		}

		::RPG::GameCore::TeamType EGNPPLLBDCC()
		{
			return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_EGNPPLLBDCC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::CJEEJFDPPNG*>* MMNCEDCELBK()
		{
			return ((::System::Collections::Generic::List_1<::CJEEJFDPPNG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_MMNCEDCELBK_OFFSET))(this);
		}

		::System::Boolean IDENBEBKGIN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_IDENBEBKGIN_OFFSET))(this);
		}

		::System::Boolean DLNHGNLAMDD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_DLNHGNLAMDD_OFFSET))(this);
		}

		::System::Boolean PEIHFFIEMPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_PEIHFFIEMPH_OFFSET))(this);
		}

		::RPG::MVector3 BCFPMGHLOMH()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_BCFPMGHLOMH_OFFSET))(this);
		}

		::System::Boolean LHKJKMMHHDD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEEJFDPPNG_LHKJKMMHHDD_OFFSET))(this);
		}

	};
