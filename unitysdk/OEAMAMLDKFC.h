#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKDDEOLBGEI.h"
#include "unitysdk/IBDBGGMIBEE.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SurfaceBorderType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SwitchSurfaceType.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/RPG/GameCore/FiveDimAvatarMoveAbility.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/AFLELOJKGHN.h"
#include "unitysdk/FIHMGKLCINA.h"
#include "unitysdk/HGBCMFANCOE.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
class FMBPAEBCDLE;
class HFCPGANBGMI;
class HIOEAKHGILF;
class NDDFLGNNMDK;
class OEAMAMLDKFC_ENCFJGHFOBJ;
class PDPIHJEBAEC;
class PEEDLCHFAFL;
namespace RPG::GameCore { class FiveDimMoveBakedConfig; }
namespace RPG::GameCore { class FiveDimMoveConfig; }
namespace RPG::GameCore { class FiveDimScrollConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define OEAMAMLDKFC_AAKNAHCILFA_OFFSET UNITYSDK_OFFSET(0xBE03C90)
#define OEAMAMLDKFC_ADDMMJAIJOP_OFFSET UNITYSDK_OFFSET(0xBE1B8A0)
#define OEAMAMLDKFC_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xBDF8180)
#define OEAMAMLDKFC_AIONBKDIAKB_OFFSET UNITYSDK_OFFSET(0xBE167B0)
#define OEAMAMLDKFC_AJECBIEGADJ_OFFSET UNITYSDK_OFFSET(0xBDFA930)
#define OEAMAMLDKFC_AKBABECKIGL_OFFSET UNITYSDK_OFFSET(0xBE11630)
#define OEAMAMLDKFC_AMFCJPOOEOB_OFFSET UNITYSDK_OFFSET(0xBE16830)
#define OEAMAMLDKFC_AMJEFJCPJDO_OFFSET UNITYSDK_OFFSET(0xBE1CEB0)
#define OEAMAMLDKFC_AMPIMJJBKBE_OFFSET UNITYSDK_OFFSET(0xBDF7F00)
#define OEAMAMLDKFC_BAEKDEGLONN_OFFSET UNITYSDK_OFFSET(0xBE18330)
#define OEAMAMLDKFC_BAEONBENHLG_OFFSET UNITYSDK_OFFSET(0xBE1A6F0)
#define OEAMAMLDKFC_BALHMPBEOLJ_OFFSET UNITYSDK_OFFSET(0xBDFE5E0)
#define OEAMAMLDKFC_BEIOHDKEPHD_OFFSET UNITYSDK_OFFSET(0xBDFC300)
#define OEAMAMLDKFC_BFPJNABOKMB_OFFSET UNITYSDK_OFFSET(0xBE197D0)
#define OEAMAMLDKFC_BGBMFIMPILD_OFFSET UNITYSDK_OFFSET(0xBE1ADF0)
#define OEAMAMLDKFC_BGMDHOJHLGP_OFFSET UNITYSDK_OFFSET(0xBE1E8D0)
#define OEAMAMLDKFC_BGPOKMNIDHL_OFFSET UNITYSDK_OFFSET(0xBE099D0)
#define OEAMAMLDKFC_BIFDLHOIJKI_OFFSET UNITYSDK_OFFSET(0xBE198E0)
#define OEAMAMLDKFC_BJMKPDOFFCC_OFFSET UNITYSDK_OFFSET(0xBDFFE70)
#define OEAMAMLDKFC_BMCPNCOMPIN_OFFSET UNITYSDK_OFFSET(0xBE16A70)
#define OEAMAMLDKFC_BOBJILFLKIJ_OFFSET UNITYSDK_OFFSET(0xBE19540)
#define OEAMAMLDKFC_BOLFKCDMPAI_OFFSET UNITYSDK_OFFSET(0xBE1C510)
#define OEAMAMLDKFC_BPFNGFPKFBO_OFFSET UNITYSDK_OFFSET(0xBE10DD0)
#define OEAMAMLDKFC_BPOLDDMJGCO_OFFSET UNITYSDK_OFFSET(0xBE1BD70)
#define OEAMAMLDKFC_CADNOBEDCGE_OFFSET UNITYSDK_OFFSET(0xBDFAD70)
#define OEAMAMLDKFC_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE1E930)
#define OEAMAMLDKFC_CGLDEODOLBA_OFFSET UNITYSDK_OFFSET(0xBE1E710)
#define OEAMAMLDKFC_CIAMELBKIAE_OFFSET UNITYSDK_OFFSET(0xBE1B250)
#define OEAMAMLDKFC_CIEOCDFNIAI_OFFSET UNITYSDK_OFFSET(0xBE18390)
#define OEAMAMLDKFC_CKFGEFKBCDD_OFFSET UNITYSDK_OFFSET(0xBE18FC0)
#define OEAMAMLDKFC_CLAEPCGNJJM_OFFSET UNITYSDK_OFFSET(0xBE163E0)
#define OEAMAMLDKFC_CLEAR_OFFSET UNITYSDK_OFFSET(0xBDF8030)
#define OEAMAMLDKFC_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xBDF8090)
#define OEAMAMLDKFC_CLJELDOEBNC_OFFSET UNITYSDK_OFFSET(0xBE0A3F0)
#define OEAMAMLDKFC_CMFIKHEIOHF_OFFSET UNITYSDK_OFFSET(0xBDF9FC0)
#define OEAMAMLDKFC_CTOR_OFFSET UNITYSDK_OFFSET(0xBE1E920)
#define OEAMAMLDKFC_DBOONNEOHLG_OFFSET UNITYSDK_OFFSET(0xBE17BB0)
#define OEAMAMLDKFC_DDLDPNAICCN_OFFSET UNITYSDK_OFFSET(0xBDFFD10)
#define OEAMAMLDKFC_DGHLCFLEJFC_OFFSET UNITYSDK_OFFSET(0xBE06250)
#define OEAMAMLDKFC_DHFPFCLLGLC_OFFSET UNITYSDK_OFFSET(0xBE00990)
#define OEAMAMLDKFC_DJKCJIAJMNG_OFFSET UNITYSDK_OFFSET(0xBE07CC0)
#define OEAMAMLDKFC_DNHIJCDGLIA_OFFSET UNITYSDK_OFFSET(0xBE179E0)
#define OEAMAMLDKFC_DOCPIAKLICF_OFFSET UNITYSDK_OFFSET(0xBDFA260)
#define OEAMAMLDKFC_DOPOGIONOCJ_OFFSET UNITYSDK_OFFSET(0xBE1E830)
#define OEAMAMLDKFC_EAJFJPFGBAD_OFFSET UNITYSDK_OFFSET(0xBE0F380)
#define OEAMAMLDKFC_EAJGONMADBH_OFFSET UNITYSDK_OFFSET(0xBE15DC0)
#define OEAMAMLDKFC_EAOCLDGEKOO_OFFSET UNITYSDK_OFFSET(0xBE004D0)
#define OEAMAMLDKFC_EKDDGABODCO_OFFSET UNITYSDK_OFFSET(0xBE1E6A0)
#define OEAMAMLDKFC_ELEKBFLCPKB_OFFSET UNITYSDK_OFFSET(0xBE1D840)
#define OEAMAMLDKFC_EMCFBAJEPEB_OFFSET UNITYSDK_OFFSET(0xBE0A780)
#define OEAMAMLDKFC_EMFNMGPILDD_OFFSET UNITYSDK_OFFSET(0xBE07D60)
#define OEAMAMLDKFC_EOOOILLCIDN_OFFSET UNITYSDK_OFFSET(0xBE1A1A0)
#define OEAMAMLDKFC_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xBE1E680)
#define OEAMAMLDKFC_FAMDNINIDMC_OFFSET UNITYSDK_OFFSET(0xBE17AC0)
#define OEAMAMLDKFC_FDKGJGHHLCP_OFFSET UNITYSDK_OFFSET(0xBE1C4B0)
#define OEAMAMLDKFC_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xBE06520)
#define OEAMAMLDKFC_FGGCMBCFPKK_OFFSET UNITYSDK_OFFSET(0xBE097C0)
#define OEAMAMLDKFC_FGMPKCGFJKK_OFFSET UNITYSDK_OFFSET(0xBE04ED0)
#define OEAMAMLDKFC_FIHJBAPDCJC_OFFSET UNITYSDK_OFFSET(0xBE00150)
#define OEAMAMLDKFC_FMHOCKACAIB_OFFSET UNITYSDK_OFFSET(0xBE0FAC0)
#define OEAMAMLDKFC_FMMBPPMFDMG_OFFSET UNITYSDK_OFFSET(0xBE06410)
#define OEAMAMLDKFC_GAJLGBNJHPH_OFFSET UNITYSDK_OFFSET(0xBE0D910)
#define OEAMAMLDKFC_GAKAGAHFJFJ_OFFSET UNITYSDK_OFFSET(0xBDFB4C0)
#define OEAMAMLDKFC_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0xBE1BC80)
#define OEAMAMLDKFC_GBPOOGCNNED_OFFSET UNITYSDK_OFFSET(0xBE152E0)
#define OEAMAMLDKFC_GCGIEKJKENH_OFFSET UNITYSDK_OFFSET(0xBDF8270)
#define OEAMAMLDKFC_GCPEOBJDCFP_OFFSET UNITYSDK_OFFSET(0xBE1B3E0)
#define OEAMAMLDKFC_GDLGBGCCFDJ_OFFSET UNITYSDK_OFFSET(0xBDFE6E0)
#define OEAMAMLDKFC_GDLGKINHIEP_OFFSET UNITYSDK_OFFSET(0xBE15D70)
#define OEAMAMLDKFC_GEFLCCNIBGB_OFFSET UNITYSDK_OFFSET(0xBE0ED10)
#define OEAMAMLDKFC_GHIFOEIJBGF_OFFSET UNITYSDK_OFFSET(0xBE16330)
#define OEAMAMLDKFC_GIEBLCKCOCC_OFFSET UNITYSDK_OFFSET(0xBE0D840)
#define OEAMAMLDKFC_GIIHAFCOPGI_OFFSET UNITYSDK_OFFSET(0xBE0F550)
#define OEAMAMLDKFC_GIIOEMCMIFO_OFFSET UNITYSDK_OFFSET(0xBDFFF20)
#define OEAMAMLDKFC_GJEJEEAOFID_OFFSET UNITYSDK_OFFSET(0xBDFB3B0)
#define OEAMAMLDKFC_GJJHPJENLHO_OFFSET UNITYSDK_OFFSET(0xBE18230)
#define OEAMAMLDKFC_GKLODMLNCCI_OFFSET UNITYSDK_OFFSET(0xBE128C0)
#define OEAMAMLDKFC_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0xBDF9F00)
#define OEAMAMLDKFC_HCNDCPNCAFD_OFFSET UNITYSDK_OFFSET(0xBE182B0)
#define OEAMAMLDKFC_HEIGGAJDNKP_OFFSET UNITYSDK_OFFSET(0xBDF8C60)
#define OEAMAMLDKFC_HEPKAHLNOKE_OFFSET UNITYSDK_OFFSET(0xBE08E00)
#define OEAMAMLDKFC_HGBEGPOFGAG_OFFSET UNITYSDK_OFFSET(0xBE15330)
#define OEAMAMLDKFC_HKHGIFFJILK_OFFSET UNITYSDK_OFFSET(0xBE19AB0)
#define OEAMAMLDKFC_HLANACHEJCD_OFFSET UNITYSDK_OFFSET(0xBE177D0)
#define OEAMAMLDKFC_HLGPIAMPANI_OFFSET UNITYSDK_OFFSET(0xBE08E50)
#define OEAMAMLDKFC_HMCNFIGPFDL_OFFSET UNITYSDK_OFFSET(0xBDFB230)
#define OEAMAMLDKFC_HMEIAHCNHKK_OFFSET UNITYSDK_OFFSET(0xBE13330)
#define OEAMAMLDKFC_HMKKIDKEFCO_OFFSET UNITYSDK_OFFSET(0xBE0E660)
#define OEAMAMLDKFC_HOFDHIELCKJ_OFFSET UNITYSDK_OFFSET(0xBE160E0)
#define OEAMAMLDKFC_HPPFAOBGBDL_OFFSET UNITYSDK_OFFSET(0xBE098C0)
#define OEAMAMLDKFC_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xBDF9E40)
#define OEAMAMLDKFC_IDMJOCBNAEN_OFFSET UNITYSDK_OFFSET(0xBE19270)
#define OEAMAMLDKFC_IEECBHHLOPO_OFFSET UNITYSDK_OFFSET(0xBE1A2C0)
#define OEAMAMLDKFC_IFCIPPECDJI_OFFSET UNITYSDK_OFFSET(0xBDFDFF0)
#define OEAMAMLDKFC_IFGEFFMOPOF_OFFSET UNITYSDK_OFFSET(0xBE08420)
#define OEAMAMLDKFC_IHNCDHLCJAF_OFFSET UNITYSDK_OFFSET(0xBE1C440)
#define OEAMAMLDKFC_IKANIHNAGCH_OFFSET UNITYSDK_OFFSET(0xBE1B980)
#define OEAMAMLDKFC_IMOAMANADAK_OFFSET UNITYSDK_OFFSET(0xBE17B60)
#define OEAMAMLDKFC_INGFBKBPNNI_OFFSET UNITYSDK_OFFSET(0xBE13100)
#define OEAMAMLDKFC_IOBMAEKOCLG_OFFSET UNITYSDK_OFFSET(0xBDFA8B0)
#define OEAMAMLDKFC_IPMCHJGHHMG_OFFSET UNITYSDK_OFFSET(0xBE03AE0)
#define OEAMAMLDKFC_JADPIBBLPJG_OFFSET UNITYSDK_OFFSET(0xBDF8A60)
#define OEAMAMLDKFC_JDEDMENJAAO_OFFSET UNITYSDK_OFFSET(0xBE0C3D0)
#define OEAMAMLDKFC_JEIPDMBMLCK_OFFSET UNITYSDK_OFFSET(0xBE08BC0)
#define OEAMAMLDKFC_JFCFOKJBHPM_OFFSET UNITYSDK_OFFSET(0xBE0DA30)
#define OEAMAMLDKFC_JFINFOMMCJF_OFFSET UNITYSDK_OFFSET(0xBDF9220)
#define OEAMAMLDKFC_JIJOKFAKKME_OFFSET UNITYSDK_OFFSET(0xBE08DB0)
#define OEAMAMLDKFC_JJDGJJKPJIA_OFFSET UNITYSDK_OFFSET(0xBE16720)
#define OEAMAMLDKFC_JLOECHKFBOO_OFFSET UNITYSDK_OFFSET(0xBE02150)
#define OEAMAMLDKFC_JMNLENCIHOB_OFFSET UNITYSDK_OFFSET(0xBE0CB00)
#define OEAMAMLDKFC_JNNMJNKAHAO_OFFSET UNITYSDK_OFFSET(0xBE1A680)
#define OEAMAMLDKFC_JOBHMFOJODH_OFFSET UNITYSDK_OFFSET(0xBE06460)
#define OEAMAMLDKFC_KAHDHOJIOGP_OFFSET UNITYSDK_OFFSET(0xBE079C0)
#define OEAMAMLDKFC_KAKFDGMBEDP_OFFSET UNITYSDK_OFFSET(0xBE16BC0)
#define OEAMAMLDKFC_KANMMEEGJBK_OFFSET UNITYSDK_OFFSET(0xBE105C0)
#define OEAMAMLDKFC_KDCEELIFNOA_OFFSET UNITYSDK_OFFSET(0xBE191E0)
#define OEAMAMLDKFC_KDKLEPAECAJ_OFFSET UNITYSDK_OFFSET(0xBE0FB90)
#define OEAMAMLDKFC_KFIBFFMNKAK_OFFSET UNITYSDK_OFFSET(0xBE1E690)
#define OEAMAMLDKFC_KGMIAABIAJK_OFFSET UNITYSDK_OFFSET(0xBDFB330)
#define OEAMAMLDKFC_KHDKBEOPBLP_OFFSET UNITYSDK_OFFSET(0xBE00090)
#define OEAMAMLDKFC_KIODJHOLCAL_OFFSET UNITYSDK_OFFSET(0xBE19700)
#define OEAMAMLDKFC_KKPMNJHOALF_OFFSET UNITYSDK_OFFSET(0xBE1D930)
#define OEAMAMLDKFC_KLGEAGBHOAA_OFFSET UNITYSDK_OFFSET(0xBE0F3D0)
#define OEAMAMLDKFC_KLIJEFPJBMM_OFFSET UNITYSDK_OFFSET(0xBE0DE70)
#define OEAMAMLDKFC_KLJLEMGFOJC_OFFSET UNITYSDK_OFFSET(0xBE0D8C0)
#define OEAMAMLDKFC_KLLJONJCOFD_OFFSET UNITYSDK_OFFSET(0xBE18F10)
#define OEAMAMLDKFC_KMJLBKNOEDD_OFFSET UNITYSDK_OFFSET(0xBDF7FC0)
#define OEAMAMLDKFC_KNMMDAOGPCL_1_OFFSET UNITYSDK_OFFSET(0xBE19400)
#define OEAMAMLDKFC_KNMMDAOGPCL_OFFSET UNITYSDK_OFFSET(0xBE19380)
#define OEAMAMLDKFC_KNOKDMCBFAJ_OFFSET UNITYSDK_OFFSET(0xBDFAAC0)
#define OEAMAMLDKFC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBDF78B0)
#define OEAMAMLDKFC_LAALFFNMPBC_OFFSET UNITYSDK_OFFSET(0xBDFC290)
#define OEAMAMLDKFC_LAPJCIBMPIH_OFFSET UNITYSDK_OFFSET(0xBE16AD0)
#define OEAMAMLDKFC_LBBIBKEEOMN_OFFSET UNITYSDK_OFFSET(0xBE0B2A0)
#define OEAMAMLDKFC_LDJDINLKGEO_OFFSET UNITYSDK_OFFSET(0xBE1E700)
#define OEAMAMLDKFC_LFIFIEGFMOM_OFFSET UNITYSDK_OFFSET(0xBDFADE0)
#define OEAMAMLDKFC_LJBJFECCLNP_OFFSET UNITYSDK_OFFSET(0xBE0F5D0)
#define OEAMAMLDKFC_LNEDNDACLOG_OFFSET UNITYSDK_OFFSET(0xBDF8D00)
#define OEAMAMLDKFC_MAMDCDJFBAM_OFFSET UNITYSDK_OFFSET(0xBE0FFF0)
#define OEAMAMLDKFC_MAOCONGABCD_OFFSET UNITYSDK_OFFSET(0xBE1A520)
#define OEAMAMLDKFC_MBGHIIAJMGD_OFFSET UNITYSDK_OFFSET(0xBE04FB0)
#define OEAMAMLDKFC_MCIJDCNLEID_OFFSET UNITYSDK_OFFSET(0xBE1E7A0)
#define OEAMAMLDKFC_MCNAHCLCEAD_OFFSET UNITYSDK_OFFSET(0xBE19A20)
#define OEAMAMLDKFC_MGKKEFBDPKD_OFFSET UNITYSDK_OFFSET(0xBE0C440)
#define OEAMAMLDKFC_MHEEJINOJKO_OFFSET UNITYSDK_OFFSET(0xBE199D0)
#define OEAMAMLDKFC_MJENLDIHGIC_OFFSET UNITYSDK_OFFSET(0xBDF93D0)
#define OEAMAMLDKFC_MNCJOFFKLFB_OFFSET UNITYSDK_OFFSET(0xBE0F4E0)
#define OEAMAMLDKFC_MOKOGBMOJBH_OFFSET UNITYSDK_OFFSET(0xBE0DBC0)
#define OEAMAMLDKFC_MPKLLPIMPBE_OFFSET UNITYSDK_OFFSET(0xBE043D0)
#define OEAMAMLDKFC_NCGAJBHCBJE_OFFSET UNITYSDK_OFFSET(0xBE1C3E0)
#define OEAMAMLDKFC_NFDINDLBECI_OFFSET UNITYSDK_OFFSET(0xBE1B370)
#define OEAMAMLDKFC_NGDCOLPIOEI_OFFSET UNITYSDK_OFFSET(0xBE1BFF0)
#define OEAMAMLDKFC_NGGGCDBEDHO_OFFSET UNITYSDK_OFFSET(0xBE16540)
#define OEAMAMLDKFC_NIDIACOFMEG_OFFSET UNITYSDK_OFFSET(0xBE1D320)
#define OEAMAMLDKFC_NIOOHGFAKIL_OFFSET UNITYSDK_OFFSET(0xBE1E6B0)
#define OEAMAMLDKFC_NJCMDMFEHLE_OFFSET UNITYSDK_OFFSET(0xBDFC810)
#define OEAMAMLDKFC_NJJBGJHAFOB_OFFSET UNITYSDK_OFFSET(0xBDFB2B0)
#define OEAMAMLDKFC_NLJCOGHLKJL_OFFSET UNITYSDK_OFFSET(0xBE0A8D0)
#define OEAMAMLDKFC_NMOLBEEPBEE_OFFSET UNITYSDK_OFFSET(0xBDFAC10)
#define OEAMAMLDKFC_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xBE06570)
#define OEAMAMLDKFC_NNFAEMDBIHC_1_OFFSET UNITYSDK_OFFSET(0xBE06860)
#define OEAMAMLDKFC_NNFAEMDBIHC_OFFSET UNITYSDK_OFFSET(0xBE065C0)
#define OEAMAMLDKFC_NNGIFFCGBAB_OFFSET UNITYSDK_OFFSET(0xBE1C130)
#define OEAMAMLDKFC_NPDCBJGBAAL_OFFSET UNITYSDK_OFFSET(0xBE1E880)
#define OEAMAMLDKFC_NPLJJDMHLNF_OFFSET UNITYSDK_OFFSET(0xBE15190)
#define OEAMAMLDKFC_ODDFFNPOLJO_OFFSET UNITYSDK_OFFSET(0xBDFBEE0)
#define OEAMAMLDKFC_ODMPCLKLPBB_OFFSET UNITYSDK_OFFSET(0xBE17FD0)
#define OEAMAMLDKFC_OFOKMFCAMHP_OFFSET UNITYSDK_OFFSET(0xBE0B0F0)
#define OEAMAMLDKFC_OIHADJDBPMH_OFFSET UNITYSDK_OFFSET(0xBDFA700)
#define OEAMAMLDKFC_OKOBBGAPMEP_OFFSET UNITYSDK_OFFSET(0xBE0C2C0)
#define OEAMAMLDKFC_OLMBDJFMIGO_OFFSET UNITYSDK_OFFSET(0xBE19180)
#define OEAMAMLDKFC_ONNIPGJJEEP_OFFSET UNITYSDK_OFFSET(0xBE01690)
#define OEAMAMLDKFC_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBDF9EA0)
#define OEAMAMLDKFC_PAODCEOMFON_OFFSET UNITYSDK_OFFSET(0xBE1E3F0)
#define OEAMAMLDKFC_PBDDLCKGJAN_OFFSET UNITYSDK_OFFSET(0xBE09180)
#define OEAMAMLDKFC_PBHNKOHNJEO_OFFSET UNITYSDK_OFFSET(0xBDFDEF0)
#define OEAMAMLDKFC_PCCHIKJMGAK_OFFSET UNITYSDK_OFFSET(0xBE08F40)
#define OEAMAMLDKFC_PDKELFKHIGE_OFFSET UNITYSDK_OFFSET(0xBE0C680)
#define OEAMAMLDKFC_PEBJOCLKKIB_OFFSET UNITYSDK_OFFSET(0xBDFD500)
#define OEAMAMLDKFC_PFNAKEOGPJI_OFFSET UNITYSDK_OFFSET(0xBE194F0)
#define OEAMAMLDKFC_PIALGIBDLLF_OFFSET UNITYSDK_OFFSET(0xBE1D400)
#define OEAMAMLDKFC_PJEHEIGONPC_OFFSET UNITYSDK_OFFSET(0xBE04830)
#define OEAMAMLDKFC_PJJIOHBGECF_OFFSET UNITYSDK_OFFSET(0xBE17B10)
#define OEAMAMLDKFC_PJMEBHPACFO_OFFSET UNITYSDK_OFFSET(0xBE096F0)
#define OEAMAMLDKFC_PLGHLNIPBIF_OFFSET UNITYSDK_OFFSET(0xBE09760)
#define OEAMAMLDKFC_POEHBHKMHNH_1_OFFSET UNITYSDK_OFFSET(0xBE11810)
#define OEAMAMLDKFC_POEHBHKMHNH_OFFSET UNITYSDK_OFFSET(0xBE027E0)
#define OEAMAMLDKFC_PPMFNODAGHH_OFFSET UNITYSDK_OFFSET(0xBE1B740)

inline static constexpr unsigned int OEAMAMLDKFC_TypeDefinitionIndex = 76959;

