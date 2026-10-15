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

#define OIDEBLCILOL_AFODNAKOLGP_OFFSET UNITYSDK_OFFSET(0xBE721E0)
#define OIDEBLCILOL_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0xBE70C20)
#define OIDEBLCILOL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBE729E0)
#define OIDEBLCILOL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBE72EB0)
#define OIDEBLCILOL_CLNMDMGELJH_OFFSET UNITYSDK_OFFSET(0xBE715B0)
#define OIDEBLCILOL_CTOR_OFFSET UNITYSDK_OFFSET(0xBE73340)
#define OIDEBLCILOL_DCPHJCMNPJN_OFFSET UNITYSDK_OFFSET(0xBE72190)
#define OIDEBLCILOL_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0xBE726D0)
#define OIDEBLCILOL_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0xBE716D0)
#define OIDEBLCILOL_DOJPGAOICJF_OFFSET UNITYSDK_OFFSET(0xBE72140)
#define OIDEBLCILOL_EAMOMDCHOAO_OFFSET UNITYSDK_OFFSET(0xBE70E60)
#define OIDEBLCILOL_EEMBDMEHHHH_OFFSET UNITYSDK_OFFSET(0xBE728E0)
#define OIDEBLCILOL_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xBE70660)
#define OIDEBLCILOL_EPPICCENEHE_OFFSET UNITYSDK_OFFSET(0xBE72580)
#define OIDEBLCILOL_GACBAPMHMLO_OFFSET UNITYSDK_OFFSET(0xBE70240)
#define OIDEBLCILOL_HPPCDHKEDEJ_OFFSET UNITYSDK_OFFSET(0xBE72820)
#define OIDEBLCILOL_IFHDCHKKMCN_OFFSET UNITYSDK_OFFSET(0xBE720A0)
#define OIDEBLCILOL_JBKLPDPIMHF_OFFSET UNITYSDK_OFFSET(0xBE70930)
#define OIDEBLCILOL_JFFMPMGNBDF_OFFSET UNITYSDK_OFFSET(0xBE72640)
#define OIDEBLCILOL_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0xBE70B00)
#define OIDEBLCILOL_JMNFOCENFLP_OFFSET UNITYSDK_OFFSET(0xBE71940)
#define OIDEBLCILOL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xBE70340)
#define OIDEBLCILOL_KCJPBICKMIA_OFFSET UNITYSDK_OFFSET(0xBE72400)
#define OIDEBLCILOL_KGANNNBJLJH_OFFSET UNITYSDK_OFFSET(0xBE724C0)
#define OIDEBLCILOL_KHEDOIDHONF_OFFSET UNITYSDK_OFFSET(0xBE72340)
#define OIDEBLCILOL_KPLDMOMNCLF_OFFSET UNITYSDK_OFFSET(0xBE72230)
#define OIDEBLCILOL_LADBHMMENAM_OFFSET UNITYSDK_OFFSET(0xBE71E40)
#define OIDEBLCILOL_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0xBE71640)
#define OIDEBLCILOL_LDIPGMCJOED_OFFSET UNITYSDK_OFFSET(0xBE70DD0)
#define OIDEBLCILOL_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0xBE72280)
#define OIDEBLCILOL_LOPLPEPEIMM_OFFSET UNITYSDK_OFFSET(0xBE71120)
#define OIDEBLCILOL_MOHPIBNCBPE_OFFSET UNITYSDK_OFFSET(0xBE71AF0)
#define OIDEBLCILOL_MPFBHIGKDHI_OFFSET UNITYSDK_OFFSET(0xBE71020)
#define OIDEBLCILOL_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xBE704E0)
#define OIDEBLCILOL_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xBE709C0)
#define OIDEBLCILOL_OBHGDOMDLLG_OFFSET UNITYSDK_OFFSET(0xBE70F10)
#define OIDEBLCILOL_OEHPIOOIJDN_OFFSET UNITYSDK_OFFSET(0xBE72760)
#define OIDEBLCILOL_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xBE701E0)
#define OIDEBLCILOL_ONRETURN_OFFSET UNITYSDK_OFFSET(0xBE70480)
#define OIDEBLCILOL_PDBFABEDKIF_OFFSET UNITYSDK_OFFSET(0xBE718D0)
#define OIDEBLCILOL_PKBHAKONAJA_OFFSET UNITYSDK_OFFSET(0xBE71760)
#define OIDEBLCILOL__ONBIND_OFFSET UNITYSDK_OFFSET(0xBE6F750)
#define OIDEBLCILOL__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xBE70790)
#define OIDEBLCILOL__ONTICK_OFFSET UNITYSDK_OFFSET(0xBE707F0)

inline static constexpr unsigned int OIDEBLCILOL_TypeDefinitionIndex = 72105;

	class OIDEBLCILOL : public ::FMPCODLIOLG
	{
	public:
		::FFOBKEBHNAM* BNFFILALODN; // 0x60
		::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0x68
		::DIELGJIPJDM* HEBFHCBPMFI; // 0x70
		::IHBPHJJBEHE* LEFDOCOCCBH; // 0x78
		::UnityEngine::Animation* IGCIKMHNLLC; // 0x80
		::UnityEngine::Transform* FGHFLHBEGHJ; // 0x88
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x90
		::BJNKANPCBEB* EGHOLHLEHDC; // 0x98
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xA0
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0xA8
		::PNNBOCOENEE* GFGMECNGHIG; // 0xB0
		::UnityEngine::Transform* HIGKIILCPEP; // 0xB8
		::RPG::Client::PrefabLoadMeta* CKGIPACADAL; // 0xC0
		::UnityEngine::Animation* NJDJFFENGOJ; // 0xC8
		::ECJOICEMEGG* KFILGHMECDL; // 0xD0
		::UnityEngine::Transform* ENIOLPBCHLK; // 0xD8
		::UnityEngine::Transform* GDGDNANJFKI; // 0xE0
		::UnityEngine::UI::Image* ANIHJHGMMDP; // 0xE8
		::BPIAOGPMLEI* JFHMHENBIPB; // 0xF0
		::FLPBGLOIEHE* PIMKIKPMAPO; // 0xF8
		::UnityEngine::Transform* KMPHCBLIPAN; // 0x100
		::BBNGMPLENPA* COLBKPIKJOO; // 0x108
		::KALGLFPKCGH* LFFBIIPBPJJ; // 0x110
		::MFPIHMCMONL* OENDKKCKOEG; // 0x118
		::NBKHNGPKIGL* HOLOEFEIBDC; // 0x120
		::RPG::GameCore::CharacterDataComponent* HKCICBFPGGF; // 0x128
		::UnityEngine::GameObject* HLMEGCINGKG; // 0x130
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x138
		::System::Single CMKOAALCKAO; // 0x140
		::RPG::GameCore::MonsterEnergyBarType MBCDGGEGPFA; // 0x144
		::System::Boolean FFIAGGGEAEG; // 0x148
		::System::Boolean FMBKOCPMBDF; // 0x149
		::System::Boolean FHBNNGCEPFD; // 0x14A
		::System::Boolean ACAPCHBDIBF; // 0x14B
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
