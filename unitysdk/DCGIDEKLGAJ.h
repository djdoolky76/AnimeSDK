#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCGIDEKLGAJ_ForceKillMarkPanelType.h"
#include "unitysdk/DCGIDEKLGAJ_TweenAnimState.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/IGKFNIEJGLM.h"
class DFFPCAIGHPP;
class EIDFPDLDDEK;
class HKJDDODAIAE;
namespace RPG::Client { class ForceKillMarkDataProvider; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define DCGIDEKLGAJ_ACBENJFCAHG_OFFSET UNITYSDK_OFFSET(0x1B16B690)
#define DCGIDEKLGAJ_ACCNBLLBDLH_OFFSET UNITYSDK_OFFSET(0x1B16A530)
#define DCGIDEKLGAJ_AKCHJOBIIHE_OFFSET UNITYSDK_OFFSET(0x1B16C320)
#define DCGIDEKLGAJ_BLLAPOOMINH_OFFSET UNITYSDK_OFFSET(0x1B16A6A0)
#define DCGIDEKLGAJ_BOFDODMJFML_OFFSET UNITYSDK_OFFSET(0x1B16BB20)
#define DCGIDEKLGAJ_CEENCDMHBFB_OFFSET UNITYSDK_OFFSET(0x1B16B6E0)
#define DCGIDEKLGAJ_CKCCGAJKNAB_OFFSET UNITYSDK_OFFSET(0x1B16C180)
#define DCGIDEKLGAJ_CMMDKAMBJMJ_OFFSET UNITYSDK_OFFSET(0x1B16B560)
#define DCGIDEKLGAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1B16D510)
#define DCGIDEKLGAJ_DAHMFODCDIF_OFFSET UNITYSDK_OFFSET(0x1B16B270)
#define DCGIDEKLGAJ_DJDOMDEFOML_OFFSET UNITYSDK_OFFSET(0x1B16BD30)
#define DCGIDEKLGAJ_DKOAAEMEPAO_OFFSET UNITYSDK_OFFSET(0x1B16BC70)
#define DCGIDEKLGAJ_DPFNKADDIJM_OFFSET UNITYSDK_OFFSET(0x1B16ABF0)
#define DCGIDEKLGAJ_ECIMAEJHANM_OFFSET UNITYSDK_OFFSET(0x1B16B9D0)
#define DCGIDEKLGAJ_EDCJFGHCCGO_OFFSET UNITYSDK_OFFSET(0x1B16B7D0)
#define DCGIDEKLGAJ_EFKGDCNJEFC_OFFSET UNITYSDK_OFFSET(0x1B16D410)
#define DCGIDEKLGAJ_EGMIMFGOHHB_OFFSET UNITYSDK_OFFSET(0x1B16A250)
#define DCGIDEKLGAJ_FCNHECBABHC_OFFSET UNITYSDK_OFFSET(0x1B16C040)
#define DCGIDEKLGAJ_FHAPPCADGCE_OFFSET UNITYSDK_OFFSET(0x1B16A9B0)
#define DCGIDEKLGAJ_GDBOALOEFMD_OFFSET UNITYSDK_OFFSET(0x1B16B780)
#define DCGIDEKLGAJ_GKNAJCIGJJC_OFFSET UNITYSDK_OFFSET(0x1B16D460)
#define DCGIDEKLGAJ_HADKHLGBFLK_OFFSET UNITYSDK_OFFSET(0x1B16B5D0)
#define DCGIDEKLGAJ_HBFPFNGAODL_OFFSET UNITYSDK_OFFSET(0x1B16BCD0)
#define DCGIDEKLGAJ_HEAKAJDNCGE_OFFSET UNITYSDK_OFFSET(0x1B16B880)
#define DCGIDEKLGAJ_HHEOIKICIEL_OFFSET UNITYSDK_OFFSET(0x1B16D170)
#define DCGIDEKLGAJ_HMLNADMNPMI_OFFSET UNITYSDK_OFFSET(0x1B16B830)
#define DCGIDEKLGAJ_ILPMNJHBPEG_OFFSET UNITYSDK_OFFSET(0x1B16ADD0)
#define DCGIDEKLGAJ_IPKLEHABJDF_OFFSET UNITYSDK_OFFSET(0x1B16A860)
#define DCGIDEKLGAJ_JDOELEIHMBN_OFFSET UNITYSDK_OFFSET(0x1B16CCC0)
#define DCGIDEKLGAJ_KPLOILLLDBK_OFFSET UNITYSDK_OFFSET(0x1B16AD50)
#define DCGIDEKLGAJ_KPNIKDBICCM_OFFSET UNITYSDK_OFFSET(0x1B16C4A0)
#define DCGIDEKLGAJ_LKGMNLBFBPD_OFFSET UNITYSDK_OFFSET(0x1B16BF00)
#define DCGIDEKLGAJ_MDEAIHPEEIK_OFFSET UNITYSDK_OFFSET(0x1B16A390)
#define DCGIDEKLGAJ_MGPENENAEPH_OFFSET UNITYSDK_OFFSET(0x1B16D2F0)
#define DCGIDEKLGAJ_MIGDDBLJFMD_OFFSET UNITYSDK_OFFSET(0x1B16AA90)
#define DCGIDEKLGAJ_MMECAADJFOM_OFFSET UNITYSDK_OFFSET(0x1B16B4C0)
#define DCGIDEKLGAJ_MPLLIJLMHJJ_OFFSET UNITYSDK_OFFSET(0x1B16C200)
#define DCGIDEKLGAJ_NJIGGPAFCEI_OFFSET UNITYSDK_OFFSET(0x1B16D4B0)
#define DCGIDEKLGAJ_OBAOCPNEBOA_OFFSET UNITYSDK_OFFSET(0x1B16A810)
#define DCGIDEKLGAJ_OIJJFFDOMBP_OFFSET UNITYSDK_OFFSET(0x1B16CE90)
#define DCGIDEKLGAJ_OJEKLHHILDD_OFFSET UNITYSDK_OFFSET(0x1B16B730)
#define DCGIDEKLGAJ_OKKEAAIBMCF_OFFSET UNITYSDK_OFFSET(0x1B16AED0)
#define DCGIDEKLGAJ_ONEOFIGFEPK_OFFSET UNITYSDK_OFFSET(0x1B16C380)
#define DCGIDEKLGAJ_ONIHGLIAIIE_OFFSET UNITYSDK_OFFSET(0x1B16BE90)
#define DCGIDEKLGAJ_OPCDEPOJOAL_OFFSET UNITYSDK_OFFSET(0x1B16CEE0)
#define DCGIDEKLGAJ_PBGMJHHNINL_OFFSET UNITYSDK_OFFSET(0x1B16B0F0)
#define DCGIDEKLGAJ_PFHIHEHFGEB_OFFSET UNITYSDK_OFFSET(0x1B16A1A0)
#define DCGIDEKLGAJ_PFNEMDODCAE_OFFSET UNITYSDK_OFFSET(0x1B16A3F0)
#define DCGIDEKLGAJ_PGCPDNGPMLJ_OFFSET UNITYSDK_OFFSET(0x1B16D2A0)
#define DCGIDEKLGAJ_PJMBOIFCHFP_OFFSET UNITYSDK_OFFSET(0x1B16A650)
#define DCGIDEKLGAJ_PKMIIPFIIOF_OFFSET UNITYSDK_OFFSET(0x1B16AFA0)
#define DCGIDEKLGAJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B16C750)
#define DCGIDEKLGAJ__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1B16C600)
#define DCGIDEKLGAJ__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1B16CAF0)
#define DCGIDEKLGAJ__ONTICK_OFFSET UNITYSDK_OFFSET(0x1B16CD90)
#define DCGIDEKLGAJ__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B16CC50)

inline static constexpr unsigned int DCGIDEKLGAJ_TypeDefinitionIndex = 73669;

