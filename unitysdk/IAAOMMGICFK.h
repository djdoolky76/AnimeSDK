#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCLPKMIIANI.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertGamePhase.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertToastType.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/FeverStyle.h"
#include "unitysdk/RPG/GameCore/ComicDessertTalkBubbleType.h"
#include "unitysdk/AKNLHDIFKPD.h"
class AADICOHAPNO;
class AFLJOAMPADJ;
class BBPGFHGLKLL;
class HLJNBBHKKMI;
class IAJLHKIHBFB;
class MJAOHLLPLGK;
class PEPPJLLGLIM;
namespace RPG::Client::ComicDessert { class ComicDessertModule; }
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertSceneRoot; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define IAAOMMGICFK_ADPBLKBJFOO_OFFSET UNITYSDK_OFFSET(0x16D9B2F0)
#define IAAOMMGICFK_AHCOLJNMCJM_OFFSET UNITYSDK_OFFSET(0x16DA0EE0)
#define IAAOMMGICFK_ANLOKNHPBFB_OFFSET UNITYSDK_OFFSET(0x16D9A540)
#define IAAOMMGICFK_AOCEEDGPKFL_OFFSET UNITYSDK_OFFSET(0x16DA0500)
#define IAAOMMGICFK_BANHOLIJAOI_OFFSET UNITYSDK_OFFSET(0x16D9EF70)
#define IAAOMMGICFK_BKGBFOEFNAO_OFFSET UNITYSDK_OFFSET(0x16D9CD50)
#define IAAOMMGICFK_CAFBIGHOLCM_OFFSET UNITYSDK_OFFSET(0x16DA0570)
#define IAAOMMGICFK_CANSTART_OFFSET UNITYSDK_OFFSET(0x16D9AA10)
#define IAAOMMGICFK_CBCAJPFIKKH_OFFSET UNITYSDK_OFFSET(0x16D9DFA0)
#define IAAOMMGICFK_CBJKIDFKMGD_OFFSET UNITYSDK_OFFSET(0x16D9B400)
#define IAAOMMGICFK_CCEICGGLAJI_OFFSET UNITYSDK_OFFSET(0x16D9B620)
#define IAAOMMGICFK_CKBGPCEGOGA_OFFSET UNITYSDK_OFFSET(0x16D9E8D0)
#define IAAOMMGICFK_CTOR_OFFSET UNITYSDK_OFFSET(0x16DA0F80)
#define IAAOMMGICFK_DGOIMPOLJPM_OFFSET UNITYSDK_OFFSET(0x16D9E920)
#define IAAOMMGICFK_EBNGGHFINHI_OFFSET UNITYSDK_OFFSET(0x16D9D0B0)
#define IAAOMMGICFK_ECODIMFIIAG_OFFSET UNITYSDK_OFFSET(0x16D9DDD0)
#define IAAOMMGICFK_EHEFELEBAIB_OFFSET UNITYSDK_OFFSET(0x16D9C710)
#define IAAOMMGICFK_EHEMLMMEILM_OFFSET UNITYSDK_OFFSET(0x16D9EC10)
#define IAAOMMGICFK_FCAALCAKCPC_OFFSET UNITYSDK_OFFSET(0x16DA0860)
#define IAAOMMGICFK_FDBMGHKAMLF_OFFSET UNITYSDK_OFFSET(0x16D9B980)
#define IAAOMMGICFK_FDCDLCHBODE_OFFSET UNITYSDK_OFFSET(0x16DA0BD0)
#define IAAOMMGICFK_FEDKOHNIOEB_OFFSET UNITYSDK_OFFSET(0x16D9B750)
#define IAAOMMGICFK_FJNPGLHHIMA_OFFSET UNITYSDK_OFFSET(0x16D9D360)
#define IAAOMMGICFK_GAMIMFFEHLJ_OFFSET UNITYSDK_OFFSET(0x16D9DBA0)
#define IAAOMMGICFK_GBPIHBJGABK_OFFSET UNITYSDK_OFFSET(0x16D9C830)
#define IAAOMMGICFK_GDPDMBNMCHP_OFFSET UNITYSDK_OFFSET(0x16D9E080)
#define IAAOMMGICFK_GETLEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0x16D9D420)
#define IAAOMMGICFK_GKNHPHOOHJH_OFFSET UNITYSDK_OFFSET(0x16D9DB00)
#define IAAOMMGICFK_GOBNMAPPBGD_OFFSET UNITYSDK_OFFSET(0x16D9E210)
#define IAAOMMGICFK_GOJGAOONHJM_OFFSET UNITYSDK_OFFSET(0x16D9A780)
#define IAAOMMGICFK_GPCIKHMFAFG_OFFSET UNITYSDK_OFFSET(0x16DA0700)
#define IAAOMMGICFK_HADOIOHKPHC_OFFSET UNITYSDK_OFFSET(0x16D9D900)
#define IAAOMMGICFK_HDAIGACPHKD_OFFSET UNITYSDK_OFFSET(0x16D9D550)
#define IAAOMMGICFK_HEGPPKNJAGN_OFFSET UNITYSDK_OFFSET(0x16D9A6D0)
#define IAAOMMGICFK_HEKENBGFDPA_OFFSET UNITYSDK_OFFSET(0x16D9C930)
#define IAAOMMGICFK_HGCNBJMIDOL_OFFSET UNITYSDK_OFFSET(0x16D9C7D0)
#define IAAOMMGICFK_HKCIKNGMCOF_OFFSET UNITYSDK_OFFSET(0x16DA0C30)
#define IAAOMMGICFK_HPCNNIDHHPL_OFFSET UNITYSDK_OFFSET(0x16D9D630)
#define IAAOMMGICFK_ICBMGIDGIFO_OFFSET UNITYSDK_OFFSET(0x16DA09E0)
#define IAAOMMGICFK_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0x16D9CFD0)
#define IAAOMMGICFK_IGLKOPOJNGP_OFFSET UNITYSDK_OFFSET(0x16D9E260)
#define IAAOMMGICFK_JBOEHKJGCKF_OFFSET UNITYSDK_OFFSET(0x16D9E2F0)
#define IAAOMMGICFK_JMLFDJLPLIB_OFFSET UNITYSDK_OFFSET(0x16DA0630)
#define IAAOMMGICFK_JNHMPCLCMIA_OFFSET UNITYSDK_OFFSET(0x16D9E460)
#define IAAOMMGICFK_JNNBOPEBNIE_OFFSET UNITYSDK_OFFSET(0x16D9EDF0)
#define IAAOMMGICFK_JOOOPDCOAMP_OFFSET UNITYSDK_OFFSET(0x16D9B8D0)
#define IAAOMMGICFK_KIACCPGPKCM_OFFSET UNITYSDK_OFFSET(0x16D9CC40)
#define IAAOMMGICFK_KIPFNKPEKJP_OFFSET UNITYSDK_OFFSET(0x16D9CB60)
#define IAAOMMGICFK_LHMFPDJEFHJ_OFFSET UNITYSDK_OFFSET(0x16D9E5F0)
#define IAAOMMGICFK_LKHHAKLLGDB_OFFSET UNITYSDK_OFFSET(0x16D9D3C0)
#define IAAOMMGICFK_LLDMEFPKPIA_OFFSET UNITYSDK_OFFSET(0x16D9CAB0)
#define IAAOMMGICFK_LNBICFCLLMG_OFFSET UNITYSDK_OFFSET(0x16D9CCA0)
#define IAAOMMGICFK_MLJICJNFPFB_OFFSET UNITYSDK_OFFSET(0x16DA0920)
#define IAAOMMGICFK_MLNJJOIGPBK_OFFSET UNITYSDK_OFFSET(0x16D9D7D0)
#define IAAOMMGICFK_MOMHHNOJOJD_OFFSET UNITYSDK_OFFSET(0x16D9BBE0)
#define IAAOMMGICFK_MONGGBDHPLK_OFFSET UNITYSDK_OFFSET(0x16D9C350)
#define IAAOMMGICFK_NDECGMBHIHE_OFFSET UNITYSDK_OFFSET(0x16DA0B80)
#define IAAOMMGICFK_NDIHAJMMJKL_OFFSET UNITYSDK_OFFSET(0x16D9B540)
#define IAAOMMGICFK_NDNCIJMJMLE_OFFSET UNITYSDK_OFFSET(0x16D9D890)
#define IAAOMMGICFK_NEDLHEEGBHD_OFFSET UNITYSDK_OFFSET(0x16D9E3C0)
#define IAAOMMGICFK_NFEHGLNLEGH_OFFSET UNITYSDK_OFFSET(0x16D9A850)
#define IAAOMMGICFK_NGMBNADDHPM_OFFSET UNITYSDK_OFFSET(0x16D9E030)
#define IAAOMMGICFK_NJNNLGIPALN_OFFSET UNITYSDK_OFFSET(0x16D9A630)
#define IAAOMMGICFK_NNLBJEJIFOJ_OFFSET UNITYSDK_OFFSET(0x16D9BF40)
#define IAAOMMGICFK_OBHMLKCBLNF_OFFSET UNITYSDK_OFFSET(0x16D9CEC0)
#define IAAOMMGICFK_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x16D9C630)
#define IAAOMMGICFK_OLICHPLLPOG_OFFSET UNITYSDK_OFFSET(0x16DA0C20)
#define IAAOMMGICFK_OLLMADPGCLA_OFFSET UNITYSDK_OFFSET(0x16D9BAB0)
#define IAAOMMGICFK_ONPKLNENFAH_OFFSET UNITYSDK_OFFSET(0x16D9AAB0)
#define IAAOMMGICFK_OOBLHFPKLON_OFFSET UNITYSDK_OFFSET(0x16DA0D20)
#define IAAOMMGICFK_OPCAJANJEOC_OFFSET UNITYSDK_OFFSET(0x16D9AC10)
#define IAAOMMGICFK_PAEMDKCLBCO_OFFSET UNITYSDK_OFFSET(0x16D9AD50)
#define IAAOMMGICFK_PDKJOEEMCKN_OFFSET UNITYSDK_OFFSET(0x16DA03C0)
#define IAAOMMGICFK_PEGEBNACNCL_OFFSET UNITYSDK_OFFSET(0x16D9B490)
#define IAAOMMGICFK_PENHPKPNNDA_OFFSET UNITYSDK_OFFSET(0x16DA0CC0)
#define IAAOMMGICFK_PFDGMDMGABC_OFFSET UNITYSDK_OFFSET(0x16D9AB00)
#define IAAOMMGICFK_PFOFAGDOHJC_OFFSET UNITYSDK_OFFSET(0x16D9B4E0)
#define IAAOMMGICFK_PGCCKEGFLMA_OFFSET UNITYSDK_OFFSET(0x16D9D4A0)
#define IAAOMMGICFK_PGOEJMJHIIN_OFFSET UNITYSDK_OFFSET(0x16DA07B0)
#define IAAOMMGICFK_PIBCEJLGAMM_OFFSET UNITYSDK_OFFSET(0x16D9E660)
#define IAAOMMGICFK_PILPCMNAENO_OFFSET UNITYSDK_OFFSET(0x16D9CA30)
#define IAAOMMGICFK_PNKGCIPEJGD_OFFSET UNITYSDK_OFFSET(0x16DA0DA0)
#define IAAOMMGICFK_PNPOPJKAOGG_OFFSET UNITYSDK_OFFSET(0x16D9CDB0)
#define IAAOMMGICFK__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x16D9AFE0)
#define IAAOMMGICFK__ONINIT_OFFSET UNITYSDK_OFFSET(0x16D9A2B0)
#define IAAOMMGICFK__ONSTART_OFFSET UNITYSDK_OFFSET(0x16D9A980)
#define IAAOMMGICFK__ONSTOP_OFFSET UNITYSDK_OFFSET(0x16D9AF50)
#define IAAOMMGICFK__ONTICK_OFFSET UNITYSDK_OFFSET(0x16D9AB60)

