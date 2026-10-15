#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/Player_Status.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/ManaVideoPlayerPauseReason.h"
#include "unitysdk/RPG/Client/ManaVideoPlayerVolumeMuteReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/GameCore/VideoCaptionPosition.h"
#include "unitysdk/IGCLGKCKACE.h"
namespace CriWare { class CriManaMovieControllerForUI; }
namespace CriWare::CriMana { class MovieInfo; }
namespace RPG::Client { class ManaVideoPlayer; }
namespace RPG::Client { class ManaVideoPlayerFrameInfo; }
namespace RPG::GameCore { class VideoCaption; }
namespace RPG::GameCore { class VideoCaptionConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class Text; }

#define DBLCHICFCLA_AAOMGDIGIKI_OFFSET UNITYSDK_OFFSET(0xE22E220)
#define DBLCHICFCLA_ABGHHBNCNLL_OFFSET UNITYSDK_OFFSET(0xE22D240)
#define DBLCHICFCLA_AFIBJFHPHDD_OFFSET UNITYSDK_OFFSET(0xE22B000)
#define DBLCHICFCLA_AIJGNHCDIGH_OFFSET UNITYSDK_OFFSET(0xE22D0F0)
#define DBLCHICFCLA_AOEEEKJOLHM_OFFSET UNITYSDK_OFFSET(0xE22D600)
#define DBLCHICFCLA_BFDHNKILJDE_OFFSET UNITYSDK_OFFSET(0xE22B9C0)
#define DBLCHICFCLA_BOAIEDHGHGA_OFFSET UNITYSDK_OFFSET(0xE22CE50)
#define DBLCHICFCLA_CEGELBJNEAL_OFFSET UNITYSDK_OFFSET(0xE22D920)
#define DBLCHICFCLA_CFKEBMEHCHF_OFFSET UNITYSDK_OFFSET(0xE22CF60)
#define DBLCHICFCLA_CHJCEBCOJNI_OFFSET UNITYSDK_OFFSET(0xE22C6C0)
#define DBLCHICFCLA_CLAPOBIMPOP_OFFSET UNITYSDK_OFFSET(0xE22E0A0)
#define DBLCHICFCLA_CLJLLOOJODM_OFFSET UNITYSDK_OFFSET(0xE22E480)
#define DBLCHICFCLA_COJEGICKNJM_OFFSET UNITYSDK_OFFSET(0xE22D410)
#define DBLCHICFCLA_CTOR_OFFSET UNITYSDK_OFFSET(0xE22EB00)
#define DBLCHICFCLA_DDDPGPNJADL_OFFSET UNITYSDK_OFFSET(0xE22D870)
#define DBLCHICFCLA_DHELCAOOJMN_OFFSET UNITYSDK_OFFSET(0xE22EAF0)
#define DBLCHICFCLA_DHKLEJGNBKA_OFFSET UNITYSDK_OFFSET(0xE22B260)
#define DBLCHICFCLA_DJFBIACLBMC_OFFSET UNITYSDK_OFFSET(0xE22D9B0)
#define DBLCHICFCLA_DKBAONLBKPG_OFFSET UNITYSDK_OFFSET(0xE22D000)
#define DBLCHICFCLA_DODHLBEJONH_OFFSET UNITYSDK_OFFSET(0xE22C4E0)
#define DBLCHICFCLA_EBBHAGPBIKG_OFFSET UNITYSDK_OFFSET(0xE22DA30)
#define DBLCHICFCLA_EDNMFHJLLCN_OFFSET UNITYSDK_OFFSET(0xE22D6A0)
#define DBLCHICFCLA_EEEOAGODEND_OFFSET UNITYSDK_OFFSET(0xE22BEA0)
#define DBLCHICFCLA_EFDKEPEALJJ_OFFSET UNITYSDK_OFFSET(0xE22D1B0)
#define DBLCHICFCLA_EMBDHBMPLJB_OFFSET UNITYSDK_OFFSET(0xE22CD50)
#define DBLCHICFCLA_ENBCJGJHHGG_OFFSET UNITYSDK_OFFSET(0xE22DE30)
#define DBLCHICFCLA_FDPIPBMLFLD_OFFSET UNITYSDK_OFFSET(0xE22B830)
#define DBLCHICFCLA_FHHOEBGGDHM_OFFSET UNITYSDK_OFFSET(0xE22D810)
#define DBLCHICFCLA_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0xE22B330)
#define DBLCHICFCLA_FNOODEJFAOE_OFFSET UNITYSDK_OFFSET(0xE22B8D0)
#define DBLCHICFCLA_FPGBPGKHHAH_OFFSET UNITYSDK_OFFSET(0xE22B970)
#define DBLCHICFCLA_GDEGALJMPIF_OFFSET UNITYSDK_OFFSET(0xE22BFA0)
#define DBLCHICFCLA_GHJFCCNEAEF_OFFSET UNITYSDK_OFFSET(0xE22BC80)
#define DBLCHICFCLA_GKFLEJGEFKE_OFFSET UNITYSDK_OFFSET(0xE22C480)
#define DBLCHICFCLA_GONKFOOKOLE_OFFSET UNITYSDK_OFFSET(0xE22C200)
#define DBLCHICFCLA_HABHEDMPFEL_OFFSET UNITYSDK_OFFSET(0xE22BE20)
#define DBLCHICFCLA_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xE22C260)
#define DBLCHICFCLA_HJBLKOCMBBG_OFFSET UNITYSDK_OFFSET(0xE22DCB0)
#define DBLCHICFCLA_HOGMHAMDCBI_OFFSET UNITYSDK_OFFSET(0xE22E4D0)
#define DBLCHICFCLA_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xE22BDD0)
#define DBLCHICFCLA_IDIDJIABNMI_OFFSET UNITYSDK_OFFSET(0xE22E430)
#define DBLCHICFCLA_IDOIHBFMHGN_OFFSET UNITYSDK_OFFSET(0xE22C950)
#define DBLCHICFCLA_IHCCPENAKNL_OFFSET UNITYSDK_OFFSET(0xE22B790)
#define DBLCHICFCLA_IHHCKEIKDOP_OFFSET UNITYSDK_OFFSET(0xE22CFB0)
#define DBLCHICFCLA_IKGACHDOLNJ_OFFSET UNITYSDK_OFFSET(0xE22D4F0)
#define DBLCHICFCLA_INHIJONPNPF_OFFSET UNITYSDK_OFFSET(0xE22BD00)
#define DBLCHICFCLA_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0xE22BA10)
#define DBLCHICFCLA_JELCIHOAGDA_OFFSET UNITYSDK_OFFSET(0xE22E8B0)
#define DBLCHICFCLA_JGOAMJNILIJ_OFFSET UNITYSDK_OFFSET(0xE22E530)
#define DBLCHICFCLA_JKKAKHHOBOE_OFFSET UNITYSDK_OFFSET(0xE22E370)
#define DBLCHICFCLA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xE22B570)
#define DBLCHICFCLA_JLBCIMIKGOP_OFFSET UNITYSDK_OFFSET(0xE22D7B0)
#define DBLCHICFCLA_KAKBPIJNNHO_OFFSET UNITYSDK_OFFSET(0xE22B920)
#define DBLCHICFCLA_KCNMHANGFKI_OFFSET UNITYSDK_OFFSET(0xE22B0E0)
#define DBLCHICFCLA_KGBMDKDIJHJ_OFFSET UNITYSDK_OFFSET(0xE22E740)
#define DBLCHICFCLA_KHNJDPBADIF_OFFSET UNITYSDK_OFFSET(0xE22E3E0)
#define DBLCHICFCLA_LCKDLBDGKHL_OFFSET UNITYSDK_OFFSET(0xE22C540)
#define DBLCHICFCLA_LFIEADJIBJO_OFFSET UNITYSDK_OFFSET(0xE22BF40)
#define DBLCHICFCLA_LGLKEFFCMIO_OFFSET UNITYSDK_OFFSET(0xE22CDA0)
#define DBLCHICFCLA_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE22B170)
#define DBLCHICFCLA_MOBHECCJJBB_OFFSET UNITYSDK_OFFSET(0xE22E310)
#define DBLCHICFCLA_NEJPPEHFOAP_OFFSET UNITYSDK_OFFSET(0xE22E910)
#define DBLCHICFCLA_OFMIONJMDCK_OFFSET UNITYSDK_OFFSET(0xE22D5C0)
#define DBLCHICFCLA_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xE22CBF0)
#define DBLCHICFCLA_OLNLAGCNGAI_OFFSET UNITYSDK_OFFSET(0xE22B5C0)
#define DBLCHICFCLA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xE22B500)
#define DBLCHICFCLA_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE22B040)
#define DBLCHICFCLA_PGPCOKEBFIM_OFFSET UNITYSDK_OFFSET(0xE22B650)
#define DBLCHICFCLA_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xE22B490)
#define DBLCHICFCLA_PNAFAHHJHLG_OFFSET UNITYSDK_OFFSET(0xE22DD10)
#define DBLCHICFCLA__COROUTINEDOPLAYWITHOUTPREPARE_B__35_0_OFFSET UNITYSDK_OFFSET(0xE22EC00)
#define DBLCHICFCLA__COROUTINEDOPLAYWITHOUTPREPARE_B__35_1_OFFSET UNITYSDK_OFFSET(0xE22EC20)
#define DBLCHICFCLA__COROUTINEDOPREPAREFORRENDERING_B__37_0_OFFSET UNITYSDK_OFFSET(0xE22EC40)
#define DBLCHICFCLA__COROUTINEDOPREPAREFORRENDERING_B__37_1_OFFSET UNITYSDK_OFFSET(0xE22EC60)
#define DBLCHICFCLA__COROUTINEDOSTOP_B__44_0_OFFSET UNITYSDK_OFFSET(0xE22EC80)

