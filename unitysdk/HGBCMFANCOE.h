#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BODIAENCNJK.h"
#include "unitysdk/CHEHADCMFOI.h"
#include "unitysdk/FDLDBJMEBDH.h"
#include "unitysdk/FIHMGKLCINA.h"
#include "unitysdk/IMFCNAEANKD.h"
#include "unitysdk/KHCJDCLPAMC.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/PNOFDHPNLPE.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/AcquireFiveDimPlayerBeatBackReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/AcquireFiveDimPlayerRebornReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/DashInterruptOrbPhase.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/DisablePlayerMoveReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/EnterDashReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/LandingLevel.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PlayerBehaviorFlag.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/ViewGravityInterpolationFlag.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FloatCurve; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class Transform; }

#define HGBCMFANCOE_BDLOFAEOFHH_OFFSET UNITYSDK_OFFSET(0x3C324C0)
#define HGBCMFANCOE_BJEANHMFOOI_OFFSET UNITYSDK_OFFSET(0x3C32850)
#define HGBCMFANCOE_CFEIIMNMGCB_OFFSET UNITYSDK_OFFSET(0x3C32120)
#define HGBCMFANCOE_CKANLJAJIOG_OFFSET UNITYSDK_OFFSET(0x3C322E0)
#define HGBCMFANCOE_CMAFEMHOLKK_OFFSET UNITYSDK_OFFSET(0x3C32670)
#define HGBCMFANCOE_COCEOHHGMFL_OFFSET UNITYSDK_OFFSET(0x3C32880)
#define HGBCMFANCOE_DAJGGCDHNMA_OFFSET UNITYSDK_OFFSET(0x3C322A0)
#define HGBCMFANCOE_DIIBACHICNJ_OFFSET UNITYSDK_OFFSET(0x3C32F10)
#define HGBCMFANCOE_ECNIFHAKHJC_OFFSET UNITYSDK_OFFSET(0x3C32FB0)
#define HGBCMFANCOE_ECOKPJDHMHN_OFFSET UNITYSDK_OFFSET(0x3C32FC0)
#define HGBCMFANCOE_FMNGDCPEGOI_OFFSET UNITYSDK_OFFSET(0x3C321D0)
#define HGBCMFANCOE_FOMDELLELFK_OFFSET UNITYSDK_OFFSET(0x3C33010)
#define HGBCMFANCOE_GGIJADFMPBE_OFFSET UNITYSDK_OFFSET(0x3C32C40)
#define HGBCMFANCOE_GHDNOFAEHFK_OFFSET UNITYSDK_OFFSET(0x3C32C10)
#define HGBCMFANCOE_GJAEKKILLHD_OFFSET UNITYSDK_OFFSET(0x3C32EA0)
#define HGBCMFANCOE_HGDKAKDCAPF_OFFSET UNITYSDK_OFFSET(0x3C32490)
#define HGBCMFANCOE_IAJHHMLCNCK_OFFSET UNITYSDK_OFFSET(0x3C320D0)
#define HGBCMFANCOE_IHIEAAHMCAE_OFFSET UNITYSDK_OFFSET(0x3C32C50)
#define HGBCMFANCOE_JKLCJONONKK_OFFSET UNITYSDK_OFFSET(0x3C326A0)
#define HGBCMFANCOE_LHALEMGAFCD_OFFSET UNITYSDK_OFFSET(0x3C322C0)
#define HGBCMFANCOE_LHKAKHNPIND_OFFSET UNITYSDK_OFFSET(0x3C32A30)
#define HGBCMFANCOE_MIKEFENCDCM_OFFSET UNITYSDK_OFFSET(0x3C32F60)
#define HGBCMFANCOE_MKFAFFJKDEN_OFFSET UNITYSDK_OFFSET(0x3C330B0)
#define HGBCMFANCOE_NNPBOGFNKKE_OFFSET UNITYSDK_OFFSET(0x3C32A60)
#define HGBCMFANCOE_OACEKPBCNAD_OFFSET UNITYSDK_OFFSET(0x3C32080)
#define HGBCMFANCOE_OLOJPLCBLPJ_OFFSET UNITYSDK_OFFSET(0x3C32F00)
#define HGBCMFANCOE_PADKLAPPBBC_OFFSET UNITYSDK_OFFSET(0x3C32CC0)
#define HGBCMFANCOE_PGCMBMMAAKF_OFFSET UNITYSDK_OFFSET(0x3C32170)
#define HGBCMFANCOE_PJMMKJMHCKH_OFFSET UNITYSDK_OFFSET(0x3C32E70)
#define HGBCMFANCOE_PLLHBPIPIGA_OFFSET UNITYSDK_OFFSET(0x3C32280)
#define HGBCMFANCOE_PLOLKAIFCAB_OFFSET UNITYSDK_OFFSET(0x3C33060)

	struct alignas(8) HGBCMFANCOE
	{
		::UnityEngine::Vector2 IADBDJCKLEH; // 0x10
		::UnityEngine::Vector2 CNNOBOHEKHL; // 0x18
		::UnityEngine::Vector2 KGDAMPEEGMO; // 0x20
		::System::Boolean DFIMHINHBGD; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single CIFCGAEPHFC; // 0x2C
		::System::Boolean LCLGFNEOHNA; // 0x30
		::System::Boolean CLBEDEABFEB; // 0x31
		::System::Boolean FCPFPGGDPBF; // 0x32
		::System::Boolean PGDIGGOPFFP; // 0x33
		::System::Boolean ILFHDJIPDIF; // 0x34
		::System::Byte _padding1[0x3];
		::System::Single PIKAOJJEFGP; // 0x38
		::System::Boolean HEFKDFKOILG; // 0x3C
		::System::Byte _padding2[0x3];
		::System::Single PFECIEJNBFB; // 0x40
		::System::Boolean MIKDLENKPMO; // 0x44
		::System::Boolean NJGJBILPJHO; // 0x45
		::System::Byte _padding3[0x2];
		::System::Single FCKKCJIJFLB; // 0x48
		::System::Int32 HJEJLIMEENO; // 0x4C
		::System::Boolean EGIJFKPKCKK; // 0x50
		::System::Boolean LEPHNANJNED; // 0x51
		::System::Byte _padding4[0x2];
		::System::Single CALBJJCEMHA; // 0x54
		::System::Single FIEDMLPMIJA; // 0x58
		::RPG::Client::LittleGame::FiveDim::LandingLevel FIFGKDPIKHN; // 0x5C
		::System::Single EDGMBLAJIPD; // 0x60
		::System::Boolean FHDDAHMFOOE; // 0x64
		::System::Byte _padding5[0x3];
		::UnityEngine::Vector3 GPABBJIHHGA; // 0x68
		::UnityEngine::Vector3 ALMBGKOAPCB; // 0x74
		::System::UInt32 LOPIEOJABEG; // 0x80
		::System::UInt32 JJNJFACHHCH; // 0x84
		::BODIAENCNJK JIHIDCICMOG; // 0x88
		::System::UInt32 MCCNDJJMNJE; // 0x2B8
		::System::Int32 LNBAMMNGNIA; // 0x2BC
		::System::Int32 NAJAFJAELKG; // 0x2C0
		::System::Single ANOLFNJHNHK; // 0x2C4
		::System::Boolean DMAKNAAHDIA; // 0x2C8
		::System::Byte _padding6[0x3];
		::UnityEngine::Vector3 NHKMBHDDDIP; // 0x2CC
		::UnityEngine::Vector3 GDILELCCGLI; // 0x2D8
		::UnityEngine::Vector3 NIBGNGICDOO; // 0x2E4
		::UnityEngine::Vector3 HHFLGEKONOM; // 0x2F0
		::UnityEngine::Vector3 LBLKFGGBAKD; // 0x2FC
		::System::Boolean COGODALAJCE; // 0x308
		::System::Boolean NLNHJGBKGBE; // 0x309
		::System::Boolean BKHJOPGNNFC; // 0x30A
		::System::Boolean BEBMMGCLOBC; // 0x30B
		::System::Boolean NIOEFBLIMIP; // 0x30C
		::System::Boolean ABGBHBNACBO; // 0x30D
		::System::Boolean ENDICGGJEDD; // 0x30E
		::System::Boolean BINEMFCDAHF; // 0x30F
		::System::Boolean ABIMHAJKFNG; // 0x310
		::System::Boolean MALAHGLOAHO; // 0x311
		::System::Byte _padding7[0x2];
		::System::Int32 GPLPPKBDGPM; // 0x314
		::System::Single NAIGNDMGIPO; // 0x318
		::System::Boolean NIOMBPIDDEB; // 0x31C
		::System::Byte _padding8[0x3];
		::KLNKLOMDIIC NJINGGNLOHG; // 0x320
		::System::Single MHBJPLHNAGA; // 0x388
		::System::Boolean PNLODLIBOOM; // 0x38C
		::System::Boolean KFHIENJIPMI; // 0x38D
		::System::Byte _padding9[0x2];
		::System::Single OJIEAMAAEGC; // 0x390
		::RPG::Client::LittleGame::FiveDim::DisablePlayerMoveReason DFPKEAGOIEF; // 0x394
		::KHCJDCLPAMC OPJLJOPBGOJ; // 0x398
		::RPG::Client::LittleGame::Move::MoveState ODKFODPEPNC; // 0x3C8
		::RPG::Client::LittleGame::Move::MoveState KKDFCJEENEA; // 0x3CC
		::RPG::Client::LittleGame::Move::MoveState NPDNEEPHEKN; // 0x3D0
		::RPG::Client::LittleGame::Move::MoveState MPBKLEDCCDM; // 0x3D4
		::UnityEngine::Vector3 IECOCNELPAK; // 0x3D8
		::UnityEngine::Vector3 BJFPDFGHJIG; // 0x3E4
		::UnityEngine::Vector3 MJOLHEDKMGO; // 0x3F0
		::System::Boolean FADFMGJFCIF; // 0x3FC
		::System::Byte _padding10[0x3];
		::System::Single CMKHPKJNCMO; // 0x400
		::UnityEngine::Vector3 FOMPDLOCKIH; // 0x404
		::UnityEngine::Vector3 GEIGBMFKBID; // 0x410
		::System::Boolean IHLODLNFJKK; // 0x41C
		::System::Boolean LMMGHADLCDE; // 0x41D
		::System::Byte _padding11[0x2];
		::UnityEngine::RaycastHit DOOODAIJPKI; // 0x420
		::RPG::PoolList_1<::UnityEngine::RaycastHit>* ACGBAAAAAGB; // 0x450
		::System::Int32 HMGBOLNBDGA; // 0x458
		::System::Byte _padding12[0x4];
		::UnityEngine::Transform* HNKHODDNHPK; // 0x460
		::RPG::PoolList_1<::System::Int32>* NMKCNAFLHMD; // 0x468
		::RPG::PoolList_1<::System::Int32>* NGKNPIDEOPK; // 0x470
		::FIHMGKLCINA NNFNMKFJEDL; // 0x478
		::RPG::PoolList_1<::FIHMGKLCINA>* HCCPHMOGHHO; // 0x580
		::System::Single LJGDKCAIICB; // 0x588
		::System::Boolean HMKBKGGLOGL; // 0x58C
		::System::Boolean MMCHLMFOLCJ; // 0x58D
		::System::Boolean DNKIOICDJIN; // 0x58E
		::System::Boolean BKPNIHOEBHA; // 0x58F
		::System::Boolean HMPOOIFMPMG; // 0x590
		::System::Byte _padding13[0x7];
		::FDLDBJMEBDH IABKGGKFDBK; // 0x598
		::FDLDBJMEBDH EAHEJPAHGNK; // 0x5E8
		::System::Boolean CMBMDDIMODP; // 0x638
		::System::Byte _padding14[0x7];
		::RPG::GameCore::FloatCurve* OJCJEODDPJP; // 0x640
		::System::Single KBMOIOOEPCE; // 0x648
		::System::Single KPOLINMGAGL; // 0x64C
		::System::Single IEKJPLGKNIF; // 0x650
		::System::Boolean NIDKMCNCPCF; // 0x654
		::System::Boolean KBJAEBHFJND; // 0x655
		::System::Boolean NAOKFCCMAKJ; // 0x656
		::System::Boolean HACLOFJAECP; // 0x657
		::System::Boolean ODIOCBDPHFN; // 0x658
		::System::Byte _padding15[0x3];
		::System::Single PNGBENDLNDF; // 0x65C
		::System::Boolean FPBEBAHPHDK; // 0x660
		::System::Byte _padding16[0x3];
		::System::Single DPOLNJBMKOI; // 0x664
		::System::Boolean GJKPJBBDELC; // 0x668
		::System::Byte _padding17[0x3];
		::System::Single DPOFIBFLCMC; // 0x66C
		::System::Boolean PHHNHCDGDMD; // 0x670
		::System::Byte _padding18[0x3];
		::System::Single LLHHNKHLOKN; // 0x674
		::System::Boolean ADEGLNFMKPI; // 0x678
		::System::Byte _padding19[0x3];
		::System::Int32 OGBKJCPEGIE; // 0x67C
		::System::Int32 DGHNPLFIKAK; // 0x680
		::UnityEngine::Vector3 IAFMEJAACND; // 0x684
		::System::Boolean BOINIAIEEDN; // 0x690
		::System::Byte _padding20[0x3];
		::System::Int32 HNJNOACJDAN; // 0x694
		::RPG::Client::LittleGame::FiveDim::EnterDashReason IHODHGMHBOC; // 0x698
		::PNOFDHPNLPE DFIKIPOMCNO; // 0x69C
		::System::Boolean KCGBNEDPBGN; // 0x6B8
		::System::Boolean IEPLDBPBFOD; // 0x6B9
		::System::Byte _padding21[0x2];
		::System::Single NAPMJGDFIJO; // 0x6BC
		::System::Single OLKEADPPNAC; // 0x6C0
		::System::Int32 JPBOBGAJOKJ; // 0x6C4
		::UnityEngine::Vector3 LFGLCDBLGJD; // 0x6C8
		::UnityEngine::Vector3 BHDECEMIOFE; // 0x6D4
		::UnityEngine::Vector3 HJAGLAAFAPG; // 0x6E0
		::System::Single GABNIJEIGOH; // 0x6EC
		::System::Single GCMHHMAJMNA; // 0x6F0
		::System::Boolean OBNLIJLLGGH; // 0x6F4
		::System::Byte _padding22[0x3];
		::System::Single OLOICJEDICN; // 0x6F8
		::System::Boolean DHHOJBENEKO; // 0x6FC
		::System::Byte _padding23[0x3];
		::RPG::PoolList_1<::System::Int32>* PEPGCNABFGM; // 0x700
		::RPG::PoolList_1<::System::Int32>* EHABDFEMKHH; // 0x708
		::RPG::PoolList_1<::System::Int32>* DNHHDOHBLMG; // 0x710
		::System::Single MEIFGEIKEHA; // 0x718
		::System::Boolean IDJDKIPKDMD; // 0x71C
		::System::Boolean AAOHLIIHFIK; // 0x71D
		::System::Boolean HOMGFECMDAP; // 0x71E
		::System::Byte _padding24[0x1];
		::System::Single MGHEBIEBDLJ; // 0x720
		::System::Boolean NKFJPCBGHCA; // 0x724
		::System::Byte _padding25[0x3];
		::UnityEngine::Vector2 CMGKHJLOHHC; // 0x728
		::System::Single ALDILHDPHME; // 0x730
		::System::Single NEMGEEDLLON; // 0x734
		::System::Int32 LHMBIENLJFO; // 0x738
		::System::Single GEPMGOMFOJP; // 0x73C
		::System::Int32 MOGALOFADNF; // 0x740
		::System::Boolean CCAHAKMLBPK; // 0x744
		::System::Boolean GODMCPMODNP; // 0x745
		::System::Boolean FEBHBBNFCOO; // 0x746
		::System::Boolean BCMKHKINMDM; // 0x747
		::RPG::PoolList_1<::System::Int32>* NAMILFPLHEI; // 0x748
		::System::Int32 MNJIPMLJNGM; // 0x750
		::System::Boolean DAMDNLGKOBN; // 0x754
		::System::Boolean KGJKIDOHLNH; // 0x755
		::System::Byte _padding26[0x2];
		::System::Int32 FJCEIDFBJJF; // 0x758
		::KLNKLOMDIIC PLCPIEBMBDK; // 0x75C
		::System::Byte _padding27[0x4];
		::UnityEngine::Transform* AMEHPIOPAGE; // 0x7C8
		::System::Boolean DJHMGKHEHAI; // 0x7D0
		::System::Byte _padding28[0x3];
		::System::UInt32 NEDBABIHMAM; // 0x7D4
		::KLNKLOMDIIC EOJFCALBDDI; // 0x7D8
		::KLNKLOMDIIC COFJKJEHOFE; // 0x840
		::System::UInt32 IPOGCLPNGNN; // 0x8A8
		::System::Int32 ODLDFBGKNNN; // 0x8AC
		::RPG::PoolList_1<::System::Int32>* NFLIHBDFLAG; // 0x8B0
		::System::Boolean ANBFENEMLCC; // 0x8B8
		::System::Byte _padding29[0x3];
		::System::Int32 MKEOLBEGIJP; // 0x8BC
		::System::Single PBIICKNIBJN; // 0x8C0
		::System::Boolean FJKCBALFKIG; // 0x8C4
		::System::Byte _padding30[0x3];
		::UnityEngine::Vector3 AICKBKJMLAP; // 0x8C8
		::UnityEngine::Vector3 CPJDJBHDNDF; // 0x8D4
		::UnityEngine::Vector3 GFLDLKEFAIC; // 0x8E0
		::System::Boolean DNPKCFBKKDB; // 0x8EC
		::System::Boolean KEBBNEPJCLH; // 0x8ED
		::System::Boolean MBAFHFDPGDO; // 0x8EE
		::System::Byte _padding31[0x1];
		::UnityEngine::Vector3 JBAOKIHOGPJ; // 0x8F0
		::UnityEngine::Vector3 PIJNLHJDEDK; // 0x8FC
		::System::Int32 PILLDEOAJBM; // 0x908
		::System::Byte _padding32[0x4];
		::RPG::PoolList_1<::System::Int32>* NPJKMHLLFDK; // 0x910
		::System::Boolean HJMGKFDEBLO; // 0x918
		::System::Byte _padding33[0x3];
		::UnityEngine::Vector3 IJNNFBAEAFN; // 0x91C
		::System::Boolean LMCDAMLDMDL; // 0x928
		::RPG::Client::LittleGame::FiveDim::ViewGravityInterpolationFlag FCMLCHJMDFG; // 0x929
		::CHEHADCMFOI JHMAPJEIFCD; // 0x92C
		::System::Single MFOIBJHJADM; // 0x96C
		::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerBeatBackReason ABMKOCIHAOD; // 0x970
		::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerBeatBackReason OMDIFKGEJFG; // 0x974
		::System::Boolean NPFGNHDHFJL; // 0x978
		::System::Byte _padding34[0x3];
		::System::Single IFNHHBDMPON; // 0x97C
		::System::Single CIEJOKMJJLA; // 0x980
		::RPG::Client::LittleGame::FiveDim::PlayerBehaviorFlag KJDKAOPEMFF; // 0x984
		::IMFCNAEANKD GPBEMABLDEO; // 0x988
		::System::Single DDGFIBJJEAM; // 0x9AC
		::System::Single LLOHOLJFBEK; // 0x9B0
		::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerRebornReason FMBEMPEDNEA; // 0x9B4
		::System::Single GGHHHKGPHNJ; // 0x9B8
		::System::Single DAEMIJJMGPF; // 0x9BC
		::System::Boolean KMGDMGENHHG; // 0x9C0
		::System::Byte _padding35[0x3];
		::System::Single HLKIPLCEEKN; // 0x9C4
		::System::Boolean CGBDBGKDJHH; // 0x9C8
		::System::Byte _padding36[0x3];
		::System::Single AEIODNIKHAH; // 0x9CC
		::RPG::PoolDictionary_2<::UnityEngine::Collider*, ::UnityEngine::Collision*>* KNEONECEFKK; // 0x9D0
		::RPG::PoolDictionary_2<::UnityEngine::Collider*, ::UnityEngine::Collision*>* MKGBOLAPBHN; // 0x9D8
		::System::Boolean PKKPEEGIALN; // 0x9E0
		::System::Boolean JKDCHGEGLDC; // 0x9E1
		::System::Byte _padding37[0x2];
		::System::Single JICLELNPJKJ; // 0x9E4
		::System::Single ABPAAIBGLFJ; // 0x9E8
		::System::Boolean NKFFIIHDCCC; // 0x9EC
		::System::Boolean GEHAHKCNLDA; // 0x9ED
		::System::Byte _padding38[0x2];
		::System::Single AEAAPEAOINE; // 0x9F0
		::System::Boolean OFNDDENBLGO; // 0x9F4
		::System::Byte _padding39[0x3];
		::System::Single LOJGGELAEAP; // 0x9F8
		::System::Boolean COKILHAHFOM; // 0x9FC
		::System::Boolean CKHJAJFMPHG; // 0x9FD
		::System::Boolean ECMOFJONDHC; // 0x9FE
		::System::Boolean PLFKANKEIHE; // 0x9FF
		::System::Boolean EGMIDEMAANP; // 0xA00
		::System::Byte _padding40[0x3];
		::UnityEngine::Vector2 PLKACHGCJPN; // 0xA04
		::System::Boolean IMKECIFHFNC; // 0xA0C
		::System::Byte _padding41[0x3];
		::System::Int32 KAOHLFGPIEB; // 0xA10
		::System::Single FHJJJAKHKDM; // 0xA14
		::System::Single OJAHDBLHGMA; // 0xA18
		::System::Boolean MFBHOLDJCBP; // 0xA1C
		::System::Byte _padding42[0x3];
		::System::Single FBCBNDGJKPD; // 0xA20
		::System::Boolean KDHCCEHGJGJ; // 0xA24
		::System::Byte _padding43[0x3];
		::System::UInt32 GGCMJOJJJAO; // 0xA28
		::System::Single IJOHECJKAIK; // 0xA2C
		::RPG::PoolList_1<::System::Int32>* HIMIOGPNDBG; // 0xA30
		::System::Boolean HGHNOOONNIG; // 0xA38
		::System::Byte _padding44[0x3];
		::System::Int32 BFLEMOKKAEB; // 0xA3C
		::System::Int32 INCMHFJLPHP; // 0xA40
		::System::Int32 JCBJIGMLOKN; // 0xA44
		::System::Single ICGBPEGLCPB; // 0xA48
		::System::Boolean GOPADKPEFJI; // 0xA4C
		::System::Boolean JLADFMKLNBK; // 0xA4D
		::System::Byte _padding45[0x2];
		::System::Int32 CHDBHPMBHMN; // 0xA50
		::System::Boolean CMHEMBJKHDP; // 0xA54
		::System::Byte _padding46[0x3];
		::RPG::Client::LittleGame::FiveDim::DashInterruptOrbPhase APFIKAMKCFH; // 0xA58
		::System::Int32 BBNEBMKLPOH; // 0xA5C
		::System::Boolean HCPJBMKHHMG; // 0xA60
		::UnityEngine::Vector2 OACEKPBCNAD()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_OACEKPBCNAD_OFFSET))(this);
		}

		::UnityEngine::Vector2 IAJHHMLCNCK()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_IAJHHMLCNCK_OFFSET))(this);
		}

		::UnityEngine::Vector2 CFEIIMNMGCB()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_CFEIIMNMGCB_OFFSET))(this);
		}

		::System::Boolean PGCMBMMAAKF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_PGCMBMMAAKF_OFFSET))(this);
		}

		::UnityEngine::Quaternion FMNGDCPEGOI()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_FMNGDCPEGOI_OFFSET))(this);
		}

		::UnityEngine::Quaternion PLLHBPIPIGA()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_PLLHBPIPIGA_OFFSET))(this);
		}

		::UnityEngine::Vector3 DAJGGCDHNMA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_DAJGGCDHNMA_OFFSET))(this);
		}

		::UnityEngine::Vector3 LHALEMGAFCD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_LHALEMGAFCD_OFFSET))(this);
		}

		::UnityEngine::Vector3 CKANLJAJIOG()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_CKANLJAJIOG_OFFSET))(this);
		}

		::System::Void HGDKAKDCAPF(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HGBCMFANCOE_HGDKAKDCAPF_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 BDLOFAEOFHH()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_BDLOFAEOFHH_OFFSET))(this);
		}

		::System::Void CMAFEMHOLKK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HGBCMFANCOE_CMAFEMHOLKK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 JKLCJONONKK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_JKLCJONONKK_OFFSET))(this);
		}

		::System::Void BJEANHMFOOI(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HGBCMFANCOE_BJEANHMFOOI_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 COCEOHHGMFL()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_COCEOHHGMFL_OFFSET))(this);
		}

		::System::Void LHKAKHNPIND(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HGBCMFANCOE_LHKAKHNPIND_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NNPBOGFNKKE()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_NNPBOGFNKKE_OFFSET))(this);
		}

		::System::Void GHDNOFAEHFK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HGBCMFANCOE_GHDNOFAEHFK_OFFSET))(this, a1);
		}

		::System::Boolean GGIJADFMPBE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_GGIJADFMPBE_OFFSET))(this);
		}

		::System::Void IHIEAAHMCAE(::System::Boolean a1, ::RPG::Client::LittleGame::FiveDim::DisablePlayerMoveReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::LittleGame::FiveDim::DisablePlayerMoveReason))((::PBYTE)hIl2Cpp + HGBCMFANCOE_IHIEAAHMCAE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 PADKLAPPBBC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_PADKLAPPBBC_OFFSET))(this);
		}

		::System::Void PJMMKJMHCKH(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HGBCMFANCOE_PJMMKJMHCKH_OFFSET))(this, a1);
		}

		::System::Boolean GJAEKKILLHD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_GJAEKKILLHD_OFFSET))(this);
		}

		::System::Boolean OLOJPLCBLPJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_OLOJPLCBLPJ_OFFSET))(this);
		}

		::System::Boolean DIIBACHICNJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_DIIBACHICNJ_OFFSET))(this);
		}

		::System::Boolean MIKEFENCDCM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_MIKEFENCDCM_OFFSET))(this);
		}

		::System::Boolean ECNIFHAKHJC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_ECNIFHAKHJC_OFFSET))(this);
		}

		::System::Boolean ECOKPJDHMHN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_ECOKPJDHMHN_OFFSET))(this);
		}

		::System::Boolean FOMDELLELFK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_FOMDELLELFK_OFFSET))(this);
		}

		::System::Boolean PLOLKAIFCAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_PLOLKAIFCAB_OFFSET))(this);
		}

		::System::Boolean MKFAFFJKDEN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBCMFANCOE_MKFAFFJKDEN_OFFSET))(this);
		}

	};
