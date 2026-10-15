#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class AJOGKBGIPGN;
class ANJIIFAPKCD;
class EKDCBAAGNJH;
class FJJDEHFCIIL;
class GHNDHIKGIFB;
class IDNCOAGMGGG;
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define KFLMHOMOIGO_ACHKHCOEABG_OFFSET UNITYSDK_OFFSET(0xB3C41C0)
#define KFLMHOMOIGO_AOCANOGJPDC_OFFSET UNITYSDK_OFFSET(0xB3C3CD0)
#define KFLMHOMOIGO_AOODHACBLAB_OFFSET UNITYSDK_OFFSET(0xB3C2700)
#define KFLMHOMOIGO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB3C47C0)
#define KFLMHOMOIGO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB3C4D50)
#define KFLMHOMOIGO_BDECCJONFCF_OFFSET UNITYSDK_OFFSET(0xB3C3DB0)
#define KFLMHOMOIGO_BHBCLBBOPFL_OFFSET UNITYSDK_OFFSET(0xB3C26B0)
#define KFLMHOMOIGO_BIDJHDMMFFF_OFFSET UNITYSDK_OFFSET(0xB3C3B40)
#define KFLMHOMOIGO_CBKENKHAJJC_OFFSET UNITYSDK_OFFSET(0xB3C4580)
#define KFLMHOMOIGO_CCTOR_OFFSET UNITYSDK_OFFSET(0xB3C52D0)
#define KFLMHOMOIGO_CELBGENCNGD_OFFSET UNITYSDK_OFFSET(0xB3C28E0)
#define KFLMHOMOIGO_CGOHFICPALD_OFFSET UNITYSDK_OFFSET(0xB3C4700)
#define KFLMHOMOIGO_CTOR_OFFSET UNITYSDK_OFFSET(0xB3C52A0)
#define KFLMHOMOIGO_DAOHLCBLMHO_OFFSET UNITYSDK_OFFSET(0xB3C2890)
#define KFLMHOMOIGO_DEHMAFPEMOJ_OFFSET UNITYSDK_OFFSET(0xB3C3BE0)
#define KFLMHOMOIGO_DJKOOKBHCOE_OFFSET UNITYSDK_OFFSET(0xB3C2750)
#define KFLMHOMOIGO_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0xB3C2240)
#define KFLMHOMOIGO_EEIODKHLPMA_OFFSET UNITYSDK_OFFSET(0xB3C33C0)
#define KFLMHOMOIGO_ENJPEHMDDKE_OFFSET UNITYSDK_OFFSET(0xB3C2FE0)
#define KFLMHOMOIGO_FLFDNCNPDNI_OFFSET UNITYSDK_OFFSET(0xB3C2840)
#define KFLMHOMOIGO_GCODCEFGANN_OFFSET UNITYSDK_OFFSET(0xB3C24F0)
#define KFLMHOMOIGO_GDGKEIIMNNM_OFFSET UNITYSDK_OFFSET(0xB3C2F40)
#define KFLMHOMOIGO_GDNKPFDOFEA_OFFSET UNITYSDK_OFFSET(0xB3C4400)
#define KFLMHOMOIGO_GMCMIFMHCHJ_OFFSET UNITYSDK_OFFSET(0xB3C2EA0)
#define KFLMHOMOIGO_GNNOKKECINF_OFFSET UNITYSDK_OFFSET(0xB3C2660)
#define KFLMHOMOIGO_HGMJKNEAANO_OFFSET UNITYSDK_OFFSET(0xB3C4100)
#define KFLMHOMOIGO_HIACEJHMHOA_OFFSET UNITYSDK_OFFSET(0xB3C3F80)
#define KFLMHOMOIGO_IAEDFCDAHGA_OFFSET UNITYSDK_OFFSET(0xB3C2540)
#define KFLMHOMOIGO_IJFNEODDFMN_OFFSET UNITYSDK_OFFSET(0xB3C27F0)
#define KFLMHOMOIGO_IKLPNHHGMNG_OFFSET UNITYSDK_OFFSET(0xB3C4340)
#define KFLMHOMOIGO_ILAIGIAMICC_OFFSET UNITYSDK_OFFSET(0xB3C3420)
#define KFLMHOMOIGO_JCPJDGFHEDN_OFFSET UNITYSDK_OFFSET(0xB3C3560)
#define KFLMHOMOIGO_JFEILMNOCMK_OFFSET UNITYSDK_OFFSET(0xB3C44C0)
#define KFLMHOMOIGO_KBDJNCNCFBE_OFFSET UNITYSDK_OFFSET(0xB3C2300)
#define KFLMHOMOIGO_KFIECBFDHJL_OFFSET UNITYSDK_OFFSET(0xB3C4280)
#define KFLMHOMOIGO_KNAGFOEMOAL_OFFSET UNITYSDK_OFFSET(0xB3C3EA0)
#define KFLMHOMOIGO_LJBBHDAAMKC_OFFSET UNITYSDK_OFFSET(0xB3C22B0)
#define KFLMHOMOIGO_MPDGHOJHPAO_OFFSET UNITYSDK_OFFSET(0xB3C4040)
#define KFLMHOMOIGO_NCKMAEILCDH_OFFSET UNITYSDK_OFFSET(0xB3C4640)
#define KFLMHOMOIGO_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB3C2BC0)
#define KFLMHOMOIGO_OPOCPDBMELE_OFFSET UNITYSDK_OFFSET(0xB3C27A0)
#define KFLMHOMOIGO_PHIMKHKMNOH_OFFSET UNITYSDK_OFFSET(0xB3C35C0)
#define KFLMHOMOIGO__ONBIND_OFFSET UNITYSDK_OFFSET(0xB3C1D70)
#define KFLMHOMOIGO__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB3C2150)

	class KFLMHOMOIGO : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animator* APPGGMLEPLN; // 0x60
		::UnityEngine::Transform* ILJDBLBHLOE; // 0x68
		::UnityEngine::UI::Button* NHNPPHCCPGA; // 0x70
		::RPG::GameCore::GameEntity* DDMIHJBMFPO; // 0x78
		::UnityEngine::UI::Image* GCLDMLBJFBO; // 0x80
		::ANJIIFAPKCD* PLLEEPDBBLA; // 0x88
		::UnityEngine::Transform* ECCICJNAPAI; // 0x90
		::EKDCBAAGNJH* POOHHPKMNBH; // 0x98
		::FJJDEHFCIIL* LJADIDLONKO; // 0xA0
		::RPG::GameCore::BattleGridFightAvatarData* OAEOLANBFMB; // 0xA8
		::UnityEngine::Transform* FDMEHLCNBCJ; // 0xB0
		::IDNCOAGMGGG* CJACIDAJLEB; // 0xB8
		::UnityEngine::UI::Image* EDMKLPDMJJF; // 0xC0
		::UnityEngine::Transform* DKHAEICFGBH; // 0xC8
		::GHNDHIKGIFB* LMOMJGDIBBE; // 0xD0
		::UnityEngine::CanvasGroup* CDFONFEIPJL; // 0xD8
		::System::Boolean JHLKDDEIHFG; // 0xE0
		static ::System::Int32* StaticGet_DCHALKKEDDA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KFLMHOMOIGO")->GetStaticField(0x11660);
		}

		static ::System::Int32* StaticGet_MHBMLAMAHOL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KFLMHOMOIGO")->GetStaticField(0x11664);
		}

		static ::System::Int32* StaticGet_KNBFLFGAGJG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KFLMHOMOIGO")->GetStaticField(0x11668);
		}

		static ::System::Int32* StaticGet_BNDNMGIENPA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KFLMHOMOIGO")->GetStaticField(0x1166C);
		}

		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFLMHOMOIGO_CCTOR_OFFSET))();
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO__ONBIND_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO__ONDISPOSE_OFFSET))(this);
		}

		::System::Void DOFNOIEDPFN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Void LJBBHDAAMKC(::RPG::GameCore::LevelBattleEventCreate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_LJBBHDAAMKC_OFFSET))(this, a1);
		}

		::System::Void GCODCEFGANN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_GCODCEFGANN_OFFSET))(this);
		}

		::System::Void GNNOKKECINF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_GNNOKKECINF_OFFSET))(this);
		}

		::System::Void BHBCLBBOPFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_BHBCLBBOPFL_OFFSET))(this);
		}

		::System::Void AOODHACBLAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_AOODHACBLAB_OFFSET))(this);
		}

		::System::Void DJKOOKBHCOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_DJKOOKBHCOE_OFFSET))(this);
		}

		::System::Void OPOCPDBMELE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_OPOCPDBMELE_OFFSET))(this);
		}

		::System::Void IJFNEODDFMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_IJFNEODDFMN_OFFSET))(this);
		}

		::System::Void FLFDNCNPDNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_FLFDNCNPDNI_OFFSET))(this);
		}

		::System::Void DAOHLCBLMHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_DAOHLCBLMHO_OFFSET))(this);
		}

		::System::Void CELBGENCNGD(::AJOGKBGIPGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJOGKBGIPGN*))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_CELBGENCNGD_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::RPG::GameCore::BattleGridFightAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void JCPJDGFHEDN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_JCPJDGFHEDN_OFFSET))(this, a1);
		}

		::System::Void PHIMKHKMNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_PHIMKHKMNOH_OFFSET))(this);
		}

		::System::Void ILAIGIAMICC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_ILAIGIAMICC_OFFSET))(this);
		}

		::System::Void GMCMIFMHCHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_GMCMIFMHCHJ_OFFSET))(this);
		}

		::System::Void BIDJHDMMFFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_BIDJHDMMFFF_OFFSET))(this);
		}

		::System::Void GDGKEIIMNNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_GDGKEIIMNNM_OFFSET))(this);
		}

		::System::Void ENJPEHMDDKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_ENJPEHMDDKE_OFFSET))(this);
		}

		::System::Void EEIODKHLPMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_EEIODKHLPMA_OFFSET))(this);
		}

		::System::Void IAEDFCDAHGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_IAEDFCDAHGA_OFFSET))(this);
		}

		::System::Boolean DEHMAFPEMOJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_DEHMAFPEMOJ_OFFSET))(this);
		}

		::System::Void AOCANOGJPDC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_AOCANOGJPDC_OFFSET))(this, a1);
		}

		::System::Void KBDJNCNCFBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_KBDJNCNCFBE_OFFSET))(this);
		}

		::System::Void BDECCJONFCF(::RPG::GameCore::AbilityProperty a1, ::System::Nullable* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::CHMCAGBDPJH a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::System::Nullable*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_BDECCJONFCF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KNAGFOEMOAL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_KNAGFOEMOAL_OFFSET))(this, a1);
		}

		::System::Void HIACEJHMHOA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_HIACEJHMHOA_OFFSET))(this, a1);
		}

		::System::Void MPDGHOJHPAO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_MPDGHOJHPAO_OFFSET))(this, a1);
		}

		::System::Void HGMJKNEAANO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_HGMJKNEAANO_OFFSET))(this, a1);
		}

		::System::Void ACHKHCOEABG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_ACHKHCOEABG_OFFSET))(this, a1);
		}

		::System::Void KFIECBFDHJL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_KFIECBFDHJL_OFFSET))(this, a1);
		}

		::System::Void IKLPNHHGMNG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_IKLPNHHGMNG_OFFSET))(this, a1);
		}

		::System::Void GDNKPFDOFEA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_GDNKPFDOFEA_OFFSET))(this, a1);
		}

		::System::Void JFEILMNOCMK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_JFEILMNOCMK_OFFSET))(this, a1);
		}

		::System::Void CBKENKHAJJC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_CBKENKHAJJC_OFFSET))(this, a1);
		}

		::System::Void NCKMAEILCDH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_NCKMAEILCDH_OFFSET))(this, a1);
		}

		::System::Void CGOHFICPALD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_CGOHFICPALD_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
