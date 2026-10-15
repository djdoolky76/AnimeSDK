#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCCJAOLPOAM.h"
#include "unitysdk/RPG/Client/B51Racing/RoadRashGameHitSource.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/EPCHCFOEJNL.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ProjectileHitEffectConfig.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ProjectileParams.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class APKMABMDGDC;
class BJIACBNKCCJ;
class CKHFKFPPANI;
class CPNHCLGMDCC;
class DHAGPJEEPCI;
class GHMGGIHEHJE;
class HPMECOPBDBE;
class JIJBCGDANLJ;
class KKKKGPJLODD;
class KPDKCEAFBHI;
class LJAIOGHEIBA;
class MINFEAKALGE;
class NAJMEPONCEL;
class NFDMOPAMCMA;
class POFHPPEDJKE;
namespace Entitas { class IGroup; }
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityValueModifer; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }

#define FEIEBAJPIAE_ACKECAHKABO_OFFSET UNITYSDK_OFFSET(0x15707850)
#define FEIEBAJPIAE_AFFJBFEAJPO_OFFSET UNITYSDK_OFFSET(0x156FF240)
#define FEIEBAJPIAE_AHPCCPBHAMB_OFFSET UNITYSDK_OFFSET(0x15716020)
#define FEIEBAJPIAE_AJHHAPHLCKF_OFFSET UNITYSDK_OFFSET(0x15722270)
#define FEIEBAJPIAE_AJONMIMNMOL_OFFSET UNITYSDK_OFFSET(0x1571A390)
#define FEIEBAJPIAE_AOFBDHGFMGP_OFFSET UNITYSDK_OFFSET(0x156FD9C0)
#define FEIEBAJPIAE_AOIIFOHMGMF_OFFSET UNITYSDK_OFFSET(0x15717410)
#define FEIEBAJPIAE_BCIMNJAPFBK_OFFSET UNITYSDK_OFFSET(0x1570AEB0)
#define FEIEBAJPIAE_BFHJNDPOCAB_OFFSET UNITYSDK_OFFSET(0x15714B40)
#define FEIEBAJPIAE_BFIBOJIADJI_OFFSET UNITYSDK_OFFSET(0x15720720)
#define FEIEBAJPIAE_BHANIHCFNMA_OFFSET UNITYSDK_OFFSET(0x1571D5A0)
#define FEIEBAJPIAE_BHGNJFNCAOI_OFFSET UNITYSDK_OFFSET(0x15717E80)
#define FEIEBAJPIAE_BJBKFBOOHOD_OFFSET UNITYSDK_OFFSET(0x1571B160)
#define FEIEBAJPIAE_BJEOKFFPDHA_OFFSET UNITYSDK_OFFSET(0x1570BE50)
#define FEIEBAJPIAE_BJOBDICOLFP_OFFSET UNITYSDK_OFFSET(0x157194F0)
#define FEIEBAJPIAE_BJOPOJBFLAM_OFFSET UNITYSDK_OFFSET(0x1571DA70)
#define FEIEBAJPIAE_BKGFOBHJDKC_OFFSET UNITYSDK_OFFSET(0x157012F0)
#define FEIEBAJPIAE_BLJLPJIAJGF_OFFSET UNITYSDK_OFFSET(0x15707A80)
#define FEIEBAJPIAE_BLPEHEEJLAM_OFFSET UNITYSDK_OFFSET(0x1571F170)
#define FEIEBAJPIAE_CBMIMLEADPE_OFFSET UNITYSDK_OFFSET(0x15709020)
#define FEIEBAJPIAE_CCOLLKDCDFG_OFFSET UNITYSDK_OFFSET(0x157174C0)
#define FEIEBAJPIAE_CDEEEDOPLLL_OFFSET UNITYSDK_OFFSET(0x15716AF0)
#define FEIEBAJPIAE_CEBKIONNCJD_OFFSET UNITYSDK_OFFSET(0x1570AE30)
#define FEIEBAJPIAE_CFEJIMGPBKK_OFFSET UNITYSDK_OFFSET(0x1570C810)
#define FEIEBAJPIAE_CGMAGELGEMD_OFFSET UNITYSDK_OFFSET(0x15722A70)
#define FEIEBAJPIAE_CGMFGELPCBN_OFFSET UNITYSDK_OFFSET(0x156FF650)
#define FEIEBAJPIAE_CHGLFDLEEKM_OFFSET UNITYSDK_OFFSET(0x15720680)
#define FEIEBAJPIAE_CHLPOGKDPBK_OFFSET UNITYSDK_OFFSET(0x157159B0)
#define FEIEBAJPIAE_CHNJFOEGIKL_OFFSET UNITYSDK_OFFSET(0x15715040)
#define FEIEBAJPIAE_CJFFFIHJHKJ_OFFSET UNITYSDK_OFFSET(0x1571A470)
#define FEIEBAJPIAE_CNNIINBJAEK_OFFSET UNITYSDK_OFFSET(0x1571C920)
#define FEIEBAJPIAE_CTOR_OFFSET UNITYSDK_OFFSET(0x156F3E30)
#define FEIEBAJPIAE_DACNJILDBCF_OFFSET UNITYSDK_OFFSET(0x15712840)
#define FEIEBAJPIAE_DADHJAMKJDN_OFFSET UNITYSDK_OFFSET(0x157120C0)
#define FEIEBAJPIAE_DFIDCEEFKOI_OFFSET UNITYSDK_OFFSET(0x1571D680)
#define FEIEBAJPIAE_DHKOILIMFAE_OFFSET UNITYSDK_OFFSET(0x15706E70)
#define FEIEBAJPIAE_DINMKLLAPCB_OFFSET UNITYSDK_OFFSET(0x15717830)
#define FEIEBAJPIAE_DJGBAFKCLFG_OFFSET UNITYSDK_OFFSET(0x156F8A70)
#define FEIEBAJPIAE_DJIIDFOCNCE_OFFSET UNITYSDK_OFFSET(0x1570F070)
#define FEIEBAJPIAE_DLKFDKAIDCA_OFFSET UNITYSDK_OFFSET(0x157219B0)
#define FEIEBAJPIAE_ECIPAIKLCGL_OFFSET UNITYSDK_OFFSET(0x15709360)
#define FEIEBAJPIAE_ECKFDHGOCLG_OFFSET UNITYSDK_OFFSET(0x15720170)
#define FEIEBAJPIAE_EEAMLLEHPOC_OFFSET UNITYSDK_OFFSET(0x156F4CA0)
#define FEIEBAJPIAE_EFBOEFECLIF_OFFSET UNITYSDK_OFFSET(0x1570BD60)
#define FEIEBAJPIAE_EGHGHKCJJNB_OFFSET UNITYSDK_OFFSET(0x1570F770)
#define FEIEBAJPIAE_EGOIMGBMKGF_OFFSET UNITYSDK_OFFSET(0x156FF050)
#define FEIEBAJPIAE_EMLPOOIPPBI_OFFSET UNITYSDK_OFFSET(0x1571DF00)
#define FEIEBAJPIAE_EMPNMDLOCCE_OFFSET UNITYSDK_OFFSET(0x1570AF80)
#define FEIEBAJPIAE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x156F5350)
#define FEIEBAJPIAE_FBAEGOIABGJ_OFFSET UNITYSDK_OFFSET(0x1571E860)
#define FEIEBAJPIAE_FDBAOGNMPHD_OFFSET UNITYSDK_OFFSET(0x15717740)
#define FEIEBAJPIAE_FEAFOJEBEPD_OFFSET UNITYSDK_OFFSET(0x15721E90)
#define FEIEBAJPIAE_FFLKMIOJHPF_OFFSET UNITYSDK_OFFSET(0x156F5050)
#define FEIEBAJPIAE_FIFNFOBDGNP_OFFSET UNITYSDK_OFFSET(0x15714A60)
#define FEIEBAJPIAE_FJPPEJBPMMM_OFFSET UNITYSDK_OFFSET(0x156FF0C0)
#define FEIEBAJPIAE_FKBDBMKOJLB_OFFSET UNITYSDK_OFFSET(0x15719670)
#define FEIEBAJPIAE_FKDLACJACDK_OFFSET UNITYSDK_OFFSET(0x15712C50)
#define FEIEBAJPIAE_FKOHOJPHJEC_OFFSET UNITYSDK_OFFSET(0x1570B980)
#define FEIEBAJPIAE_FNFCOFOPMIL_OFFSET UNITYSDK_OFFSET(0x1571E150)
#define FEIEBAJPIAE_FPBMGMGNFCA_OFFSET UNITYSDK_OFFSET(0x156FF3A0)
#define FEIEBAJPIAE_FPHECEJFBLB_OFFSET UNITYSDK_OFFSET(0x1570B7B0)
#define FEIEBAJPIAE_FPJHBNHFBFO_OFFSET UNITYSDK_OFFSET(0x15700730)
#define FEIEBAJPIAE_GCHOAMECIBA_OFFSET UNITYSDK_OFFSET(0x156F8E20)
#define FEIEBAJPIAE_GFAJDKDHLHI_OFFSET UNITYSDK_OFFSET(0x15711430)
#define FEIEBAJPIAE_GHAFAIENPMK_OFFSET UNITYSDK_OFFSET(0x156FF4A0)
#define FEIEBAJPIAE_GIHAMBJOGGM_OFFSET UNITYSDK_OFFSET(0x15709BB0)
#define FEIEBAJPIAE_GIMJMJAEGEL_OFFSET UNITYSDK_OFFSET(0x15705380)
#define FEIEBAJPIAE_GJGNLPFPALA_OFFSET UNITYSDK_OFFSET(0x157137F0)
#define FEIEBAJPIAE_GMKPPNBHOIM_OFFSET UNITYSDK_OFFSET(0x1571A8F0)
#define FEIEBAJPIAE_GNABIHLFMOG_OFFSET UNITYSDK_OFFSET(0x156FD8B0)
#define FEIEBAJPIAE_HACMNKEMEBN_OFFSET UNITYSDK_OFFSET(0x156FE780)
#define FEIEBAJPIAE_HAOEDMGEFBI_OFFSET UNITYSDK_OFFSET(0x1570C3C0)
#define FEIEBAJPIAE_HBLAPIMGMND_OFFSET UNITYSDK_OFFSET(0x15719D50)
#define FEIEBAJPIAE_HDKJMCGMPBC_OFFSET UNITYSDK_OFFSET(0x15710880)
#define FEIEBAJPIAE_HEBDLFBLMKI_OFFSET UNITYSDK_OFFSET(0x15706A40)
#define FEIEBAJPIAE_HFKDOEPELCL_OFFSET UNITYSDK_OFFSET(0x15722A10)
#define FEIEBAJPIAE_HFOKNPLECEC_OFFSET UNITYSDK_OFFSET(0x1570AB10)
#define FEIEBAJPIAE_HGLKCMBOGDK_OFFSET UNITYSDK_OFFSET(0x1571BE80)
#define FEIEBAJPIAE_HICNCKEJJAL_OFFSET UNITYSDK_OFFSET(0x15701770)
#define FEIEBAJPIAE_HIEOLBFMLJK_OFFSET UNITYSDK_OFFSET(0x15719980)
#define FEIEBAJPIAE_HKAJBAJPNAC_OFFSET UNITYSDK_OFFSET(0x15705F40)
#define FEIEBAJPIAE_HKDEECALHEG_OFFSET UNITYSDK_OFFSET(0x1570C710)
#define FEIEBAJPIAE_HMEBDJAHIKB_OFFSET UNITYSDK_OFFSET(0x15717DA0)
#define FEIEBAJPIAE_HNFEOCHONEF_OFFSET UNITYSDK_OFFSET(0x1571A740)
#define FEIEBAJPIAE_HPMIIHEDDAO_OFFSET UNITYSDK_OFFSET(0x15707700)
#define FEIEBAJPIAE_IADLKLBGHOM_OFFSET UNITYSDK_OFFSET(0x15719C40)
#define FEIEBAJPIAE_IALKJKJCKFN_OFFSET UNITYSDK_OFFSET(0x15709C80)
#define FEIEBAJPIAE_IBJJOFCFKFD_OFFSET UNITYSDK_OFFSET(0x1571DB70)
#define FEIEBAJPIAE_ICGACGGDKAI_OFFSET UNITYSDK_OFFSET(0x1571CBB0)
#define FEIEBAJPIAE_IDOOGAKOCMG_OFFSET UNITYSDK_OFFSET(0x1570B190)
#define FEIEBAJPIAE_IHMIMBGNCKF_OFFSET UNITYSDK_OFFSET(0x15702B20)
#define FEIEBAJPIAE_IJMLDHEGLAP_OFFSET UNITYSDK_OFFSET(0x1570F2B0)
#define FEIEBAJPIAE_IKACOGOENGK_OFFSET UNITYSDK_OFFSET(0x157086D0)
#define FEIEBAJPIAE_IKIAMCPCPFK_OFFSET UNITYSDK_OFFSET(0x1570BFE0)
#define FEIEBAJPIAE_IKNBJLKPBCF_OFFSET UNITYSDK_OFFSET(0x1571C110)
#define FEIEBAJPIAE_ILIJAHHPLMH_OFFSET UNITYSDK_OFFSET(0x1571FF10)
#define FEIEBAJPIAE_ILMAJCMBKFA_OFFSET UNITYSDK_OFFSET(0x1571F4D0)
#define FEIEBAJPIAE_INFIIONLFJB_OFFSET UNITYSDK_OFFSET(0x157175D0)
#define FEIEBAJPIAE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x156F4010)
#define FEIEBAJPIAE_INMOENFFKDO_OFFSET UNITYSDK_OFFSET(0x15717910)
#define FEIEBAJPIAE_JBAPJBGKCAO_1_OFFSET UNITYSDK_OFFSET(0x15704970)
#define FEIEBAJPIAE_JBAPJBGKCAO_OFFSET UNITYSDK_OFFSET(0x15704710)
#define FEIEBAJPIAE_JBPIKOLOIEN_OFFSET UNITYSDK_OFFSET(0x157187D0)
#define FEIEBAJPIAE_JDBOOCBIOFJ_OFFSET UNITYSDK_OFFSET(0x15721800)
#define FEIEBAJPIAE_JEEGOHLMPGN_OFFSET UNITYSDK_OFFSET(0x15709A00)
#define FEIEBAJPIAE_JFINBNLEKBA_OFFSET UNITYSDK_OFFSET(0x1571B240)
#define FEIEBAJPIAE_JHEOCPGLFIN_OFFSET UNITYSDK_OFFSET(0x15712110)
#define FEIEBAJPIAE_JILFCMMGAJD_OFFSET UNITYSDK_OFFSET(0x1571A7D0)
#define FEIEBAJPIAE_JONMIBMOLNN_OFFSET UNITYSDK_OFFSET(0x15721C60)
#define FEIEBAJPIAE_JPABKJPNIAI_1_OFFSET UNITYSDK_OFFSET(0x1570FBF0)
#define FEIEBAJPIAE_JPABKJPNIAI_OFFSET UNITYSDK_OFFSET(0x1570FB00)
#define FEIEBAJPIAE_KCEPKEKKCMM_OFFSET UNITYSDK_OFFSET(0x1570BB50)
#define FEIEBAJPIAE_KDAMOCCEOCJ_OFFSET UNITYSDK_OFFSET(0x15708460)
#define FEIEBAJPIAE_KDGKPDLCLCB_OFFSET UNITYSDK_OFFSET(0x1570A7E0)
#define FEIEBAJPIAE_KEKOEDAJIFC_1_OFFSET UNITYSDK_OFFSET(0x1570C330)
#define FEIEBAJPIAE_KEKOEDAJIFC_2_OFFSET UNITYSDK_OFFSET(0x15713D90)
#define FEIEBAJPIAE_KEKOEDAJIFC_OFFSET UNITYSDK_OFFSET(0x15714F70)
#define FEIEBAJPIAE_KFGIHDBAABO_OFFSET UNITYSDK_OFFSET(0x15721BE0)
#define FEIEBAJPIAE_KIKHGHCGLNJ_OFFSET UNITYSDK_OFFSET(0x15721000)
#define FEIEBAJPIAE_KNGGHFKLPJL_OFFSET UNITYSDK_OFFSET(0x1571E720)
#define FEIEBAJPIAE_KODOPNLPOFN_OFFSET UNITYSDK_OFFSET(0x1571AF40)
#define FEIEBAJPIAE_KOHPHLOGBNK_OFFSET UNITYSDK_OFFSET(0x156F4BC0)
#define FEIEBAJPIAE_KONHOGKCNOJ_OFFSET UNITYSDK_OFFSET(0x15707930)
#define FEIEBAJPIAE_KOOKGGFFCGA_OFFSET UNITYSDK_OFFSET(0x156F3E20)
#define FEIEBAJPIAE_LBLAFJHAEJE_OFFSET UNITYSDK_OFFSET(0x156FF430)
#define FEIEBAJPIAE_LBMLABBMPPO_OFFSET UNITYSDK_OFFSET(0x1571D390)
#define FEIEBAJPIAE_LELBAPLJFFP_OFFSET UNITYSDK_OFFSET(0x15709570)
#define FEIEBAJPIAE_LHJIAGKBPBB_OFFSET UNITYSDK_OFFSET(0x156FF330)
#define FEIEBAJPIAE_LJHJOGMDADO_OFFSET UNITYSDK_OFFSET(0x156FFAD0)
#define FEIEBAJPIAE_LKGCGLDCJBJ_OFFSET UNITYSDK_OFFSET(0x15711FA0)
#define FEIEBAJPIAE_LNABPPKPGPK_OFFSET UNITYSDK_OFFSET(0x156FD210)
#define FEIEBAJPIAE_LNLLOBHJBGM_OFFSET UNITYSDK_OFFSET(0x15712FF0)
#define FEIEBAJPIAE_LNMDJJDPHOK_OFFSET UNITYSDK_OFFSET(0x156FEF70)
#define FEIEBAJPIAE_LOLGCIKEHPA_OFFSET UNITYSDK_OFFSET(0x15709FD0)
#define FEIEBAJPIAE_MDLFGNKFOLL_OFFSET UNITYSDK_OFFSET(0x156FF1C0)
#define FEIEBAJPIAE_MEKCGELLHPJ_OFFSET UNITYSDK_OFFSET(0x15703650)
#define FEIEBAJPIAE_MEPAGMIOIBH_OFFSET UNITYSDK_OFFSET(0x1571A600)
#define FEIEBAJPIAE_MFLJOKOGAMD_OFFSET UNITYSDK_OFFSET(0x156FF2C0)
#define FEIEBAJPIAE_MHIFMOBMOGL_OFFSET UNITYSDK_OFFSET(0x156F8AE0)
#define FEIEBAJPIAE_MKANDOAGLOD_OFFSET UNITYSDK_OFFSET(0x157221E0)
#define FEIEBAJPIAE_MLCBMJPMNDB_OFFSET UNITYSDK_OFFSET(0x15708E40)
#define FEIEBAJPIAE_MLHIJBBMOLG_OFFSET UNITYSDK_OFFSET(0x15719280)
#define FEIEBAJPIAE_MLNEKFBGLPL_OFFSET UNITYSDK_OFFSET(0x156FEFE0)
#define FEIEBAJPIAE_MMJMPJNMPBN_OFFSET UNITYSDK_OFFSET(0x15700E00)
#define FEIEBAJPIAE_NCFFPPPIGIF_1_OFFSET UNITYSDK_OFFSET(0x15720DA0)
#define FEIEBAJPIAE_NCFFPPPIGIF_OFFSET UNITYSDK_OFFSET(0x1571F0D0)
#define FEIEBAJPIAE_NEELPGMAEND_OFFSET UNITYSDK_OFFSET(0x15721ED0)
#define FEIEBAJPIAE_NIFNDPCDJBD_OFFSET UNITYSDK_OFFSET(0x156F8B50)
#define FEIEBAJPIAE_NLDCINELOGG_OFFSET UNITYSDK_OFFSET(0x15717A60)
#define FEIEBAJPIAE_NLKOMMJGLEH_OFFSET UNITYSDK_OFFSET(0x1571B5D0)
#define FEIEBAJPIAE_NOJHIHNNPJN_OFFSET UNITYSDK_OFFSET(0x156FF140)
#define FEIEBAJPIAE_NOOEDPFOEFD_OFFSET UNITYSDK_OFFSET(0x15714790)
#define FEIEBAJPIAE_NOOKHODLNNM_1_OFFSET UNITYSDK_OFFSET(0x15702130)
#define FEIEBAJPIAE_NOOKHODLNNM_OFFSET UNITYSDK_OFFSET(0x15704490)
#define FEIEBAJPIAE_OAFCDJMMKFF_OFFSET UNITYSDK_OFFSET(0x157057B0)
#define FEIEBAJPIAE_ODCCOLAAAOC_OFFSET UNITYSDK_OFFSET(0x15718410)
#define FEIEBAJPIAE_OEEJOIKHCLO_1_OFFSET UNITYSDK_OFFSET(0x15702F50)
#define FEIEBAJPIAE_OEEJOIKHCLO_OFFSET UNITYSDK_OFFSET(0x15702D30)
#define FEIEBAJPIAE_OFPAOEAFOGO_OFFSET UNITYSDK_OFFSET(0x1570AD70)
#define FEIEBAJPIAE_OGGFHLDKCLF_OFFSET UNITYSDK_OFFSET(0x15720E00)
#define FEIEBAJPIAE_OHOKKJODFMC_OFFSET UNITYSDK_OFFSET(0x1571B320)
#define FEIEBAJPIAE_OPGHANDJCEI_OFFSET UNITYSDK_OFFSET(0x15715C00)
#define FEIEBAJPIAE_OPNGIJGDFLL_OFFSET UNITYSDK_OFFSET(0x156F8860)
#define FEIEBAJPIAE_OPOBMLJGIGH_OFFSET UNITYSDK_OFFSET(0x157077C0)
#define FEIEBAJPIAE_PEJONBCDPFB_OFFSET UNITYSDK_OFFSET(0x156FFF60)
#define FEIEBAJPIAE_PIOIPNMGKHF_OFFSET UNITYSDK_OFFSET(0x156FBEF0)
#define FEIEBAJPIAE_PLFPLJAPCJI_OFFSET UNITYSDK_OFFSET(0x1571A6A0)
#define FEIEBAJPIAE_PMBIHCEDAHB_OFFSET UNITYSDK_OFFSET(0x156FEE50)
#define FEIEBAJPIAE_PMOBGOFIIGL_OFFSET UNITYSDK_OFFSET(0x1571CB10)
#define FEIEBAJPIAE_PNABMEBLCFE_OFFSET UNITYSDK_OFFSET(0x15707590)
#define FEIEBAJPIAE_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x156F52D0)

	class FEIEBAJPIAE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* HKMNMFGAFPH; // 0x10
		::JIJBCGDANLJ* EEFMDEHLLFI; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* ENNLKHEJOOL; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Int32>* MCNCJNGNGGH; // 0x28
		::KPDKCEAFBHI* PDENFEFCAGN; // 0x30
		::CCCJAOLPOAM BGDDKFHKAKM; // 0x38
		::System::Collections::Generic::List_1<::GHMGGIHEHJE*>* CBCELAPEMMG; // 0x60
		::Il2CppArray<::UnityEngine::RaycastHit>* DDDMMHLGKAH; // 0x68
		::Il2CppArray<::UnityEngine::Collider*>* HAOFACLNEJE; // 0x70
		::Il2CppArray<::UnityEngine::RaycastHit>* DFOLOAJDILC; // 0x78
		::Il2CppArray<::UnityEngine::Collider*>* LOBGBIGJEEM; // 0x80
		::System::Single PJJLEJDPNHI; // 0x88
		::System::Boolean CJMNIBIFDGD; // 0x8C
		::System::Byte _padding0[0x3];
		::System::Single BCPFIINIGBI; // 0x90
		// static const ::System::Object ODILIMALDCK; // 0x0
		// static const ::System::Object EBKFELIDMKC; // 0x0
		// static const ::System::Object MHNDBNGNNFJ; // 0x0
		// static const ::System::Object JBNBAFNOPKH; // 0x0
		// static const ::System::Object LEPHJEONMMN; // 0x0
		// static const ::System::Object OOHBCLPFGIL; // 0x0
		// static const ::System::Object ELBLMJHGNKB; // 0x0
		// static const ::System::Object KIHFLEPHOGK; // 0x0
		// static const ::System::Object FHEDNCLEPOK; // 0x0
		// static const ::System::Object AAKHAKLGEGD; // 0x0
		// static const ::System::Object CJPDBHIKJIP; // 0x0
		// static const ::System::Object DNIJAILGADM; // 0x0
		// static const ::System::Object JOILCLHHCGP; // 0x0
		// static const ::System::Object IAOFBDIEFBE; // 0x0
		// static const ::System::Object GOHNGNHCCEM; // 0x0
		// static const ::System::Object JBMJEEMNADK; // 0x0
		// static const ::System::Object BFIHKGNLICJ; // 0x0
		// static const ::System::Object DIHCKNKPCKK; // 0x0
		// static const ::System::Object JLCHHPOLLDI; // 0x0
		// static const ::System::Object MAPHKBOMIAP; // 0x0
		// static const ::System::Object LMPJDDGCKFE; // 0x0
		// static const ::System::Object BHJAALDNEFD; // 0x0
		// static const ::System::Object MFDLPENFKEM; // 0x0
		// static const ::System::Object EHGMKKLGHHB; // 0x0
		// static const ::System::Object MPHHBANEMEP; // 0x0
		// static const ::System::Object CFNGIDMHKEC; // 0x0
		// static const ::System::Object BBCDIHNECJJ; // 0x0
		// static const ::System::Object HIDEFHINIGK; // 0x0
		// static const ::System::Object MOIMFLGDBPK; // 0x0
		// static const ::System::Object DGMKFCLAGIL; // 0x0
		// static const ::System::Object KOAAAKFCJHB; // 0x0
		// static const ::System::Object EMJIOJKEKOM; // 0x0
		// static const ::System::Object MOMJHKOELCG; // 0x0
		// static const ::System::Object INGNDOMCOIO; // 0x0
		// static const ::System::Object NANDIGLKNPO; // 0x0
		// static const ::System::Object ADDCMKEHCPI; // 0x0
		// static const ::System::Object LJAILOAJABE; // 0x0
		// static const ::System::Object PECFHBAFMPP; // 0x0
		// static const ::System::Object CHIPBCKLAGJ; // 0x0
		// static const ::System::Object MFCLEPNHNCH; // 0x0
		// static const ::System::Object GMLFICCAIEI; // 0x0
		// static const ::System::Object NICOFHAPDII; // 0x0
		// static const ::System::Object MJKEMDHJPFM; // 0x0
		// static const ::System::Object JAKPEDILMFI; // 0x0
		// static const ::System::Object KKDNINCNFHH; // 0x0
		// static const ::System::Object ILKGIHCHBKA; // 0x0
		// static const ::System::Object KLABDDILBNJ; // 0x0
		// static const ::System::Object DOBHKPBCENO; // 0x0
		// static const ::System::Object IHKIIIEHGLC; // 0x0
		// static const ::System::Object FHNPHAGNHAC; // 0x0
		// static const ::System::Object JGIAJNHKOAE; // 0x0
		// static const ::System::Object AHAOBFOLMHA; // 0x0
		// static const ::System::Object LOOIHDDOJFJ; // 0x0
		// static const ::System::Object KGDGBEJLIIF; // 0x0
		// static const ::System::Object JFOAODGENNF; // 0x0
		// static const ::System::Object IILDDNJDIMH; // 0x0
		// static const ::System::Object KLCOCPLNGFH; // 0x0
		// static const ::System::Object KGNEJNNPBDK; // 0x0
		// static const ::System::Object DFCLDMEKBFL; // 0x0
		// static const ::System::Object AFDNKLLNAEF; // 0x0
		// static const ::System::Object GLFEMJPNMMB; // 0x0
		// static const ::System::Object LKKIJCBKOPL; // 0x0
		// static const ::System::Object BHOCENDLCNF; // 0x0
		// static const ::System::Object OMECAADLEEK; // 0x0
		// static const ::System::Object FLLDKFPKCLB; // 0x0
		// static const ::System::Object HNGLEEINFCD; // 0x0
		// static const ::System::Object OCFKHJLHLOG; // 0x0
		// static const ::System::Object LNHOPNEEEBE; // 0x0
		// static const ::System::Object FKDPLGIHJLJ; // 0x0
		// static const ::System::Object ANPCPPMDAEG; // 0x0
		// static const ::System::Object HEKDIBIOLGA; // 0x0
		// static const ::System::Object HGLAOEAFHJH; // 0x0
		// static const ::System::Object OAAGCKLJKIC; // 0x0
		// static const ::System::Object GHAHPODHOAB; // 0x0
		// static const ::System::Object MECKIFOCKEJ; // 0x0
		// static const ::System::Object BIPPNFMDJCK; // 0x0
		// static const ::System::Object BHGEACANGLG; // 0x0
		// static const ::System::Object ICEHNEOPKCN; // 0x0
		// static const ::System::Object NHBGMJMDNPM; // 0x0
		// static const ::System::Object BOAKNFIDDOM; // 0x0
		// static const ::System::Object MJLIPIDOKMK; // 0x0
		// static const ::System::Object ADFHEADKDHK; // 0x0
		// static const ::System::Object GMHOFOPFHPJ; // 0x0
		// static const ::System::Object JGFKIEDHCLK; // 0x0
		// static const ::System::Object LEJPJLNFBDE; // 0x0
		// static const ::System::String* GJOEGMJEHBI; // 0x0
		// static const ::System::Object LLMHCCMILEI; // 0x0
		::System::Void _ctor(::JIJBCGDANLJ* a1, ::KPDKCEAFBHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JIJBCGDANLJ*, ::KPDKCEAFBHI*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Single KOOKGGFFCGA()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + FEIEBAJPIAE_KOOKGGFFCGA_OFFSET))();
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_INITIALIZE_OFFSET))(this);
		}

		::System::Void KOHPHLOGBNK(::System::Int32 a1, ::BJIACBNKCCJ* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BJIACBNKCCJ*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_KOHPHLOGBNK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_TEARDOWN_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_EXECUTE_OFFSET))(this);
		}

		::System::Boolean MHIFMOBMOGL(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_MHIFMOBMOGL_OFFSET))(this, a1);
		}

		::System::Single PMBIHCEDAHB(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_PMBIHCEDAHB_OFFSET))(this, a1);
		}

		::System::Single LNMDJJDPHOK(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_LNMDJJDPHOK_OFFSET))(this, a1);
		}

		::System::Single MLNEKFBGLPL(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_MLNEKFBGLPL_OFFSET))(this, a1);
		}

		::System::Single EGOIMGBMKGF(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_EGOIMGBMKGF_OFFSET))(this, a1);
		}

		::System::Single FJPPEJBPMMM(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_FJPPEJBPMMM_OFFSET))(this, a1);
		}

		::System::Single NOJHIHNNPJN(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_NOJHIHNNPJN_OFFSET))(this, a1);
		}

		::System::Single MDLFGNKFOLL(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_MDLFGNKFOLL_OFFSET))(this, a1);
		}

		::System::Single AFFJBFEAJPO(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_AFFJBFEAJPO_OFFSET))(this, a1);
		}

		::System::Single MFLJOKOGAMD(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_MFLJOKOGAMD_OFFSET))(this, a1);
		}

		::System::Single LHJIAGKBPBB(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_LHJIAGKBPBB_OFFSET))(this, a1);
		}

		::System::Single DJGBAFKCLFG(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_DJGBAFKCLFG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 FPBMGMGNFCA(::GHMGGIHEHJE* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_FPBMGMGNFCA_OFFSET))(this, a1);
		}

		::System::Single LBLAFJHAEJE(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_LBLAFJHAEJE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GHAFAIENPMK(::BJIACBNKCCJ* a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::BJIACBNKCCJ*, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_GHAFAIENPMK_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 CGMFGELPCBN(::GHMGGIHEHJE* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_CGMFGELPCBN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 LJHJOGMDADO(::GHMGGIHEHJE* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_LJHJOGMDADO_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 PEJONBCDPFB(::GHMGGIHEHJE* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_PEJONBCDPFB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 MMJMPJNMPBN(::GHMGGIHEHJE* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_MMJMPJNMPBN_OFFSET))(this, a1);
		}

		::System::Single BKGFOBHJDKC(::GHMGGIHEHJE* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_BKGFOBHJDKC_OFFSET))(this, a1, a2);
		}

		::System::Single HICNCKEJJAL(::CKHFKFPPANI* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Single(*)(::PVOID, ::CKHFKFPPANI*, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_HICNCKEJJAL_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 IHMIMBGNCKF(::LJAIOGHEIBA* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::LJAIOGHEIBA*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_IHMIMBGNCKF_OFFSET))(this, a1);
		}

		::System::Void OEEJOIKHCLO(::GHMGGIHEHJE* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_OEEJOIKHCLO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NOOKHODLNNM(::GHMGGIHEHJE* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_NOOKHODLNNM_OFFSET))(this, a1, a2);
		}

		::System::Void JBAPJBGKCAO(::GHMGGIHEHJE* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_JBAPJBGKCAO_OFFSET))(this, a1, a2);
		}

		::System::Void JBAPJBGKCAO_1(::UnityEngine::Vector3 a1, ::BJIACBNKCCJ* a2, ::System::Single a3, ::System::Single a4, ::POFHPPEDJKE* a5, ::System::Action* a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::BJIACBNKCCJ*, ::System::Single, ::System::Single, ::POFHPPEDJKE*, ::System::Action*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_JBAPJBGKCAO_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void NOOKHODLNNM_1(::UnityEngine::Vector3 a1, ::BJIACBNKCCJ* a2, ::System::Single a3, ::System::Single a4, ::POFHPPEDJKE* a5, ::System::Action* a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::BJIACBNKCCJ*, ::System::Single, ::System::Single, ::POFHPPEDJKE*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_NOOKHODLNNM_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void OEEJOIKHCLO_1(::System::Single a1, ::System::Single a2, ::BJIACBNKCCJ* a3, ::System::Single a4, ::System::Single a5, ::POFHPPEDJKE* a6, ::System::Action* a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::BJIACBNKCCJ*, ::System::Single, ::System::Single, ::POFHPPEDJKE*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_OEEJOIKHCLO_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void HEBDLFBLMKI(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::BJIACBNKCCJ* a3, ::System::Single a4, ::System::Single a5, ::BJIACBNKCCJ* a6, ::System::Single a7, ::System::Single a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::BJIACBNKCCJ*, ::System::Single, ::System::Single, ::BJIACBNKCCJ*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_HEBDLFBLMKI_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void GIMJMJAEGEL(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::BJIACBNKCCJ* a3, ::System::Single a4, ::System::Single a5, ::BJIACBNKCCJ* a6, ::System::Single a7, ::System::Single a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::BJIACBNKCCJ*, ::System::Single, ::System::Single, ::BJIACBNKCCJ*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_GIMJMJAEGEL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void FPJHBNHFBFO(::System::Single a1, ::System::Single a2, ::BJIACBNKCCJ* a3, ::System::Single a4, ::System::Single a5, ::BJIACBNKCCJ* a6, ::System::Single a7, ::System::Single a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::BJIACBNKCCJ*, ::System::Single, ::System::Single, ::BJIACBNKCCJ*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_FPJHBNHFBFO_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean PNABMEBLCFE(::BJIACBNKCCJ* a1, ::BJIACBNKCCJ* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJIACBNKCCJ*, ::BJIACBNKCCJ*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_PNABMEBLCFE_OFFSET))(this, a1, a2);
		}

		::System::Void DHKOILIMFAE(::System::Single a1, ::System::Single a2, ::BJIACBNKCCJ* a3, ::System::Single a4, ::System::Single a5, ::BJIACBNKCCJ* a6, ::System::Single a7, ::System::Single a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::BJIACBNKCCJ*, ::System::Single, ::System::Single, ::BJIACBNKCCJ*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_DHKOILIMFAE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean HPMIIHEDDAO(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_HPMIIHEDDAO_OFFSET))(this, a1);
		}

		::System::Void MEKCGELLHPJ(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_MEKCGELLHPJ_OFFSET))(this, a1);
		}

		static ::System::Single OPOBMLJGIGH(::BJIACBNKCCJ* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::BJIACBNKCCJ*, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_OPOBMLJGIGH_OFFSET))(a1, a2);
		}

		static ::System::Void ACKECAHKABO(::EPCHCFOEJNL a1, ::BJIACBNKCCJ* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::EPCHCFOEJNL, ::BJIACBNKCCJ*, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_ACKECAHKABO_OFFSET))(a1, a2, a3);
		}

		::System::Boolean BLJLPJIAJGF(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_BLJLPJIAJGF_OFFSET))(this, a1);
		}

		::System::Void KONHOGKCNOJ(::GHMGGIHEHJE* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_KONHOGKCNOJ_OFFSET))(this, a1, a2);
		}

		::System::Void IKACOGOENGK(::GHMGGIHEHJE* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_IKACOGOENGK_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Quaternion KDAMOCCEOCJ(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_KDAMOCCEOCJ_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Boolean MLCBMJPMNDB(::GHMGGIHEHJE* a1, ::BJIACBNKCCJ* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::UInt32 a6, ::System::Boolean a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::BJIACBNKCCJ*, ::System::Single, ::System::Single, ::System::Single, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_MLCBMJPMNDB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void CBMIMLEADPE(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_CBMIMLEADPE_OFFSET))(this, a1);
		}

		::System::Void EEAMLLEHPOC(::GHMGGIHEHJE* a1, ::BJIACBNKCCJ* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::BJIACBNKCCJ*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_EEAMLLEHPOC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FFLKMIOJHPF(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_FFLKMIOJHPF_OFFSET))(this, a1);
		}

		::System::Void LOLGCIKEHPA(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_LOLGCIKEHPA_OFFSET))(this, a1);
		}

		::System::Void HFOKNPLECEC(::GHMGGIHEHJE* a1, ::RPG::GameCore::B51RacingStatType a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::GameCore::B51RacingStatType, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_HFOKNPLECEC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OFPAOEAFOGO(::GHMGGIHEHJE* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_OFPAOEAFOGO_OFFSET))(this, a1, a2);
		}

		::System::Void KDGKPDLCLCB(::GHMGGIHEHJE* a1, ::MINFEAKALGE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::MINFEAKALGE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_KDGKPDLCLCB_OFFSET))(this, a1, a2);
		}

		::System::Void GNABIHLFMOG(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_GNABIHLFMOG_OFFSET))(this, a1);
		}

		::System::Boolean CEBKIONNCJD(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_CEBKIONNCJD_OFFSET))(this, a1);
		}

		::System::Boolean BCIMNJAPFBK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_BCIMNJAPFBK_OFFSET))(this);
		}

		::System::Void EMPNMDLOCCE(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_EMPNMDLOCCE_OFFSET))(this, a1);
		}

		::System::Void IDOOGAKOCMG(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_IDOOGAKOCMG_OFFSET))(this, a1);
		}

		::System::Void IKIAMCPCPFK(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_IKIAMCPCPFK_OFFSET))(this, a1);
		}

		::System::Void BJEOKFFPDHA(::GHMGGIHEHJE* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_BJEOKFFPDHA_OFFSET))(this, a1, a2);
		}

		::System::Void HAOEDMGEFBI(::System::Single a1, ::BJIACBNKCCJ* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::BJIACBNKCCJ*, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_HAOEDMGEFBI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GCHOAMECIBA(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_GCHOAMECIBA_OFFSET))(this, a1, a2);
		}

		::System::Void OPGHANDJCEI(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_OPGHANDJCEI_OFFSET))(this, a1);
		}

		::System::Void CDEEEDOPLLL(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_CDEEEDOPLLL_OFFSET))(this, a1);
		}

		::System::Void GJGNLPFPALA(::GHMGGIHEHJE* a1, ::NAJMEPONCEL* a2, ::CKHFKFPPANI* a3, ::NFDMOPAMCMA* a4)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::NAJMEPONCEL*, ::CKHFKFPPANI*, ::NFDMOPAMCMA*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_GJGNLPFPALA_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Single INFIIONLFJB(::NFDMOPAMCMA* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::NFDMOPAMCMA*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_INFIIONLFJB_OFFSET))(a1, a2, a3);
		}

		::System::Void CCOLLKDCDFG(::GHMGGIHEHJE* a1, ::NFDMOPAMCMA* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::NFDMOPAMCMA*, ::System::Boolean))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_CCOLLKDCDFG_OFFSET))(this, a1, a2, a3);
		}

		::System::Single JEEGOHLMPGN(::GHMGGIHEHJE* a1, ::NFDMOPAMCMA* a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*, ::NFDMOPAMCMA*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_JEEGOHLMPGN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single AOIIFOHMGMF(::GHMGGIHEHJE* a1, ::NFDMOPAMCMA* a2)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*, ::NFDMOPAMCMA*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_AOIIFOHMGMF_OFFSET))(this, a1, a2);
		}

		::System::Void GIHAMBJOGGM(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_GIHAMBJOGGM_OFFSET))(this, a1);
		}

		::System::Void LNLLOBHJBGM(::GHMGGIHEHJE* a1, ::NAJMEPONCEL* a2, ::CKHFKFPPANI* a3, ::APKMABMDGDC* a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::NAJMEPONCEL*, ::CKHFKFPPANI*, ::APKMABMDGDC*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_LNLLOBHJBGM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Single DINMKLLAPCB(::GHMGGIHEHJE* a1, ::NAJMEPONCEL* a2, ::APKMABMDGDC* a3)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*, ::NAJMEPONCEL*, ::APKMABMDGDC*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_DINMKLLAPCB_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NLDCINELOGG(::GHMGGIHEHJE* a1, ::APKMABMDGDC* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::APKMABMDGDC*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_NLDCINELOGG_OFFSET))(this, a1, a2);
		}

		::System::Void INMOENFFKDO(::GHMGGIHEHJE* a1, ::APKMABMDGDC* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::APKMABMDGDC*, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_INMOENFFKDO_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Single FDBAOGNMPHD(::NFDMOPAMCMA* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::NFDMOPAMCMA*, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_FDBAOGNMPHD_OFFSET))(a1, a2);
		}

		::System::Void AHPCCPBHAMB(::GHMGGIHEHJE* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Boolean))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_AHPCCPBHAMB_OFFSET))(this, a1, a2);
		}

		::System::Void AOFBDHGFMGP(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_AOFBDHGFMGP_OFFSET))(this, a1);
		}

		::System::Void ODCCOLAAAOC(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_ODCCOLAAAOC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean BHGNJFNCAOI(::UnityEngine::Collider* a1, ::UnityEngine::Collider* a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_BHGNJFNCAOI_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean HIEOLBFMLJK(::UnityEngine::Collider* a1, ::UnityEngine::Collider* a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_HIEOLBFMLJK_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean JBPIKOLOIEN(::GHMGGIHEHJE* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_JBPIKOLOIEN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MLHIJBBMOLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_MLHIJBBMOLG_OFFSET))(this);
		}

		::System::Void BJOBDICOLFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_BJOBDICOLFP_OFFSET))(this);
		}

		static ::System::Single AJONMIMNMOL(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_AJONMIMNMOL_OFFSET))(a1, a2);
		}

		static ::System::Boolean IADLKLBGHOM(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_IADLKLBGHOM_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Boolean HBLAPIMGMND(::GHMGGIHEHJE* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_HBLAPIMGMND_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Single HMEBDJAHIKB(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_HMEBDJAHIKB_OFFSET))(a1, a2, a3);
		}

		::System::Void NOOEDPFOEFD(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_NOOEDPFOEFD_OFFSET))(this, a1);
		}

		::System::Void CJFFFIHJHKJ(::GHMGGIHEHJE* a1, ::KKKKGPJLODD* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::KKKKGPJLODD*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_CJFFFIHJHKJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HKDEECALHEG(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_HKDEECALHEG_OFFSET))(this, a1);
		}

		::System::Void CFEJIMGPBKK(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_CFEJIMGPBKK_OFFSET))(this, a1);
		}

		::System::Single MEPAGMIOIBH(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_MEPAGMIOIBH_OFFSET))(this, a1);
		}

		::System::Single PLFPLJAPCJI(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_PLFPLJAPCJI_OFFSET))(this, a1);
		}

		static ::System::Single HNFEOCHONEF(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_HNFEOCHONEF_OFFSET))(a1);
		}

		static ::System::Single JILFCMMGAJD(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_JILFCMMGAJD_OFFSET))(a1);
		}

		::System::Void KEKOEDAJIFC(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_KEKOEDAJIFC_OFFSET))(this, a1);
		}

		static ::System::Single FIFNFOBDGNP(::CPNHCLGMDCC* a1)
		{
			return ((::System::Single(*)(::CPNHCLGMDCC*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_FIFNFOBDGNP_OFFSET))(a1);
		}

		::UnityEngine::Vector3 BFHJNDPOCAB(::GHMGGIHEHJE* a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_BFHJNDPOCAB_OFFSET))(this, a1, a2);
		}

		::System::Void KEKOEDAJIFC_1(::GHMGGIHEHJE* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_KEKOEDAJIFC_1_OFFSET))(this, a1, a2);
		}

		::System::Void KEKOEDAJIFC_2(::GHMGGIHEHJE* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_KEKOEDAJIFC_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CHNJFOEGIKL(::GHMGGIHEHJE* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_CHNJFOEGIKL_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 DJIIDFOCNCE(::GHMGGIHEHJE* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::GHMGGIHEHJE*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_DJIIDFOCNCE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 HDKJMCGMPBC(::GHMGGIHEHJE* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::GHMGGIHEHJE*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_HDKJMCGMPBC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CHLPOGKDPBK(::NAJMEPONCEL* a1, ::CKHFKFPPANI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NAJMEPONCEL*, ::CKHFKFPPANI*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_CHLPOGKDPBK_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean DADHJAMKJDN(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_DADHJAMKJDN_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 KODOPNLPOFN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_KODOPNLPOFN_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void DACNJILDBCF(::GHMGGIHEHJE* a1, ::NAJMEPONCEL* a2, ::DHAGPJEEPCI* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::NAJMEPONCEL*, ::DHAGPJEEPCI*, ::System::Boolean))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_DACNJILDBCF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean LKGCGLDCJBJ(::NAJMEPONCEL* a1, ::DHAGPJEEPCI* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAJMEPONCEL*, ::DHAGPJEEPCI*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_LKGCGLDCJBJ_OFFSET))(this, a1, a2);
		}

		::System::Void FKDLACJACDK(::GHMGGIHEHJE* a1, ::NAJMEPONCEL* a2, ::DHAGPJEEPCI* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::NAJMEPONCEL*, ::DHAGPJEEPCI*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_FKDLACJACDK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JHEOCPGLFIN(::GHMGGIHEHJE* a1, ::NAJMEPONCEL* a2, ::DHAGPJEEPCI* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::NAJMEPONCEL*, ::DHAGPJEEPCI*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_JHEOCPGLFIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IJMLDHEGLAP(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_IJMLDHEGLAP_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 JPABKJPNIAI(::GHMGGIHEHJE* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::GHMGGIHEHJE*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_JPABKJPNIAI_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 JPABKJPNIAI_1(::GHMGGIHEHJE* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::GHMGGIHEHJE*, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_JPABKJPNIAI_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Vector3 GFAJDKDHLHI(::GHMGGIHEHJE* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::GHMGGIHEHJE*, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_GFAJDKDHLHI_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 GMKPPNBHOIM(::GHMGGIHEHJE* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::GHMGGIHEHJE*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_GMKPPNBHOIM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OPNGIJGDFLL(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_OPNGIJGDFLL_OFFSET))(this, a1);
		}

		::System::Void PIOIPNMGKHF(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_PIOIPNMGKHF_OFFSET))(this, a1);
		}

		::System::Boolean IKNBJLKPBCF(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::GHMGGIHEHJE* a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GHMGGIHEHJE*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_IKNBJLKPBCF_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::Vector3 LBMLABBMPPO(::GHMGGIHEHJE* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_LBMLABBMPPO_OFFSET))(this, a1);
		}

		static ::System::Void PMOBGOFIIGL(::CKHFKFPPANI* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::CKHFKFPPANI*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_PMOBGOFIIGL_OFFSET))(a1, a2);
		}

		static ::System::Void BHANIHCFNMA(::CKHFKFPPANI* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::CKHFKFPPANI*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_BHANIHCFNMA_OFFSET))(a1, a2, a3);
		}

		::UnityEngine::Quaternion CNNIINBJAEK(::GHMGGIHEHJE* a1, ::UnityEngine::Quaternion a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::GHMGGIHEHJE*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_CNNIINBJAEK_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean DFIDCEEFKOI(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_DFIDCEEFKOI_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean BJOPOJBFLAM(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_BJOPOJBFLAM_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void ICGACGGDKAI(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2, ::GHMGGIHEHJE* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_ICGACGGDKAI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Quaternion HGLKCMBOGDK(::BJIACBNKCCJ* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Quaternion a5, ::UnityEngine::Vector3 a6)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::BJIACBNKCCJ*, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_HGLKCMBOGDK_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Single JFINBNLEKBA(::RPG::Client::LittleGame::RoadRash::ProjectileParams a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::RPG::Client::LittleGame::RoadRash::ProjectileParams, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_JFINBNLEKBA_OFFSET))(a1, a2);
		}

		static ::System::Single FNFCOFOPMIL(::RPG::Client::LittleGame::RoadRash::ProjectileParams a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::RPG::Client::LittleGame::RoadRash::ProjectileParams, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_FNFCOFOPMIL_OFFSET))(a1, a2);
		}

		::System::Single OHOKKJODFMC(::RPG::Client::LittleGame::RoadRash::ProjectileParams a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::ProjectileParams, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_OHOKKJODFMC_OFFSET))(this, a1, a2, a3);
		}

		::System::Single KNGGHFKLPJL(::RPG::Client::LittleGame::RoadRash::ProjectileParams a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::ProjectileParams, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_KNGGHFKLPJL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean NLKOMMJGLEH(::RPG::Client::LittleGame::RoadRash::ProjectileParams a1, ::BJIACBNKCCJ* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::ProjectileParams, ::BJIACBNKCCJ*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_NLKOMMJGLEH_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Boolean FBAEGOIABGJ(::BJIACBNKCCJ* a1, ::System::Single a2, ::BJIACBNKCCJ* a3, ::System::Single a4, ::System::Single a5, ::BJIACBNKCCJ* a6, ::BJIACBNKCCJ* a7, ::System::Single a8, ::System::Single a9, ::System::Single a10)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJIACBNKCCJ*, ::System::Single, ::BJIACBNKCCJ*, ::System::Single, ::System::Single, ::BJIACBNKCCJ*, ::BJIACBNKCCJ*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_FBAEGOIABGJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::UnityEngine::Vector3 BJBKFBOOHOD(::CKHFKFPPANI* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::CKHFKFPPANI*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_BJBKFBOOHOD_OFFSET))(this, a1);
		}

		::System::Void IBJJOFCFKFD(::RPG::Client::LittleGame::RoadRash::ProjectileHitEffectConfig a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::ProjectileHitEffectConfig, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_IBJJOFCFKFD_OFFSET))(this, a1, a2, a3);
		}

		::System::Single FPHECEJFBLB(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_FPHECEJFBLB_OFFSET))(this, a1);
		}

		::System::Single KCEPKEKKCMM(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_KCEPKEKKCMM_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 EFBOEFECLIF(::NAJMEPONCEL* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::NAJMEPONCEL*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_EFBOEFECLIF_OFFSET))(this, a1, a2);
		}

		::System::Void EMLPOOIPPBI(::NAJMEPONCEL* a1, ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NAJMEPONCEL*, ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_EMLPOOIPPBI_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 FKOHOJPHJEC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_FKOHOJPHJEC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LNABPPKPGPK(::Entitas::IGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_LNABPPKPGPK_OFFSET))(this, a1);
		}

		static ::System::Single IALKJKJCKFN(::BJIACBNKCCJ* a1, ::System::Single a2, ::BJIACBNKCCJ* a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::BJIACBNKCCJ*, ::System::Single, ::BJIACBNKCCJ*, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_IALKJKJCKFN_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void ECIPAIKLCGL(::GHMGGIHEHJE* a1, ::BJIACBNKCCJ* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::BJIACBNKCCJ*, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_ECIPAIKLCGL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LELBAPLJFFP(::GHMGGIHEHJE* a1, ::BJIACBNKCCJ* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::UInt32 a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::BJIACBNKCCJ*, ::System::Single, ::System::Single, ::System::Single, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_LELBAPLJFFP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void ILMAJCMBKFA(::GHMGGIHEHJE* a1, ::BJIACBNKCCJ* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::BJIACBNKCCJ*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_ILMAJCMBKFA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void ILIJAHHPLMH(::GHMGGIHEHJE* a1, ::UnityEngine::Collider* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_ILIJAHHPLMH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BLPEHEEJLAM(::GHMGGIHEHJE* a1, ::HPMECOPBDBE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::HPMECOPBDBE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_BLPEHEEJLAM_OFFSET))(this, a1, a2);
		}

		::System::Void ECKFDHGOCLG(::Entitas::IGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_ECKFDHGOCLG_OFFSET))(this, a1);
		}

		::System::Void HACMNKEMEBN(::Entitas::IGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_HACMNKEMEBN_OFFSET))(this, a1);
		}

		::System::Void CHGLFDLEEKM(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_CHGLFDLEEKM_OFFSET))(this, a1);
		}

		::System::Boolean BFIBOJIADJI(::GHMGGIHEHJE* a1, ::Entitas::IGroup* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::Entitas::IGroup*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_BFIBOJIADJI_OFFSET))(this, a1, a2);
		}

		::System::Single NCFFPPPIGIF(::BJIACBNKCCJ* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::BJIACBNKCCJ*, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_NCFFPPPIGIF_OFFSET))(this, a1, a2);
		}

		::System::Single NCFFPPPIGIF_1(::CKHFKFPPANI* a1)
		{
			return ((::System::Single(*)(::PVOID, ::CKHFKFPPANI*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_NCFFPPPIGIF_1_OFFSET))(this, a1);
		}

		::System::Single OGGFHLDKCLF(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_OGGFHLDKCLF_OFFSET))(this, a1, a2);
		}

		::System::Void NIFNDPCDJBD(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_NIFNDPCDJBD_OFFSET))(this, a1, a2);
		}

		::System::Single EGHGHKCJJNB(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_EGHGHKCJJNB_OFFSET))(this, a1, a2);
		}

		::System::Void KIKHGHCGLNJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_KIKHGHCGLNJ_OFFSET))(this, a1);
		}

		::System::Void DLKFDKAIDCA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_DLKFDKAIDCA_OFFSET))(this, a1);
		}

		::System::Void KFGIHDBAABO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_KFGIHDBAABO_OFFSET))(this, a1);
		}

		::System::Boolean JONMIBMOLNN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_JONMIBMOLNN_OFFSET))(this);
		}

		::System::Void JDBOOCBIOFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_JDBOOCBIOFJ_OFFSET))(this);
		}

		static ::System::Boolean FEAFOJEBEPD(::RPG::Client::LittleGame::RoadRash::EEngineState a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::RoadRash::EEngineState))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_FEAFOJEBEPD_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 NEELPGMAEND(::GHMGGIHEHJE* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>* a4)
		{
			return ((::UnityEngine::Vector3(*)(::GHMGGIHEHJE*, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>*))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_NEELPGMAEND_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void HKAJBAJPNAC(::BJIACBNKCCJ* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::BJIACBNKCCJ*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_HKAJBAJPNAC_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean OAFCDJMMKFF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_OAFCDJMMKFF_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AJHHAPHLCKF(::UnityEngine::CapsuleCollider* a1, ::UnityEngine::Rigidbody* a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::RaycastHit a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::CapsuleCollider*, ::UnityEngine::Rigidbody*, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_AJHHAPHLCKF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Boolean MKANDOAGLOD(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_MKANDOAGLOD_OFFSET))(a1, a2, a3);
		}

		::System::Void FKBDBMKOJLB(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_FKBDBMKOJLB_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Boolean HFKDOEPELCL(::RPG::Client::B51Racing::RoadRashGameHitSource a1, ::RPG::Client::B51Racing::RoadRashGameHitSource a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::B51Racing::RoadRashGameHitSource, ::RPG::Client::B51Racing::RoadRashGameHitSource))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_HFKDOEPELCL_OFFSET))(a1, a2);
		}

		static ::System::Single CGMAGELGEMD(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + FEIEBAJPIAE_CGMAGELGEMD_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
