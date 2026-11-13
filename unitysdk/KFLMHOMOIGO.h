#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/ElationEchoPointUIType.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/JKHCFCIMIBJ.h"
#include "unitysdk/MNIHEKEBMDE.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
class AJOGKBGIPGN;
class ANJIIFAPKCD;
class EKDCBAAGNJH;
class FJJDEHFCIIL;
class GHNDHIKGIFB;
class HPADBIIDICI;
class IDNCOAGMGGG;
class KJLPEOPGAMA;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define KFLMHOMOIGO_ACHKHCOEABG_OFFSET UNITYSDK_OFFSET(0x17705FD0)
#define KFLMHOMOIGO_AMMHLFBBADJ_OFFSET UNITYSDK_OFFSET(0x177067D0)
#define KFLMHOMOIGO_AOCANOGJPDC_OFFSET UNITYSDK_OFFSET(0x17705850)
#define KFLMHOMOIGO_AOODHACBLAB_OFFSET UNITYSDK_OFFSET(0x17703DB0)
#define KFLMHOMOIGO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17706900)
#define KFLMHOMOIGO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x17706F50)
#define KFLMHOMOIGO_BDECCJONFCF_OFFSET UNITYSDK_OFFSET(0x17705930)
#define KFLMHOMOIGO_BHBCLBBOPFL_OFFSET UNITYSDK_OFFSET(0x17703D60)
#define KFLMHOMOIGO_BIDJHDMMFFF_OFFSET UNITYSDK_OFFSET(0x177056B0)
#define KFLMHOMOIGO_CBKENKHAJJC_OFFSET UNITYSDK_OFFSET(0x17706390)
#define KFLMHOMOIGO_CCTOR_OFFSET UNITYSDK_OFFSET(0x17707590)
#define KFLMHOMOIGO_CELBGENCNGD_OFFSET UNITYSDK_OFFSET(0x17703F90)
#define KFLMHOMOIGO_CGOHFICPALD_OFFSET UNITYSDK_OFFSET(0x17706510)
#define KFLMHOMOIGO_CTOR_OFFSET UNITYSDK_OFFSET(0x17707560)
#define KFLMHOMOIGO_DAOHLCBLMHO_OFFSET UNITYSDK_OFFSET(0x17703F40)
#define KFLMHOMOIGO_DBLIALBBCII_OFFSET UNITYSDK_OFFSET(0x17705620)
#define KFLMHOMOIGO_DEHMAFPEMOJ_OFFSET UNITYSDK_OFFSET(0x17705750)
#define KFLMHOMOIGO_DEOCOHMHHEA_OFFSET UNITYSDK_OFFSET(0x177043C0)
#define KFLMHOMOIGO_DGJLHNMLEIJ_OFFSET UNITYSDK_OFFSET(0x177066C0)
#define KFLMHOMOIGO_DJKOOKBHCOE_OFFSET UNITYSDK_OFFSET(0x17703E00)
#define KFLMHOMOIGO_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0x177038E0)
#define KFLMHOMOIGO_EEIODKHLPMA_OFFSET UNITYSDK_OFFSET(0x17704ED0)
#define KFLMHOMOIGO_ENJPEHMDDKE_OFFSET UNITYSDK_OFFSET(0x17704B00)
#define KFLMHOMOIGO_FLFDNCNPDNI_OFFSET UNITYSDK_OFFSET(0x17703EF0)
#define KFLMHOMOIGO_GCODCEFGANN_OFFSET UNITYSDK_OFFSET(0x17703B90)
#define KFLMHOMOIGO_GCPKEEMKGGF_OFFSET UNITYSDK_OFFSET(0x17705510)
#define KFLMHOMOIGO_GDGKEIIMNNM_OFFSET UNITYSDK_OFFSET(0x17704A60)
#define KFLMHOMOIGO_GDNKPFDOFEA_OFFSET UNITYSDK_OFFSET(0x17706210)
#define KFLMHOMOIGO_GMCMIFMHCHJ_OFFSET UNITYSDK_OFFSET(0x177049C0)
#define KFLMHOMOIGO_GNNOKKECINF_OFFSET UNITYSDK_OFFSET(0x17703D10)
#define KFLMHOMOIGO_HGMJKNEAANO_OFFSET UNITYSDK_OFFSET(0x17705F10)
#define KFLMHOMOIGO_HIACEJHMHOA_OFFSET UNITYSDK_OFFSET(0x17705D90)
#define KFLMHOMOIGO_IAEDFCDAHGA_OFFSET UNITYSDK_OFFSET(0x17703BE0)
#define KFLMHOMOIGO_IJFNEODDFMN_OFFSET UNITYSDK_OFFSET(0x17703EA0)
#define KFLMHOMOIGO_IKLPNHHGMNG_OFFSET UNITYSDK_OFFSET(0x17706150)
#define KFLMHOMOIGO_ILAIGIAMICC_OFFSET UNITYSDK_OFFSET(0x177044B0)
#define KFLMHOMOIGO_IOEBHFGLHPK_OFFSET UNITYSDK_OFFSET(0x17704270)
#define KFLMHOMOIGO_JCPJDGFHEDN_OFFSET UNITYSDK_OFFSET(0x17704F30)
#define KFLMHOMOIGO_JFEILMNOCMK_OFFSET UNITYSDK_OFFSET(0x177062D0)
#define KFLMHOMOIGO_KBDJNCNCFBE_OFFSET UNITYSDK_OFFSET(0x177039A0)
#define KFLMHOMOIGO_KFIECBFDHJL_OFFSET UNITYSDK_OFFSET(0x17706090)
#define KFLMHOMOIGO_KNAGFOEMOAL_OFFSET UNITYSDK_OFFSET(0x17705CB0)
#define KFLMHOMOIGO_KOGPAOGHLIK_OFFSET UNITYSDK_OFFSET(0x177065D0)
#define KFLMHOMOIGO_LJBBHDAAMKC_OFFSET UNITYSDK_OFFSET(0x17703950)
#define KFLMHOMOIGO_LLABAKEEANF_OFFSET UNITYSDK_OFFSET(0x17705A20)
#define KFLMHOMOIGO_MPDGHOJHPAO_OFFSET UNITYSDK_OFFSET(0x17705E50)
#define KFLMHOMOIGO_NCKMAEILCDH_OFFSET UNITYSDK_OFFSET(0x17706450)
#define KFLMHOMOIGO_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x177046E0)
#define KFLMHOMOIGO_OPOCPDBMELE_OFFSET UNITYSDK_OFFSET(0x17703E50)
#define KFLMHOMOIGO_PHIMKHKMNOH_OFFSET UNITYSDK_OFFSET(0x17704F90)
#define KFLMHOMOIGO__ONBIND_OFFSET UNITYSDK_OFFSET(0x17703100)
#define KFLMHOMOIGO__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x177037F0)

