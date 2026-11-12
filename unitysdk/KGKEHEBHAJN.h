#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFALFIPEHJH.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BIIJADGFFLF;
class CFALFIPEHJH;
class DAOENPMCFON;
class DMPMGGKKIBH;
class LEJFDHMDDKO;
class ParkourCameraController;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::ParkourGame { class MonoParkourCharacter; }
namespace RPG::Client::ParkourGame { class MonoParkourItem; }
namespace RPG::Client::ParkourGame { class ParkourSkillConfig; }
namespace RPG::Client::ParkourGame { class ParkourSkillConfig_Fire; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define KGKEHEBHAJN_AECPIAGIHKC_OFFSET UNITYSDK_OFFSET(0xBC871F0)
#define KGKEHEBHAJN_BCMCACOJOLC_OFFSET UNITYSDK_OFFSET(0xBC85230)
#define KGKEHEBHAJN_BOOFFDAFCCL_OFFSET UNITYSDK_OFFSET(0xBC85180)
#define KGKEHEBHAJN_BPHNHBAFGEE_OFFSET UNITYSDK_OFFSET(0xBC87E20)
#define KGKEHEBHAJN_CTOR_OFFSET UNITYSDK_OFFSET(0xBC82760)
#define KGKEHEBHAJN_DCMNFOIGFPC_OFFSET UNITYSDK_OFFSET(0xBC85530)
#define KGKEHEBHAJN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC83080)
#define KGKEHEBHAJN_DKODMAKHAIF_OFFSET UNITYSDK_OFFSET(0xBC84D80)
#define KGKEHEBHAJN_DOBPBKPKLCJ_OFFSET UNITYSDK_OFFSET(0xBC82E70)
#define KGKEHEBHAJN_EFBCNDJDDGO_OFFSET UNITYSDK_OFFSET(0xBC83D60)
#define KGKEHEBHAJN_EKNDAGMPNGD_OFFSET UNITYSDK_OFFSET(0xBC88840)
#define KGKEHEBHAJN_EPHFABNKFGJ_OFFSET UNITYSDK_OFFSET(0xBC850C0)
#define KGKEHEBHAJN_FBOBHMOCIEE_OFFSET UNITYSDK_OFFSET(0xBC83580)
#define KGKEHEBHAJN_FGGBCDIOJBM_OFFSET UNITYSDK_OFFSET(0xBC85E90)
#define KGKEHEBHAJN_FKDMGKOOEFC_OFFSET UNITYSDK_OFFSET(0xBC88480)
#define KGKEHEBHAJN_GAJBGIMKIII_OFFSET UNITYSDK_OFFSET(0xBC869C0)
#define KGKEHEBHAJN_GET_BALLID_OFFSET UNITYSDK_OFFSET(0xBC887A0)
#define KGKEHEBHAJN_GET_BOOMCOUNT_OFFSET UNITYSDK_OFFSET(0xBC88820)
#define KGKEHEBHAJN_GET_BOOMHITCOUNT_OFFSET UNITYSDK_OFFSET(0xBC88700)
#define KGKEHEBHAJN_GET_CROSSROADINFOVIEWDISTANCE_OFFSET UNITYSDK_OFFSET(0xBC887E0)
#define KGKEHEBHAJN_GET_CROSSROADINFOVIEWHEIGHT_OFFSET UNITYSDK_OFFSET(0xBC887F0)
#define KGKEHEBHAJN_GET_DEFAULTENGINEMAXSPEED_OFFSET UNITYSDK_OFFSET(0xBC887C0)
#define KGKEHEBHAJN_GET_HITBOOMCOUNT_OFFSET UNITYSDK_OFFSET(0xBC88800)
#define KGKEHEBHAJN_GET_OBSTACLEHITCOUNT_OFFSET UNITYSDK_OFFSET(0xBC886E0)
#define KGKEHEBHAJN_GET_OTHERCHARACTERHITCOUNT_OFFSET UNITYSDK_OFFSET(0xBC88720)
#define KGKEHEBHAJN_GET_POWERENGINEMAXSPEED_OFFSET UNITYSDK_OFFSET(0xBC887D0)
#define KGKEHEBHAJN_GET_SKILLITEMGETCOUNT_OFFSET UNITYSDK_OFFSET(0xBC886C0)
#define KGKEHEBHAJN_GET_SKILLUSECOUNT_OFFSET UNITYSDK_OFFSET(0xBC88680)
#define KGKEHEBHAJN_GET_SPEEDITEMGETCOUNT_OFFSET UNITYSDK_OFFSET(0xBC886A0)
#define KGKEHEBHAJN_GET_SPEEDUPUSECOUNT_OFFSET UNITYSDK_OFFSET(0xBC88660)
#define KGKEHEBHAJN_GET_SUPERSTARRECOVERYCOUNT_OFFSET UNITYSDK_OFFSET(0xBC88740)
#define KGKEHEBHAJN_GET_TRIGGERACCELERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0xBC88760)
#define KGKEHEBHAJN_GET_TRIGGERDECELERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0xBC88780)
#define KGKEHEBHAJN_GIOHJFDGDFH_OFFSET UNITYSDK_OFFSET(0xBC82D00)
#define KGKEHEBHAJN_GNOLNHECGNA_OFFSET UNITYSDK_OFFSET(0xBC84850)
#define KGKEHEBHAJN_HGDIFJANLFP_OFFSET UNITYSDK_OFFSET(0xBC83690)
#define KGKEHEBHAJN_HGIFAPDKLNF_OFFSET UNITYSDK_OFFSET(0xBC84770)
#define KGKEHEBHAJN_HJLMIPOGMEL_OFFSET UNITYSDK_OFFSET(0xBC87CA0)
#define KGKEHEBHAJN_HOOEPONKHFM_OFFSET UNITYSDK_OFFSET(0xBC84400)
#define KGKEHEBHAJN_IAMFCNJBHPE_OFFSET UNITYSDK_OFFSET(0xBC88850)
#define KGKEHEBHAJN_IHEPDJJJOBA_OFFSET UNITYSDK_OFFSET(0xBC874C0)
#define KGKEHEBHAJN_IKPEPJCNCNI_OFFSET UNITYSDK_OFFSET(0xBC881B0)
#define KGKEHEBHAJN_ILEFBKLOIKB_OFFSET UNITYSDK_OFFSET(0xBC83240)
#define KGKEHEBHAJN_JIFGDDCKPJD_OFFSET UNITYSDK_OFFSET(0xBC873B0)
#define KGKEHEBHAJN_KGDABDGGGBI_OFFSET UNITYSDK_OFFSET(0xBC87D20)
#define KGKEHEBHAJN_KMOMAEIKGEG_OFFSET UNITYSDK_OFFSET(0xBC83790)
#define KGKEHEBHAJN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBC83350)
#define KGKEHEBHAJN_LBBAPGPDJOE_OFFSET UNITYSDK_OFFSET(0xBC87F30)
#define KGKEHEBHAJN_LCDDKPMLCCO_OFFSET UNITYSDK_OFFSET(0xBC88310)
#define KGKEHEBHAJN_LFCMJPFENEN_OFFSET UNITYSDK_OFFSET(0xBC88420)
#define KGKEHEBHAJN_MAKLHDKELHF_OFFSET UNITYSDK_OFFSET(0xBC84180)
#define KGKEHEBHAJN_NGFIDFLIHGA_OFFSET UNITYSDK_OFFSET(0xBC875B0)
#define KGKEHEBHAJN_NNNBNAEGLAI_OFFSET UNITYSDK_OFFSET(0xBC83840)
#define KGKEHEBHAJN_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBC842C0)
#define KGKEHEBHAJN_OBHIIBGKMCK_OFFSET UNITYSDK_OFFSET(0xBC88090)
#define KGKEHEBHAJN_PLOGFHDCFJB_OFFSET UNITYSDK_OFFSET(0xBC887B0)
#define KGKEHEBHAJN_SET_BOOMCOUNT_OFFSET UNITYSDK_OFFSET(0xBC88830)
#define KGKEHEBHAJN_SET_BOOMHITCOUNT_OFFSET UNITYSDK_OFFSET(0xBC88710)
#define KGKEHEBHAJN_SET_HITBOOMCOUNT_OFFSET UNITYSDK_OFFSET(0xBC88810)
#define KGKEHEBHAJN_SET_OBSTACLEHITCOUNT_OFFSET UNITYSDK_OFFSET(0xBC886F0)
#define KGKEHEBHAJN_SET_OTHERCHARACTERHITCOUNT_OFFSET UNITYSDK_OFFSET(0xBC88730)
#define KGKEHEBHAJN_SET_SKILLITEMGETCOUNT_OFFSET UNITYSDK_OFFSET(0xBC886D0)
#define KGKEHEBHAJN_SET_SKILLUSECOUNT_OFFSET UNITYSDK_OFFSET(0xBC88690)
#define KGKEHEBHAJN_SET_SPEEDITEMGETCOUNT_OFFSET UNITYSDK_OFFSET(0xBC886B0)
#define KGKEHEBHAJN_SET_SPEEDUPUSECOUNT_OFFSET UNITYSDK_OFFSET(0xBC88670)
#define KGKEHEBHAJN_SET_SUPERSTARRECOVERYCOUNT_OFFSET UNITYSDK_OFFSET(0xBC88750)
#define KGKEHEBHAJN_SET_TRIGGERACCELERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0xBC88770)
#define KGKEHEBHAJN_SET_TRIGGERDECELERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0xBC88790)
#define KGKEHEBHAJN__PLAYENTERCAMERA_B__8_0_OFFSET UNITYSDK_OFFSET(0xBC88A20)

inline static constexpr unsigned int KGKEHEBHAJN_TypeDefinitionIndex = 76365;

