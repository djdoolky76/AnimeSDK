#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace CriWare { class CriManaMovieMaterial; }
namespace RPG::Client { class ClientOnlyCommonConfig; }
namespace RPG::Client { class DebugPerformanceInfoPanel; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define LKCKHAIJMOB_BABLKCEBHIJ_OFFSET UNITYSDK_OFFSET(0x18CCEB40)
#define LKCKHAIJMOB_BPGLLLGDNGP_OFFSET UNITYSDK_OFFSET(0x18CCE870)
#define LKCKHAIJMOB_CFAGELFBNJD_OFFSET UNITYSDK_OFFSET(0x18CCCB50)
#define LKCKHAIJMOB_CKALNDFMOKL_OFFSET UNITYSDK_OFFSET(0x18CCD970)
#define LKCKHAIJMOB_DMFBFIJHFOG_OFFSET UNITYSDK_OFFSET(0x18CCDB00)
#define LKCKHAIJMOB_DNAIFAEBPHJ_OFFSET UNITYSDK_OFFSET(0x18CCE8F0)
#define LKCKHAIJMOB_EBHNJMPEILL_OFFSET UNITYSDK_OFFSET(0x18CCE580)
#define LKCKHAIJMOB_EBHPDFPIJMI_OFFSET UNITYSDK_OFFSET(0x18CCD000)
#define LKCKHAIJMOB_EDACCEPGKPM_OFFSET UNITYSDK_OFFSET(0x18CCDC90)
#define LKCKHAIJMOB_EFCNDKBEIIN_OFFSET UNITYSDK_OFFSET(0x18CCBA20)
#define LKCKHAIJMOB_EKDFMBHKHJI_OFFSET UNITYSDK_OFFSET(0x18CCEAC0)
#define LKCKHAIJMOB_FDJKMIAEHJI_OFFSET UNITYSDK_OFFSET(0x18CCE2E0)
#define LKCKHAIJMOB_FFCGOAJMMAC_OFFSET UNITYSDK_OFFSET(0x18CCBCA0)
#define LKCKHAIJMOB_FHFOCDKJIJB_OFFSET UNITYSDK_OFFSET(0x18CCEBB0)
#define LKCKHAIJMOB_FJLCCHBNADM_OFFSET UNITYSDK_OFFSET(0x18CCE040)
#define LKCKHAIJMOB_FNPFKCJJCFL_OFFSET UNITYSDK_OFFSET(0x18CCBF30)
#define LKCKHAIJMOB_GCIBCNHOKKG_OFFSET UNITYSDK_OFFSET(0x18CCC6A0)
#define LKCKHAIJMOB_GFOPPGAEJMF_OFFSET UNITYSDK_OFFSET(0x18CCBB80)
#define LKCKHAIJMOB_HDHJIKHKMDO_OFFSET UNITYSDK_OFFSET(0x18CCC040)
#define LKCKHAIJMOB_IDKKLODPLMO_OFFSET UNITYSDK_OFFSET(0x18CCD160)
#define LKCKHAIJMOB_IMCPOIBAIOO_OFFSET UNITYSDK_OFFSET(0x18CCC150)
#define LKCKHAIJMOB_IMICLPJOFJA_OFFSET UNITYSDK_OFFSET(0x18CCED10)
#define LKCKHAIJMOB_IMIOMMKOMBN_OFFSET UNITYSDK_OFFSET(0x18CCD2F0)
#define LKCKHAIJMOB_JAMNLCKMMHA_OFFSET UNITYSDK_OFFSET(0x18CCE790)
#define LKCKHAIJMOB_JDIBKNIJODJ_OFFSET UNITYSDK_OFFSET(0x18CCE3F0)
#define LKCKHAIJMOB_JHILODFFHJL_OFFSET UNITYSDK_OFFSET(0x18CCCE70)
#define LKCKHAIJMOB_JKOJDDMPDLK_OFFSET UNITYSDK_OFFSET(0x18CCEC60)
#define LKCKHAIJMOB_JLADCJAELDI_OFFSET UNITYSDK_OFFSET(0x18CCC590)
#define LKCKHAIJMOB_KAGEKBLGGCA_OFFSET UNITYSDK_OFFSET(0x18CCBEA0)
#define LKCKHAIJMOB_KGKNBJMIEOM_OFFSET UNITYSDK_OFFSET(0x18CCBD80)
#define LKCKHAIJMOB_KIIMINFEICK_OFFSET UNITYSDK_OFFSET(0x18CCA7C0)
#define LKCKHAIJMOB_LAAFIHJLPLB_OFFSET UNITYSDK_OFFSET(0x18CCE5F0)
#define LKCKHAIJMOB_LPBLDMDBIOA_OFFSET UNITYSDK_OFFSET(0x18CCC830)
#define LKCKHAIJMOB_NCKICPBOBKH_OFFSET UNITYSDK_OFFSET(0x18CCE710)
#define LKCKHAIJMOB_NDAMLDDDJKI_OFFSET UNITYSDK_OFFSET(0x18CCC260)
#define LKCKHAIJMOB_NGKGFBMAMPK_OFFSET UNITYSDK_OFFSET(0x18CCDF30)
#define LKCKHAIJMOB_NJDALCEMHIM_OFFSET UNITYSDK_OFFSET(0x18CCC480)
#define LKCKHAIJMOB_NJKHIGAJHFG_OFFSET UNITYSDK_OFFSET(0x18CCC370)
#define LKCKHAIJMOB_NJNFGMIGCJC_OFFSET UNITYSDK_OFFSET(0x18CCCCE0)
#define LKCKHAIJMOB_OMMANNJPJOI_OFFSET UNITYSDK_OFFSET(0x18CCDE20)
#define LKCKHAIJMOB_ONKKKAPGIKC_OFFSET UNITYSDK_OFFSET(0x18CCD7E0)
#define LKCKHAIJMOB_OOMKEJHOJEG_OFFSET UNITYSDK_OFFSET(0x18CCE1D0)
#define LKCKHAIJMOB_OPCGFJPHIPA_OFFSET UNITYSDK_OFFSET(0x18CCBA60)
#define LKCKHAIJMOB_PCCBKNGDAHB_OFFSET UNITYSDK_OFFSET(0x18CCC9C0)
#define LKCKHAIJMOB_PFDAKBENIJF_OFFSET UNITYSDK_OFFSET(0x18CCEDC0)

inline static constexpr unsigned int LKCKHAIJMOB_TypeDefinitionIndex = 49555;

