#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DEBEAKKOHLN;
class KLKMCNOECAL;
class KNKPLOGICFO;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class EntityLodDetail; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOCITYTRAIN_ALERT_OFFSET UNITYSDK_OFFSET(0xD72D4A0)
#define RPG_CLIENT_MONOCITYTRAIN_AWAKE_OFFSET UNITYSDK_OFFSET(0xD72AA70)
#define RPG_CLIENT_MONOCITYTRAIN_BKKDENNICBG_OFFSET UNITYSDK_OFFSET(0xD72D9A0)
#define RPG_CLIENT_MONOCITYTRAIN_BOOST_OFFSET UNITYSDK_OFFSET(0xD72D1B0)
#define RPG_CLIENT_MONOCITYTRAIN_BRAKE_OFFSET UNITYSDK_OFFSET(0xD72D350)
#define RPG_CLIENT_MONOCITYTRAIN_CCTOR_OFFSET UNITYSDK_OFFSET(0xD72E4D0)
#define RPG_CLIENT_MONOCITYTRAIN_CGEGPLKPINJ_OFFSET UNITYSDK_OFFSET(0xD72D760)
#define RPG_CLIENT_MONOCITYTRAIN_CTOR_OFFSET UNITYSDK_OFFSET(0xD72E370)
#define RPG_CLIENT_MONOCITYTRAIN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD72CAF0)
#define RPG_CLIENT_MONOCITYTRAIN_DMDCAAEKBHA_OFFSET UNITYSDK_OFFSET(0xD72DF20)
#define RPG_CLIENT_MONOCITYTRAIN_ECHGHPECCNG_OFFSET UNITYSDK_OFFSET(0xD72B7E0)
#define RPG_CLIENT_MONOCITYTRAIN_GETSLIDEMAXSPEED_OFFSET UNITYSDK_OFFSET(0xD72D6F0)
#define RPG_CLIENT_MONOCITYTRAIN_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xD72AA60)
#define RPG_CLIENT_MONOCITYTRAIN_GIGAIDOMKPM_OFFSET UNITYSDK_OFFSET(0xD72E140)
#define RPG_CLIENT_MONOCITYTRAIN_HARDBRAKE_OFFSET UNITYSDK_OFFSET(0xD72D3A0)
#define RPG_CLIENT_MONOCITYTRAIN_HGBOMOPGFIB_OFFSET UNITYSDK_OFFSET(0xD72DC10)
#define RPG_CLIENT_MONOCITYTRAIN_HIDEHARDBRAKEEFFECT_OFFSET UNITYSDK_OFFSET(0xD72D140)
#define RPG_CLIENT_MONOCITYTRAIN_IBILKKICCHO_OFFSET UNITYSDK_OFFSET(0xD72C440)
#define RPG_CLIENT_MONOCITYTRAIN_IMKJAHDEPPM_OFFSET UNITYSDK_OFFSET(0xD72B350)
#define RPG_CLIENT_MONOCITYTRAIN_JFPHDKKCDAD_OFFSET UNITYSDK_OFFSET(0xD72CC50)
#define RPG_CLIENT_MONOCITYTRAIN_JIKFIMGKMEH_OFFSET UNITYSDK_OFFSET(0xD72DB70)
#define RPG_CLIENT_MONOCITYTRAIN_JNIBNDILCAE_OFFSET UNITYSDK_OFFSET(0xD72ACF0)
#define RPG_CLIENT_MONOCITYTRAIN_KAJMEHPJHJM_OFFSET UNITYSDK_OFFSET(0xD72AD80)
#define RPG_CLIENT_MONOCITYTRAIN_KCECIMLCFGM_OFFSET UNITYSDK_OFFSET(0xD72DC80)
#define RPG_CLIENT_MONOCITYTRAIN_KOEFNIBHIIE_OFFSET UNITYSDK_OFFSET(0xD72D8E0)
#define RPG_CLIENT_MONOCITYTRAIN_KPMBIIKBIHO_OFFSET UNITYSDK_OFFSET(0xD72DFC0)
#define RPG_CLIENT_MONOCITYTRAIN_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD72B910)
#define RPG_CLIENT_MONOCITYTRAIN_MHOMGPLPLEJ_OFFSET UNITYSDK_OFFSET(0xD72D210)
#define RPG_CLIENT_MONOCITYTRAIN_MNECAADDALC_OFFSET UNITYSDK_OFFSET(0xD72BF50)
#define RPG_CLIENT_MONOCITYTRAIN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD72AF60)
#define RPG_CLIENT_MONOCITYTRAIN_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD72AE10)
#define RPG_CLIENT_MONOCITYTRAIN_PJGBNMHOEPE_OFFSET UNITYSDK_OFFSET(0xD72E200)
#define RPG_CLIENT_MONOCITYTRAIN_PKPMAJDLMNI_OFFSET UNITYSDK_OFFSET(0xD72BCD0)
#define RPG_CLIENT_MONOCITYTRAIN_PLAYCLOSEDOOR_OFFSET UNITYSDK_OFFSET(0xD72D600)
#define RPG_CLIENT_MONOCITYTRAIN_PLAYOPENDOOR_OFFSET UNITYSDK_OFFSET(0xD72D4F0)
#define RPG_CLIENT_MONOCITYTRAIN_SETDITHERALPHA_OFFSET UNITYSDK_OFFSET(0xD72E300)
#define RPG_CLIENT_MONOCITYTRAIN_SETWHEELVIEWDISTANCE_OFFSET UNITYSDK_OFFSET(0xD72CE10)
#define RPG_CLIENT_MONOCITYTRAIN_SET_SPEED_OFFSET UNITYSDK_OFFSET(0xD72A9C0)
#define RPG_CLIENT_MONOCITYTRAIN_SHOWHARDBRAKEEFFECT_OFFSET UNITYSDK_OFFSET(0xD72CE70)
#define RPG_CLIENT_MONOCITYTRAIN_START_OFFSET UNITYSDK_OFFSET(0xD72B0F0)
#define RPG_CLIENT_MONOCITYTRAIN_STOPLOOPSOUND_OFFSET UNITYSDK_OFFSET(0xD72D450)
#define RPG_CLIENT_MONOCITYTRAIN_TRAVELTOSTATION_OFFSET UNITYSDK_OFFSET(0xD72D400)
#define RPG_CLIENT_MONOCITYTRAIN_UPDATE_OFFSET UNITYSDK_OFFSET(0xD72B620)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCityTrain_TypeDefinitionIndex = 69189;

	class MonoCityTrain : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Collider* trigger; // 0x18
		::System::Single steerAngleSpeed; // 0x20
		::System::Single steerSlowDownAngle; // 0x24
		::System::Single wheelRadius; // 0x28
		::System::Single swingRatio; // 0x2C
		::System::Single maxSwing; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* hardBrakeEffectPath; // 0x38
		::System::String* boostSoundEvent; // 0x40
		::System::String* stopSoundEvent; // 0x48
		::System::String* hardBrakeSoundEvent; // 0x50
		::System::String* alertSoundEvent; // 0x58
		::System::String* openDoolSoundEvent; // 0x60
		::System::String* GetOffSoundEvent; // 0x68
		::System::String* GateCloseRingSoundEvent; // 0x70
		::System::String* closeDoolSoundEvent; // 0x78
		::System::String* stopDrivingLoopSoundEvent; // 0x80
		::System::String* arriveSoundEvent; // 0x88
		::System::String* speedRTPC; // 0x90
		::UnityEngine::AnimationCurve* slideCurve; // 0x98
		::System::Boolean forbidRot; // 0xA0
		::System::Byte _padding1[0x7];
		::Il2CppArray<::System::String*>* LodPaths; // 0xA8
		::System::Single FKCIBFBHGIL; // 0xB0
		::System::Single ELDHKFAFDCB; // 0xB4
		::Il2CppArray<::UnityEngine::Quaternion>* EFJPNCMEHPJ; // 0xB8
		::Il2CppArray<::UnityEngine::Vector3>* KDEOJOGDKPC; // 0xC0
		::UnityEngine::Vector3 CPGIPHLCAFI; // 0xC8
		::System::Byte _padding2[0x4];
		::KLKMCNOECAL* KNNAAPGAOBO; // 0xD8
		::RPG::Client::MonoEffect* ADDBPKLJEDL; // 0xE0
		::UnityEngine::Animator* NAHOHKAHBPK; // 0xE8
		::System::Single CJLEMCKMPCM; // 0xF0
		::System::Byte _padding3[0x4];
		::UnityEngine::GameObject* JAGAJHEMINH; // 0xF8
		::KNKPLOGICFO* PEMJLBKDJHE; // 0x100
		::System::Single HILOIBFHCKN; // 0x108
		::System::Single PMNIOEMJIDP; // 0x10C
		::System::Single GGBAJJJLDPO; // 0x110
		::System::Byte _padding4[0x4];
		::UnityEngine::Transform* NOOFDJFLGDL; // 0x118
		::Il2CppArray<::UnityEngine::Transform*>* KGKMNFNKHBC; // 0x120
		::Il2CppArray<::System::String*>* NOPJPNIOPCL; // 0x128
		::System::Boolean BAHMCCNHHKF; // 0x130
		::System::Byte _padding5[0x7];
		::UnityEngine::GameObject* IIIEBGLMPIF; // 0x138
		::RPG::GameCore::EntityLodDetail* PAEMLLPLDPB; // 0x140
		::System::Int32 LKECAKOHCKP; // 0x148
		::System::Byte _padding6[0x4];
		::System::String* CEOKAGCAFHK; // 0x150
		::System::Action_1<::UnityEngine::GameObject*>* IPCAFEGMEGK; // 0x158
		::System::Boolean PCHELMOJKOO; // 0x160
		::System::Byte _padding7[0x7];
		::DEBEAKKOHLN* OIDAGBPPNBJ; // 0x168
		static ::System::Int32* StaticGet_CCIPBKALLCN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoCityTrain")->GetStaticField(0x13940);
		}

		static ::System::Int32* StaticGet_AOAKPDEIPIP()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoCityTrain")->GetStaticField(0x13944);
		}

		// static const ::System::Object GJKAOBFIOPA; // 0x0
		// static const ::System::String* GGFFMJIKBPG; // 0x0
		// static const ::System::String* PCAGGOKMFOD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_CCTOR_OFFSET))();
		}

		::System::Void set_Speed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_SET_SPEED_OFFSET))(this, a1);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_GET_SPEED_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_AWAKE_OFFSET))(this);
		}

		::System::Void JNIBNDILCAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_JNIBNDILCAE_OFFSET))(this);
		}

		::System::Void KAJMEHPJHJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_KAJMEHPJHJM_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_ONDISABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_START_OFFSET))(this);
		}

		::System::Void IMKJAHDEPPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_IMKJAHDEPPM_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_DISPOSE_OFFSET))(this);
		}

		::System::Void SetWheelViewDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_SETWHEELVIEWDISTANCE_OFFSET))(this, a1);
		}

		::System::Void ShowHardBrakeEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_SHOWHARDBRAKEEFFECT_OFFSET))(this);
		}

		::System::Void HideHardBrakeEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_HIDEHARDBRAKEEFFECT_OFFSET))(this);
		}

		::System::Void Boost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_BOOST_OFFSET))(this);
		}

		::System::Void Brake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_BRAKE_OFFSET))(this);
		}

		::System::Void HardBrake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_HARDBRAKE_OFFSET))(this);
		}

		::System::Void TravelToStation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_TRAVELTOSTATION_OFFSET))(this);
		}

		::System::Void StopLoopSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_STOPLOOPSOUND_OFFSET))(this);
		}

		::System::Void Alert()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_ALERT_OFFSET))(this);
		}

		::System::Void PlayOpenDoor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_PLAYOPENDOOR_OFFSET))(this);
		}

		::System::Void PlayCloseDoor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_PLAYCLOSEDOOR_OFFSET))(this);
		}

		::System::Single GetSlideMaxSpeed(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_GETSLIDEMAXSPEED_OFFSET))(this, a1);
		}

		::System::Boolean PKPMAJDLMNI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_PKPMAJDLMNI_OFFSET))(this);
		}

		::System::Void MNECAADDALC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_MNECAADDALC_OFFSET))(this);
		}

		::UnityEngine::Quaternion CGEGPLKPINJ(::UnityEngine::Transform* a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_CGEGPLKPINJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IBILKKICCHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_IBILKKICCHO_OFFSET))(this);
		}

		::System::Void MHOMGPLPLEJ(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_MHOMGPLPLEJ_OFFSET))(this, a1, a2);
		}

		::System::Void KOEFNIBHIIE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_KOEFNIBHIIE_OFFSET))(this, a1);
		}

		::System::Void ECHGHPECCNG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_ECHGHPECCNG_OFFSET))(this, a1);
		}

		::System::Void BKKDENNICBG(::RPG::GameCore::EntityLodDetail* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodDetail*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_BKKDENNICBG_OFFSET))(this, a1);
		}

		::System::String* JIKFIMGKMEH(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_JIKFIMGKMEH_OFFSET))(this, a1);
		}

		::System::Void HGBOMOPGFIB(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_HGBOMOPGFIB_OFFSET))(this, a1);
		}

		::System::Void KCECIMLCFGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_KCECIMLCFGM_OFFSET))(this);
		}

		::System::Void JFPHDKKCDAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_JFPHDKKCDAD_OFFSET))(this);
		}

		::System::Void KPMBIIKBIHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_KPMBIIKBIHO_OFFSET))(this);
		}

		::System::Void PJGBNMHOEPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_PJGBNMHOEPE_OFFSET))(this);
		}

		::System::Void GIGAIDOMKPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_GIGAIDOMKPM_OFFSET))(this);
		}

		::System::Void DMDCAAEKBHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_DMDCAAEKBHA_OFFSET))(this);
		}

		::System::Void SetDitherAlpha(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_SETDITHERALPHA_OFFSET))(this, a1);
		}

	};
}