	class KGKEHEBHAJN : public ::CFALFIPEHJH
	{
	public:
		::ParkourCameraController* IJPIHJKEPKE; // 0x108
		::Cinemachine::CinemachineVirtualCamera* KCIFKMOMPOL; // 0x110
		::UnityEngine::Animator* OHLBHFPKHHK; // 0x118
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GNKFBDJOMFH; // 0x120
		::System::Action_1<::System::UInt32>* OCAGAMDPPNG; // 0x128
		::UnityEngine::GameObject* DFIIFCOCDND; // 0x130
		::System::Single _CrossroadInfoViewHeight_k__BackingField; // 0x138
		::System::Int32 MJFMEJBGKJC; // 0x13C
		::System::Single _CrossroadInfoViewDistance_k__BackingField; // 0x140
		::System::UInt32 _OtherCharacterHitCount_k__BackingField; // 0x144
		::System::Single _PowerEngineMaxSpeed_k__BackingField; // 0x148
		::System::Single JOMILKINOBL; // 0x14C
		::UnityEngine::Vector3 ANJNHBLPBKD; // 0x150
		::System::UInt32 _SuperStarRecoveryCount_k__BackingField; // 0x15C
		::System::UInt32 _ObstacleHitCount_k__BackingField; // 0x160
		::UnityEngine::Vector3 OBOIEPFKOCA; // 0x164
		::System::UInt32 _HitBoomCount_k__BackingField; // 0x170
		::System::UInt32 _BallID_k__BackingField; // 0x174
		::System::Int32 NHHAPGOOJLN; // 0x178
		::System::UInt32 _TriggerDecelerationCount_k__BackingField; // 0x17C
		::System::UInt32 _TriggerAccelerationCount_k__BackingField; // 0x180
		::System::UInt32 _SpeedItemGetCount_k__BackingField; // 0x184
		::System::UInt32 _BoomHitCount_k__BackingField; // 0x188
		::System::UInt32 _SkillItemGetCount_k__BackingField; // 0x18C
		::System::UInt32 _SpeedUpUseCount_k__BackingField; // 0x190
		::System::UInt32 _SkillUseCount_k__BackingField; // 0x194
		::System::Nullable_1<::System::Single> CCHLDBONFEG; // 0x198
		::System::Single BICEINLPBKD; // 0x1A0
		::System::Single _DefaultEngineMaxSpeed_k__BackingField; // 0x1A4
		::System::UInt32 _BoomCount_k__BackingField; // 0x1A8
		// static const ::System::Object DINIMLNELEH; // 0x0
		// static const ::System::Object OFCGNDCFPDA; // 0x0
		// static const ::System::Object LCBHPIBFCDF; // 0x0
		// static const ::System::Object DPLINPPCKIM; // 0x0
		// static const ::System::Object LEDMNMFCPDE; // 0x0
		::System::Void _ctor(::System::Int32 a1, ::System::UInt32 a2, ::RPG::Client::ParkourGame::MonoParkourCharacter* a3, ::DMPMGGKKIBH* a4, ::UnityEngine::GameObject* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::RPG::Client::ParkourGame::MonoParkourCharacter*, ::DMPMGGKKIBH*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_DISPOSE_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void ILEFBKLOIKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_ILEFBKLOIKB_OFFSET))(this);
		}

		::System::Void FBOBHMOCIEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_FBOBHMOCIEE_OFFSET))(this);
		}

		::System::Void HGDIFJANLFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_HGDIFJANLFP_OFFSET))(this);
		}

		::System::Void MAKLHDKELHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_MAKLHDKELHF_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void HGIFAPDKLNF(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_HGIFAPDKLNF_OFFSET))(this, a1, a2);
		}

		::System::Void GNOLNHECGNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_GNOLNHECGNA_OFFSET))(this);
		}

		::System::Void DKODMAKHAIF(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_DKODMAKHAIF_OFFSET))(this, a1);
		}

		::System::Void EPHFABNKFGJ(::RPG::Client::ParkourGame::ParkourSkillConfig_Fire* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::ParkourSkillConfig_Fire*))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_EPHFABNKFGJ_OFFSET))(this, a1);
		}

		::DAOENPMCFON* BOOFFDAFCCL(::RPG::Client::ParkourGame::ParkourSkillConfig* a1)
		{
			return ((::DAOENPMCFON*(*)(::PVOID, ::RPG::Client::ParkourGame::ParkourSkillConfig*))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_BOOFFDAFCCL_OFFSET))(this, a1);
		}

		::LEJFDHMDDKO* BCMCACOJOLC(::RPG::Client::ParkourGame::ParkourSkillConfig* a1)
		{
			return ((::LEJFDHMDDKO*(*)(::PVOID, ::RPG::Client::ParkourGame::ParkourSkillConfig*))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_BCMCACOJOLC_OFFSET))(this, a1);
		}

		::System::Void DCMNFOIGFPC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_DCMNFOIGFPC_OFFSET))(this, a1);
		}

		::System::Void FGGBCDIOJBM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_FGGBCDIOJBM_OFFSET))(this, a1);
		}

		::System::Void JIFGDDCKPJD(::BIIJADGFFLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIIJADGFFLF*))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_JIFGDDCKPJD_OFFSET))(this, a1);
		}

		::System::Void IHEPDJJJOBA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_IHEPDJJJOBA_OFFSET))(this, a1, a2);
		}

		::System::Void NGFIDFLIHGA(::RPG::Client::ParkourGame::MonoParkourItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourItem*))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_NGFIDFLIHGA_OFFSET))(this, a1);
		}

		::System::Void HJLMIPOGMEL(::CFALFIPEHJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFALFIPEHJH*))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_HJLMIPOGMEL_OFFSET))(this, a1);
		}

		::System::Void GAJBGIMKIII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_GAJBGIMKIII_OFFSET))(this);
		}

		::System::Void HOOEPONKHFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_HOOEPONKHFM_OFFSET))(this);
		}

		::System::Void KGDABDGGGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_KGDABDGGGBI_OFFSET))(this);
		}

		::System::Void NNNBNAEGLAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_NNNBNAEGLAI_OFFSET))(this);
		}

		::System::Void BPHNHBAFGEE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_BPHNHBAFGEE_OFFSET))(this, a1);
		}

		::System::Void EFBCNDJDDGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_EFBCNDJDDGO_OFFSET))(this);
		}

		::System::Void OBHIIBGKMCK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_OBHIIBGKMCK_OFFSET))(this, a1);
		}

		::System::Void LCDDKPMLCCO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_LCDDKPMLCCO_OFFSET))(this, a1);
		}

		::System::Void LFCMJPFENEN(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_LFCMJPFENEN_OFFSET))(this, a1, a2);
		}

		::System::Void GIOHJFDGDFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_GIOHJFDGDFH_OFFSET))(this);
		}

		::System::Void FKDMGKOOEFC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_FKDMGKOOEFC_OFFSET))(this, a1);
		}

		::System::Void AECPIAGIHKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_AECPIAGIHKC_OFFSET))(this);
		}

		::System::Void DOBPBKPKLCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_DOBPBKPKLCJ_OFFSET))(this);
		}

		::System::UInt32 get_SpeedUpUseCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_GET_SPEEDUPUSECOUNT_OFFSET))(this);
		}

		::System::Void set_SpeedUpUseCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_SET_SPEEDUPUSECOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_SkillUseCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_GET_SKILLUSECOUNT_OFFSET))(this);
		}

		::System::Void set_SkillUseCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_SET_SKILLUSECOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_SpeedItemGetCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_GET_SPEEDITEMGETCOUNT_OFFSET))(this);
		}

		::System::Void set_SpeedItemGetCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_SET_SPEEDITEMGETCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_SkillItemGetCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_GET_SKILLITEMGETCOUNT_OFFSET))(this);
		}

		::System::Void set_SkillItemGetCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_SET_SKILLITEMGETCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_ObstacleHitCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_GET_OBSTACLEHITCOUNT_OFFSET))(this);
		}

		::System::Void set_ObstacleHitCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_SET_OBSTACLEHITCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_BoomHitCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_GET_BOOMHITCOUNT_OFFSET))(this);
		}

		::System::Void set_BoomHitCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_SET_BOOMHITCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_OtherCharacterHitCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_GET_OTHERCHARACTERHITCOUNT_OFFSET))(this);
		}

		::System::Void set_OtherCharacterHitCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_SET_OTHERCHARACTERHITCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_SuperStarRecoveryCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_GET_SUPERSTARRECOVERYCOUNT_OFFSET))(this);
		}

		::System::Void set_SuperStarRecoveryCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_SET_SUPERSTARRECOVERYCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TriggerAccelerationCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_GET_TRIGGERACCELERATIONCOUNT_OFFSET))(this);
		}

		::System::Void set_TriggerAccelerationCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_SET_TRIGGERACCELERATIONCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TriggerDecelerationCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_GET_TRIGGERDECELERATIONCOUNT_OFFSET))(this);
		}

		::System::Void set_TriggerDecelerationCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_SET_TRIGGERDECELERATIONCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_BallID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_GET_BALLID_OFFSET))(this);
		}

		::DMPMGGKKIBH* PLOGFHDCFJB()
		{
			return ((::DMPMGGKKIBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_PLOGFHDCFJB_OFFSET))(this);
		}

		::System::Single get_DefaultEngineMaxSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_GET_DEFAULTENGINEMAXSPEED_OFFSET))(this);
		}

		::System::Single get_PowerEngineMaxSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_GET_POWERENGINEMAXSPEED_OFFSET))(this);
		}

		::System::Single get_CrossroadInfoViewDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_GET_CROSSROADINFOVIEWDISTANCE_OFFSET))(this);
		}

		::System::Single get_CrossroadInfoViewHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_GET_CROSSROADINFOVIEWHEIGHT_OFFSET))(this);
		}

		::System::UInt32 get_HitBoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_GET_HITBOOMCOUNT_OFFSET))(this);
		}

		::System::Void set_HitBoomCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_SET_HITBOOMCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_BoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_GET_BOOMCOUNT_OFFSET))(this);
		}

		::System::Void set_BoomCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_SET_BOOMCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean IKPEPJCNCNI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_IKPEPJCNCNI_OFFSET))(this);
		}

		::System::Boolean LBBAPGPDJOE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_LBBAPGPDJOE_OFFSET))(this);
		}

		::DAOENPMCFON* KMOMAEIKGEG()
		{
			return ((::DAOENPMCFON*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_KMOMAEIKGEG_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCamera* EKNDAGMPNGD()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_EKNDAGMPNGD_OFFSET))(this);
		}

		::UnityEngine::Vector3 IAMFCNJBHPE()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN_IAMFCNJBHPE_OFFSET))(this);
		}

		::System::Void _PlayEnterCamera_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKEHEBHAJN__PLAYENTERCAMERA_B__8_0_OFFSET))(this);
		}

	};
