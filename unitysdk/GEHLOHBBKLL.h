#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/GEHLOHBBKLL_TweenAnimState.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class CNADKCFAIEB;
class DCGIDEKLGAJ;
class EIIJNHOOCOM;
class HGKIKKOLLFA;
class KCMGAIFFBPL;
namespace RPG::Client { class MonsterHPBarStyle; }
namespace RPG::Client { class PluralityHPBarValue; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define GEHLOHBBKLL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17CDB1F0)
#define GEHLOHBBKLL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x17CDB350)
#define GEHLOHBBKLL_BJKDGIANAFP_OFFSET UNITYSDK_OFFSET(0x17CDAA30)
#define GEHLOHBBKLL_BMEBFCJMAML_OFFSET UNITYSDK_OFFSET(0x17CDAFE0)
#define GEHLOHBBKLL_CEENCDMHBFB_OFFSET UNITYSDK_OFFSET(0x17CDA6B0)
#define GEHLOHBBKLL_CFOFGDOLFMI_OFFSET UNITYSDK_OFFSET(0x17CD91E0)
#define GEHLOHBBKLL_CMMDKAMBJMJ_OFFSET UNITYSDK_OFFSET(0x17CDA040)
#define GEHLOHBBKLL_CTOR_OFFSET UNITYSDK_OFFSET(0x17CDB480)
#define GEHLOHBBKLL_DBBNAHMGBAB_OFFSET UNITYSDK_OFFSET(0x17CDA8E0)
#define GEHLOHBBKLL_DKOAAEMEPAO_OFFSET UNITYSDK_OFFSET(0x17CDA310)
#define GEHLOHBBKLL_ECIMAEJHANM_OFFSET UNITYSDK_OFFSET(0x17CDA2A0)
#define GEHLOHBBKLL_EDCHKFCPBIM_OFFSET UNITYSDK_OFFSET(0x17CDAB70)
#define GEHLOHBBKLL_ELGFNIBDJND_OFFSET UNITYSDK_OFFSET(0x17CD9D50)
#define GEHLOHBBKLL_FHAPPCADGCE_OFFSET UNITYSDK_OFFSET(0x17CD8D20)
#define GEHLOHBBKLL_GDBOALOEFMD_OFFSET UNITYSDK_OFFSET(0x17CDA700)
#define GEHLOHBBKLL_GFLHLNNLJAJ_OFFSET UNITYSDK_OFFSET(0x17CD9B60)
#define GEHLOHBBKLL_GNHEBIADPJG_OFFSET UNITYSDK_OFFSET(0x17CDA860)
#define GEHLOHBBKLL_HADKHLGBFLK_OFFSET UNITYSDK_OFFSET(0x17CDA120)
#define GEHLOHBBKLL_HBFPFNGAODL_OFFSET UNITYSDK_OFFSET(0x17CDA370)
#define GEHLOHBBKLL_HCFFOMKGKIO_OFFSET UNITYSDK_OFFSET(0x17CD9C40)
#define GEHLOHBBKLL_HEAKAJDNCGE_OFFSET UNITYSDK_OFFSET(0x17CDA230)
#define GEHLOHBBKLL_ICJANNMKGEA_OFFSET UNITYSDK_OFFSET(0x17CD8E90)
#define GEHLOHBBKLL_IFAPHDOHABO_OFFSET UNITYSDK_OFFSET(0x17CDB100)
#define GEHLOHBBKLL_ILPMNJHBPEG_OFFSET UNITYSDK_OFFSET(0x17CD9AD0)
#define GEHLOHBBKLL_JAFPEIGHDDE_OFFSET UNITYSDK_OFFSET(0x17CD9FC0)
#define GEHLOHBBKLL_JFGEHJBDOCD_OFFSET UNITYSDK_OFFSET(0x17CDA610)
#define GEHLOHBBKLL_JMEFBNHDGGL_OFFSET UNITYSDK_OFFSET(0x17CDAC10)
#define GEHLOHBBKLL_KPEJODMFHHC_OFFSET UNITYSDK_OFFSET(0x17CD9A60)
#define GEHLOHBBKLL_KPLOILLLDBK_OFFSET UNITYSDK_OFFSET(0x17CD94C0)
#define GEHLOHBBKLL_KPNIKDBICCM_OFFSET UNITYSDK_OFFSET(0x17CDAE20)
#define GEHLOHBBKLL_LHMILFIDODC_OFFSET UNITYSDK_OFFSET(0x17CDAEB0)
#define GEHLOHBBKLL_MFAJGDACLFB_OFFSET UNITYSDK_OFFSET(0x17CDA9D0)
#define GEHLOHBBKLL_MIGCMFNPKHM_OFFSET UNITYSDK_OFFSET(0x17CD9540)
#define GEHLOHBBKLL_NKAKFOPFHDN_OFFSET UNITYSDK_OFFSET(0x17CDA750)
#define GEHLOHBBKLL_OAHIPMLGCIH_OFFSET UNITYSDK_OFFSET(0x17CD9E80)
#define GEHLOHBBKLL_OFLEHGPIFFG_OFFSET UNITYSDK_OFFSET(0x17CDACB0)
#define GEHLOHBBKLL_OHPPKKILBCJ_OFFSET UNITYSDK_OFFSET(0x17CDA800)
#define GEHLOHBBKLL_ONIHGLIAIIE_OFFSET UNITYSDK_OFFSET(0x17CDA440)
#define GEHLOHBBKLL_OPCDEPOJOAL_OFFSET UNITYSDK_OFFSET(0x17CD92A0)
#define GEHLOHBBKLL_PBGMJHHNINL_OFFSET UNITYSDK_OFFSET(0x17CDA3D0)
#define GEHLOHBBKLL_PFHIHEHFGEB_OFFSET UNITYSDK_OFFSET(0x17CDA4E0)
#define GEHLOHBBKLL_PGJEPBPCJIH_OFFSET UNITYSDK_OFFSET(0x17CD9820)
#define GEHLOHBBKLL_PIJFBHOFEGD_OFFSET UNITYSDK_OFFSET(0x17CDAA90)
#define GEHLOHBBKLL_PKMIIPFIIOF_OFFSET UNITYSDK_OFFSET(0x17CDA1C0)
#define GEHLOHBBKLL_PMBDJMFOJMB_OFFSET UNITYSDK_OFFSET(0x17CD96A0)
#define GEHLOHBBKLL__ONBIND_OFFSET UNITYSDK_OFFSET(0x17CD8950)
#define GEHLOHBBKLL__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x17CD9460)
#define GEHLOHBBKLL__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x17CD8BA0)
#define GEHLOHBBKLL__ONTICK_OFFSET UNITYSDK_OFFSET(0x17CD9230)
#define GEHLOHBBKLL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x17CD8C90)

