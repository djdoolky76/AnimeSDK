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

#define IEEJKFBDGHN_AFODNAKOLGP_OFFSET UNITYSDK_OFFSET(0x15EE7660)
#define IEEJKFBDGHN_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0x15EE6980)
#define IEEJKFBDGHN_AKFGMLPHBEO_OFFSET UNITYSDK_OFFSET(0x15EE79D0)
#define IEEJKFBDGHN_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15EE7C30)
#define IEEJKFBDGHN_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15EE7FF0)
#define IEEJKFBDGHN_BFCPJFCOOGM_OFFSET UNITYSDK_OFFSET(0x15EE7430)
#define IEEJKFBDGHN_CTOR_OFFSET UNITYSDK_OFFSET(0x15EE8380)
#define IEEJKFBDGHN_DCPHJCMNPJN_OFFSET UNITYSDK_OFFSET(0x15EE7610)
#define IEEJKFBDGHN_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0x15EE7880)
#define IEEJKFBDGHN_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15EE6040)
#define IEEJKFBDGHN_DKONDMJCCBM_OFFSET UNITYSDK_OFFSET(0x15EE7190)
#define IEEJKFBDGHN_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0x15EE6D00)
#define IEEJKFBDGHN_DOKOJJJGNKE_OFFSET UNITYSDK_OFFSET(0x15EE7390)
#define IEEJKFBDGHN_EAMOMDCHOAO_OFFSET UNITYSDK_OFFSET(0x15EE6BC0)
#define IEEJKFBDGHN_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15EE6400)
#define IEEJKFBDGHN_FIFFLHAAHCG_OFFSET UNITYSDK_OFFSET(0x15EE61E0)
#define IEEJKFBDGHN_FNKFKLJFODH_OFFSET UNITYSDK_OFFSET(0x15EE6F40)
#define IEEJKFBDGHN_GACBAPMHMLO_OFFSET UNITYSDK_OFFSET(0x15EE62B0)
#define IEEJKFBDGHN_HPPCDHKEDEJ_OFFSET UNITYSDK_OFFSET(0x15EE7AB0)
#define IEEJKFBDGHN_IFHDCHKKMCN_OFFSET UNITYSDK_OFFSET(0x15EE72F0)
#define IEEJKFBDGHN_JBKLPDPIMHF_OFFSET UNITYSDK_OFFSET(0x15EE6690)
#define IEEJKFBDGHN_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0x15EE6860)
#define IEEJKFBDGHN_JMNFOCENFLP_OFFSET UNITYSDK_OFFSET(0x15EE6D90)
#define IEEJKFBDGHN_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x15EE60E0)
#define IEEJKFBDGHN_KCJPBICKMIA_OFFSET UNITYSDK_OFFSET(0x15EE77C0)
#define IEEJKFBDGHN_KPLDMOMNCLF_OFFSET UNITYSDK_OFFSET(0x15EE76B0)
#define IEEJKFBDGHN_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0x15EE6C70)
#define IEEJKFBDGHN_LDIPGMCJOED_OFFSET UNITYSDK_OFFSET(0x15EE6B30)
#define IEEJKFBDGHN_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0x15EE7700)
#define IEEJKFBDGHN_MOHPIBNCBPE_OFFSET UNITYSDK_OFFSET(0x15EE7030)
#define IEEJKFBDGHN_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15EE63C0)
#define IEEJKFBDGHN_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x15EE6720)
#define IEEJKFBDGHN_OEHPIOOIJDN_OFFSET UNITYSDK_OFFSET(0x15EE7910)
#define IEEJKFBDGHN_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x15EE6220)
#define IEEJKFBDGHN_ONRETURN_OFFSET UNITYSDK_OFFSET(0x15EE6360)
#define IEEJKFBDGHN_PLGJCECJAEJ_OFFSET UNITYSDK_OFFSET(0x15EE7B70)
#define IEEJKFBDGHN__ONBIND_OFFSET UNITYSDK_OFFSET(0x15EE5B00)
#define IEEJKFBDGHN__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x15EE6500)
#define IEEJKFBDGHN__ONTICK_OFFSET UNITYSDK_OFFSET(0x15EE6550)

inline static constexpr unsigned int IEEJKFBDGHN_TypeDefinitionIndex = 71717;

	class IEEJKFBDGHN : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0x60
		::IAJHOPBAFPJ* COLBKPIKJOO; // 0x68
		::HDIECILHMPD* HKCICBFPGGF; // 0x70
		::UnityEngine::Transform* HIGKIILCPEP; // 0x78
		::UnityEngine::UI::Image* ANIHJHGMMDP; // 0x80
		::UnityEngine::Transform* GDGDNANJFKI; // 0x88
		::UnityEngine::Animation* IGCIKMHNLLC; // 0x90
		::PMJDPBEPJJC* BEHLFAEJFEH; // 0x98
		::UnityEngine::Transform* FGHFLHBEGHJ; // 0xA0
		::ECJOICEMEGG* KFILGHMECDL; // 0xA8
		::UnityEngine::Transform* KMPHCBLIPAN; // 0xB0
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0xB8
		::IHBPHJJBEHE* LEFDOCOCCBH; // 0xC0
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xC8
		::UnityEngine::Transform* AFBPLKJNAFK; // 0xD0
		::NNAFEEPMIGK* EKJFNFKADAA; // 0xD8
		::RPG::Client::PrefabLoadMeta* CKGIPACADAL; // 0xE0
		::CCBCNDEPMFN* IOOAKAGEMAO; // 0xE8
		::UnityEngine::Transform* ENIOLPBCHLK; // 0xF0
		::UnityEngine::Animation* NJDJFFENGOJ; // 0xF8
		::System::Boolean FHBNNGCEPFD; // 0x100
		::System::Boolean FFIAGGGEAEG; // 0x101
		::System::Boolean FMBKOCPMBDF; // 0x102
		::System::Boolean ACAPCHBDIBF; // 0x103
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

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_DHHDFAAJMMC_OFFSET))(this, a1);
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

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEJKFBDGHN_EKGCGIDIFJJ_OFFSET))(this);
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
