#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/RoadRashGameHitSource.h"
#include "unitysdk/RPG/Client/RoadRash/MonoEffectConfig.h"
#include "unitysdk/RPG/Client/RoadRash/MonoSpeedEffectConfig.h"
#include "unitysdk/RPG/Client/RoadRash/RoadRashGameSettingsConfigure_ImpactEffectConfig.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/ValueTuple.h"
class GHMGGIHEHJE;
class KPDKCEAFBHI;
namespace RPG::Client { class NamedCurve; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_AWAKE_OFFSET UNITYSDK_OFFSET(0xDED0920)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_BIND_OFFSET UNITYSDK_OFFSET(0xDED0AC0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_COLLECTALLREFASSETPATH_OFFSET UNITYSDK_OFFSET(0xDED0890)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_CTOR_OFFSET UNITYSDK_OFFSET(0xDED1240)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_FINDCURVE_OFFSET UNITYSDK_OFFSET(0xDED0740)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_GET_BINDENTITY_OFFSET UNITYSDK_OFFSET(0xDED0A80)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0xDED0AA0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_JHPDFKCJANG_OFFSET UNITYSDK_OFFSET(0xDED11E0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_MMNMOFJBNJH_OFFSET UNITYSDK_OFFSET(0xDED0BC0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xDED0B70)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0xDED1190)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_SET_BINDENTITY_OFFSET UNITYSDK_OFFSET(0xDED0A90)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_SET_SERVICES_OFFSET UNITYSDK_OFFSET(0xDED0AB0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_UNBIND_OFFSET UNITYSDK_OFFSET(0xDED0B20)

namespace RPG::Client::RoadRash
{
	class MonoRoadRashGameCar : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Rigidbody* RootRigidbody; // 0x18
		::UnityEngine::Collider* RootCollider; // 0x20
		::UnityEngine::Collider* UltimateTrigger; // 0x28
		::UnityEngine::Vector3 BoundingBox; // 0x30
		::System::Single BaseMaxSpeed; // 0x3C
		::System::Single BaseMaxAcceleration; // 0x40
		::System::Single BaseMaxDeceleration; // 0x44
		::System::Single BaseAccelerationSpeed; // 0x48
		::System::Single BaseDecelerationSpeed; // 0x4C
		::System::Single BaseSpeedDirectionTurnSpeed; // 0x50
		::System::Single BaseRotationTurnSpeed; // 0x54
		::System::Single BaseLateralOffsetCorrectionSpeed; // 0x58
		::System::Single CurvatureBlendLookAheadDistance; // 0x5C
		::System::Single ChargeMaxDeceleration; // 0x60
		::System::Single ChargeDecelerationSpeed; // 0x64
		::System::Single ChargeSpeedDirectionTurnSpeed; // 0x68
		::System::Single ChargeRotationTurnSpeed; // 0x6C
		::System::Single ChargeLateralDampingSpeed; // 0x70
		::System::Single ReleaseChargingDirectionCorrectionHalfTime; // 0x74
		::System::Single ImpactRoadVelocityDefaultRebound; // 0x78
		::System::Single ImpactRoadVelocityChargeRebound; // 0x7C
		::System::Single ImpactRoadVelocityReleaseChargeRebound; // 0x80
		::System::Single ImpactRoadVelocitySlamRebound; // 0x84
		::UnityEngine::AnimationCurve* CurvatureToRoadOffsetBlendCurve; // 0x88
		::UnityEngine::AnimationCurve* CurvatureToMaxSpeedRatioCurve; // 0x90
		::UnityEngine::AnimationCurve* CurvatureToSpeedDirectionTurnSpeedRatioCurve; // 0x98
		::UnityEngine::AnimationCurve* SpeedDirectionTurnSpeedRatioCurve; // 0xA0
		::UnityEngine::AnimationCurve* RotationTurnSpeedRatioCurve; // 0xA8
		::System::String* SkillConfigPath; // 0xB0
		::Il2CppArray<::RPG::Client::NamedCurve*>* SkillCurves; // 0xB8
		::Il2CppArray<::System::String*>* DefaultPassiveModifierUniqueNames; // 0xC0
		::System::String* FirstSlamComboExitCustomString; // 0xC8
		::System::String* UltimateQTEEnterSuccessWindowCustomString; // 0xD0
		::RPG::Client::RoadRash::MonoSpeedEffectConfig SpeedEffectConfig; // 0xD8
		::System::String* BlueFireSpeedEffectPrefabPath; // 0x138
		::RPG::Client::RoadRash::MonoEffectConfig BlueFireImpactEffectConfig; // 0x140
		::RPG::Client::RoadRash::MonoEffectConfig BlueFireFullScreenEffectConfig; // 0x170
		::RPG::Client::RoadRash::MonoEffectConfig CarEffectConfig; // 0x1A0
		::Il2CppArray<::UnityEngine::GameObject*>* CarEffectRendererRoots; // 0x1D0
		::RPG::Client::RoadRash::MonoEffectConfig DefaultEffectConfig; // 0x1D8
		::RPG::Client::RoadRash::MonoEffectConfig ChargeEffectConfig; // 0x208
		::RPG::Client::RoadRash::MonoEffectConfig ReleaseChargeEffectConfig; // 0x238
		::RPG::Client::RoadRash::MonoEffectConfig SlamCastEffectConfig; // 0x268
		::RPG::Client::RoadRash::MonoEffectConfig SlamCastLv3EffectConfig; // 0x298
		::RPG::Client::RoadRash::MonoEffectConfig SlamEffectConfig; // 0x2C8
		::RPG::Client::RoadRash::MonoEffectConfig SlamLv2EffectConfig; // 0x2F8
		::RPG::Client::RoadRash::MonoEffectConfig SlamLv3EffectConfig; // 0x328
		::RPG::Client::RoadRash::MonoEffectConfig SlamLv3FadeOutEffectConfig; // 0x358
		::RPG::Client::RoadRash::MonoEffectConfig SlamLv3TrailEffectConfig; // 0x388
		::RPG::Client::RoadRash::MonoEffectConfig SlamRecoverEnergyEffectConfig; // 0x3B8
		::RPG::Client::RoadRash::MonoEffectConfig FallingLandingQTEAddUltimateEnergyEffectConfig; // 0x3E8
		::UnityEngine::Transform* ImpactVisualEffectFollowRoot; // 0x418
		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_ImpactEffectConfig SlamLv1ImpactVisualOverride; // 0x420
		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_ImpactEffectConfig UltimateImpactVisualOverride; // 0x458
		::RPG::Client::RoadRash::MonoEffectConfig ChaseEffectConfig; // 0x490
		::Il2CppArray<::RPG::Client::RoadRash::MonoEffectConfig>* UltimateEffectConfigs; // 0x4C0
		::Il2CppArray<::RPG::Client::RoadRash::MonoEffectConfig>* UltimateRecolorEffectConfigs; // 0x4C8
		::RPG::Client::RoadRash::MonoEffectConfig SpeedLineDefaultEffectConfig; // 0x4D0
		::RPG::Client::RoadRash::MonoEffectConfig SpeedLineBoostEffectConfig; // 0x500
		::GHMGGIHEHJE* _BindEntity_k__BackingField; // 0x530
		::KPDKCEAFBHI* _Services_k__BackingField; // 0x538
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_CTOR_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* FindCurve(::System::String* a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_FINDCURVE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* CollectAllRefAssetPath()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_COLLECTALLREFASSETPATH_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_AWAKE_OFFSET))(this);
		}

		::GHMGGIHEHJE* get_BindEntity()
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_GET_BINDENTITY_OFFSET))(this);
		}

		::System::Void set_BindEntity(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_SET_BINDENTITY_OFFSET))(this, a1);
		}

		::KPDKCEAFBHI* get_Services()
		{
			return ((::KPDKCEAFBHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_GET_SERVICES_OFFSET))(this);
		}

		::System::Void set_Services(::KPDKCEAFBHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPDKCEAFBHI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_SET_SERVICES_OFFSET))(this, a1);
		}

		::System::Void Bind(::GHMGGIHEHJE* a1, ::KPDKCEAFBHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::KPDKCEAFBHI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_BIND_OFFSET))(this, a1, a2);
		}

		::System::Void Unbind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_UNBIND_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerStay(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_ONTRIGGERSTAY_OFFSET))(this, a1);
		}

		::System::Void MMNMOFJBNJH(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_MMNMOFJBNJH_OFFSET))(this, a1);
		}

		static ::System::ValueTuple JHPDFKCJANG(::RPG::Client::B51Racing::RoadRashGameHitSource a1, ::RPG::Client::B51Racing::RoadRashGameHitSource a2)
		{
			return ((::System::ValueTuple(*)(::RPG::Client::B51Racing::RoadRashGameHitSource, ::RPG::Client::B51Racing::RoadRashGameHitSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMECAR_JHPDFKCJANG_OFFSET))(a1, a2);
		}

	};
}