inline static constexpr unsigned int DBLCHICFCLA_TypeDefinitionIndex = 73201;

	class DBLCHICFCLA : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Action* CFALONPLPHP; // 0x18
		::RPG::Client::ManaVideoPlayerFrameInfo* CAJKDGOCMKG; // 0x20
		::System::String* GJNAJKPEMJO; // 0x28
		::System::Action* PKDHFOGIPPB; // 0x30
		::System::Action* IOCFAKBIEDJ; // 0x38
		::System::Action* NAEJLPMFKMO; // 0x40
		::RPG::GameCore::VideoCaptionConfig* GCHOJBDNEBO; // 0x48
		::UnityEngine::UI::Graphic* CCGHDFGDPGL; // 0x50
		::CriWare::CriManaMovieControllerForUI* IBMLGONKFDL; // 0x58
		::System::String* BEPENCIBLDA; // 0x60
		::System::Action* EPDPLHLALMF; // 0x68
		::System::Action* IIAOIGFOKEC; // 0x70
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::VideoCaptionPosition, ::RPG::GameCore::VideoCaption*>* ADLNJGIPMEL; // 0x78
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::VideoCaptionPosition, ::System::Object*>* INGHCBJLOMD; // 0x80
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::VideoCaptionPosition, ::RPG::GameCore::VideoCaption*>* PBEFBCIOAEP; // 0x88
		::System::UInt32 GLCHMLGBAGB; // 0x90
		::System::Int32 OANAKIOEIFD; // 0x94
		::RPG::Client::ReasonBool_1<::RPG::Client::ManaVideoPlayerPauseReason> HHEJHMBIIMN; // 0x98
		::System::Int32 CCKPDMAHLNJ; // 0xA0
		::System::Int32 CAGOLIMGMFL; // 0xA4
		::System::UInt32 HPCPHELGLKK; // 0xA8
		::System::Boolean HBGNKMNNKPH; // 0xAC
		::System::Boolean IOBNHBMAJBP; // 0xAD
		::System::Boolean GGDPOFOPPGF; // 0xAE
		::System::Boolean HJMBFGPIJFF; // 0xAF
		::RPG::Client::ReasonBool_1<::RPG::Client::ManaVideoPlayerVolumeMuteReason> HNNONBEHFII; // 0xB0
		::System::UInt32 NBPGJAOADNG; // 0xB8
		::CriWare::CriMana::Player_Status PCMLAPNMOOP; // 0xBC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_CTOR_OFFSET))(this);
		}

		::System::Void AFIBJFHPHDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_AFIBJFHPHDD_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void OLNLAGCNGAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_OLNLAGCNGAI_OFFSET))(this);
		}

		::System::Void PGPCOKEBFIM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBLCHICFCLA_PGPCOKEBFIM_OFFSET))(this, a1);
		}

		::System::Void IHCCPENAKNL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBLCHICFCLA_IHCCPENAKNL_OFFSET))(this, a1);
		}

		::System::Void FDPIPBMLFLD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBLCHICFCLA_FDPIPBMLFLD_OFFSET))(this, a1);
		}

		::System::Void FNOODEJFAOE(::UnityEngine::UI::Graphic* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + DBLCHICFCLA_FNOODEJFAOE_OFFSET))(this, a1);
		}

		::System::Void KAKBPIJNNHO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DBLCHICFCLA_KAKBPIJNNHO_OFFSET))(this, a1);
		}

		::System::Void FPGBPGKHHAH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DBLCHICFCLA_FPGBPGKHHAH_OFFSET))(this, a1);
		}

		::System::Void BFDHNKILJDE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DBLCHICFCLA_BFDHNKILJDE_OFFSET))(this, a1);
		}

		::System::Void JDAGFHEPMHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_JDAGFHEPMHF_OFFSET))(this);
		}

		::System::Void GDEGALJMPIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_GDEGALJMPIF_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF(::System::Boolean a1, ::RPG::Client::ManaVideoPlayerPauseReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::ManaVideoPlayerPauseReason))((::PBYTE)hIl2Cpp + DBLCHICFCLA_OHMHJFANEIF_OFFSET))(this, a1, a2);
		}

		::System::Void EEEOAGODEND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_EEEOAGODEND_OFFSET))(this);
		}

		::System::Void LGLKEFFCMIO(::System::Boolean a1, ::RPG::Client::ManaVideoPlayerVolumeMuteReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::ManaVideoPlayerVolumeMuteReason))((::PBYTE)hIl2Cpp + DBLCHICFCLA_LGLKEFFCMIO_OFFSET))(this, a1, a2);
		}

		::System::Void BOAIEDHGHGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_BOAIEDHGHGA_OFFSET))(this);
		}

		::System::Void IHHCKEIKDOP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DBLCHICFCLA_IHHCKEIKDOP_OFFSET))(this, a1);
		}

		::System::Void DKBAONLBKPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_DKBAONLBKPG_OFFSET))(this);
		}

		::System::Void AIJGNHCDIGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_AIJGNHCDIGH_OFFSET))(this);
		}

		::System::Single EFDKEPEALJJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_EFDKEPEALJJ_OFFSET))(this);
		}

		::RPG::Client::ManaVideoPlayerFrameInfo* ABGHHBNCNLL()
		{
			return ((::RPG::Client::ManaVideoPlayerFrameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_ABGHHBNCNLL_OFFSET))(this);
		}

		::System::Void KCNMHANGFKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_KCNMHANGFKI_OFFSET))(this);
		}

		::System::Void DHKLEJGNBKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_DHKLEJGNBKA_OFFSET))(this);
		}

		::System::Void CHJCEBCOJNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_CHJCEBCOJNI_OFFSET))(this);
		}

		::System::Void EDNMFHJLLCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_EDNMFHJLLCN_OFFSET))(this);
		}

		::System::Void OFMIONJMDCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_OFMIONJMDCK_OFFSET))(this);
		}

		::System::Void HABHEDMPFEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_HABHEDMPFEL_OFFSET))(this);
		}

		::System::Collections::IEnumerator* LFIEADJIBJO()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_LFIEADJIBJO_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CEGELBJNEAL()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_CEGELBJNEAL_OFFSET))(this);
		}

		::System::Collections::IEnumerator* DJFBIACLBMC()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_DJFBIACLBMC_OFFSET))(this);
		}

		::System::Collections::IEnumerator* GONKFOOKOLE()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_GONKFOOKOLE_OFFSET))(this);
		}

		::System::Void EBBHAGPBIKG(::CriWare::CriMana::MovieInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::MovieInfo*))((::PBYTE)hIl2Cpp + DBLCHICFCLA_EBBHAGPBIKG_OFFSET))(this, a1);
		}

		::IGCLGKCKACE PNAFAHHJHLG()
		{
			return ((::IGCLGKCKACE(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_PNAFAHHJHLG_OFFSET))(this);
		}

		::System::Void ENBCJGJHHGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_ENBCJGJHHGG_OFFSET))(this);
		}

		::System::Void CLAPOBIMPOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_CLAPOBIMPOP_OFFSET))(this);
		}

		::System::Void LCKDLBDGKHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_LCKDLBDGKHL_OFFSET))(this);
		}

		::System::Void IKGACHDOLNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_IKGACHDOLNJ_OFFSET))(this);
		}

		::System::Collections::IEnumerator* DODHLBEJONH()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_DODHLBEJONH_OFFSET))(this);
		}

		::System::Void AAOMGDIGIKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_AAOMGDIGIKI_OFFSET))(this);
		}

		::System::Void DDDPGPNJADL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_DDDPGPNJADL_OFFSET))(this);
		}

		::System::Void AOEEEKJOLHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_AOEEEKJOLHM_OFFSET))(this);
		}

		::System::Boolean GHJFCCNEAEF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_GHJFCCNEAEF_OFFSET))(this);
		}

		::System::Void JKKAKHHOBOE(::System::Action* a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + DBLCHICFCLA_JKKAKHHOBOE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KHNJDPBADIF(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DBLCHICFCLA_KHNJDPBADIF_OFFSET))(this, a1);
		}

		::System::Void IDIDJIABNMI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DBLCHICFCLA_IDIDJIABNMI_OFFSET))(this, a1);
		}

		::System::Void CLJLLOOJODM(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DBLCHICFCLA_CLJLLOOJODM_OFFSET))(this, a1);
		}

		::System::Void MOBHECCJJBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_MOBHECCJJBB_OFFSET))(this);
		}

		::System::Void INHIJONPNPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_INHIJONPNPF_OFFSET))(this);
		}

		::System::Void FHHOEBGGDHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_FHHOEBGGDHM_OFFSET))(this);
		}

		::System::Void GKFLEJGEFKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_GKFLEJGEFKE_OFFSET))(this);
		}

		::System::Void HJBLKOCMBBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_HJBLKOCMBBG_OFFSET))(this);
		}

		::System::Void JLBCIMIKGOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_JLBCIMIKGOP_OFFSET))(this);
		}

		::System::Void HOGMHAMDCBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_HOGMHAMDCBI_OFFSET))(this);
		}

		::System::Void JGOAMJNILIJ(::RPG::GameCore::VideoCaptionPosition a1, ::UnityEngine::Transform* a2, ::UnityEngine::UI::Text* a3, ::UnityEngine::CanvasGroup* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VideoCaptionPosition, ::UnityEngine::Transform*, ::UnityEngine::UI::Text*, ::UnityEngine::CanvasGroup*))((::PBYTE)hIl2Cpp + DBLCHICFCLA_JGOAMJNILIJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KGBMDKDIJHJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DBLCHICFCLA_KGBMDKDIJHJ_OFFSET))(this, a1);
		}

		::System::Void IDOIHBFMHGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_IDOIHBFMHGN_OFFSET))(this);
		}

		::System::Void NEJPPEHFOAP(::RPG::GameCore::VideoCaptionPosition a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VideoCaptionPosition, ::System::Single))((::PBYTE)hIl2Cpp + DBLCHICFCLA_NEJPPEHFOAP_OFFSET))(this, a1, a2);
		}

		::System::Boolean EMBDHBMPLJB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_EMBDHBMPLJB_OFFSET))(this);
		}

		::System::Boolean CFKEBMEHCHF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_CFKEBMEHCHF_OFFSET))(this);
		}

		::System::Boolean JELCIHOAGDA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_JELCIHOAGDA_OFFSET))(this);
		}

		::CriWare::CriManaMovieControllerForUI* DHELCAOOJMN()
		{
			return ((::CriWare::CriManaMovieControllerForUI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_DHELCAOOJMN_OFFSET))(this);
		}

		::RPG::Client::ManaVideoPlayer* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::ManaVideoPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_HPNDIIPEFLJ_OFFSET))(this);
		}

		::CriWare::CriMana::Player_Status COJEGICKNJM()
		{
			return ((::CriWare::CriMana::Player_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_COJEGICKNJM_OFFSET))(this);
		}

		::System::Boolean _CoroutineDoPlayWithoutPrepare_b__35_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA__COROUTINEDOPLAYWITHOUTPREPARE_B__35_0_OFFSET))(this);
		}

		::System::Boolean _CoroutineDoPlayWithoutPrepare_b__35_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA__COROUTINEDOPLAYWITHOUTPREPARE_B__35_1_OFFSET))(this);
		}

		::System::Boolean _CoroutineDoPrepareForRendering_b__37_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA__COROUTINEDOPREPAREFORRENDERING_B__37_0_OFFSET))(this);
		}

		::System::Boolean _CoroutineDoPrepareForRendering_b__37_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA__COROUTINEDOPREPAREFORRENDERING_B__37_1_OFFSET))(this);
		}

		::System::Boolean _CoroutineDoStop_b__44_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA__COROUTINEDOSTOP_B__44_0_OFFSET))(this);
		}

	};
