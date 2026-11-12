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

#define KFLMHOMOIGO_ACHKHCOEABG_OFFSET UNITYSDK_OFFSET(0xBC53910)
#define KFLMHOMOIGO_AMMHLFBBADJ_OFFSET UNITYSDK_OFFSET(0xBC54110)
#define KFLMHOMOIGO_AOCANOGJPDC_OFFSET UNITYSDK_OFFSET(0xBC53180)
#define KFLMHOMOIGO_AOODHACBLAB_OFFSET UNITYSDK_OFFSET(0xBC516D0)
#define KFLMHOMOIGO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBC54240)
#define KFLMHOMOIGO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBC54890)
#define KFLMHOMOIGO_BDECCJONFCF_OFFSET UNITYSDK_OFFSET(0xBC53260)
#define KFLMHOMOIGO_BHBCLBBOPFL_OFFSET UNITYSDK_OFFSET(0xBC51680)
#define KFLMHOMOIGO_BIDJHDMMFFF_OFFSET UNITYSDK_OFFSET(0xBC52FE0)
#define KFLMHOMOIGO_CBKENKHAJJC_OFFSET UNITYSDK_OFFSET(0xBC53CD0)
#define KFLMHOMOIGO_CCTOR_OFFSET UNITYSDK_OFFSET(0xBC54ED0)
#define KFLMHOMOIGO_CELBGENCNGD_OFFSET UNITYSDK_OFFSET(0xBC518B0)
#define KFLMHOMOIGO_CGOHFICPALD_OFFSET UNITYSDK_OFFSET(0xBC53E50)
#define KFLMHOMOIGO_CTOR_OFFSET UNITYSDK_OFFSET(0xBC54EA0)
#define KFLMHOMOIGO_DAOHLCBLMHO_OFFSET UNITYSDK_OFFSET(0xBC51860)
#define KFLMHOMOIGO_DBLIALBBCII_OFFSET UNITYSDK_OFFSET(0xBC52F50)
#define KFLMHOMOIGO_DEHMAFPEMOJ_OFFSET UNITYSDK_OFFSET(0xBC53080)
#define KFLMHOMOIGO_DEOCOHMHHEA_OFFSET UNITYSDK_OFFSET(0xBC51CE0)
#define KFLMHOMOIGO_DGJLHNMLEIJ_OFFSET UNITYSDK_OFFSET(0xBC54000)
#define KFLMHOMOIGO_DJKOOKBHCOE_OFFSET UNITYSDK_OFFSET(0xBC51720)
#define KFLMHOMOIGO_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0xBC51200)
#define KFLMHOMOIGO_EEIODKHLPMA_OFFSET UNITYSDK_OFFSET(0xBC52800)
#define KFLMHOMOIGO_ENJPEHMDDKE_OFFSET UNITYSDK_OFFSET(0xBC52420)
#define KFLMHOMOIGO_FLFDNCNPDNI_OFFSET UNITYSDK_OFFSET(0xBC51810)
#define KFLMHOMOIGO_GCODCEFGANN_OFFSET UNITYSDK_OFFSET(0xBC514B0)
#define KFLMHOMOIGO_GCPKEEMKGGF_OFFSET UNITYSDK_OFFSET(0xBC52E40)
#define KFLMHOMOIGO_GDGKEIIMNNM_OFFSET UNITYSDK_OFFSET(0xBC52380)
#define KFLMHOMOIGO_GDNKPFDOFEA_OFFSET UNITYSDK_OFFSET(0xBC53B50)
#define KFLMHOMOIGO_GMCMIFMHCHJ_OFFSET UNITYSDK_OFFSET(0xBC522E0)
#define KFLMHOMOIGO_GNNOKKECINF_OFFSET UNITYSDK_OFFSET(0xBC51630)
#define KFLMHOMOIGO_HGMJKNEAANO_OFFSET UNITYSDK_OFFSET(0xBC53850)
#define KFLMHOMOIGO_HIACEJHMHOA_OFFSET UNITYSDK_OFFSET(0xBC536D0)
#define KFLMHOMOIGO_IAEDFCDAHGA_OFFSET UNITYSDK_OFFSET(0xBC51500)
#define KFLMHOMOIGO_IJFNEODDFMN_OFFSET UNITYSDK_OFFSET(0xBC517C0)
#define KFLMHOMOIGO_IKLPNHHGMNG_OFFSET UNITYSDK_OFFSET(0xBC53A90)
#define KFLMHOMOIGO_ILAIGIAMICC_OFFSET UNITYSDK_OFFSET(0xBC51DD0)
#define KFLMHOMOIGO_IOEBHFGLHPK_OFFSET UNITYSDK_OFFSET(0xBC51B90)
#define KFLMHOMOIGO_JCPJDGFHEDN_OFFSET UNITYSDK_OFFSET(0xBC52860)
#define KFLMHOMOIGO_JFEILMNOCMK_OFFSET UNITYSDK_OFFSET(0xBC53C10)
#define KFLMHOMOIGO_KBDJNCNCFBE_OFFSET UNITYSDK_OFFSET(0xBC512C0)
#define KFLMHOMOIGO_KFIECBFDHJL_OFFSET UNITYSDK_OFFSET(0xBC539D0)
#define KFLMHOMOIGO_KNAGFOEMOAL_OFFSET UNITYSDK_OFFSET(0xBC535F0)
#define KFLMHOMOIGO_KOGPAOGHLIK_OFFSET UNITYSDK_OFFSET(0xBC53F10)
#define KFLMHOMOIGO_LJBBHDAAMKC_OFFSET UNITYSDK_OFFSET(0xBC51270)
#define KFLMHOMOIGO_LLABAKEEANF_OFFSET UNITYSDK_OFFSET(0xBC53360)
#define KFLMHOMOIGO_MPDGHOJHPAO_OFFSET UNITYSDK_OFFSET(0xBC53790)
#define KFLMHOMOIGO_NCKMAEILCDH_OFFSET UNITYSDK_OFFSET(0xBC53D90)
#define KFLMHOMOIGO_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBC52000)
#define KFLMHOMOIGO_OPOCPDBMELE_OFFSET UNITYSDK_OFFSET(0xBC51770)
#define KFLMHOMOIGO_PHIMKHKMNOH_OFFSET UNITYSDK_OFFSET(0xBC528C0)
#define KFLMHOMOIGO__ONBIND_OFFSET UNITYSDK_OFFSET(0xBC50A10)
#define KFLMHOMOIGO__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xBC51110)