inline static constexpr unsigned int GEHLOHBBKLL_TypeDefinitionIndex = 73845;

	class GEHLOHBBKLL : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::PluralityHPBarValue* BOEPJFIHAGG; // 0x60
		::CNADKCFAIEB* IIEBIBMCGNB; // 0x68
		::RPG::Client::MonsterHPBarStyle* GIMDNPHGDEJ; // 0x70
		::UnityEngine::UI::Text* GEGKMPECIJC; // 0x78
		::RPG::Client::PluralityHPBarValue* OKIEFJDFGOK; // 0x80
		::UnityEngine::Transform* MOFBLBLNPIM; // 0x88
		::RPG::Client::PluralityHPBarValue* LCAGJEHNJEM; // 0x90
		::UnityEngine::UI::Text* BDDBIFFMCCB; // 0x98
		::DCGIDEKLGAJ* HAKGKEFHOHO; // 0xA0
		::UnityEngine::Transform* HCOGIJGBHFB; // 0xA8
		::DCGIDEKLGAJ* LJHNBPDMEKC; // 0xB0
		::System::Action* OOMGNJOILLB; // 0xB8
		::UnityEngine::Transform* CDBCOOICNGO; // 0xC0
		::HGKIKKOLLFA* INFKHFPPPCN; // 0xC8
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0xD0
		::System::Action_1<::System::Single>* LECMHEEAFEM; // 0xD8
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0xE0
		::System::Boolean LICLIJBMFIN; // 0xE8
		::System::Boolean BNMJLLCPLJC; // 0xE9
		::System::Boolean GMEOOPGDMFJ; // 0xEA
		::System::Boolean HAFCOEMEHNH; // 0xEB
		::System::Single LFJOPHCMBBG; // 0xEC
		::System::Single MOBANLDKIIA; // 0xF0
		::System::Single EJNMGLJJEOO; // 0xF4
		::System::Single GHJJJLNJBJL; // 0xF8
		::System::Single HEPGEHEAKGC; // 0xFC
		::System::Int32 NNHBIPEOPJN; // 0x100
		::System::Single BFKCADADNCA; // 0x104
		::GEHLOHBBKLL_TweenAnimState ALIOKKHBIIK; // 0x108
		::System::Int32 OJJEBIJFLLD; // 0x10C
		::System::Single HOMPGHIILAD; // 0x110
		::UnityEngine::Color GANKIOBIBMA; // 0x114
		::System::Int32 KIGHKNPHMEN; // 0x124
		::UnityEngine::Color GLHMOPDPMLH; // 0x128
		::System::Single MCILAEKKCHJ; // 0x138
		// static const ::System::String* IALFONPILCN; // 0x0
		// static const ::System::Object EMINLHCGCAB; // 0x0
		// static const ::System::Object KLEDDDGNKDL; // 0x0
		// static const ::System::Object FJLBAGILKEC; // 0x0
		// static const ::System::Object ALMFOPCOKEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLOHBBKLL__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GEHLOHBBKLL__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLOHBBKLL__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEHLOHBBKLL__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLOHBBKLL__ONDISPOSE_OFFSET))(this);
		}

		::System::Void FHAPPCADGCE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_FHAPPCADGCE_OFFSET))(this, a1);
		}

		::System::Boolean ILPMNJHBPEG(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_ILPMNJHBPEG_OFFSET))(this, a1);
		}

		::System::Void OAHIPMLGCIH(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_OAHIPMLGCIH_OFFSET))(this, a1, a2);
		}

		::System::Void CMMDKAMBJMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_CMMDKAMBJMJ_OFFSET))(this);
		}

		::System::Void PKMIIPFIIOF(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_PKMIIPFIIOF_OFFSET))(this, a1);
		}

		::System::Void HEAKAJDNCGE(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_HEAKAJDNCGE_OFFSET))(this, a1);
		}

		::System::Void ECIMAEJHANM(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_ECIMAEJHANM_OFFSET))(this, a1);
		}

		::System::Void DKOAAEMEPAO(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_DKOAAEMEPAO_OFFSET))(this, a1);
		}

		::System::Void HBFPFNGAODL(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_HBFPFNGAODL_OFFSET))(this, a1);
		}

		::System::Void PBGMJHHNINL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_PBGMJHHNINL_OFFSET))(this, a1);
		}

		::System::Void ONIHGLIAIIE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_ONIHGLIAIIE_OFFSET))(this, a1);
		}

		::System::Void PFHIHEHFGEB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_PFHIHEHFGEB_OFFSET))(this, a1);
		}

		::System::Void CEENCDMHBFB(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_CEENCDMHBFB_OFFSET))(this, a1);
		}

		::System::Void GDBOALOEFMD(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_GDBOALOEFMD_OFFSET))(this, a1);
		}

		::System::Void OPCDEPOJOAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_OPCDEPOJOAL_OFFSET))(this);
		}

		::System::Void HADKHLGBFLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_HADKHLGBFLK_OFFSET))(this);
		}

		::System::Void KPLOILLLDBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_KPLOILLLDBK_OFFSET))(this);
		}

		::System::Single KPEJODMFHHC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_KPEJODMFHHC_OFFSET))(this);
		}

		::System::Int32 NKAKFOPFHDN(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_NKAKFOPFHDN_OFFSET))(this, a1);
		}

		::System::Boolean GFLHLNNLJAJ(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_GFLHLNNLJAJ_OFFSET))(this, a1);
		}

		::System::Void HCFFOMKGKIO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_HCFFOMKGKIO_OFFSET))(this, a1);
		}

		::System::Void OHPPKKILBCJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_OHPPKKILBCJ_OFFSET))(this, a1);
		}

		::System::Void GNHEBIADPJG(::KCMGAIFFBPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_GNHEBIADPJG_OFFSET))(this, a1);
		}

		::System::Void DBBNAHMGBAB(::EIIJNHOOCOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIIJNHOOCOM*))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_DBBNAHMGBAB_OFFSET))(this, a1);
		}

		::System::Void MIGCMFNPKHM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_MIGCMFNPKHM_OFFSET))(this, a1);
		}

		::System::Void JFGEHJBDOCD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_JFGEHJBDOCD_OFFSET))(this, a1);
		}

		::System::Void PGJEPBPCJIH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_PGJEPBPCJIH_OFFSET))(this, a1);
		}

		::System::Void PIJFBHOFEGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_PIJFBHOFEGD_OFFSET))(this);
		}

		::System::Void PMBDJMFOJMB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_PMBDJMFOJMB_OFFSET))(this, a1);
		}

		::System::Void ELGFNIBDJND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_ELGFNIBDJND_OFFSET))(this);
		}

		::System::Void JMEFBNHDGGL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_JMEFBNHDGGL_OFFSET))(this, a1);
		}

		::System::Void JAFPEIGHDDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_JAFPEIGHDDE_OFFSET))(this);
		}

		::System::Boolean EDCHKFCPBIM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_EDCHKFCPBIM_OFFSET))(this);
		}

		::System::Void ICJANNMKGEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_ICJANNMKGEA_OFFSET))(this);
		}

		::System::Void CFOFGDOLFMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_CFOFGDOLFMI_OFFSET))(this);
		}

		::System::Void OFLEHGPIFFG(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_OFLEHGPIFFG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KPNIKDBICCM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_KPNIKDBICCM_OFFSET))(this, a1);
		}

		::System::Boolean MFAJGDACLFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_MFAJGDACLFB_OFFSET))(this);
		}

		::System::Boolean BJKDGIANAFP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_BJKDGIANAFP_OFFSET))(this);
		}

		::System::Void LHMILFIDODC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_LHMILFIDODC_OFFSET))(this, a1);
		}

		::System::Void BMEBFCJMAML(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_BMEBFCJMAML_OFFSET))(this, a1);
		}

		::System::Void IFAPHDOHABO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_IFAPHDOHABO_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLOHBBKLL_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
