#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/BossHeadEffType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class AAHPFGHKBOJ;
class CCBCNDEPMFN;
class ECJOICEMEGG;
class HDIECILHMPD;
class IAJHOPBAFPJ;
class IHBPHJJBEHE;
class NNAFEEPMIGK;
class PMJDPBEPJJC;
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class ShowBossInfoParam; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace RPG::GameCore { class SwitchBossHeadEffType; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define IEEJKFBDGHN_AFODNAKOLGP_OFFSET UNITYSDK_OFFSET(0x16E5EC50)
#define IEEJKFBDGHN_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0x16E5DF60)
#define IEEJKFBDGHN_AKFGMLPHBEO_OFFSET UNITYSDK_OFFSET(0x16E5EFC0)
#define IEEJKFBDGHN_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16E5F220)
#define IEEJKFBDGHN_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16E5F5F0)
#define IEEJKFBDGHN_BFCPJFCOOGM_OFFSET UNITYSDK_OFFSET(0x16E5EA20)
#define IEEJKFBDGHN_CTOR_OFFSET UNITYSDK_OFFSET(0x16E5F980)
#define IEEJKFBDGHN_DCPHJCMNPJN_OFFSET UNITYSDK_OFFSET(0x16E5EC00)
#define IEEJKFBDGHN_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0x16E5EE70)
#define IEEJKFBDGHN_DKONDMJCCBM_OFFSET UNITYSDK_OFFSET(0x16E5E770)
#define IEEJKFBDGHN_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0x16E5E2E0)
#define IEEJKFBDGHN_DOKOJJJGNKE_OFFSET UNITYSDK_OFFSET(0x16E5E980)
#define IEEJKFBDGHN_EAMOMDCHOAO_OFFSET UNITYSDK_OFFSET(0x16E5E1A0)
#define IEEJKFBDGHN_FIFFLHAAHCG_OFFSET UNITYSDK_OFFSET(0x16E5D7C0)
#define IEEJKFBDGHN_FNKFKLJFODH_OFFSET UNITYSDK_OFFSET(0x16E5E510)
#define IEEJKFBDGHN_GACBAPMHMLO_OFFSET UNITYSDK_OFFSET(0x16E5D8A0)
#define IEEJKFBDGHN_HPPCDHKEDEJ_OFFSET UNITYSDK_OFFSET(0x16E5F0A0)
#define IEEJKFBDGHN_IFHDCHKKMCN_OFFSET UNITYSDK_OFFSET(0x16E5E8E0)
#define IEEJKFBDGHN_JBKLPDPIMHF_OFFSET UNITYSDK_OFFSET(0x16E5DC70)
#define IEEJKFBDGHN_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0x16E5DE40)
#define IEEJKFBDGHN_JMNFOCENFLP_OFFSET UNITYSDK_OFFSET(0x16E5E370)
#define IEEJKFBDGHN_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x16E5D6C0)
#define IEEJKFBDGHN_KCJPBICKMIA_OFFSET UNITYSDK_OFFSET(0x16E5EDB0)
#define IEEJKFBDGHN_KPLDMOMNCLF_OFFSET UNITYSDK_OFFSET(0x16E5ECA0)
#define IEEJKFBDGHN_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0x16E5E250)
#define IEEJKFBDGHN_LDIPGMCJOED_OFFSET UNITYSDK_OFFSET(0x16E5E110)
#define IEEJKFBDGHN_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0x16E5ECF0)
#define IEEJKFBDGHN_MOHPIBNCBPE_OFFSET UNITYSDK_OFFSET(0x16E5E600)
#define IEEJKFBDGHN_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x16E5DD00)
#define IEEJKFBDGHN_OEHPIOOIJDN_OFFSET UNITYSDK_OFFSET(0x16E5EF00)
#define IEEJKFBDGHN_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x16E5D810)
#define IEEJKFBDGHN_ONRETURN_OFFSET UNITYSDK_OFFSET(0x16E5D940)
#define IEEJKFBDGHN_PLGJCECJAEJ_OFFSET UNITYSDK_OFFSET(0x16E5F160)
#define IEEJKFBDGHN__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x16E5D9A0)
#define IEEJKFBDGHN__ONBIND_OFFSET UNITYSDK_OFFSET(0x16E5CE60)
#define IEEJKFBDGHN__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x16E5DAE0)
#define IEEJKFBDGHN__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x16E5D620)
#define IEEJKFBDGHN__ONTICK_OFFSET UNITYSDK_OFFSET(0x16E5DB30)
#define IEEJKFBDGHN__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16E5D9E0)

inline static constexpr unsigned int IEEJKFBDGHN_TypeDefinitionIndex = 73709;

	class IEEJKFBDGHN : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* FGHFLHBEGHJ; // 0x60
		::RPG::Client::PrefabLoadMeta* CKGIPACADAL; // 0x68
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x70
		::UnityEngine::Animation* IGCIKMHNLLC; // 0x78
		::UnityEngine::Transform* KMPHCBLIPAN; // 0x80
		::UnityEngine::Animation* NJDJFFENGOJ; // 0x88
		::UnityEngine::Transform* GDGDNANJFKI; // 0x90
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x98
		::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0xA0
		::HDIECILHMPD* HKCICBFPGGF; // 0xA8
		::NNAFEEPMIGK* EKJFNFKADAA; // 0xB0
		::PMJDPBEPJJC* BEHLFAEJFEH; // 0xB8
		::IAJHOPBAFPJ* COLBKPIKJOO; // 0xC0
		::UnityEngine::Transform* ENIOLPBCHLK; // 0xC8
		::UnityEngine::Transform* AFBPLKJNAFK; // 0xD0
		::ECJOICEMEGG* KFILGHMECDL; // 0xD8
		::UnityEngine::Transform* HIGKIILCPEP; // 0xE0
		::CCBCNDEPMFN* IOOAKAGEMAO; // 0xE8
		::IHBPHJJBEHE* LEFDOCOCCBH; // 0xF0
		::UnityEngine::UI::Image* ANIHJHGMMDP; // 0xF8
		::System::Boolean FFIAGGGEAEG; // 0x100
		::System::Boolean FMBKOCPMBDF; // 0x101
		::System::Boolean ACAPCHBDIBF; // 0x102
		::System::Boolean FHBNNGCEPFD; // 0x103
		::RPG::GameCore::BossHeadEffType IDPCLIFIAEB; // 0x104
		::System::Single CMKOAALCKAO; // 0x108
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
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEJKFBDGHN__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IEEJKFBDGHN__ONINITPARAMS_OFFSET))(this, a1);
		}

		::IAJHOPBAFPJ* FIFFLHAAHCG()
		{
			return ((::IAJHOPBAFPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_FIFFLHAAHCG_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_ONRETURN_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEJKFBDGHN__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEJKFBDGHN__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEJKFBDGHN__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IEEJKFBDGHN__ONTICK_OFFSET))(this, a1);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void JJBGNJFCHPL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_JJBGNJFCHPL_OFFSET))(this, a1);
		}

		::System::Void GACBAPMHMLO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_GACBAPMHMLO_OFFSET))(this, a1);
		}

		::System::Void AGIJFEPDKMM(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_AGIJFEPDKMM_OFFSET))(this, a1);
		}

		::System::Void LBPHINKONCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_LBPHINKONCH_OFFSET))(this);
		}

		::System::Void DOFNOIEDPFN(::RPG::GameCore::LevelGameModeStateChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Void JMNFOCENFLP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_JMNFOCENFLP_OFFSET))(this, a1);
		}

		::System::Void FNKFKLJFODH(::RPG::Client::ShowBossInfoParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ShowBossInfoParam*))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_FNKFKLJFODH_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Void MOHPIBNCBPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_MOHPIBNCBPE_OFFSET))(this);
		}

		::System::Void DKONDMJCCBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_DKONDMJCCBM_OFFSET))(this);
		}

		::System::Void IFHDCHKKMCN(::AAHPFGHKBOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAHPFGHKBOJ*))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_IFHDCHKKMCN_OFFSET))(this, a1);
		}

		::System::Void DOKOJJJGNKE(::RPG::GameCore::SwitchBossHeadEffType* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwitchBossHeadEffType*))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_DOKOJJJGNKE_OFFSET))(this, a1);
		}

		::CCBCNDEPMFN* BFCPJFCOOGM(::RPG::GameCore::BossHeadEffType a1)
		{
			return ((::CCBCNDEPMFN*(*)(::PVOID, ::RPG::GameCore::BossHeadEffType))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_BFCPJFCOOGM_OFFSET))(this, a1);
		}

		::System::Void JBKLPDPIMHF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_JBKLPDPIMHF_OFFSET))(this, a1);
		}

		::System::Void EAMOMDCHOAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_EAMOMDCHOAO_OFFSET))(this);
		}

		::System::Void LDIPGMCJOED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_LDIPGMCJOED_OFFSET))(this);
		}

		::System::String* DCPHJCMNPJN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_DCPHJCMNPJN_OFFSET))(this);
		}

		::System::String* AFODNAKOLGP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_AFODNAKOLGP_OFFSET))(this);
		}

		::System::String* KPLDMOMNCLF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_KPLDMOMNCLF_OFFSET))(this);
		}

		::System::Void LJDOJCKMMDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_LJDOJCKMMDD_OFFSET))(this, a1);
		}

		::System::Void KCJPBICKMIA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_KCJPBICKMIA_OFFSET))(this, a1);
		}

		::System::Void DDCDDLKFKNI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_DDCDDLKFKNI_OFFSET))(this, a1);
		}

		::System::Void OEHPIOOIJDN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_OEHPIOOIJDN_OFFSET))(this, a1);
		}

		::System::Void AKFGMLPHBEO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_AKFGMLPHBEO_OFFSET))(this, a1);
		}

		::System::Void HPPCDHKEDEJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_HPPCDHKEDEJ_OFFSET))(this, a1);
		}

		::System::Void PLGJCECJAEJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_PLGJCECJAEJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