	class DCGIDEKLGAJ : public ::FMPCODLIOLG
	{
	public:
		::HKJDDODAIAE* KBHDJMBGNJC; // 0x60
		::System::Action_1<::System::Single>* KHHLFDELGBC; // 0x68
		::EIDFPDLDDEK* MEIFJHOKEPH; // 0x70
		::System::Action_1<::System::Single>* LECMHEEAFEM; // 0x78
		::System::Action_1<::System::Single>* MBEFNCNAECB; // 0x80
		::UnityEngine::RectTransform* DDMJJAKCOID; // 0x88
		::System::Action* FEHLHIEBKLD; // 0x90
		::System::Action* OOMGNJOILLB; // 0x98
		::UnityEngine::Transform* HCOGIJGBHFB; // 0xA0
		::DFFPCAIGHPP* HFKDBOLDFEH; // 0xA8
		::DCGIDEKLGAJ_ForceKillMarkPanelType LDJBHLLANKC; // 0xB0
		::System::Boolean BNMJLLCPLJC; // 0xB4
		::System::Boolean HAFCOEMEHNH; // 0xB5
		::System::Byte _padding0[0x2];
		::System::Single BOEIAMPJKAC; // 0xB8
		::System::Single PBCEGAHDHJC; // 0xBC
		::UnityEngine::Color GANKIOBIBMA; // 0xC0
		::System::Single PINIPLMPALI; // 0xD0
		::System::Single GFJKAOALBBK; // 0xD4
		::System::Single GHJJJLNJBJL; // 0xD8
		::System::Single CLCCGDFJEMF; // 0xDC
		::System::Single JIDPMABJPEA; // 0xE0
		::UnityEngine::Color GLHMOPDPMLH; // 0xE4
		::System::Boolean JHCPCOKPNJH; // 0xF4
		::System::Boolean LAIBJMODDBB; // 0xF5
		::System::Boolean BBIBBIJEEKK; // 0xF6
		::System::Byte _padding1[0x1];
		::System::Single HJAGJEKFPED; // 0xF8
		::System::Single FGDOBHBCCOB; // 0xFC
		::System::Single EKENEFAKILK; // 0x100
		::System::Single EIFBLIDPNIH; // 0x104
		::DCGIDEKLGAJ_TweenAnimState ALIOKKHBIIK; // 0x108
		::System::Single BFKCADADNCA; // 0x10C
		::System::Single MOBANLDKIIA; // 0x110
		::System::Single IJANIDAGJAI; // 0x114
		::System::Single EJNMGLJJEOO; // 0x118
		// static const ::System::Object JFAKBMMDMLL; // 0x0
		// static const ::System::Object OGMBJOKKAKC; // 0x0
		// static const ::System::Object JBCLBIPOINH; // 0x0
		// static const ::System::Object IJBGNHNDOKN; // 0x0
		// static const ::System::Object KJOIAIOKMKP; // 0x0
		// static const ::System::Object IKCNNCIEMDO; // 0x0
		// static const ::System::Object OHDKLNONACJ; // 0x0
		// static const ::System::Object OOIJGBAEOBC; // 0x0
		// static const ::System::Object PFGCLABNLAB; // 0x0
		// static const ::System::Object EMINLHCGCAB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_CTOR_OFFSET))(this);
		}

