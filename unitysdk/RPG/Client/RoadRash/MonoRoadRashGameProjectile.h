#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ProjectileHitEffectConfig.h"
#include "unitysdk/RPG/Client/RoadRash/ProjectileAutoEffectConfig.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class GHMGGIHEHJE;
class KPDKCEAFBHI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_BIND_OFFSET UNITYSDK_OFFSET(0xDEDF0F0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_BLBONPKKHFI_OFFSET UNITYSDK_OFFSET(0xDEDF660)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_COLLECTALLREFASSETPATH_OFFSET UNITYSDK_OFFSET(0xDEDF020)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_CTOR_OFFSET UNITYSDK_OFFSET(0xDEDF8D0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_EDNLPGPKMDD_OFFSET UNITYSDK_OFFSET(0xDEDF160)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_FORCEUPDATEAUTOEFFECTFOLLOW_OFFSET UNITYSDK_OFFSET(0xDEDF7A0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_GET_BINDENTITY_OFFSET UNITYSDK_OFFSET(0xDEDF0B0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0xDEDF0D0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_SET_BINDENTITY_OFFSET UNITYSDK_OFFSET(0xDEDF0C0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_SET_SERVICES_OFFSET UNITYSDK_OFFSET(0xDEDF0E0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_UNBIND_OFFSET UNITYSDK_OFFSET(0xDEDF610)

namespace RPG::Client::RoadRash
{
	class MonoRoadRashGameProjectile : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single MaxSpeed; // 0x18
		::System::Single MinTravelTime; // 0x1C
		::System::Single DelayFallDuration; // 0x20
		::System::Single TargetLockDuration; // 0x24
		::UnityEngine::AnimationCurve* TravelProgressCurve; // 0x28
		::RPG::Client::LittleGame::RoadRash::ProjectileHitEffectConfig HitEffectConfig; // 0x30
		::RPG::Client::RoadRash::ProjectileAutoEffectConfig AutoEffectConfig; // 0x50
		::UnityEngine::Transform* Root; // 0x88
		::GHMGGIHEHJE* _BindEntity_k__BackingField; // 0x90
		::KPDKCEAFBHI* _Services_k__BackingField; // 0x98
		::System::UInt32 PAHADHFMOBA; // 0xA0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* CollectAllRefAssetPath()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_COLLECTALLREFASSETPATH_OFFSET))(this);
		}

		::GHMGGIHEHJE* get_BindEntity()
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_GET_BINDENTITY_OFFSET))(this);
		}

		::System::Void set_BindEntity(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_SET_BINDENTITY_OFFSET))(this, a1);
		}

		::KPDKCEAFBHI* get_Services()
		{
			return ((::KPDKCEAFBHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_GET_SERVICES_OFFSET))(this);
		}

		::System::Void set_Services(::KPDKCEAFBHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPDKCEAFBHI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_SET_SERVICES_OFFSET))(this, a1);
		}

		::System::Void Bind(::GHMGGIHEHJE* a1, ::KPDKCEAFBHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::KPDKCEAFBHI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_BIND_OFFSET))(this, a1, a2);
		}

		::System::Void Unbind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_UNBIND_OFFSET))(this);
		}

		::System::Void ForceUpdateAutoEffectFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_FORCEUPDATEAUTOEFFECTFOLLOW_OFFSET))(this);
		}

		::System::Void EDNLPGPKMDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_EDNLPGPKMDD_OFFSET))(this);
		}

		::System::Void BLBONPKKHFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPROJECTILE_BLBONPKKHFI_OFFSET))(this);
		}

	};
}
