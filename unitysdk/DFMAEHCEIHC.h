#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertGamePhase.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertToastType.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/FeverStyle.h"
#include "unitysdk/RPG/GameCore/ComicDessertTalkBubbleType.h"
#include "unitysdk/RPG/GameCore/ComicDessertTutorialOperationType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
class GDCPLHKBAID;
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
class PAIBKBFBNJN;
class PGJOFNPHFOF;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertGameInfoViewModel; }
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertGameViewModel; }
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertOrderBubbleServeAreaQuery; }
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertRestockBasketViewModel; }
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertSceneRoot; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define DFMAEHCEIHC_ABHLDHFNCDP_OFFSET UNITYSDK_OFFSET(0xF194EB0)
#define DFMAEHCEIHC_ACGCGAOGJKC_OFFSET UNITYSDK_OFFSET(0xF197060)
#define DFMAEHCEIHC_AEHNMGLIDOP_OFFSET UNITYSDK_OFFSET(0xF199140)
#define DFMAEHCEIHC_AGAAOLHIJCF_OFFSET UNITYSDK_OFFSET(0xF1983E0)
#define DFMAEHCEIHC_AHLHODAFHDG_OFFSET UNITYSDK_OFFSET(0xF19A810)
#define DFMAEHCEIHC_AIEPJGJPJGL_OFFSET UNITYSDK_OFFSET(0xF197F80)
#define DFMAEHCEIHC_BCDPHCPFOMB_OFFSET UNITYSDK_OFFSET(0xF198AE0)
#define DFMAEHCEIHC_BECGNLOGAFE_OFFSET UNITYSDK_OFFSET(0xF199350)
#define DFMAEHCEIHC_BHHPEHGJBEN_OFFSET UNITYSDK_OFFSET(0xF1992A0)
#define DFMAEHCEIHC_BJDKEGNPKBA_OFFSET UNITYSDK_OFFSET(0xF195B80)
#define DFMAEHCEIHC_BNJJGIFBGLL_OFFSET UNITYSDK_OFFSET(0xF1989B0)
#define DFMAEHCEIHC_BPAFOKEOOCJ_OFFSET UNITYSDK_OFFSET(0xF197B10)
#define DFMAEHCEIHC_BPOGFELGAPH_OFFSET UNITYSDK_OFFSET(0xF195010)
#define DFMAEHCEIHC_CAFBIGHOLCM_OFFSET UNITYSDK_OFFSET(0xF198B50)
#define DFMAEHCEIHC_CDJIMAGENKM_OFFSET UNITYSDK_OFFSET(0xF197280)
#define DFMAEHCEIHC_CJAJCADENGN_OFFSET UNITYSDK_OFFSET(0xF197A90)
#define DFMAEHCEIHC_CPIEHKAFHCD_OFFSET UNITYSDK_OFFSET(0xF195EE0)
#define DFMAEHCEIHC_CPLAEGPEKPL_OFFSET UNITYSDK_OFFSET(0xF199510)
#define DFMAEHCEIHC_CTOR_OFFSET UNITYSDK_OFFSET(0xF193CC0)
#define DFMAEHCEIHC_DBILEBNHIPO_OFFSET UNITYSDK_OFFSET(0xF196630)
#define DFMAEHCEIHC_DCBCFPKMMOC_OFFSET UNITYSDK_OFFSET(0xF19A210)
#define DFMAEHCEIHC_DEOCDGOBEAD_OFFSET UNITYSDK_OFFSET(0xF195270)
#define DFMAEHCEIHC_DMHFIEPLOCM_OFFSET UNITYSDK_OFFSET(0xF1982A0)
#define DFMAEHCEIHC_DNAAHIBFJCD_OFFSET UNITYSDK_OFFSET(0xF19A320)
#define DFMAEHCEIHC_DNHEIEFHPKB_OFFSET UNITYSDK_OFFSET(0xF197340)
#define DFMAEHCEIHC_DNKKCGBKKCN_OFFSET UNITYSDK_OFFSET(0xF196C10)
#define DFMAEHCEIHC_EDNCMBNPKBO_OFFSET UNITYSDK_OFFSET(0xF197B90)
#define DFMAEHCEIHC_EEKILLJBNEB_OFFSET UNITYSDK_OFFSET(0xF197540)
#define DFMAEHCEIHC_EENIJCOJEBP_OFFSET UNITYSDK_OFFSET(0xF196850)
#define DFMAEHCEIHC_EHINFEHBOPJ_OFFSET UNITYSDK_OFFSET(0xF198190)
#define DFMAEHCEIHC_EJBEHKDKKIF_OFFSET UNITYSDK_OFFSET(0xF199680)
#define DFMAEHCEIHC_EPENMDMNCOL_OFFSET UNITYSDK_OFFSET(0xF197830)
#define DFMAEHCEIHC_EPFDNDNDNIC_OFFSET UNITYSDK_OFFSET(0xF195880)
#define DFMAEHCEIHC_FCAALCAKCPC_OFFSET UNITYSDK_OFFSET(0xF198FE0)
#define DFMAEHCEIHC_FDCAOKODLCO_OFFSET UNITYSDK_OFFSET(0xF195FF0)
#define DFMAEHCEIHC_FFLFEDLAGPD_OFFSET UNITYSDK_OFFSET(0xF1958F0)
#define DFMAEHCEIHC_FIJAJMCDFBM_OFFSET UNITYSDK_OFFSET(0xF1973C0)
#define DFMAEHCEIHC_FKKOJAHLFPM_OFFSET UNITYSDK_OFFSET(0xF195F40)
#define DFMAEHCEIHC_FMFIECLGIDE_OFFSET UNITYSDK_OFFSET(0xF197680)
#define DFMAEHCEIHC_FPEOAFCIJLB_OFFSET UNITYSDK_OFFSET(0xF19A750)
#define DFMAEHCEIHC_GBDPELJHLOH_OFFSET UNITYSDK_OFFSET(0xF199FC0)
#define DFMAEHCEIHC_GFLLAFDDOOK_OFFSET UNITYSDK_OFFSET(0xF196280)
#define DFMAEHCEIHC_GIKJJOJBEBN_OFFSET UNITYSDK_OFFSET(0xF195310)
#define DFMAEHCEIHC_GLBMJCGKFKD_OFFSET UNITYSDK_OFFSET(0xF19AA70)
#define DFMAEHCEIHC_GMLMPCIPDIM_OFFSET UNITYSDK_OFFSET(0xF1968D0)
#define DFMAEHCEIHC_GNNPBEFFKIC_OFFSET UNITYSDK_OFFSET(0xF1960A0)
#define DFMAEHCEIHC_GPCIKHMFAFG_OFFSET UNITYSDK_OFFSET(0xF198C80)
#define DFMAEHCEIHC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xF19A600)
#define DFMAEHCEIHC_HBJIFENKKJB_OFFSET UNITYSDK_OFFSET(0xF196160)
#define DFMAEHCEIHC_HCFPMKKOJEL_OFFSET UNITYSDK_OFFSET(0xF19A6E0)
#define DFMAEHCEIHC_HCKLIGIDCDH_OFFSET UNITYSDK_OFFSET(0xF199250)
#define DFMAEHCEIHC_HGCMIKDMHKJ_OFFSET UNITYSDK_OFFSET(0xF1991A0)
#define DFMAEHCEIHC_IANHOJFCKGD_OFFSET UNITYSDK_OFFSET(0xF199340)
#define DFMAEHCEIHC_IBEHCJJEHFM_OFFSET UNITYSDK_OFFSET(0xF197110)
#define DFMAEHCEIHC_IBGLECGEGMD_OFFSET UNITYSDK_OFFSET(0xF1975C0)
#define DFMAEHCEIHC_IHHPKEMPHGE_OFFSET UNITYSDK_OFFSET(0xF1971D0)
#define DFMAEHCEIHC_ILAPAJKHCFN_OFFSET UNITYSDK_OFFSET(0xF198660)
#define DFMAEHCEIHC_IOGKPDODCHN_OFFSET UNITYSDK_OFFSET(0xF198ED0)
#define DFMAEHCEIHC_IPODGJANNCC_OFFSET UNITYSDK_OFFSET(0xF197DA0)
#define DFMAEHCEIHC_JAFGOHGFGOF_OFFSET UNITYSDK_OFFSET(0xF198070)
#define DFMAEHCEIHC_JALLLMMDFGI_OFFSET UNITYSDK_OFFSET(0xF19A8D0)
#define DFMAEHCEIHC_JIPBBMPODME_OFFSET UNITYSDK_OFFSET(0xF19A260)
#define DFMAEHCEIHC_JKJLPHHFCIM_OFFSET UNITYSDK_OFFSET(0xF19A5B0)
#define DFMAEHCEIHC_JLIBOKGJECF_OFFSET UNITYSDK_OFFSET(0xF1957F0)
#define DFMAEHCEIHC_JMLFDJLPLIB_OFFSET UNITYSDK_OFFSET(0xF198BE0)
#define DFMAEHCEIHC_JNAOMOFNJJK_OFFSET UNITYSDK_OFFSET(0xF193CD0)
#define DFMAEHCEIHC_JOBMDMCDJAG_OFFSET UNITYSDK_OFFSET(0xF198F60)
#define DFMAEHCEIHC_KELNAANAANC_OFFSET UNITYSDK_OFFSET(0xF198230)
#define DFMAEHCEIHC_KEPMMNEBKCD_OFFSET UNITYSDK_OFFSET(0xF193E10)
#define DFMAEHCEIHC_KFBGMDKGPED_OFFSET UNITYSDK_OFFSET(0xF198700)
#define DFMAEHCEIHC_KIHKHPPNNFO_OFFSET UNITYSDK_OFFSET(0xF197CF0)
#define DFMAEHCEIHC_KNELDLIDEBN_OFFSET UNITYSDK_OFFSET(0xF198A30)
#define DFMAEHCEIHC_KOPJMDFPOJM_OFFSET UNITYSDK_OFFSET(0xF1990F0)
#define DFMAEHCEIHC_KPELCNLCEPG_OFFSET UNITYSDK_OFFSET(0xF1959B0)
#define DFMAEHCEIHC_KPPOMIELDPH_OFFSET UNITYSDK_OFFSET(0xF19A650)
#define DFMAEHCEIHC_LCJCLBBLFLO_OFFSET UNITYSDK_OFFSET(0xF195660)
#define DFMAEHCEIHC_LCPOMCCILMC_OFFSET UNITYSDK_OFFSET(0xF196B40)
#define DFMAEHCEIHC_LFMKOKGNGMO_OFFSET UNITYSDK_OFFSET(0xF195BA0)
#define DFMAEHCEIHC_LJCGLONPINC_OFFSET UNITYSDK_OFFSET(0xF1977E0)
#define DFMAEHCEIHC_LNLGNJAILLP_OFFSET UNITYSDK_OFFSET(0xF196AD0)
#define DFMAEHCEIHC_MDGIPBJIGEC_OFFSET UNITYSDK_OFFSET(0xF195100)
#define DFMAEHCEIHC_MDHIAJIAPLH_OFFSET UNITYSDK_OFFSET(0xF197490)
#define DFMAEHCEIHC_MEIJGDMFMCP_OFFSET UNITYSDK_OFFSET(0xF1987A0)
#define DFMAEHCEIHC_MJOMOIPOEME_OFFSET UNITYSDK_OFFSET(0xF19A960)
#define DFMAEHCEIHC_MKPBAOFGICC_OFFSET UNITYSDK_OFFSET(0xF1964F0)
#define DFMAEHCEIHC_MLEMMFLFMMI_OFFSET UNITYSDK_OFFSET(0xF197E90)
#define DFMAEHCEIHC_MLJICJNFPFB_OFFSET UNITYSDK_OFFSET(0xF199070)
#define DFMAEHCEIHC_MMBOJECMBLA_OFFSET UNITYSDK_OFFSET(0xF198480)
#define DFMAEHCEIHC_MNOJCOGFGJK_OFFSET UNITYSDK_OFFSET(0xF198340)
#define DFMAEHCEIHC_NBPPDONBCGE_OFFSET UNITYSDK_OFFSET(0xF196430)
#define DFMAEHCEIHC_NECMCDELKID_OFFSET UNITYSDK_OFFSET(0xF198DF0)
#define DFMAEHCEIHC_NEFMELFNOHA_OFFSET UNITYSDK_OFFSET(0xF197C30)
#define DFMAEHCEIHC_NFHGAEFJAHG_OFFSET UNITYSDK_OFFSET(0xF196210)
#define DFMAEHCEIHC_OCCENIMIJCA_OFFSET UNITYSDK_OFFSET(0xF197A30)
#define DFMAEHCEIHC_OFGANANFKJH_OFFSET UNITYSDK_OFFSET(0xF198870)
#define DFMAEHCEIHC_OLFNOMFNKOB_OFFSET UNITYSDK_OFFSET(0xF1953C0)
#define DFMAEHCEIHC_ONCGJNMILLJ_OFFSET UNITYSDK_OFFSET(0xF1985C0)
#define DFMAEHCEIHC_OOJNEENBKPP_OFFSET UNITYSDK_OFFSET(0xF198520)
#define DFMAEHCEIHC_PBPHBOIDNKM_OFFSET UNITYSDK_OFFSET(0xF197740)
#define DFMAEHCEIHC_PDKLDMNAJBO_OFFSET UNITYSDK_OFFSET(0xF19A3B0)
#define DFMAEHCEIHC_PEILFPKEJBG_OFFSET UNITYSDK_OFFSET(0xF195CA0)
#define DFMAEHCEIHC_PENGAKEJIOI_OFFSET UNITYSDK_OFFSET(0xF196CD0)
#define DFMAEHCEIHC_PGOEJMJHIIN_1_OFFSET UNITYSDK_OFFSET(0xF198D80)
#define DFMAEHCEIHC_PGOEJMJHIIN_OFFSET UNITYSDK_OFFSET(0xF198D00)
#define DFMAEHCEIHC_PHJENEAJKJP_OFFSET UNITYSDK_OFFSET(0xF196340)
#define DFMAEHCEIHC_PMIEJIAMHEM_OFFSET UNITYSDK_OFFSET(0xF19A180)