inline static constexpr unsigned int KFLMHOMOIGO_TypeDefinitionIndex = 74331;

	class KFLMHOMOIGO : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* EDMKLPDMJJF; // 0x60
		::HPADBIIDICI* JHKDOFHCDDI; // 0x68
		::UnityEngine::Transform* LCECCCHIJKA; // 0x70
		::RPG::Client::PrefabLoadMeta* LLNHNIPLGEK; // 0x78
		::UnityEngine::Transform* GHGNPPNFAKL; // 0x80
		::FJJDEHFCIIL* LJADIDLONKO; // 0x88
		::UnityEngine::Transform* ECCICJNAPAI; // 0x90
		::UnityEngine::Transform* DKHAEICFGBH; // 0x98
		::UnityEngine::UI::Button* NHNPPHCCPGA; // 0xA0
		::UnityEngine::CanvasGroup* CDFONFEIPJL; // 0xA8
		::UnityEngine::UI::Image* GCLDMLBJFBO; // 0xB0
		::UnityEngine::Animator* APPGGMLEPLN; // 0xB8
		::System::String* ANFFLOBKKMO; // 0xC0
		::EKDCBAAGNJH* POOHHPKMNBH; // 0xC8
		::IDNCOAGMGGG* CJACIDAJLEB; // 0xD0
		::RPG::GameCore::BattleGridFightAvatarData* OAEOLANBFMB; // 0xD8
		::GHNDHIKGIFB* LMOMJGDIBBE; // 0xE0
		::FJJDEHFCIIL* ALNIHOKLDHO; // 0xE8
		::UnityEngine::Transform* ILJDBLBHLOE; // 0xF0
		::ANJIIFAPKCD* PLLEEPDBBLA; // 0xF8
		::UnityEngine::Transform* FDMEHLCNBCJ; // 0x100
		::RPG::GameCore::GameEntity* DDMIHJBMFPO; // 0x108
		::System::Boolean JHLKDDEIHFG; // 0x110
		::System::Boolean KAJEAHLEKGH; // 0x111
		static ::System::Int32* StaticGet_KNBFLFGAGJG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KFLMHOMOIGO")->GetStaticField(0xC480);
		}

		static ::System::Int32* StaticGet_BNDNMGIENPA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KFLMHOMOIGO")->GetStaticField(0xC484);
		}

		static ::System::Int32* StaticGet_DCHALKKEDDA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KFLMHOMOIGO")->GetStaticField(0xC488);
		}

		static ::System::Int32* StaticGet_MHBMLAMAHOL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KFLMHOMOIGO")->GetStaticField(0xC48C);
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