	class LKCKHAIJMOB : public ::System::Object
	{
	public:
		static ::UnityEngine::Transform** StaticGet_KGDOGDLMELJ()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A3D0);
		}

		static ::UnityEngine::UI::Image** StaticGet_MEPIKEFJLHG()
		{
			return (::UnityEngine::UI::Image**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A3D8);
		}

		static ::RPG::Client::LocalizedText** StaticGet_CCDJOLNPLBJ()
		{
			return (::RPG::Client::LocalizedText**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A3E0);
		}

		static ::UnityEngine::Transform** StaticGet_LIGEMMPFLKI()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A3E8);
		}

		static ::UnityEngine::UI::Image** StaticGet_BJKCBOCLKBL()
		{
			return (::UnityEngine::UI::Image**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A3F0);
		}

		static ::UnityEngine::Transform** StaticGet_DOLBOABHAAM()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A3F8);
		}

		static ::UnityEngine::UI::Image** StaticGet_IEPFFCEBCDB()
		{
			return (::UnityEngine::UI::Image**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A400);
		}

		static ::RPG::Client::ClientOnlyCommonConfig** StaticGet_FJEPLGBIAOH()
		{
			return (::RPG::Client::ClientOnlyCommonConfig**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A408);
		}

		static ::UnityEngine::Transform** StaticGet_PLADJIEFFBI()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A410);
		}

		static ::UnityEngine::Transform** StaticGet_DGNBNJFKJLK()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A418);
		}

		static ::UnityEngine::UI::Image** StaticGet_MFMPHLIAAIH()
		{
			return (::UnityEngine::UI::Image**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A420);
		}

		static ::UnityEngine::Playables::PlayableDirector** StaticGet_OPNHINPCKOJ()
		{
			return (::UnityEngine::Playables::PlayableDirector**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A428);
		}

		static ::CriWare::CriManaMovieMaterial** StaticGet_BAFJFDKDPON()
		{
			return (::CriWare::CriManaMovieMaterial**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A430);
		}

		static ::UnityEngine::Transform** StaticGet_JPICPJEINDC()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A438);
		}

		static ::UnityEngine::Transform** StaticGet_CPPMPGJCFMJ()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A440);
		}

		static ::UnityEngine::Transform** StaticGet_EJIKHNFJGFI()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A448);
		}

		static ::UnityEngine::UI::Text** StaticGet_IOLCFAPCPDP()
		{
			return (::UnityEngine::UI::Text**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A450);
		}

		static ::RPG::Client::LocalizedText** StaticGet_AACOHEKCIDH()
		{
			return (::RPG::Client::LocalizedText**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A458);
		}

		static ::UnityEngine::Canvas** StaticGet_EPOABONPPGJ()
		{
			return (::UnityEngine::Canvas**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A460);
		}

		static ::UnityEngine::Transform** StaticGet_JILDIDPIJJH()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A468);
		}

		static ::UnityEngine::Transform** StaticGet_NAFDDKLMGLL()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A470);
		}

		static ::RPG::Client::LocalizedText** StaticGet_MBMGNOAGGJO()
		{
			return (::RPG::Client::LocalizedText**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A478);
		}

		static ::UnityEngine::UI::Image** StaticGet_AFJIGEDHIPO()
		{
			return (::UnityEngine::UI::Image**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A480);
		}

		static ::UnityEngine::UI::Text** StaticGet_FLMOCLGKGLI()
		{
			return (::UnityEngine::UI::Text**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A488);
		}

		static ::UnityEngine::Transform** StaticGet_BGPIFFEJIJL()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A490);
		}

		static ::UnityEngine::Transform** StaticGet_PAECDBJLLCM()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A498);
		}

		static ::UnityEngine::Transform** StaticGet_LHFCECHDELD()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A4A0);
		}

		static ::UnityEngine::Transform** StaticGet_EAOPEAJHBKG()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A4A8);
		}

		static ::UnityEngine::Transform** StaticGet_NIKFDIBDGGJ()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A4B0);
		}

		static ::RPG::Client::LocalizedText** StaticGet_APAPIBBMKDL()
		{
			return (::RPG::Client::LocalizedText**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A4B8);
		}

		static ::UnityEngine::UI::Text** StaticGet_JDCABDNBIPH()
		{
			return (::UnityEngine::UI::Text**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A4C0);
		}

		static ::RPG::Client::LocalizedText** StaticGet_IGKJFIBBOFE()
		{
			return (::RPG::Client::LocalizedText**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A4C8);
		}

		static ::UnityEngine::Transform** StaticGet_LLADEPHOPBE()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A4D0);
		}

		static ::RPG::Client::DebugPerformanceInfoPanel** StaticGet_FNNJPCLHMPC()
		{
			return (::RPG::Client::DebugPerformanceInfoPanel**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x6A4D8);
		}

		static ::System::Boolean* StaticGet_BPFJNDHIFLD()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x14FA0);
		}

		static ::System::Boolean* StaticGet_PCMDPHMBOHC()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x14FA1);
		}

		// static const ::System::String* GGDHBBDCAOG; // 0x0
		// static const ::System::String* PCLNMFLHKFP; // 0x0
		// static const ::System::String* HEKAGCELHGA; // 0x0
		// static const ::System::String* NNMOCJLNCHL; // 0x0
		// static const ::System::String* EAFCLNAGBFF; // 0x0
		// static const ::System::String* PABFBJMMJNM; // 0x0
		// static const ::System::String* BMPANFMOJLG; // 0x0
		// static const ::System::String* KANPLMMFFNC; // 0x0
		// static const ::System::String* JBNJDECCPMP; // 0x0
		// static const ::System::String* BGCKKGGFILM; // 0x0
		// static const ::System::String* JLKJFPFEBAA; // 0x0
		// static const ::System::String* GGMMLOOIBOO; // 0x0
		// static const ::System::String* AFEAAFIDLEB; // 0x0
		// static const ::System::String* BINLFPLLLLE; // 0x0
		// static const ::System::String* KNDOCDEJNHA; // 0x0
		// static const ::System::String* DIDDMPKFKCA; // 0x0
		// static const ::System::String* DAMMIAOPKFJ; // 0x0
		// static const ::System::String* DPHLEEGFOAE; // 0x0
		// static const ::System::String* PDKKNEMGDGJ; // 0x0
		// static const ::System::String* EOEIDFDIAFE; // 0x0
		// static const ::System::String* FLBAJMJJBHN; // 0x0
		// static const ::System::String* GDINDNGOJNM; // 0x0
		// static const ::System::String* LLDCBLLCIAO; // 0x0
		// static const ::System::String* EJMGPHHLFOO; // 0x0
		// static const ::System::String* EBOPMIILAEJ; // 0x0
		// static const ::System::String* LKGCNDOJKAK; // 0x0
		// static const ::System::String* IKPJGNCOOFB; // 0x0
		// static const ::System::String* LPKNHLOHMKM; // 0x0
		// static const ::System::String* DABLLMCAEBN; // 0x0
		// static const ::System::String* DJKOOFKGNGI; // 0x0
		// static const ::System::String* KEMCJDMAIOP; // 0x0
		// static const ::System::String* EFGOAOPNPCB; // 0x0
		// static const ::System::String* CJOACMMCHJP; // 0x0
		static ::System::String* EFCNDKBEIIN()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_EFCNDKBEIIN_OFFSET))();
		}

		static ::UnityEngine::Transform* OPCGFJPHIPA()
		{
			return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_OPCGFJPHIPA_OFFSET))();
		}

		static ::UnityEngine::Transform* GFOPPGAEJMF()
		{
			return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_GFOPPGAEJMF_OFFSET))();
		}

		static ::UnityEngine::Canvas* FFCGOAJMMAC()
		{
			return ((::UnityEngine::Canvas*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_FFCGOAJMMAC_OFFSET))();
		}

		static ::UnityEngine::Transform* KGKNBJMIEOM()
		{
			return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_KGKNBJMIEOM_OFFSET))();
		}

		static ::UnityEngine::Camera* KAGEKBLGGCA()
		{
			return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_KAGEKBLGGCA_OFFSET))();
		}

		static ::UnityEngine::Transform* FNPFKCJJCFL()
		{
			return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_FNPFKCJJCFL_OFFSET))();
		}

		static ::UnityEngine::Transform* HDHJIKHKMDO()
		{
			return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_HDHJIKHKMDO_OFFSET))();
		}

		static ::UnityEngine::Transform* IMCPOIBAIOO()
		{
			return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_IMCPOIBAIOO_OFFSET))();
		}

		static ::UnityEngine::Transform* NDAMLDDDJKI()
		{
			return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_NDAMLDDDJKI_OFFSET))();
		}

		static ::UnityEngine::Transform* NJKHIGAJHFG()
		{
			return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_NJKHIGAJHFG_OFFSET))();
		}

		static ::UnityEngine::Transform* NJDALCEMHIM()
		{
			return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_NJDALCEMHIM_OFFSET))();
		}

		static ::UnityEngine::Transform* JLADCJAELDI()
		{
			return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_JLADCJAELDI_OFFSET))();
		}

		static ::UnityEngine::UI::Text* GCIBCNHOKKG()
		{
			return ((::UnityEngine::UI::Text*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_GCIBCNHOKKG_OFFSET))();
		}

		static ::UnityEngine::UI::Text* LPBLDMDBIOA()
		{
			return ((::UnityEngine::UI::Text*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_LPBLDMDBIOA_OFFSET))();
		}

		static ::UnityEngine::UI::Text* PCCBKNGDAHB()
		{
			return ((::UnityEngine::UI::Text*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_PCCBKNGDAHB_OFFSET))();
		}

		static ::UnityEngine::UI::Image* CFAGELFBNJD()
		{
			return ((::UnityEngine::UI::Image*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_CFAGELFBNJD_OFFSET))();
		}

		static ::CriWare::CriManaMovieMaterial* NJNFGMIGCJC()
		{
			return ((::CriWare::CriManaMovieMaterial*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_NJNFGMIGCJC_OFFSET))();
		}

		static ::RPG::Client::DebugPerformanceInfoPanel* JHILODFFHJL()
		{
			return ((::RPG::Client::DebugPerformanceInfoPanel*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_JHILODFFHJL_OFFSET))();
		}

		static ::RPG::Client::LocalizedText* EBHPDFPIJMI()
		{
			return ((::RPG::Client::LocalizedText*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_EBHPDFPIJMI_OFFSET))();
		}

		static ::UnityEngine::UI::Image* IDKKLODPLMO()
		{
			return ((::UnityEngine::UI::Image*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_IDKKLODPLMO_OFFSET))();
		}

		static ::UnityEngine::UI::Image* IMIOMMKOMBN()
		{
			return ((::UnityEngine::UI::Image*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_IMIOMMKOMBN_OFFSET))();
		}

		static ::RPG::Client::LocalizedText* ONKKKAPGIKC()
		{
			return ((::RPG::Client::LocalizedText*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_ONKKKAPGIKC_OFFSET))();
		}

		static ::RPG::Client::LocalizedText* CKALNDFMOKL()
		{
			return ((::RPG::Client::LocalizedText*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_CKALNDFMOKL_OFFSET))();
		}

		static ::RPG::Client::LocalizedText* DMFBFIJHFOG()
		{
			return ((::RPG::Client::LocalizedText*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_DMFBFIJHFOG_OFFSET))();
		}

		static ::RPG::Client::LocalizedText* EDACCEPGKPM()
		{
			return ((::RPG::Client::LocalizedText*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_EDACCEPGKPM_OFFSET))();
		}

		static ::UnityEngine::Transform* OMMANNJPJOI()
		{
			return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_OMMANNJPJOI_OFFSET))();
		}

		static ::UnityEngine::Transform* NGKGFBMAMPK()
		{
			return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_NGKGFBMAMPK_OFFSET))();
		}

		static ::UnityEngine::UI::Image* FJLCCHBNADM()
		{
			return ((::UnityEngine::UI::Image*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_FJLCCHBNADM_OFFSET))();
		}

		static ::UnityEngine::Transform* OOMKEJHOJEG()
		{
			return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_OOMKEJHOJEG_OFFSET))();
		}

		static ::UnityEngine::Transform* FDJKMIAEHJI()
		{
			return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_FDJKMIAEHJI_OFFSET))();
		}

		static ::UnityEngine::UI::Image* JDIBKNIJODJ()
		{
			return ((::UnityEngine::UI::Image*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_JDIBKNIJODJ_OFFSET))();
		}

		static ::UnityEngine::GameObject* EBHNJMPEILL()
		{
			return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_EBHNJMPEILL_OFFSET))();
		}

		static ::UnityEngine::Transform* LAAFIHJLPLB()
		{
			return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_LAAFIHJLPLB_OFFSET))();
		}

		static ::UnityEngine::Transform* NCKICPBOBKH()
		{
			return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_NCKICPBOBKH_OFFSET))();
		}

		static ::UnityEngine::Playables::PlayableDirector* JAMNLCKMMHA()
		{
			return ((::UnityEngine::Playables::PlayableDirector*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_JAMNLCKMMHA_OFFSET))();
		}

		static ::RPG::Client::ClientOnlyCommonConfig* KIIMINFEICK()
		{
			return ((::RPG::Client::ClientOnlyCommonConfig*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_KIIMINFEICK_OFFSET))();
		}

		static ::RPG::GameCore::GameEntity* BPGLLLGDNGP(::System::String* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::System::String*))((::PBYTE)hIl2Cpp + LKCKHAIJMOB_BPGLLLGDNGP_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* EKDFMBHKHJI(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + LKCKHAIJMOB_EKDFMBHKHJI_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* BABLKCEBHIJ(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + LKCKHAIJMOB_BABLKCEBHIJ_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameWorld* DNAIFAEBPHJ()
		{
			return ((::RPG::GameCore::GameWorld*(*)())((::PBYTE)hIl2Cpp + LKCKHAIJMOB_DNAIFAEBPHJ_OFFSET))();
		}

		static ::UnityEngine::GameObject* FHFOCDKJIJB(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + LKCKHAIJMOB_FHFOCDKJIJB_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Transform* JKOJDDMPDLK(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Transform*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + LKCKHAIJMOB_JKOJDDMPDLK_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::AnchorInfo* IMICLPJOFJA(::System::String* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::AnchorInfo*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + LKCKHAIJMOB_IMICLPJOFJA_OFFSET))(a1, a2);
		}

		static ::UnityEngine::GameObject* PFDAKBENIJF(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + LKCKHAIJMOB_PFDAKBENIJF_OFFSET))(a1);
		}

	};
