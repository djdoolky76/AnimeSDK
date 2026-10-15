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

#define LKCKHAIJMOB_BABLKCEBHIJ_OFFSET UNITYSDK_OFFSET(0xB72D5C0)
#define LKCKHAIJMOB_BPGLLLGDNGP_OFFSET UNITYSDK_OFFSET(0xB72D2F0)
#define LKCKHAIJMOB_CFAGELFBNJD_OFFSET UNITYSDK_OFFSET(0xB72B2A0)
#define LKCKHAIJMOB_CKALNDFMOKL_OFFSET UNITYSDK_OFFSET(0xB72C210)
#define LKCKHAIJMOB_DMFBFIJHFOG_OFFSET UNITYSDK_OFFSET(0xB72C3D0)
#define LKCKHAIJMOB_DNAIFAEBPHJ_OFFSET UNITYSDK_OFFSET(0xB72D370)
#define LKCKHAIJMOB_EBHNJMPEILL_OFFSET UNITYSDK_OFFSET(0xB72CFD0)
#define LKCKHAIJMOB_EBHPDFPIJMI_OFFSET UNITYSDK_OFFSET(0xB72B7E0)
#define LKCKHAIJMOB_EDACCEPGKPM_OFFSET UNITYSDK_OFFSET(0xB72C590)
#define LKCKHAIJMOB_EFCNDKBEIIN_OFFSET UNITYSDK_OFFSET(0xB729F00)
#define LKCKHAIJMOB_EKDFMBHKHJI_OFFSET UNITYSDK_OFFSET(0xB72D540)
#define LKCKHAIJMOB_FDJKMIAEHJI_OFFSET UNITYSDK_OFFSET(0xB72CCD0)
#define LKCKHAIJMOB_FFCGOAJMMAC_OFFSET UNITYSDK_OFFSET(0xB72A1E0)
#define LKCKHAIJMOB_FHFOCDKJIJB_OFFSET UNITYSDK_OFFSET(0xB72D630)
#define LKCKHAIJMOB_FJLCCHBNADM_OFFSET UNITYSDK_OFFSET(0xB72C9D0)
#define LKCKHAIJMOB_FNPFKCJJCFL_OFFSET UNITYSDK_OFFSET(0xB72A4A0)
#define LKCKHAIJMOB_GCIBCNHOKKG_OFFSET UNITYSDK_OFFSET(0xB72AD60)
#define LKCKHAIJMOB_GFOPPGAEJMF_OFFSET UNITYSDK_OFFSET(0xB72A090)
#define LKCKHAIJMOB_HDHJIKHKMDO_OFFSET UNITYSDK_OFFSET(0xB72A5E0)
#define LKCKHAIJMOB_IDKKLODPLMO_OFFSET UNITYSDK_OFFSET(0xB72B980)
#define LKCKHAIJMOB_IMCPOIBAIOO_OFFSET UNITYSDK_OFFSET(0xB72A720)
#define LKCKHAIJMOB_IMICLPJOFJA_OFFSET UNITYSDK_OFFSET(0xB72D7B0)
#define LKCKHAIJMOB_IMIOMMKOMBN_OFFSET UNITYSDK_OFFSET(0xB72BB40)
#define LKCKHAIJMOB_JAMNLCKMMHA_OFFSET UNITYSDK_OFFSET(0xB72D210)
#define LKCKHAIJMOB_JDIBKNIJODJ_OFFSET UNITYSDK_OFFSET(0xB72CE10)
#define LKCKHAIJMOB_JHILODFFHJL_OFFSET UNITYSDK_OFFSET(0xB72B620)
#define LKCKHAIJMOB_JKOJDDMPDLK_OFFSET UNITYSDK_OFFSET(0xB72D700)
#define LKCKHAIJMOB_JLADCJAELDI_OFFSET UNITYSDK_OFFSET(0xB72AC20)
#define LKCKHAIJMOB_KAGEKBLGGCA_OFFSET UNITYSDK_OFFSET(0xB72A410)
#define LKCKHAIJMOB_KGKNBJMIEOM_OFFSET UNITYSDK_OFFSET(0xB72A2C0)
#define LKCKHAIJMOB_KIIMINFEICK_OFFSET UNITYSDK_OFFSET(0xB728CA0)
#define LKCKHAIJMOB_LAAFIHJLPLB_OFFSET UNITYSDK_OFFSET(0xB72D040)
#define LKCKHAIJMOB_LPBLDMDBIOA_OFFSET UNITYSDK_OFFSET(0xB72AF20)
#define LKCKHAIJMOB_NCKICPBOBKH_OFFSET UNITYSDK_OFFSET(0xB72D190)
#define LKCKHAIJMOB_NDAMLDDDJKI_OFFSET UNITYSDK_OFFSET(0xB72A860)
#define LKCKHAIJMOB_NGKGFBMAMPK_OFFSET UNITYSDK_OFFSET(0xB72C890)
#define LKCKHAIJMOB_NJDALCEMHIM_OFFSET UNITYSDK_OFFSET(0xB72AAE0)
#define LKCKHAIJMOB_NJKHIGAJHFG_OFFSET UNITYSDK_OFFSET(0xB72A9A0)
#define LKCKHAIJMOB_NJNFGMIGCJC_OFFSET UNITYSDK_OFFSET(0xB72B460)
#define LKCKHAIJMOB_OMMANNJPJOI_OFFSET UNITYSDK_OFFSET(0xB72C750)
#define LKCKHAIJMOB_ONKKKAPGIKC_OFFSET UNITYSDK_OFFSET(0xB72C050)
#define LKCKHAIJMOB_OOMKEJHOJEG_OFFSET UNITYSDK_OFFSET(0xB72CB90)
#define LKCKHAIJMOB_OPCGFJPHIPA_OFFSET UNITYSDK_OFFSET(0xB729F40)
#define LKCKHAIJMOB_PCCBKNGDAHB_OFFSET UNITYSDK_OFFSET(0xB72B0E0)
#define LKCKHAIJMOB_PFDAKBENIJF_OFFSET UNITYSDK_OFFSET(0xB72D860)

