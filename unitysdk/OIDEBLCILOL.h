#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"
class AAHPFGHKBOJ;
class BBNGMPLENPA;
class BJNKANPCBEB;
class BPIAOGPMLEI;
class DIELGJIPJDM;
class ECJOICEMEGG;
class FFOBKEBHNAM;
class FLPBGLOIEHE;
class IHBPHJJBEHE;
class JPOKOHEHHLL;
class KALGLFPKCGH;
class MFPIHMCMONL;
class NBKHNGPKIGL;
class PNNBOCOENEE;
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class AbilityCurrentStanceChange; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterBreakStateChange; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define OIDEBLCILOL_AFODNAKOLGP_OFFSET UNITYSDK_OFFSET(0xBE79720)
#define OIDEBLCILOL_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0xBE78150)
#define OIDEBLCILOL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBE79F20)
#define OIDEBLCILOL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBE7A400)
#define OIDEBLCILOL_CLNMDMGELJH_OFFSET UNITYSDK_OFFSET(0xBE78AE0)
#define OIDEBLCILOL_CTOR_OFFSET UNITYSDK_OFFSET(0xBE7A8A0)
#define OIDEBLCILOL_DCPHJCMNPJN_OFFSET UNITYSDK_OFFSET(0xBE796D0)
#define OIDEBLCILOL_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0xBE79C10)
#define OIDEBLCILOL_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0xBE78C00)
#define OIDEBLCILOL_DOJPGAOICJF_OFFSET UNITYSDK_OFFSET(0xBE79680)
#define OIDEBLCILOL_EAMOMDCHOAO_OFFSET UNITYSDK_OFFSET(0xBE78390)
#define OIDEBLCILOL_EEMBDMEHHHH_OFFSET UNITYSDK_OFFSET(0xBE79E20)
#define OIDEBLCILOL_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xBE77B90)
#define OIDEBLCILOL_EPPICCENEHE_OFFSET UNITYSDK_OFFSET(0xBE79AC0)
#define OIDEBLCILOL_GACBAPMHMLO_OFFSET UNITYSDK_OFFSET(0xBE77770)
#define OIDEBLCILOL_HPPCDHKEDEJ_OFFSET UNITYSDK_OFFSET(0xBE79D60)
#define OIDEBLCILOL_IFHDCHKKMCN_OFFSET UNITYSDK_OFFSET(0xBE795E0)
#define OIDEBLCILOL_JBKLPDPIMHF_OFFSET UNITYSDK_OFFSET(0xBE77E60)
#define OIDEBLCILOL_JFFMPMGNBDF_OFFSET UNITYSDK_OFFSET(0xBE79B80)
#define OIDEBLCILOL_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0xBE78030)
#define OIDEBLCILOL_JMNFOCENFLP_OFFSET UNITYSDK_OFFSET(0xBE78E70)
#define OIDEBLCILOL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xBE77870)
#define OIDEBLCILOL_KCJPBICKMIA_OFFSET UNITYSDK_OFFSET(0xBE79940)
#define OIDEBLCILOL_KGANNNBJLJH_OFFSET UNITYSDK_OFFSET(0xBE79A00)
#define OIDEBLCILOL_KHEDOIDHONF_OFFSET UNITYSDK_OFFSET(0xBE79880)
#define OIDEBLCILOL_KPLDMOMNCLF_OFFSET UNITYSDK_OFFSET(0xBE79770)
#define OIDEBLCILOL_LADBHMMENAM_OFFSET UNITYSDK_OFFSET(0xBE79370)
#define OIDEBLCILOL_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0xBE78B70)
#define OIDEBLCILOL_LDIPGMCJOED_OFFSET UNITYSDK_OFFSET(0xBE78300)
#define OIDEBLCILOL_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0xBE797C0)
#define OIDEBLCILOL_LOPLPEPEIMM_OFFSET UNITYSDK_OFFSET(0xBE78650)
#define OIDEBLCILOL_MOHPIBNCBPE_OFFSET UNITYSDK_OFFSET(0xBE79020)
#define OIDEBLCILOL_MPFBHIGKDHI_OFFSET UNITYSDK_OFFSET(0xBE78550)
#define OIDEBLCILOL_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xBE77A10)
#define OIDEBLCILOL_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xBE77EF0)
#define OIDEBLCILOL_OBHGDOMDLLG_OFFSET UNITYSDK_OFFSET(0xBE78440)
#define OIDEBLCILOL_OEHPIOOIJDN_OFFSET UNITYSDK_OFFSET(0xBE79CA0)
#define OIDEBLCILOL_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xBE77710)
#define OIDEBLCILOL_ONRETURN_OFFSET UNITYSDK_OFFSET(0xBE779B0)
#define OIDEBLCILOL_PDBFABEDKIF_OFFSET UNITYSDK_OFFSET(0xBE78E00)
#define OIDEBLCILOL_PKBHAKONAJA_OFFSET UNITYSDK_OFFSET(0xBE78C90)
#define OIDEBLCILOL__ONBIND_OFFSET UNITYSDK_OFFSET(0xBE76C80)
#define OIDEBLCILOL__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xBE77CC0)
#define OIDEBLCILOL__ONTICK_OFFSET UNITYSDK_OFFSET(0xBE77D20)

	class OIDEBLCILOL : public ::FMPCODLIOLG
	{
	public:
		::IHBPHJJBEHE* LEFDOCOCCBH; // 0x60
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x68
		::PNNBOCOENEE* GFGMECNGHIG; // 0x70
		::DIELGJIPJDM* HEBFHCBPMFI; // 0x78
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x80
		::RPG::GameCore::CharacterDataComponent* HKCICBFPGGF; // 0x88
		::NBKHNGPKIGL* HOLOEFEIBDC; // 0x90
		::KALGLFPKCGH* LFFBIIPBPJJ; // 0x98
		::UnityEngine::Transform* HIGKIILCPEP; // 0xA0
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0xA8
		::MFPIHMCMONL* OENDKKCKOEG; // 0xB0
		::UnityEngine::Animation* NJDJFFENGOJ; // 0xB8
		::RPG::Client::PrefabLoadMeta* CKGIPACADAL; // 0xC0
		::BBNGMPLENPA* COLBKPIKJOO; // 0xC8
		::FLPBGLOIEHE* PIMKIKPMAPO; // 0xD0
		::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0xD8
		::UnityEngine::Transform* ENIOLPBCHLK; // 0xE0
		::BPIAOGPMLEI* JFHMHENBIPB; // 0xE8
		::UnityEngine::Animation* IGCIKMHNLLC; // 0xF0
		::UnityEngine::Transform* GDGDNANJFKI; // 0xF8
		::FFOBKEBHNAM* BNFFILALODN; // 0x100
		::ECJOICEMEGG* KFILGHMECDL; // 0x108
		::UnityEngine::Transform* KMPHCBLIPAN; // 0x110
		::UnityEngine::UI::Image* ANIHJHGMMDP; // 0x118
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x120
		::BJNKANPCBEB* EGHOLHLEHDC; // 0x128
		::UnityEngine::Transform* FGHFLHBEGHJ; // 0x130
		::UnityEngine::GameObject* HLMEGCINGKG; // 0x138
		::System::Single CMKOAALCKAO; // 0x140
		::System::Boolean FHBNNGCEPFD; // 0x144
		::System::Boolean FMBKOCPMBDF; // 0x145
		::System::Boolean FFIAGGGEAEG; // 0x146
		::System::Boolean ACAPCHBDIBF; // 0x147
		::RPG::GameCore::MonsterEnergyBarType MBCDGGEGPFA; // 0x148
		// static const ::System::String* FOHFALFBMAP; // 0x0
		// static const ::System::Object PCKKCHDMGEF; // 0x0
		// static const ::System::String* FNLMCKOJPCN; // 0x0
		// static const ::System::String* HEHGGNJFJDA; // 0x0
		// static const ::System::String* AJCHIPEPEIP; // 0x0
		// static const ::System::String* KDODNCFEJFD; // 0x0
		// static const ::System::String* NMHICHPNEHN; // 0x0
		// static const ::System::String* ENEOKEBLEEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDEBLCILOL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDEBLCILOL__ONBIND_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OIDEBLCILOL_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDEBLCILOL_ONRETURN_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDEBLCILOL_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDEBLCILOL_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDEBLCILOL__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIDEBLCILOL__ONTICK_OFFSET))(this, a1);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OIDEBLCILOL_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void JJBGNJFCHPL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OIDEBLCILOL_JJBGNJFCHPL_OFFSET))(this, a1);
		}

		::System::Void GACBAPMHMLO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OIDEBLCILOL_GACBAPMHMLO_OFFSET))(this, a1);
		}

		::System::Void AGIJFEPDKMM(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + OIDEBLCILOL_AGIJFEPDKMM_OFFSET))(this, a1);
		}

		::System::Void OBHGDOMDLLG(::RPG::GameCore::AbilityCurrentShieldChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + OIDEBLCILOL_OBHGDOMDLLG_OFFSET))(this, a1);
		}

		::System::Void MPFBHIGKDHI(::RPG::GameCore::AbilityCurrentStanceChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentStanceChange*))((::PBYTE)hIl2Cpp + OIDEBLCILOL_MPFBHIGKDHI_OFFSET))(this, a1);
		}

		::System::Void LOPLPEPEIMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDEBLCILOL_LOPLPEPEIMM_OFFSET))(this);
		}

		::System::Void LBPHINKONCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDEBLCILOL_LBPHINKONCH_OFFSET))(this);
		}

		::System::Void DOFNOIEDPFN(::RPG::GameCore::LevelGameModeStateChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + OIDEBLCILOL_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Void PKBHAKONAJA(::RPG::GameCore::LevelCharacterBreakStateChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterBreakStateChange*))((::PBYTE)hIl2Cpp + OIDEBLCILOL_PKBHAKONAJA_OFFSET))(this, a1);
		}

		::System::Void JMNFOCENFLP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OIDEBLCILOL_JMNFOCENFLP_OFFSET))(this, a1);
		}

		::System::Void CLNMDMGELJH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OIDEBLCILOL_CLNMDMGELJH_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OIDEBLCILOL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Void MOHPIBNCBPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDEBLCILOL_MOHPIBNCBPE_OFFSET))(this);
		}

		::System::Void IFHDCHKKMCN(::AAHPFGHKBOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAHPFGHKBOJ*))((::PBYTE)hIl2Cpp + OIDEBLCILOL_IFHDCHKKMCN_OFFSET))(this, a1);
		}

		::System::Void DOJPGAOICJF(::JPOKOHEHHLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPOKOHEHHLL*))((::PBYTE)hIl2Cpp + OIDEBLCILOL_DOJPGAOICJF_OFFSET))(this, a1);
		}

		::System::Void LADBHMMENAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDEBLCILOL_LADBHMMENAM_OFFSET))(this);
		}

		::System::Void JBKLPDPIMHF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIDEBLCILOL_JBKLPDPIMHF_OFFSET))(this, a1);
		}

		::System::Void EAMOMDCHOAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDEBLCILOL_EAMOMDCHOAO_OFFSET))(this);
		}

		::System::Void LDIPGMCJOED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDEBLCILOL_LDIPGMCJOED_OFFSET))(this);
		}

		::System::Void PDBFABEDKIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDEBLCILOL_PDBFABEDKIF_OFFSET))(this);
		}

		::System::String* DCPHJCMNPJN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDEBLCILOL_DCPHJCMNPJN_OFFSET))(this);
		}

		::System::String* AFODNAKOLGP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDEBLCILOL_AFODNAKOLGP_OFFSET))(this);
		}

		::System::String* KPLDMOMNCLF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDEBLCILOL_KPLDMOMNCLF_OFFSET))(this);
		}

		::System::Void LJDOJCKMMDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIDEBLCILOL_LJDOJCKMMDD_OFFSET))(this, a1);
		}

		::System::Void KHEDOIDHONF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIDEBLCILOL_KHEDOIDHONF_OFFSET))(this, a1);
		}

		::System::Void KCJPBICKMIA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIDEBLCILOL_KCJPBICKMIA_OFFSET))(this, a1);
		}

		::System::Void KGANNNBJLJH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIDEBLCILOL_KGANNNBJLJH_OFFSET))(this, a1);
		}

		::System::Void EPPICCENEHE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIDEBLCILOL_EPPICCENEHE_OFFSET))(this, a1);
		}

		::System::Void JFFMPMGNBDF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIDEBLCILOL_JFFMPMGNBDF_OFFSET))(this, a1);
		}

		::System::Void DDCDDLKFKNI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIDEBLCILOL_DDCDDLKFKNI_OFFSET))(this, a1);
		}

		::System::Void OEHPIOOIJDN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIDEBLCILOL_OEHPIOOIJDN_OFFSET))(this, a1);
		}

		::System::Void HPPCDHKEDEJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIDEBLCILOL_HPPCDHKEDEJ_OFFSET))(this, a1);
		}

		::System::Void EEMBDMEHHHH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIDEBLCILOL_EEMBDMEHHHH_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDEBLCILOL_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDEBLCILOL_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