		::System::Void PFHIHEHFGEB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_PFHIHEHFGEB_OFFSET))(this, a1);
		}

		::System::Void PFNEMDODCAE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_PFNEMDODCAE_OFFSET))(this, a1);
		}

		::System::Void PJMBOIFCHFP(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_PJMBOIFCHFP_OFFSET))(this, a1);
		}

		::System::Single ACCNBLLBDLH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_ACCNBLLBDLH_OFFSET))(this);
		}

		::System::Void BLLAPOOMINH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_BLLAPOOMINH_OFFSET))(this);
		}

		::System::Void MDEAIHPEEIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_MDEAIHPEEIK_OFFSET))(this);
		}

		::System::Void EGMIMFGOHHB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_EGMIMFGOHHB_OFFSET))(this, a1);
		}

		::System::Boolean OBAOCPNEBOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_OBAOCPNEBOA_OFFSET))(this);
		}

		::System::Void IPKLEHABJDF(::RPG::Client::ForceKillMarkDataProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ForceKillMarkDataProvider*))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_IPKLEHABJDF_OFFSET))(this, a1);
		}

		::System::Void FHAPPCADGCE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_FHAPPCADGCE_OFFSET))(this, a1);
		}

		::System::Void ILPMNJHBPEG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_ILPMNJHBPEG_OFFSET))(this, a1);
		}

		::System::Void PBGMJHHNINL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_PBGMJHHNINL_OFFSET))(this, a1);
		}

		::System::Void DAHMFODCDIF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_DAHMFODCDIF_OFFSET))(this, a1);
		}

		::System::Void MMECAADJFOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_MMECAADJFOM_OFFSET))(this);
		}

		::System::Void CMMDKAMBJMJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_CMMDKAMBJMJ_OFFSET))(this, a1);
		}

		::System::Void ACBENJFCAHG(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_ACBENJFCAHG_OFFSET))(this, a1);
		}

		::System::Void CEENCDMHBFB(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_CEENCDMHBFB_OFFSET))(this, a1);
		}

		::System::Void OJEKLHHILDD(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_OJEKLHHILDD_OFFSET))(this, a1);
		}

		::System::Void GDBOALOEFMD(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_GDBOALOEFMD_OFFSET))(this, a1);
		}

		::System::Void EDCJFGHCCGO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_EDCJFGHCCGO_OFFSET))(this, a1);
		}

		::System::Void HMLNADMNPMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_HMLNADMNPMI_OFFSET))(this);
		}

		::System::Void HEAKAJDNCGE(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_HEAKAJDNCGE_OFFSET))(this, a1);
		}

		::System::Void ECIMAEJHANM(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_ECIMAEJHANM_OFFSET))(this, a1);
		}

		::System::Void PKMIIPFIIOF(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_PKMIIPFIIOF_OFFSET))(this, a1);
		}

		::System::Void BOFDODMJFML(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_BOFDODMJFML_OFFSET))(this, a1);
		}

		::System::Void DKOAAEMEPAO(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_DKOAAEMEPAO_OFFSET))(this, a1);
		}

		::System::Void HBFPFNGAODL(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_HBFPFNGAODL_OFFSET))(this, a1);
		}

		::System::Void DPFNKADDIJM(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_DPFNKADDIJM_OFFSET))(this, a1, a2);
		}

		::System::Void MIGDDBLJFMD(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_MIGDDBLJFMD_OFFSET))(this, a1, a2);
		}

		::System::Void ONIHGLIAIIE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_ONIHGLIAIIE_OFFSET))(this, a1);
		}

		::System::Void FCNHECBABHC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_FCNHECBABHC_OFFSET))(this, a1);
		}

		::System::Single CKCCGAJKNAB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_CKCCGAJKNAB_OFFSET))(this);
		}

		::System::Single MPLLIJLMHJJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_MPLLIJLMHJJ_OFFSET))(this);
		}

		::System::Single AKCHJOBIIHE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_AKCHJOBIIHE_OFFSET))(this);
		}

		::System::Void KPNIKDBICCM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_KPNIKDBICCM_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ__ONTICK_OFFSET))(this, a1);
		}

		::System::Boolean OIJJFFDOMBP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_OIJJFFDOMBP_OFFSET))(this);
		}

		::System::Void OPCDEPOJOAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_OPCDEPOJOAL_OFFSET))(this);
		}

		::System::Void HHEOIKICIEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_HHEOIKICIEL_OFFSET))(this);
		}

		::System::Void LKGMNLBFBPD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_LKGMNLBFBPD_OFFSET))(this, a1);
		}

		::System::Void OKKEAAIBMCF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_OKKEAAIBMCF_OFFSET))(this, a1);
		}

		::System::Void KPLOILLLDBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_KPLOILLLDBK_OFFSET))(this);
		}

		::System::Single ONEOFIGFEPK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_ONEOFIGFEPK_OFFSET))(this);
		}

		::System::Single MGPENENAEPH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_MGPENENAEPH_OFFSET))(this);
		}

		::System::Void HADKHLGBFLK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_HADKHLGBFLK_OFFSET))(this, a1);
		}

		::System::Single DJDOMDEFOML(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_DJDOMDEFOML_OFFSET))(this, a1);
		}

		::System::Void JDOELEIHMBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_JDOELEIHMBN_OFFSET))(this);
		}

		::System::Single PGCPDNGPMLJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_PGCPDNGPMLJ_OFFSET))(this);
		}

		::System::Boolean EFKGDCNJEFC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_EFKGDCNJEFC_OFFSET))(this);
		}

		::System::Single GKNAJCIGJJC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_GKNAJCIGJJC_OFFSET))(this);
		}

		::UnityEngine::Color NJIGGPAFCEI()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_NJIGGPAFCEI_OFFSET))(this);
		}

	};