inline static constexpr unsigned int DFMAEHCEIHC_TypeDefinitionIndex = 79900;

	class DFMAEHCEIHC : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::PAIBKBFBNJN* PJJNECPDIEP; // 0x18
		::RPG::Client::LittleGame::ComicDessert::ComicDessertGameViewModel* DNPOJOFIAHM; // 0x20
		::RPG::Client::LittleGame::ComicDessert::ComicDessertSceneRoot* JOLMLCECLIE; // 0x28
		::GDCPLHKBAID* NNBHPCFIHAA; // 0x30
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x38
		::RPG::Client::LuaUIController* HHCECGELKHL; // 0x40
		::System::Int32 PKAGIJBLHCD; // 0x48
		::System::Boolean KBNIANCOOHA; // 0x4C
		::System::Boolean ICNHMAKGEDG; // 0x4D
		::System::Boolean BGHCMOLPCGI; // 0x4E
		::System::Boolean CKPOFDKCOEI; // 0x4F
		::System::Boolean HOELAIGNLIL; // 0x50
		::System::Boolean PMJDBDBKIDN; // 0x51
		::System::Boolean MOMNBCFGILB; // 0x52
		::System::Boolean BNCFDGHAPFB; // 0x53
		::System::Boolean MJGEIHOGBPL; // 0x54
		// static const ::System::String* MLPKEMDJIID; // 0x0
		// static const ::System::Object EKEMEOMNBBK; // 0x0
		// static const ::System::String* CLKPHGJKIFC; // 0x0
		// static const ::System::String* ICHGBFHLLNO; // 0x0
		// static const ::System::String* LDNAMFGHPOF; // 0x0
		// static const ::System::String* EIFICCLGOGG; // 0x0
		// static const ::System::Object PCMNICCMGOP; // 0x0
		// static const ::System::Object HOIKPHIICGD; // 0x0
		// static const ::System::Object DIDDGPFKFEB; // 0x0
		// static const ::System::Object NNBKBKEHNOC; // 0x0
		::System::Void _ctor(::HLJNBBHKKMI* a1, ::JMHHBMNIJJB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*, ::JMHHBMNIJJB*))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JNAOMOFNJJK(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_JNAOMOFNJJK_OFFSET))(this, a1);
		}

		::System::Void ABHLDHFNCDP(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_ABHLDHFNCDP_OFFSET))(this, a1);
		}

		::System::Void BPOGFELGAPH(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_BPOGFELGAPH_OFFSET))(this, a1, a2);
		}

		::System::Void MDGIPBJIGEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_MDGIPBJIGEC_OFFSET))(this);
		}

		::System::Void DEOCDGOBEAD(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_DEOCDGOBEAD_OFFSET))(this, a1, a2);
		}

		::System::Void GIKJJOJBEBN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_GIKJJOJBEBN_OFFSET))(this, a1);
		}

		::System::Void OLFNOMFNKOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_OLFNOMFNKOB_OFFSET))(this);
		}

		::System::Void LCJCLBBLFLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_LCJCLBBLFLO_OFFSET))(this);
		}

		::System::Void JLIBOKGJECF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_JLIBOKGJECF_OFFSET))(this);
		}

		::System::Void EPFDNDNDNIC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_EPFDNDNDNIC_OFFSET))(this, a1);
		}

		::System::Void FFLFEDLAGPD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_FFLFEDLAGPD_OFFSET))(this, a1);
		}

		::System::Boolean BJDKEGNPKBA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_BJDKEGNPKBA_OFFSET))(this);
		}

		::System::Void LFMKOKGNGMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_LFMKOKGNGMO_OFFSET))(this);
		}

		::System::Void KPELCNLCEPG(::RPG::Client::LittleGame::ComicDessert::ComicDessertGameInfoViewModel* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertGameInfoViewModel*, ::System::Int32))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_KPELCNLCEPG_OFFSET))(this, a1, a2);
		}

		::System::Void PEILFPKEJBG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_PEILFPKEJBG_OFFSET))(this, a1);
		}

		::System::Void FKKOJAHLFPM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_FKKOJAHLFPM_OFFSET))(this, a1);
		}

		::System::Void FDCAOKODLCO(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_FDCAOKODLCO_OFFSET))(this, a1, a2);
		}

		::System::Void GNNPBEFFKIC(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_GNNPBEFFKIC_OFFSET))(this, a1);
		}

		::System::Void HBJIFENKKJB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_HBJIFENKKJB_OFFSET))(this, a1);
		}

		::System::Void NFHGAEFJAHG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_NFHGAEFJAHG_OFFSET))(this, a1);
		}

		::System::Void GFLLAFDDOOK(::System::Boolean a1, ::RPG::Client::LittleGame::ComicDessert::FeverStyle a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::LittleGame::ComicDessert::FeverStyle))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_GFLLAFDDOOK_OFFSET))(this, a1, a2);
		}

		::System::Void PHJENEAJKJP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_PHJENEAJKJP_OFFSET))(this, a1);
		}

		::System::Void NBPPDONBCGE(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_NBPPDONBCGE_OFFSET))(this, a1, a2);
		}

		::System::Void MKPBAOFGICC(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_MKPBAOFGICC_OFFSET))(this, a1, a2);
		}

		::System::Void DBILEBNHIPO(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_DBILEBNHIPO_OFFSET))(this, a1);
		}

		::System::Boolean LCPOMCCILMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_LCPOMCCILMC_OFFSET))(this);
		}

		::System::Boolean DNKKCGBKKCN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_DNKKCGBKKCN_OFFSET))(this);
		}

		::System::Boolean EENIJCOJEBP(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_EENIJCOJEBP_OFFSET))(this, a1);
		}

		::System::Boolean LNLGNJAILLP(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_LNLGNJAILLP_OFFSET))(this, a1);
		}

		::System::Boolean PENGAKEJIOI(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_PENGAKEJIOI_OFFSET))(this, a1);
		}

		::System::Int32 GMLMPCIPDIM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_GMLMPCIPDIM_OFFSET))(this);
		}

		::System::Void ACGCGAOGJKC(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_ACGCGAOGJKC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void IHHPKEMPHGE(::Il2CppArray<::LPHINGPIEAJ*>* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::LPHINGPIEAJ*>*, ::System::Single))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_IHHPKEMPHGE_OFFSET))(this, a1, a2);
		}

		::System::Void CDJIMAGENKM(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_CDJIMAGENKM_OFFSET))(this, a1, a2);
		}

		::System::Void DNHEIEFHPKB(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_DNHEIEFHPKB_OFFSET))(this, a1, a2);
		}

		::System::Void FIJAJMCDFBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_FIJAJMCDFBM_OFFSET))(this);
		}

		::System::Void MDHIAJIAPLH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_MDHIAJIAPLH_OFFSET))(this, a1);
		}

		::System::Void EEKILLJBNEB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_EEKILLJBNEB_OFFSET))(this, a1);
		}

		::System::Void IBGLECGEGMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_IBGLECGEGMD_OFFSET))(this, a1);
		}

		::System::Void FMFIECLGIDE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_FMFIECLGIDE_OFFSET))(this, a1);
		}

		::System::Void PBPHBOIDNKM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_PBPHBOIDNKM_OFFSET))(this, a1);
		}

		::System::Void LJCGLONPINC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_LJCGLONPINC_OFFSET))(this, a1);
		}

		::System::Void OCCENIMIJCA(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_OCCENIMIJCA_OFFSET))(this, a1);
		}

		::System::Void CJAJCADENGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_CJAJCADENGN_OFFSET))(this);
		}

		::System::Void EPENMDMNCOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_EPENMDMNCOL_OFFSET))(this);
		}

		::System::Void BPAFOKEOOCJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_BPAFOKEOOCJ_OFFSET))(this, a1);
		}

		::System::Void EDNCMBNPKBO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_EDNCMBNPKBO_OFFSET))(this, a1);
		}

		::System::Void NEFMELFNOHA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_NEFMELFNOHA_OFFSET))(this, a1);
		}

		::System::Boolean CPIEHKAFHCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_CPIEHKAFHCD_OFFSET))(this);
		}

		::System::Boolean KIHKHPPNNFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_KIHKHPPNNFO_OFFSET))(this);
		}

		::System::Void IPODGJANNCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_IPODGJANNCC_OFFSET))(this);
		}

		::System::Void MLEMMFLFMMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_MLEMMFLFMMI_OFFSET))(this);
		}

		::System::Void AIEPJGJPJGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_AIEPJGJPJGL_OFFSET))(this);
		}

		::System::Void JAFGOHGFGOF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_JAFGOHGFGOF_OFFSET))(this, a1);
		}

		::System::Void EHINFEHBOPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_EHINFEHBOPJ_OFFSET))(this);
		}

		::System::Void DMHFIEPLOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_DMHFIEPLOCM_OFFSET))(this);
		}

		::System::Void MNOJCOGFGJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_MNOJCOGFGJK_OFFSET))(this);
		}

		::System::Void AGAAOLHIJCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_AGAAOLHIJCF_OFFSET))(this);
		}

		::System::Void MMBOJECMBLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_MMBOJECMBLA_OFFSET))(this);
		}

		::System::Void OOJNEENBKPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_OOJNEENBKPP_OFFSET))(this);
		}

		::System::Void ONCGJNMILLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_ONCGJNMILLJ_OFFSET))(this);
		}

		::System::Void ILAPAJKHCFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_ILAPAJKHCFN_OFFSET))(this);
		}

		::System::Void KFBGMDKGPED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_KFBGMDKGPED_OFFSET))(this);
		}

		::System::Void MEIJGDMFMCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_MEIJGDMFMCP_OFFSET))(this);
		}

		::System::Void BNJJGIFBGLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_BNJJGIFBGLL_OFFSET))(this);
		}

		::System::Void KNELDLIDEBN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_KNELDLIDEBN_OFFSET))(this, a1);
		}

		::System::Void BCDPHCPFOMB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_BCDPHCPFOMB_OFFSET))(this, a1);
		}

		::System::Int32 CAFBIGHOLCM(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_CAFBIGHOLCM_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 JMLFDJLPLIB(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3, ::RPG::GameCore::ComicDessertTalkBubbleType a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::GameCore::ComicDessertTalkBubbleType))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_JMLFDJLPLIB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GPCIKHMFAFG(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_GPCIKHMFAFG_OFFSET))(this, a1, a2);
		}

		::System::Void PGOEJMJHIIN(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_PGOEJMJHIIN_OFFSET))(this, a1, a2);
		}

		::System::Void PGOEJMJHIIN_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_PGOEJMJHIIN_1_OFFSET))(this, a1);
		}

		::System::Int32 NECMCDELKID(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::System::UInt32 a3, ::System::Single a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_NECMCDELKID_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JOBMDMCDJAG(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_JOBMDMCDJAG_OFFSET))(this, a1, a2);
		}

		::System::Int32 FCAALCAKCPC(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_FCAALCAKCPC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MLJICJNFPFB(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_MLJICJNFPFB_OFFSET))(this, a1, a2);
		}

		::System::Void KOPJMDFPOJM(::RPG::Client::LittleGame::ComicDessert::ComicDessertSceneRoot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertSceneRoot*))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_KOPJMDFPOJM_OFFSET))(this, a1);
		}

		::System::Void AEHNMGLIDOP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_AEHNMGLIDOP_OFFSET))(this, a1);
		}

		::System::Void HGCMIKDMHKJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_HGCMIKDMHKJ_OFFSET))(this, a1);
		}

		::System::Void HCKLIGIDCDH(::GDCPLHKBAID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDCPLHKBAID*))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_HCKLIGIDCDH_OFFSET))(this, a1);
		}

		::System::Void BHHPEHGJBEN(::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleServeAreaQuery* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleServeAreaQuery*))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_BHHPEHGJBEN_OFFSET))(this, a1);
		}

		::PAIBKBFBNJN* IANHOJFCKGD()
		{
			return ((::PAIBKBFBNJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_IANHOJFCKGD_OFFSET))(this);
		}

		::System::Void BECGNLOGAFE(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_BECGNLOGAFE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IOGKPDODCHN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_IOGKPDODCHN_OFFSET))(this);
		}

		::System::Void CPLAEGPEKPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_CPLAEGPEKPL_OFFSET))(this);
		}

		::System::Void EJBEHKDKKIF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_EJBEHKDKKIF_OFFSET))(this, a1);
		}

		::System::Nullable_1<::UnityEngine::Vector2> GBDPELJHLOH()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector2>(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_GBDPELJHLOH_OFFSET))(this);
		}

		::System::Boolean PMIEJIAMHEM(::System::Int32 a1, ::RPG::Client::LittleGame::ComicDessert::ComicDessertSceneRoot* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::Client::LittleGame::ComicDessert::ComicDessertSceneRoot*))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_PMIEJIAMHEM_OFFSET))(this, a1, a2);
		}

		::System::Void DCBCFPKMMOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_DCBCFPKMMOC_OFFSET))(this);
		}

		::System::Void JIPBBMPODME(::RPG::Client::LittleGame::ComicDessert::ComicDessertToastType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertToastType, ::System::String*))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_JIPBBMPODME_OFFSET))(this, a1, a2);
		}

		::System::Boolean DNAAHIBFJCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_DNAAHIBFJCD_OFFSET))(this);
		}

		::System::Void PDKLDMNAJBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_PDKLDMNAJBO_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JKJLPHHFCIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_JKJLPHHFCIM_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* KPPOMIELDPH()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_KPPOMIELDPH_OFFSET))(this);
		}

		::System::Void KELNAANAANC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_KELNAANAANC_OFFSET))(this, a1);
		}

		::LPHINGPIEAJ* OFGANANFKJH(::System::UInt32 a1, ::RPG::GameCore::ComicDessertTutorialOperationType a2)
		{
			return ((::LPHINGPIEAJ*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ComicDessertTutorialOperationType))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_OFGANANFKJH_OFFSET))(this, a1, a2);
		}

		::System::Void KEPMMNEBKCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_KEPMMNEBKCD_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ComicDessert::ComicDessertRestockBasketViewModel* IBEHCJJEHFM(::System::Int32 a1)
		{
			return ((::RPG::Client::LittleGame::ComicDessert::ComicDessertRestockBasketViewModel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_IBEHCJJEHFM_OFFSET))(this, a1);
		}

		::System::Void HCFPMKKOJEL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_HCFPMKKOJEL_OFFSET))(this, a1);
		}

		::System::Void FPEOAFCIJLB(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_FPEOAFCIJLB_OFFSET))(this, a1, a2);
		}

		::System::Boolean AHLHODAFHDG(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_AHLHODAFHDG_OFFSET))(this, a1);
		}

		::System::Void JALLLMMDFGI(::UnityEngine::Vector2 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_JALLLMMDFGI_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MJOMOIPOEME(::LPHINGPIEAJ* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_MJOMOIPOEME_OFFSET))(this, a1, a2);
		}

		::PGJOFNPHFOF* GLBMJCGKFKD()
		{
			return ((::PGJOFNPHFOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAEHCEIHC_GLBMJCGKFKD_OFFSET))(this);
		}

	};