inline static constexpr unsigned int IAAOMMGICFK_TypeDefinitionIndex = 79742;

	class IAAOMMGICFK : public ::HCLPKMIIANI
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x78
		::AFLJOAMPADJ* JEIALFDCPND; // 0x80
		::MJAOHLLPLGK* FKINCGODJEP; // 0x88
		::System::Boolean COEHDHDKOMO; // 0x90
		::System::Boolean FOIIDBFBLLF; // 0x91
		::System::Boolean OIMMLPFDJBA; // 0x92
		::System::Boolean MDEFDPIEEEB; // 0x93
		::System::Boolean PJAFPIDFEPD; // 0x94
		::System::Boolean OIKFNPDJOIO; // 0x95
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_CTOR_OFFSET))(this);
		}

		::System::Void _OnInit(::IAJLHKIHBFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJLHKIHBFB*))((::PBYTE)hIl2Cpp + IAAOMMGICFK__ONINIT_OFFSET))(this, a1);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK__ONSTART_OFFSET))(this);
		}

		::System::Boolean CanStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_CANSTART_OFFSET))(this);
		}

		::System::Void ONPKLNENFAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_ONPKLNENFAH_OFFSET))(this);
		}

		::System::Boolean PFDGMDMGABC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_PFDGMDMGABC_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAAOMMGICFK__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK__ONSTOP_OFFSET))(this);
		}

		::System::Void _OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK__ONCLEAR_OFFSET))(this);
		}

		::System::Boolean PEGEBNACNCL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_PEGEBNACNCL_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase PFOFAGDOHJC()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_PFOFAGDOHJC_OFFSET))(this);
		}

		::System::Void OPCAJANJEOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_OPCAJANJEOC_OFFSET))(this);
		}

		::System::Void CCEICGGLAJI(::RPG::Client::LittleGame::ComicDessert::ComicDessertToastType a1, ::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertToastType, ::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase))((::PBYTE)hIl2Cpp + IAAOMMGICFK_CCEICGGLAJI_OFFSET))(this, a1, a2);
		}

		::System::String* FEDKOHNIOEB(::RPG::Client::LittleGame::ComicDessert::ComicDessertToastType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertToastType))((::PBYTE)hIl2Cpp + IAAOMMGICFK_FEDKOHNIOEB_OFFSET))(this, a1);
		}

		::System::Void JOOOPDCOAMP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IAAOMMGICFK_JOOOPDCOAMP_OFFSET))(this, a1);
		}

		::System::Void NDIHAJMMJKL(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase))((::PBYTE)hIl2Cpp + IAAOMMGICFK_NDIHAJMMJKL_OFFSET))(this, a1);
		}

		::System::Void OLLMADPGCLA(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase))((::PBYTE)hIl2Cpp + IAAOMMGICFK_OLLMADPGCLA_OFFSET))(this, a1);
		}

		::System::Void MOMHHNOJOJD(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase))((::PBYTE)hIl2Cpp + IAAOMMGICFK_MOMHHNOJOJD_OFFSET))(this, a1);
		}

		::System::Void MONGGBDHPLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_MONGGBDHPLK_OFFSET))(this);
		}

		::System::Boolean FDBMGHKAMLF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_FDBMGHKAMLF_OFFSET))(this);
		}

		::System::Void NNLBJEJIFOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_NNLBJEJIFOJ_OFFSET))(this);
		}

		::System::Void PAEMDKCLBCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_PAEMDKCLBCO_OFFSET))(this);
		}

		::System::Void NJNNLGIPALN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_NJNNLGIPALN_OFFSET))(this);
		}

		::System::Void NFEHGLNLEGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_NFEHGLNLEGH_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ComicDessert::ComicDessertSceneRoot* GOJGAOONHJM()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::ComicDessertSceneRoot*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_GOJGAOONHJM_OFFSET))(this);
		}

		::System::Void GBPIHBJGABK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAAOMMGICFK_GBPIHBJGABK_OFFSET))(this, a1);
		}

		::System::Void HEKENBGFDPA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAAOMMGICFK_HEKENBGFDPA_OFFSET))(this, a1);
		}

		::System::Void PILPCMNAENO(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + IAAOMMGICFK_PILPCMNAENO_OFFSET))(this, a1, a2);
		}

		::System::Boolean LLDMEFPKPIA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IAAOMMGICFK_LLDMEFPKPIA_OFFSET))(this, a1);
		}

		::System::Boolean KIPFNKPEKJP(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + IAAOMMGICFK_KIPFNKPEKJP_OFFSET))(this, a1, a2);
		}

		::System::Void KIACCPGPKCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_KIACCPGPKCM_OFFSET))(this);
		}

		::System::Void LNBICFCLLMG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IAAOMMGICFK_LNBICFCLLMG_OFFSET))(this, a1);
		}

		::System::Void BKGBFOEFNAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_BKGBFOEFNAO_OFFSET))(this);
		}

		::System::Void PNPOPJKAOGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_PNPOPJKAOGG_OFFSET))(this);
		}

		::System::Void OBHMLKCBLNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_OBHMLKCBLNF_OFFSET))(this);
		}

		::System::Void ADPBLKBJFOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_ADPBLKBJFOO_OFFSET))(this);
		}

		::System::Void HEGPPKNJAGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_HEGPPKNJAGN_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void IECIAPPANHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_IECIAPPANHI_OFFSET))(this);
		}

		::System::Void EBNGGHFINHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_EBNGGHFINHI_OFFSET))(this);
		}

		::AADICOHAPNO* FJNPGLHHIMA()
		{
			return ((::AADICOHAPNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_FJNPGLHHIMA_OFFSET))(this);
		}

		::PEPPJLLGLIM* LKHHAKLLGDB()
		{
			return ((::PEPPJLLGLIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_LKHHAKLLGDB_OFFSET))(this);
		}

		::System::String* GetLevelGraphPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_GETLEVELGRAPHPATH_OFFSET))(this);
		}

		::System::Boolean PGCCKEGFLMA(::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::AKNLHDIFKPD>* a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::AKNLHDIFKPD>*, ::System::Single))((::PBYTE)hIl2Cpp + IAAOMMGICFK_PGCCKEGFLMA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean HDAIGACPHKD(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAAOMMGICFK_HDAIGACPHKD_OFFSET))(this, a1);
		}

		::System::Void HPCNNIDHHPL(::System::Int32 a1, ::System::Single a2, ::RPG::Client::LittleGame::ComicDessert::FeverStyle a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::RPG::Client::LittleGame::ComicDessert::FeverStyle, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IAAOMMGICFK_HPCNNIDHHPL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean MLNJJOIGPBK(::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::AKNLHDIFKPD>* a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::AKNLHDIFKPD>*, ::System::Single))((::PBYTE)hIl2Cpp + IAAOMMGICFK_MLNJJOIGPBK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean NDNCIJMJMLE(::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*))((::PBYTE)hIl2Cpp + IAAOMMGICFK_NDNCIJMJMLE_OFFSET))(this, a1);
		}

		::System::Boolean HADOIOHKPHC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_HADOIOHKPHC_OFFSET))(this);
		}

		::System::Boolean GAMIMFFEHLJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_GAMIMFFEHLJ_OFFSET))(this);
		}

		::System::Boolean GKNHPHOOHJH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_GKNHPHOOHJH_OFFSET))(this);
		}

		::System::Boolean ECODIMFIIAG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_ECODIMFIIAG_OFFSET))(this);
		}

		::System::Void CBCAJPFIKKH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IAAOMMGICFK_CBCAJPFIKKH_OFFSET))(this, a1);
		}

		::System::Boolean NGMBNADDHPM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_NGMBNADDHPM_OFFSET))(this);
		}

		::System::Boolean GDPDMBNMCHP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_GDPDMBNMCHP_OFFSET))(this);
		}

		::System::Void GOBNMAPPBGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_GOBNMAPPBGD_OFFSET))(this);
		}

		::System::Boolean IGLKOPOJNGP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_IGLKOPOJNGP_OFFSET))(this);
		}

		::System::Boolean JBOEHKJGCKF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_JBOEHKJGCKF_OFFSET))(this);
		}

		::System::Void NEDLHEEGBHD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IAAOMMGICFK_NEDLHEEGBHD_OFFSET))(this, a1);
		}

		::System::Boolean JNHMPCLCMIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_JNHMPCLCMIA_OFFSET))(this);
		}

		::System::Boolean LHMFPDJEFHJ(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IAAOMMGICFK_LHMFPDJEFHJ_OFFSET))(this, a1);
		}

		::System::Boolean PIBCEJLGAMM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_PIBCEJLGAMM_OFFSET))(this);
		}

		::System::Void CKBGPCEGOGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_CKBGPCEGOGA_OFFSET))(this);
		}

		::System::Int32 DGOIMPOLJPM(::System::UInt32 a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + IAAOMMGICFK_DGOIMPOLJPM_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EHEMLMMEILM(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + IAAOMMGICFK_EHEMLMMEILM_OFFSET))(this, a1, a2);
		}

		::System::Boolean JNNBOPEBNIE(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IAAOMMGICFK_JNNBOPEBNIE_OFFSET))(this, a1);
		}

		::System::Boolean BANHOLIJAOI(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::AKNLHDIFKPD>* a3, ::System::String* a4, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::AKNLHDIFKPD>*, ::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + IAAOMMGICFK_BANHOLIJAOI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean HGCNBJMIDOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_HGCNBJMIDOL_OFFSET))(this);
		}

		::System::Boolean EHEFELEBAIB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_EHEFELEBAIB_OFFSET))(this);
		}

		::System::Boolean PDKJOEEMCKN(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IAAOMMGICFK_PDKJOEEMCKN_OFFSET))(this, a1);
		}

		::System::Int32 AOCEEDGPKFL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IAAOMMGICFK_AOCEEDGPKFL_OFFSET))(this, a1);
		}

		::System::Int32 CAFBIGHOLCM(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + IAAOMMGICFK_CAFBIGHOLCM_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 JMLFDJLPLIB(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3, ::RPG::GameCore::ComicDessertTalkBubbleType a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::GameCore::ComicDessertTalkBubbleType))((::PBYTE)hIl2Cpp + IAAOMMGICFK_JMLFDJLPLIB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GPCIKHMFAFG(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IAAOMMGICFK_GPCIKHMFAFG_OFFSET))(this, a1, a2);
		}

		::System::Void PGOEJMJHIIN(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IAAOMMGICFK_PGOEJMJHIIN_OFFSET))(this, a1, a2);
		}

		::System::Int32 FCAALCAKCPC(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + IAAOMMGICFK_FCAALCAKCPC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MLJICJNFPFB(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + IAAOMMGICFK_MLJICJNFPFB_OFFSET))(this, a1, a2);
		}

		::System::Boolean ICBMGIDGIFO(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAAOMMGICFK_ICBMGIDGIFO_OFFSET))(this, a1);
		}

		::System::Void NDECGMBHIHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_NDECGMBHIHE_OFFSET))(this);
		}

		::System::Void FDCDLCHBODE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_FDCDLCHBODE_OFFSET))(this);
		}

		::System::Boolean OLICHPLLPOG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_OLICHPLLPOG_OFFSET))(this);
		}

		::System::Void HKCIKNGMCOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_HKCIKNGMCOF_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PENHPKPNNDA()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_PENHPKPNNDA_OFFSET))(this);
		}

		::System::Void ANLOKNHPBFB(::BBPGFHGLKLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBPGFHGLKLL*))((::PBYTE)hIl2Cpp + IAAOMMGICFK_ANLOKNHPBFB_OFFSET))(this, a1);
		}

		::System::Void OOBLHFPKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_OOBLHFPKLON_OFFSET))(this);
		}

		::System::Void PNKGCIPEJGD(::BBPGFHGLKLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBPGFHGLKLL*))((::PBYTE)hIl2Cpp + IAAOMMGICFK_PNKGCIPEJGD_OFFSET))(this, a1);
		}

		::System::Void AHCOLJNMCJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_AHCOLJNMCJM_OFFSET))(this);
		}

		::RPG::Client::ComicDessert::ComicDessertModule* CBJKIDFKMGD()
		{
			return ((::RPG::Client::ComicDessert::ComicDessertModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAOMMGICFK_CBJKIDFKMGD_OFFSET))(this);
		}

	};
