#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"
class AAHPFGHKBOJ;
class BBNGMPLENPA;
class BPIAOGPMLEI;
class DIELGJIPJDM;
class ECJOICEMEGG;
class FFLGILJOEGH;
class FFOBKEBHNAM;
class FLPBGLOIEHE;
class IHBPHJJBEHE;
class JPOKOHEHHLL;
class KALGLFPKCGH;
class LGGFBJCEGPG;
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

#define OIDEBLCILOL_AFODNAKOLGP_OFFSET UNITYSDK_OFFSET(0x18E215A0)
#define OIDEBLCILOL_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0x18E1FFD0)
#define OIDEBLCILOL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18E21DA0)
#define OIDEBLCILOL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18E22280)
#define OIDEBLCILOL_CLNMDMGELJH_OFFSET UNITYSDK_OFFSET(0x18E20960)
#define OIDEBLCILOL_CTOR_OFFSET UNITYSDK_OFFSET(0x18E22720)
#define OIDEBLCILOL_DCPHJCMNPJN_OFFSET UNITYSDK_OFFSET(0x18E21550)
#define OIDEBLCILOL_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0x18E21A90)
#define OIDEBLCILOL_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0x18E20A80)
#define OIDEBLCILOL_DOJPGAOICJF_OFFSET UNITYSDK_OFFSET(0x18E21500)
#define OIDEBLCILOL_EAMOMDCHOAO_OFFSET UNITYSDK_OFFSET(0x18E20210)
#define OIDEBLCILOL_EEMBDMEHHHH_OFFSET UNITYSDK_OFFSET(0x18E21CA0)
#define OIDEBLCILOL_EPPICCENEHE_OFFSET UNITYSDK_OFFSET(0x18E21940)
#define OIDEBLCILOL_GACBAPMHMLO_OFFSET UNITYSDK_OFFSET(0x18E1F630)
#define OIDEBLCILOL_HPPCDHKEDEJ_OFFSET UNITYSDK_OFFSET(0x18E21BE0)
#define OIDEBLCILOL_IFHDCHKKMCN_OFFSET UNITYSDK_OFFSET(0x18E21460)
#define OIDEBLCILOL_JBKLPDPIMHF_OFFSET UNITYSDK_OFFSET(0x18E1FCE0)
#define OIDEBLCILOL_JFFMPMGNBDF_OFFSET UNITYSDK_OFFSET(0x18E21A00)
#define OIDEBLCILOL_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0x18E1FEB0)
#define OIDEBLCILOL_JMNFOCENFLP_OFFSET UNITYSDK_OFFSET(0x18E20CF0)
#define OIDEBLCILOL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x18E1F730)
#define OIDEBLCILOL_KCJPBICKMIA_OFFSET UNITYSDK_OFFSET(0x18E217C0)
#define OIDEBLCILOL_KGANNNBJLJH_OFFSET UNITYSDK_OFFSET(0x18E21880)
#define OIDEBLCILOL_KHEDOIDHONF_OFFSET UNITYSDK_OFFSET(0x18E21700)
#define OIDEBLCILOL_KPLDMOMNCLF_OFFSET UNITYSDK_OFFSET(0x18E215F0)
#define OIDEBLCILOL_LADBHMMENAM_OFFSET UNITYSDK_OFFSET(0x18E211F0)
#define OIDEBLCILOL_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0x18E209F0)
#define OIDEBLCILOL_LDIPGMCJOED_OFFSET UNITYSDK_OFFSET(0x18E20180)
#define OIDEBLCILOL_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0x18E21640)
#define OIDEBLCILOL_LOPLPEPEIMM_OFFSET UNITYSDK_OFFSET(0x18E204D0)
#define OIDEBLCILOL_MOHPIBNCBPE_OFFSET UNITYSDK_OFFSET(0x18E20EA0)
#define OIDEBLCILOL_MPFBHIGKDHI_OFFSET UNITYSDK_OFFSET(0x18E203D0)
#define OIDEBLCILOL_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x18E1FD70)
#define OIDEBLCILOL_OBHGDOMDLLG_OFFSET UNITYSDK_OFFSET(0x18E202C0)
#define OIDEBLCILOL_OEHPIOOIJDN_OFFSET UNITYSDK_OFFSET(0x18E21B20)
#define OIDEBLCILOL_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x18E1F5D0)
#define OIDEBLCILOL_ONRETURN_OFFSET UNITYSDK_OFFSET(0x18E1F830)
#define OIDEBLCILOL_PDBFABEDKIF_OFFSET UNITYSDK_OFFSET(0x18E20C80)
#define OIDEBLCILOL_PKBHAKONAJA_OFFSET UNITYSDK_OFFSET(0x18E20B10)
#define OIDEBLCILOL__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x18E1F890)
#define OIDEBLCILOL__ONBIND_OFFSET UNITYSDK_OFFSET(0x18E1E800)
#define OIDEBLCILOL__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x18E1FB40)
#define OIDEBLCILOL__ONTICK_OFFSET UNITYSDK_OFFSET(0x18E1FBA0)
#define OIDEBLCILOL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x18E1FA10)

inline static constexpr unsigned int OIDEBLCILOL_TypeDefinitionIndex = 74140;

	class OIDEBLCILOL : public ::FMPCODLIOLG
	{
	public:
		::IHBPHJJBEHE* LEFDOCOCCBH; // 0x60
		::UnityEngine::Animation* IGCIKMHNLLC; // 0x68
		::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0x70
		::UnityEngine::Transform* KMPHCBLIPAN; // 0x78
		::RPG::GameCore::CharacterDataComponent* HKCICBFPGGF; // 0x80
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x88
		::UnityEngine::Transform* GDGDNANJFKI; // 0x90
		::FFLGILJOEGH* CODIMBIJODE; // 0x98
		::PNNBOCOENEE* GFGMECNGHIG; // 0xA0
		::FLPBGLOIEHE* PIMKIKPMAPO; // 0xA8
		::UnityEngine::Transform* FGHFLHBEGHJ; // 0xB0
		::DIELGJIPJDM* HEBFHCBPMFI; // 0xB8
		::KALGLFPKCGH* LFFBIIPBPJJ; // 0xC0
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xC8
		::FFOBKEBHNAM* BNFFILALODN; // 0xD0
		::UnityEngine::GameObject* HLMEGCINGKG; // 0xD8
		::UnityEngine::Transform* ENIOLPBCHLK; // 0xE0
		::UnityEngine::Transform* HIGKIILCPEP; // 0xE8
		::BPIAOGPMLEI* JFHMHENBIPB; // 0xF0
		::NBKHNGPKIGL* HOLOEFEIBDC; // 0xF8
		::BBNGMPLENPA* COLBKPIKJOO; // 0x100
		::RPG::Client::PrefabLoadMeta* CKGIPACADAL; // 0x108
		::UnityEngine::Animation* NJDJFFENGOJ; // 0x110
		::LGGFBJCEGPG* EGHOLHLEHDC; // 0x118
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x120
		::ECJOICEMEGG* KFILGHMECDL; // 0x128
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x130
		::UnityEngine::UI::Image* ANIHJHGMMDP; // 0x138
		::System::Boolean FMBKOCPMBDF; // 0x140
		::System::Boolean FHBNNGCEPFD; // 0x141
		::System::Boolean ACAPCHBDIBF; // 0x142
		::System::Boolean FFIAGGGEAEG; // 0x143
		::System::Single CMKOAALCKAO; // 0x144
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

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDEBLCILOL__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDEBLCILOL__SETUPVIEW_OFFSET))(this);
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