	class OEAMAMLDKFC : public ::IBDBGGMIBEE
	{
	public:
		::HIOEAKHGILF* LLAFAJMHBDK; // 0x18
		::NDDFLGNNMDK* FKINCGODJEP; // 0x20
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x28
		::RPG::GameCore::HoyoTagContainer* LOOMEEPICOI; // 0x30
		::RPG::GameCore::HoyoTagContainer* ACLAMKFPNLP; // 0x38
		::HIOEAKHGILF* ICHEDAEHEBG; // 0x40
		::System::Single DCKNKPDEFGC; // 0x48
		::System::Single GBKPLAHALHE; // 0x4C
		::System::Single PGDKLBGDKJO; // 0x50
		::System::Single FHIECPEAONG; // 0x54
		::System::Single FLFOAKJDAHI; // 0x58
		::System::Single KHNNILONNGB; // 0x5C
		::System::Single OMDIILGIIKE; // 0x60
		::System::Single JPGNFBLFMAA; // 0x64
		::System::Single DGBHFJGKNEI; // 0x68
		::System::Single MLKDOFKEMHP; // 0x6C
		::System::Single NCGAABNBIEC; // 0x70
		::System::Single NGAEFBKNNGO; // 0x74
		::System::Single MKODKMENBDI; // 0x78
		::System::Single GJGEOIJIIEJ; // 0x7C
		::UnityEngine::Vector3 IJILCGBIKNH; // 0x80
		::System::Single EDAOFJNDPOK; // 0x8C
		::DKDDEOLBGEI AOFHJEEGGDP; // 0x90
		::System::Single KGOOMCJJCMJ; // 0xC8
		::System::Single KEFHLFIMNGL; // 0xCC
		::System::Single JEOKMPEOHPH; // 0xD0
		::System::Single ABNOIMOHCHE; // 0xD4
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_KDDCBHBPJMF()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)UnitySDK::FromName("", "OEAMAMLDKFC")->GetStaticField(0x30B70);
		}

		// static const ::System::Object NKGHKOPAKDD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEAMAMLDKFC_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_CLEAR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::Move::MoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::Move::MoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void GCGIEKJKENH(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_GCGIEKJKENH_OFFSET))(this, a1, a2);
		}

		::System::Void ICNEKGBHIHP(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void HBJBCBJAHOJ(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_HBJBCBJAHOJ_OFFSET))(this, a1, a2);
		}

		::System::Void OIHADJDBPMH(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_OIHADJDBPMH_OFFSET))(this, a1, a2);
		}

		::System::Void IOBMAEKOCLG(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_IOBMAEKOCLG_OFFSET))(this, a1, a2);
		}

		::System::Void CADNOBEDCGE(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_CADNOBEDCGE_OFFSET))(this, a1);
		}

		::System::Void LFIFIEGFMOM(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_LFIFIEGFMOM_OFFSET))(this, a1, a2);
		}

		::System::Void GJEJEEAOFID(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_GJEJEEAOFID_OFFSET))(this, a1, a2);
		}

		::System::Void NJCMDMFEHLE(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_NJCMDMFEHLE_OFFSET))(this, a1);
		}

		::System::Void PEBJOCLKKIB(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_PEBJOCLKKIB_OFFSET))(this, a1);
		}

		::System::Void DDLDPNAICCN(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_DDLDPNAICCN_OFFSET))(this, a1);
		}

		::System::Boolean BJMKPDOFFCC(::UnityEngine::Quaternion a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_BJMKPDOFFCC_OFFSET))(this, a1, a2);
		}

		::System::Single GIIOEMCMIFO(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::HGBCMFANCOE a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::HGBCMFANCOE, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_GIIOEMCMIFO_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Single KHDKBEOPBLP(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_KHDKBEOPBLP_OFFSET))(a1, a2, a3);
		}

		::System::Void BALHMPBEOLJ(::HGBCMFANCOE a1, ::System::UInt32 a2, ::KLNKLOMDIIC a3)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::UInt32, ::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_BALHMPBEOLJ_OFFSET))(this, a1, a2, a3);
		}

		::KLNKLOMDIIC IFCIPPECDJI(::HGBCMFANCOE a1, ::System::UInt32 a2, ::KLNKLOMDIIC a3)
		{
			return ((::KLNKLOMDIIC(*)(::PVOID, ::HGBCMFANCOE, ::System::UInt32, ::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_IFCIPPECDJI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GDLGBGCCFDJ(::HGBCMFANCOE a1, ::KLNKLOMDIIC a2, ::KLNKLOMDIIC a3)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::KLNKLOMDIIC, ::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_GDLGBGCCFDJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DHFPFCLLGLC(::HGBCMFANCOE a1, ::KLNKLOMDIIC a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_DHFPFCLLGLC_OFFSET))(this, a1, a2);
		}

		::System::Void ONNIPGJJEEP(::HGBCMFANCOE a1, ::KLNKLOMDIIC a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::KLNKLOMDIIC, ::System::UInt32))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_ONNIPGJJEEP_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 JLOECHKFBOO(::UnityEngine::Vector3 a1, ::PDPIHJEBAEC* a2, ::KLNKLOMDIIC a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::PDPIHJEBAEC*, ::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_JLOECHKFBOO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AAKNAHCILFA(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_AAKNAHCILFA_OFFSET))(this, a1, a2);
		}

		::System::Void MPKLLPIMPBE(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_MPKLLPIMPBE_OFFSET))(this, a1, a2);
		}

		::System::Void FGMPKCGFJKK(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_FGMPKCGFJKK_OFFSET))(this, a1, a2);
		}

		::System::Void MBGHIIAJMGD(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_MBGHIIAJMGD_OFFSET))(this, a1, a2);
		}

		::System::Void DGHLCFLEJFC(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_DGHLCFLEJFC_OFFSET))(this, a1, a2);
		}

		::System::Void FMMBPPMFDMG(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_FMMBPPMFDMG_OFFSET))(this, a1);
		}

		::System::Boolean JOBHMFOJODH(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_JOBHMFOJODH_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void NNFAEMDBIHC(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_NNFAEMDBIHC_OFFSET))(this, a1);
		}

		::System::Void DJKCJIAJMNG(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_DJKCJIAJMNG_OFFSET))(this, a1);
		}

		::System::Void EMFNMGPILDD(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_EMFNMGPILDD_OFFSET))(this, a1);
		}

		::System::Boolean JEIPDMBMLCK(::FIHMGKLCINA a1, ::FIHMGKLCINA a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::FIHMGKLCINA, ::FIHMGKLCINA))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_JEIPDMBMLCK_OFFSET))(this, a1, a2);
		}

		::System::Void IFGEFFMOPOF(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_IFGEFFMOPOF_OFFSET))(this, a1);
		}

		::System::Boolean NNFAEMDBIHC_1(::HGBCMFANCOE a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* a3, ::UnityEngine::RaycastHit a4, ::System::Int32 a5, ::UnityEngine::Transform* a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*, ::UnityEngine::RaycastHit, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_NNFAEMDBIHC_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean HLGPIAMPANI(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_HLGPIAMPANI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BEIOHDKEPHD(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_BEIOHDKEPHD_OFFSET))(this, a1);
		}

		::System::Void PBDDLCKGJAN(::HGBCMFANCOE a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Int32))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_PBDDLCKGJAN_OFFSET))(this, a1, a2);
		}

		::System::Boolean PCCHIKJMGAK(::HGBCMFANCOE a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::System::Int32))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_PCCHIKJMGAK_OFFSET))(this, a1, a2);
		}

		::System::Void KAHDHOJIOGP(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_KAHDHOJIOGP_OFFSET))(this, a1);
		}

		::System::Boolean PLGHLNIPBIF(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_PLGHLNIPBIF_OFFSET))(this, a1);
		}

		::HIOEAKHGILF* FGGCMBCFPKK(::HGBCMFANCOE a1)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_FGGCMBCFPKK_OFFSET))(this, a1);
		}

		::System::Boolean HPPFAOBGBDL(::HGBCMFANCOE a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::System::Int32))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_HPPFAOBGBDL_OFFSET))(this, a1, a2);
		}

		::System::Boolean BGPOKMNIDHL(::HGBCMFANCOE a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::System::Int32))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_BGPOKMNIDHL_OFFSET))(this, a1, a2);
		}

		::System::Void LAALFFNMPBC(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_LAALFFNMPBC_OFFSET))(this, a1);
		}

		::System::Void CLJELDOEBNC(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_CLJELDOEBNC_OFFSET))(this, a1);
		}

		::System::Boolean EMCFBAJEPEB(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_EMCFBAJEPEB_OFFSET))(this, a1);
		}

		::System::Void OKOBBGAPMEP(::HGBCMFANCOE a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_OKOBBGAPMEP_OFFSET))(this, a1, a2);
		}

		::System::Void NLJCOGHLKJL(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_NLJCOGHLKJL_OFFSET))(this, a1);
		}

		::System::Void OFOKMFCAMHP(::HGBCMFANCOE a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Int32))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_OFOKMFCAMHP_OFFSET))(this, a1, a2);
		}

		::System::Void LBBIBKEEOMN(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_LBBIBKEEOMN_OFFSET))(this, a1);
		}

		::System::Void MJENLDIHGIC(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_MJENLDIHGIC_OFFSET))(this, a1);
		}

		::System::Void PJMEBHPACFO(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_PJMEBHPACFO_OFFSET))(this, a1, a2);
		}

		::System::Void MGKKEFBDPKD(::HGBCMFANCOE a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Boolean))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_MGKKEFBDPKD_OFFSET))(this, a1, a2);
		}

		::System::Void PDKELFKHIGE(::HGBCMFANCOE a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_PDKELFKHIGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JMNLENCIHOB(::HGBCMFANCOE a1, ::OEAMAMLDKFC_ENCFJGHFOBJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::OEAMAMLDKFC_ENCFJGHFOBJ*))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_JMNLENCIHOB_OFFSET))(this, a1, a2);
		}

		::System::Boolean GAJLGBNJHPH(::UnityEngine::RaycastHit a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_GAJLGBNJHPH_OFFSET))(this, a1);
		}

		::System::Void KLIJEFPJBMM(::HGBCMFANCOE a1, ::OEAMAMLDKFC_ENCFJGHFOBJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::OEAMAMLDKFC_ENCFJGHFOBJ*))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_KLIJEFPJBMM_OFFSET))(this, a1, a2);
		}

		::System::Void HMKKIDKEFCO(::HGBCMFANCOE a1, ::OEAMAMLDKFC_ENCFJGHFOBJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::OEAMAMLDKFC_ENCFJGHFOBJ*))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_HMKKIDKEFCO_OFFSET))(this, a1, a2);
		}

		::System::Void GEFLCCNIBGB(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_GEFLCCNIBGB_OFFSET))(this, a1);
		}

		::System::Boolean JFCFOKJBHPM(::HIOEAKHGILF* a1, ::System::Boolean a2, ::HGBCMFANCOE a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::System::Boolean, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_JFCFOKJBHPM_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MOKOGBMOJBH(::HIOEAKHGILF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_MOKOGBMOJBH_OFFSET))(this, a1);
		}

		::System::Boolean KLGEAGBHOAA(::HGBCMFANCOE a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_KLGEAGBHOAA_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GIIHAFCOPGI(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_GIIHAFCOPGI_OFFSET))(this, a1);
		}

		::System::Void LJBJFECCLNP(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_LJBJFECCLNP_OFFSET))(this, a1, a2);
		}

		static ::System::Single FMHOCKACAIB(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_FMHOCKACAIB_OFFSET))(a1, a2, a3);
		}

		::System::Void GAKAGAHFJFJ(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_GAKAGAHFJFJ_OFFSET))(this, a1);
		}

		::System::Boolean EAOCLDGEKOO(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::RaycastHit a3, ::HIOEAKHGILF* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::RaycastHit, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_EAOCLDGEKOO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ODDFFNPOLJO(::HGBCMFANCOE a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Boolean))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_ODDFFNPOLJO_OFFSET))(this, a1, a2);
		}

		::System::Boolean POEHBHKMHNH(::HGBCMFANCOE a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::System::Boolean))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_POEHBHKMHNH_OFFSET))(this, a1, a2);
		}

		::System::Boolean POEHBHKMHNH_1(::HGBCMFANCOE a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_POEHBHKMHNH_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MAMDCDJFBAM(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_MAMDCDJFBAM_OFFSET))(this, a1, a2);
		}

		::System::Void FIHJBAPDCJC(::HGBCMFANCOE a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_FIHJBAPDCJC_OFFSET))(this, a1, a2, a3, a4);
		}

		::HIOEAKHGILF* AKBABECKIGL(::UnityEngine::RaycastHit a1)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_AKBABECKIGL_OFFSET))(this, a1);
		}

		::System::Boolean GKLODMLNCCI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::FiveDim::SurfaceBorderType a2, ::KLNKLOMDIIC a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::FiveDim::SurfaceBorderType, ::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_GKLODMLNCCI_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean KDKLEPAECAJ(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_KDKLEPAECAJ_OFFSET))(this, a1);
		}

		::System::Boolean INGFBKBPNNI(::System::UInt32 a1, ::RPG::Client::LittleGame::FiveDim::SurfaceBorderType a2, ::KLNKLOMDIIC a3, ::KLNKLOMDIIC a4, ::System::UInt32 a5, ::RPG::Client::LittleGame::FiveDim::SwitchSurfaceType a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGame::FiveDim::SurfaceBorderType, ::KLNKLOMDIIC, ::KLNKLOMDIIC, ::System::UInt32, ::RPG::Client::LittleGame::FiveDim::SwitchSurfaceType))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_INGFBKBPNNI_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void HMEIAHCNHKK(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::FiveDim::SurfaceBorderType a2, ::KLNKLOMDIIC a3, ::System::UInt32 a4, ::KLNKLOMDIIC a5, ::RPG::Client::LittleGame::FiveDim::SwitchSurfaceType a6)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::FiveDim::SurfaceBorderType, ::KLNKLOMDIIC, ::System::UInt32, ::KLNKLOMDIIC, ::RPG::Client::LittleGame::FiveDim::SwitchSurfaceType))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_HMEIAHCNHKK_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean NPLJJDMHLNF(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_NPLJJDMHLNF_OFFSET))(this, a1);
		}

		::System::Boolean HGBEGPOFGAG(::HGBCMFANCOE a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_HGBEGPOFGAG_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 KANMMEEGJBK(::HGBCMFANCOE a1, ::HIOEAKHGILF* a2, ::HIOEAKHGILF* a3, ::HIOEAKHGILF* a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::HGBCMFANCOE, ::HIOEAKHGILF*, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_KANMMEEGJBK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean BPFNGFPKFBO(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_BPFNGFPKFBO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean PJEHEIGONPC(::HIOEAKHGILF* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_PJEHEIGONPC_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector2 HOFDHIELCKJ(::AFLELOJKGHN a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::AFLELOJKGHN, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_HOFDHIELCKJ_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector2 EAJGONMADBH(::AFLELOJKGHN a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::AFLELOJKGHN, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_EAJGONMADBH_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector2 CLAEPCGNJJM(::AFLELOJKGHN a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::AFLELOJKGHN, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_CLAEPCGNJJM_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 NGGGCDBEDHO(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_NGGGCDBEDHO_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector2 JFINFOMMCJF(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_JFINFOMMCJF_OFFSET))(a1, a2);
		}

		static ::System::Single JJDGJJKPJIA(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_JJDGJJKPJIA_OFFSET))(a1, a2);
		}

		::System::Void AIONBKDIAKB(::HGBCMFANCOE a1, ::System::Boolean a2, ::UnityEngine::Vector2 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Boolean, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_AIONBKDIAKB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AMFCJPOOEOB(::HGBCMFANCOE a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_AMFCJPOOEOB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BMCPNCOMPIN(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_BMCPNCOMPIN_OFFSET))(this, a1);
		}

		::System::Void LNEDNDACLOG(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_LNEDNDACLOG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 LAPJCIBMPIH(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_LAPJCIBMPIH_OFFSET))(this, a1, a2);
		}

		::System::Void KAKFDGMBEDP(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_KAKFDGMBEDP_OFFSET))(this, a1);
		}

		::System::Void HLANACHEJCD(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_HLANACHEJCD_OFFSET))(this, a1);
		}

		::System::Boolean JADPIBBLPJG(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_JADPIBBLPJG_OFFSET))(this, a1);
		}

		::System::Void DNHIJCDGLIA(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_DNHIJCDGLIA_OFFSET))(this, a1);
		}

		::System::Void PJJIOHBGECF(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_PJJIOHBGECF_OFFSET))(this, a1);
		}

		::System::Boolean FAMDNINIDMC(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_FAMDNINIDMC_OFFSET))(this, a1);
		}

		::System::Void IMOAMANADAK(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_IMOAMANADAK_OFFSET))(this, a1);
		}

		::System::Void DBOONNEOHLG(::HGBCMFANCOE a1, ::System::Int32 a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_DBOONNEOHLG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PBHNKOHNJEO(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_PBHNKOHNJEO_OFFSET))(this, a1);
		}

		::System::Void GJJHPJENLHO(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_GJJHPJENLHO_OFFSET))(this, a1);
		}

		::System::Void HCNDCPNCAFD(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_HCNDCPNCAFD_OFFSET))(this, a1);
		}

		::System::Boolean BAEKDEGLONN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_BAEKDEGLONN_OFFSET))(this);
		}

		::System::Void CIEOCDFNIAI(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_CIEOCDFNIAI_OFFSET))(this, a1);
		}

		::System::Void KLLJONJCOFD(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_KLLJONJCOFD_OFFSET))(this, a1);
		}

		::System::Void KDCEELIFNOA(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_KDCEELIFNOA_OFFSET))(this, a1);
		}

		::System::Void KNMMDAOGPCL(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_KNMMDAOGPCL_OFFSET))(this, a1, a2);
		}

		::System::Void KNMMDAOGPCL_1(::HGBCMFANCOE a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Boolean))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_KNMMDAOGPCL_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean MNCJOFFKLFB(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_MNCJOFFKLFB_OFFSET))(this, a1);
		}

		::System::Void PFNAKEOGPJI(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_PFNAKEOGPJI_OFFSET))(this, a1);
		}

		::System::Boolean CKFGEFKBCDD(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_CKFGEFKBCDD_OFFSET))(this, a1);
		}

		::System::Boolean BOBJILFLKIJ(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_BOBJILFLKIJ_OFFSET))(this, a1);
		}

		::System::Void KIODJHOLCAL(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_KIODJHOLCAL_OFFSET))(this, a1);
		}

		::System::Void BFPJNABOKMB(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_BFPJNABOKMB_OFFSET))(this, a1);
		}

		::System::Void MHEEJINOJKO(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_MHEEJINOJKO_OFFSET))(this, a1);
		}

		::System::Boolean BIFDLHOIJKI(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_BIFDLHOIJKI_OFFSET))(this, a1);
		}

		::System::Void MCNAHCLCEAD(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_MCNAHCLCEAD_OFFSET))(this, a1, a2);
		}

		::System::Boolean HKHGIFFJILK(::HGBCMFANCOE a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::RPG::GameCore::FiveDimOrthoDirection a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::System::Int32, ::UnityEngine::Vector3, ::RPG::GameCore::FiveDimOrthoDirection, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_HKHGIFFJILK_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::UnityEngine::Vector3 IEECBHHLOPO(::HGBCMFANCOE a1, ::RPG::GameCore::FiveDimOrthoDirection a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::HGBCMFANCOE, ::RPG::GameCore::FiveDimOrthoDirection, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_IEECBHHLOPO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean BGBMFIMPILD(::HGBCMFANCOE a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::FiveDimOrthoDirection a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::UnityEngine::Vector3, ::RPG::GameCore::FiveDimOrthoDirection, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_BGBMFIMPILD_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 CIAMELBKIAE(::HGBCMFANCOE a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::FiveDimOrthoDirection a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::HGBCMFANCOE, ::UnityEngine::Vector3, ::RPG::GameCore::FiveDimOrthoDirection))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_CIAMELBKIAE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 GCPEOBJDCFP(::HGBCMFANCOE a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::RPG::GameCore::FiveDimOrthoDirection a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::HGBCMFANCOE, ::System::Int32, ::UnityEngine::Vector3, ::RPG::GameCore::FiveDimOrthoDirection))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_GCPEOBJDCFP_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 BAEONBENHLG(::HGBCMFANCOE a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::FiveDimOrthoDirection a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::HGBCMFANCOE, ::UnityEngine::Vector3, ::RPG::GameCore::FiveDimOrthoDirection, ::System::Boolean))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_BAEONBENHLG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean MAOCONGABCD(::HGBCMFANCOE a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::FiveDimOrthoDirection a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::UnityEngine::Vector3, ::RPG::GameCore::FiveDimOrthoDirection))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_MAOCONGABCD_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EOOOILLCIDN(::System::Int32 a1, ::RPG::GameCore::FiveDimOrthoDirection a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FiveDimOrthoDirection))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_EOOOILLCIDN_OFFSET))(this, a1, a2);
		}

		::System::Boolean JNNMJNKAHAO(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_JNNMJNKAHAO_OFFSET))(this, a1);
		}

		::System::Boolean NFDINDLBECI(::HGBCMFANCOE a1, ::RPG::GameCore::FiveDimOrthoDirection a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::RPG::GameCore::FiveDimOrthoDirection))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_NFDINDLBECI_OFFSET))(this, a1, a2);
		}

		::System::Void ODMPCLKLPBB(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_ODMPCLKLPBB_OFFSET))(this, a1);
		}

		::System::Void PPMFNODAGHH(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_PPMFNODAGHH_OFFSET))(this, a1, a2);
		}

		::System::Single JDEDMENJAAO(::HGBCMFANCOE a1)
		{
			return ((::System::Single(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_JDEDMENJAAO_OFFSET))(this, a1);
		}

		::System::Void ADDMMJAIJOP(::HGBCMFANCOE a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Boolean))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_ADDMMJAIJOP_OFFSET))(this, a1, a2);
		}

		::System::Boolean IKANIHNAGCH(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_IKANIHNAGCH_OFFSET))(this, a1);
		}

		::System::Void GBCHFFLMIIC(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_GBCHFFLMIIC_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector3 BPOLDDMJGCO(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Nullable_1<::System::Single> a9)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_BPOLDDMJGCO_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::UnityEngine::Vector3 NGDCOLPIOEI(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_NGDCOLPIOEI_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector3 IPMCHJGHHMG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_IPMCHJGHHMG_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Void NNGIFFCGBAB(::HGBCMFANCOE a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_NNGIFFCGBAB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NCGAJBHCBJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_NCGAJBHCBJE_OFFSET))(this);
		}

		::System::Void IHNCDHLCJAF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_IHNCDHLCJAF_OFFSET))(this, a1);
		}

		::System::Int32 FDKGJGHHLCP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_FDKGJGHHLCP_OFFSET))(this);
		}

		::System::Boolean BOLFKCDMPAI(::HGBCMFANCOE a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::System::Boolean))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_BOLFKCDMPAI_OFFSET))(this, a1, a2);
		}

		::System::Boolean NIDIACOFMEG(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_NIDIACOFMEG_OFFSET))(this, a1);
		}

		::System::Void NMOLBEEPBEE(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_NMOLBEEPBEE_OFFSET))(this, a1);
		}

		::System::Void KNOKDMCBFAJ(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_KNOKDMCBFAJ_OFFSET))(this, a1, a2);
		}

		::System::Void AJECBIEGADJ(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_AJECBIEGADJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean PIALGIBDLLF(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_PIALGIBDLLF_OFFSET))(this, a1);
		}

		::System::Boolean ELEKBFLCPKB(::UnityEngine::Collision* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_ELEKBFLCPKB_OFFSET))(this, a1);
		}

		::System::Boolean KKPMNJHOALF(::System::Boolean a1, ::HGBCMFANCOE a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::HGBCMFANCOE, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_KKPMNJHOALF_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean PAODCEOMFON(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_PAODCEOMFON_OFFSET))(this, a1);
		}

		::System::Void AMJEFJCPJDO(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_AMJEFJCPJDO_OFFSET))(this, a1);
		}

		::System::Void CMFIKHEIOHF(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_CMFIKHEIOHF_OFFSET))(this, a1);
		}

		::System::Void DOCPIAKLICF(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_DOCPIAKLICF_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_EPPAFNJFCMH_OFFSET))(this);
		}

		::System::Boolean KFIBFFMNKAK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_KFIBFFMNKAK_OFFSET))(this);
		}

		::System::Boolean EKDDGABODCO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_EKDDGABODCO_OFFSET))(this);
		}

		::System::Boolean NIOOHGFAKIL(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_NIOOHGFAKIL_OFFSET))(this, a1);
		}

		::System::Boolean LDJDINLKGEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_LDJDINLKGEO_OFFSET))(this);
		}

		::UnityEngine::CapsuleCollider* GIEBLCKCOCC()
		{
			return ((::UnityEngine::CapsuleCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_GIEBLCKCOCC_OFFSET))(this);
		}

		::UnityEngine::Transform* HMCNFIGPFDL()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_HMCNFIGPFDL_OFFSET))(this);
		}

		::UnityEngine::GameObject* CGLDEODOLBA()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_CGLDEODOLBA_OFFSET))(this);
		}

		::UnityEngine::Transform* KGMIAABIAJK()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_KGMIAABIAJK_OFFSET))(this);
		}

		::UnityEngine::Rigidbody* NJJBGJHAFOB()
		{
			return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_NJJBGJHAFOB_OFFSET))(this);
		}

		::FMBPAEBCDLE* HEIGGAJDNKP()
		{
			return ((::FMBPAEBCDLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_HEIGGAJDNKP_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimMoveConfig* AMPIMJJBKBE()
		{
			return ((::RPG::GameCore::FiveDimMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_AMPIMJJBKBE_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimMoveBakedConfig* KMJLBKNOEDD()
		{
			return ((::RPG::GameCore::FiveDimMoveBakedConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_KMJLBKNOEDD_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimScrollConfig* GHIFOEIJBGF()
		{
			return ((::RPG::GameCore::FiveDimScrollConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_GHIFOEIJBGF_OFFSET))(this);
		}

		::System::UInt32 OLMBDJFMIGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_OLMBDJFMIGO_OFFSET))(this);
		}

		::System::Boolean IDMJOCBNAEN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_IDMJOCBNAEN_OFFSET))(this);
		}

		::System::Single JIJOKFAKKME()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_JIJOKFAKKME_OFFSET))(this);
		}

		::System::Single EAJFJPFGBAD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_EAJFJPFGBAD_OFFSET))(this);
		}

		::System::Single HEPKAHLNOKE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_HEPKAHLNOKE_OFFSET))(this);
		}

		::System::Single KLJLEMGFOJC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_KLJLEMGFOJC_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimAvatarMoveAbility MCIJDCNLEID()
		{
			return ((::RPG::GameCore::FiveDimAvatarMoveAbility(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_MCIJDCNLEID_OFFSET))(this);
		}

		::System::Boolean DOPOGIONOCJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_DOPOGIONOCJ_OFFSET))(this);
		}

		::System::Boolean NPDCBJGBAAL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_NPDCBJGBAAL_OFFSET))(this);
		}

		::System::Boolean BGMDHOJHLGP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_BGMDHOJHLGP_OFFSET))(this);
		}

		::System::Single GBPOOGCNNED()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_GBPOOGCNNED_OFFSET))(this);
		}

		::System::Single GDLGKINHIEP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC_GDLGKINHIEP_OFFSET))(this);
		}

	};