inline static constexpr unsigned int LKCKHAIJMOB_TypeDefinitionIndex = 48514;

	class LKCKHAIJMOB : public ::System::Object
	{
	public:
		static ::UnityEngine::Transform** StaticGet_PAECDBJLLCM()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x64640);
		}

		static ::RPG::Client::DebugPerformanceInfoPanel** StaticGet_FNNJPCLHMPC()
		{
			return (::RPG::Client::DebugPerformanceInfoPanel**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x64648);
		}

		static ::UnityEngine::Transform** StaticGet_PLADJIEFFBI()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x64650);
		}

		static ::UnityEngine::Transform** StaticGet_JPICPJEINDC()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x64658);
		}

		static ::UnityEngine::UI::Image** StaticGet_MEPIKEFJLHG()
		{
			return (::UnityEngine::UI::Image**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x64660);
		}

		static ::UnityEngine::UI::Image** StaticGet_IEPFFCEBCDB()
		{
			return (::UnityEngine::UI::Image**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x64668);
		}

		static ::RPG::Client::LocalizedText** StaticGet_IGKJFIBBOFE()
		{
			return (::RPG::Client::LocalizedText**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x64670);
		}

		static ::UnityEngine::UI::Text** StaticGet_IOLCFAPCPDP()
		{
			return (::UnityEngine::UI::Text**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x64678);
		}

		static ::UnityEngine::Transform** StaticGet_CPPMPGJCFMJ()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x64680);
		}

		static ::UnityEngine::Transform** StaticGet_LLADEPHOPBE()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x64688);
		}

		static ::RPG::Client::ClientOnlyCommonConfig** StaticGet_FJEPLGBIAOH()
		{
			return (::RPG::Client::ClientOnlyCommonConfig**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x64690);
		}

		static ::UnityEngine::UI::Text** StaticGet_JDCABDNBIPH()
		{
			return (::UnityEngine::UI::Text**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x64698);
		}

		static ::UnityEngine::UI::Text** StaticGet_FLMOCLGKGLI()
		{
			return (::UnityEngine::UI::Text**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x646A0);
		}

		static ::CriWare::CriManaMovieMaterial** StaticGet_BAFJFDKDPON()
		{
			return (::CriWare::CriManaMovieMaterial**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x646A8);
		}

		static ::UnityEngine::Transform** StaticGet_LHFCECHDELD()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x646B0);
		}

		static ::RPG::Client::LocalizedText** StaticGet_MBMGNOAGGJO()
		{
			return (::RPG::Client::LocalizedText**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x646B8);
		}

		static ::RPG::Client::LocalizedText** StaticGet_CCDJOLNPLBJ()
		{
			return (::RPG::Client::LocalizedText**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x646C0);
		}

		static ::UnityEngine::Canvas** StaticGet_EPOABONPPGJ()
		{
			return (::UnityEngine::Canvas**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x646C8);
		}

		static ::UnityEngine::Transform** StaticGet_LIGEMMPFLKI()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x646D0);
		}

		static ::UnityEngine::UI::Image** StaticGet_BJKCBOCLKBL()
		{
			return (::UnityEngine::UI::Image**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x646D8);
		}

		static ::UnityEngine::Transform** StaticGet_DOLBOABHAAM()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x646E0);
		}

		static ::RPG::Client::LocalizedText** StaticGet_AACOHEKCIDH()
		{
			return (::RPG::Client::LocalizedText**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x646E8);
		}

		static ::UnityEngine::UI::Image** StaticGet_AFJIGEDHIPO()
		{
			return (::UnityEngine::UI::Image**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x646F0);
		}

		static ::UnityEngine::Transform** StaticGet_NAFDDKLMGLL()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x646F8);
		}

		static ::UnityEngine::Transform** StaticGet_BGPIFFEJIJL()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x64700);
		}

		static ::UnityEngine::Transform** StaticGet_JILDIDPIJJH()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x64708);
		}

		static ::UnityEngine::UI::Image** StaticGet_MFMPHLIAAIH()
		{
			return (::UnityEngine::UI::Image**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x64710);
		}

		static ::UnityEngine::Playables::PlayableDirector** StaticGet_OPNHINPCKOJ()
		{
			return (::UnityEngine::Playables::PlayableDirector**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x64718);
		}

		static ::UnityEngine::Transform** StaticGet_EJIKHNFJGFI()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x64720);
		}

		static ::UnityEngine::Transform** StaticGet_EAOPEAJHBKG()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x64728);
		}

		static ::UnityEngine::Transform** StaticGet_NIKFDIBDGGJ()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x64730);
		}

		static ::UnityEngine::Transform** StaticGet_KGDOGDLMELJ()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x64738);
		}

		static ::UnityEngine::Transform** StaticGet_DGNBNJFKJLK()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x64740);
		}

		static ::RPG::Client::LocalizedText** StaticGet_APAPIBBMKDL()
		{
			return (::RPG::Client::LocalizedText**)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x64748);
		}

		static ::System::Boolean* StaticGet_BPFJNDHIFLD()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x14C40);
		}

		static ::System::Boolean* StaticGet_PCMDPHMBOHC()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LKCKHAIJMOB")->GetStaticField(0x14C41);
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