inline static constexpr unsigned int KFLMHOMOIGO_TypeDefinitionIndex = 74330;

	class KFLMHOMOIGO : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* ILJDBLBHLOE; // 0x60
		::UnityEngine::CanvasGroup* CDFONFEIPJL; // 0x68
		::UnityEngine::Transform* FDMEHLCNBCJ; // 0x70
		::UnityEngine::Transform* DKHAEICFGBH; // 0x78
		::UnityEngine::Animator* APPGGMLEPLN; // 0x80
		::RPG::GameCore::BattleGridFightAvatarData* OAEOLANBFMB; // 0x88
		::RPG::Client::PrefabLoadMeta* LLNHNIPLGEK; // 0x90
		::ANJIIFAPKCD* PLLEEPDBBLA; // 0x98
		::UnityEngine::Transform* LCECCCHIJKA; // 0xA0
		::System::String* ANFFLOBKKMO; // 0xA8
		::EKDCBAAGNJH* POOHHPKMNBH; // 0xB0
		::FJJDEHFCIIL* LJADIDLONKO; // 0xB8
		::UnityEngine::UI::Button* NHNPPHCCPGA; // 0xC0
		::UnityEngine::Transform* GHGNPPNFAKL; // 0xC8
		::GHNDHIKGIFB* LMOMJGDIBBE; // 0xD0
		::RPG::GameCore::GameEntity* DDMIHJBMFPO; // 0xD8
		::HPADBIIDICI* JHKDOFHCDDI; // 0xE0
		::FJJDEHFCIIL* ALNIHOKLDHO; // 0xE8
		::UnityEngine::UI::Image* GCLDMLBJFBO; // 0xF0
		::UnityEngine::UI::Image* EDMKLPDMJJF; // 0xF8
		::UnityEngine::Transform* ECCICJNAPAI; // 0x100
		::IDNCOAGMGGG* CJACIDAJLEB; // 0x108
		::System::Boolean KAJEAHLEKGH; // 0x110
		::System::Boolean JHLKDDEIHFG; // 0x111
		static ::System::Int32* StaticGet_KNBFLFGAGJG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KFLMHOMOIGO")->GetStaticField(0xDCD0);
		}

		static ::System::Int32* StaticGet_BNDNMGIENPA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KFLMHOMOIGO")->GetStaticField(0xDCD4);
		}

		static ::System::Int32* StaticGet_DCHALKKEDDA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KFLMHOMOIGO")->GetStaticField(0xDCD8);
		}

		static ::System::Int32* StaticGet_MHBMLAMAHOL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KFLMHOMOIGO")->GetStaticField(0xDCDC);
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

		::System::Void IOEBHFGLHPK(::RPG::GameCore::BattleGridFightAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_IOEBHFGLHPK_OFFSET))(this, a1);
		}

		::System::Void DEOCOHMHHEA(::JKHCFCIMIBJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKHCFCIMIBJ))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_DEOCOHMHHEA_OFFSET))(this, a1);
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

		::System::Void DBLIALBBCII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_DBLIALBBCII_OFFSET))(this);
		}

		::System::String* GCPKEEMKGGF(::RPG::GameCore::ElationEchoPointUIType a1, ::KJLPEOPGAMA* a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::ElationEchoPointUIType, ::KJLPEOPGAMA*))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_GCPKEEMKGGF_OFFSET))(this, a1, a2);
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

		::System::Void BDECCJONFCF(::RPG::GameCore::AbilityProperty a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::CHMCAGBDPJH a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_BDECCJONFCF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LLABAKEEANF(::MNIHEKEBMDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNIHEKEBMDE))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_LLABAKEEANF_OFFSET))(this, a1);
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

		::System::Void KOGPAOGHLIK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_KOGPAOGHLIK_OFFSET))(this, a1);
		}

		::System::Void DGJLHNMLEIJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_DGJLHNMLEIJ_OFFSET))(this, a1);
		}

		::System::Void AMMHLFBBADJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFLMHOMOIGO_AMMHLFBBADJ_OFFSET))(this, a1);
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
