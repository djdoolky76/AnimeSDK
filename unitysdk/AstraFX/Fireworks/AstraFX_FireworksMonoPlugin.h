#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLEEAOLJPNA.h"
#include "unitysdk/KFNPNPHCGJA.h"
#include "unitysdk/IMHPNDPAOHJ.h"
#include "unitysdk/JGLBEAKJCEJ.h"
#include "unitysdk/JMIIEMMLKBJ.h"
#include "unitysdk/MAHMFEAIAPL.h"
#include "unitysdk/OCFNDNCBNJA.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace AstraFX::Fireworks { class AstraFX_FireworksEmitter; }
namespace AstraFX::Fireworks { class FireworkType; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }

#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_ADD_ONFIREWORKEXPLODED_OFFSET UNITYSDK_OFFSET(0x16CD6020)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_ADD_ONFIREWORKLAUNCHED_OFFSET UNITYSDK_OFFSET(0x16CD5F20)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_AFTERCREATERESOURCES_OFFSET UNITYSDK_OFFSET(0x16CD67B0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_AFTEREXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x16CD6830)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_BEFOREEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x16CD67F0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_BURSTGUIDEDPROJECTILE_OFFSET UNITYSDK_OFFSET(0x16CD65F0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_CACHEEMITTERS_OFFSET UNITYSDK_OFFSET(0x16CD5E80)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_CANCELGUIDEDPROJECTILE_OFFSET UNITYSDK_OFFSET(0x16CD6670)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0x16CD6870)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_FHFMPGEAHJG_OFFSET UNITYSDK_OFFSET(0x16CD6720)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_FKIMDPOKEPI_OFFSET UNITYSDK_OFFSET(0x16CD66D0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_GETEMITTERS_OFFSET UNITYSDK_OFFSET(0x16CD5DF0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_INVALIDATEEMITTERCACHE_OFFSET UNITYSDK_OFFSET(0x16CD5F10)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_LAUNCHATWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x16CD6380)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_LAUNCHGUIDEDPROJECTILE_OFFSET UNITYSDK_OFFSET(0x16CD6420)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_LAUNCH_1_OFFSET UNITYSDK_OFFSET(0x16CD6220)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_LAUNCH_OFFSET UNITYSDK_OFFSET(0x16CD6120)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_REMOVE_ONFIREWORKEXPLODED_OFFSET UNITYSDK_OFFSET(0x16CD60A0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_REMOVE_ONFIREWORKLAUNCHED_OFFSET UNITYSDK_OFFSET(0x16CD5FA0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x16CD6760)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_SUBMITGUIDEDPROJECTILECOMMAND_OFFSET UNITYSDK_OFFSET(0x16CD64C0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_UPDATEGUIDEDPROJECTILEPOSE_OFFSET UNITYSDK_OFFSET(0x16CD6570)

namespace AstraFX::Fireworks
{
	inline static constexpr unsigned int AstraFX_FireworksMonoPlugin_TypeDefinitionIndex = 50108;

	class AstraFX_FireworksMonoPlugin
	{
	public:
		::System::Boolean autoLaunch; // 0x30
		::System::Byte _padding0[0x7];
		::Il2CppArray<::AstraFX::Fireworks::AstraFX_FireworksEmitter*>* IHKDGPFDLAA; // 0x38
		::System::Boolean OPHMEBKCICM; // 0x40
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::AstraFX::Fireworks::FireworkType*>* fireworkTypes; // 0x48
		::System::Single gravity; // 0x50
		::System::Single airResistance; // 0x54
		::System::Single ribbonUpdateInterval; // 0x58
		::System::Single maxRocketLifetime; // 0x5C
		::UnityEngine::Material* rocketTrailMaterial; // 0x60
		::System::Single rocketTrailWidth; // 0x68
		::System::Single rocketTrailTime; // 0x6C
		::System::Int32 maxRocketTrails; // 0x70
		::System::Byte _padding2[0x4];
		::UnityEngine::Texture2D* bakedGradientTexture; // 0x78
		::System::Action_1<::KFNPNPHCGJA>* OnFireworkLaunched; // 0x80
		::System::Action_1<::BLEEAOLJPNA>* OnFireworkExploded; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::AstraFX::Fireworks::AstraFX_FireworksEmitter*>* GetEmitters()
		{
			return ((::Il2CppArray<::AstraFX::Fireworks::AstraFX_FireworksEmitter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_GETEMITTERS_OFFSET))(this);
		}

		::System::Void CacheEmitters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_CACHEEMITTERS_OFFSET))(this);
		}

		::System::Void InvalidateEmitterCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_INVALIDATEEMITTERCACHE_OFFSET))(this);
		}

		::System::Void add_OnFireworkLaunched(::System::Action_1<::KFNPNPHCGJA>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::KFNPNPHCGJA>*))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_ADD_ONFIREWORKLAUNCHED_OFFSET))(this, a1);
		}

		::System::Void remove_OnFireworkLaunched(::System::Action_1<::KFNPNPHCGJA>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::KFNPNPHCGJA>*))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_REMOVE_ONFIREWORKLAUNCHED_OFFSET))(this, a1);
		}

		::System::Void add_OnFireworkExploded(::System::Action_1<::BLEEAOLJPNA>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::BLEEAOLJPNA>*))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_ADD_ONFIREWORKEXPLODED_OFFSET))(this, a1);
		}

		::System::Void remove_OnFireworkExploded(::System::Action_1<::BLEEAOLJPNA>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::BLEEAOLJPNA>*))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_REMOVE_ONFIREWORKEXPLODED_OFFSET))(this, a1);
		}

		::System::Void Launch(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_LAUNCH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Launch_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_LAUNCH_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LaunchAtWorldPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_LAUNCHATWORLDPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::JGLBEAKJCEJ LaunchGuidedProjectile(::MAHMFEAIAPL a1)
		{
			return ((::JGLBEAKJCEJ(*)(::PVOID, ::MAHMFEAIAPL))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_LAUNCHGUIDEDPROJECTILE_OFFSET))(this, a1);
		}

		::System::Void SubmitGuidedProjectileCommand(::OCFNDNCBNJA a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCFNDNCBNJA))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_SUBMITGUIDEDPROJECTILECOMMAND_OFFSET))(this, a1);
		}

		::System::Void UpdateGuidedProjectilePose(::IMHPNDPAOHJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMHPNDPAOHJ))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_UPDATEGUIDEDPROJECTILEPOSE_OFFSET))(this, a1);
		}

		::System::Void BurstGuidedProjectile(::JMIIEMMLKBJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMIIEMMLKBJ))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_BURSTGUIDEDPROJECTILE_OFFSET))(this, a1);
		}

		::System::Void CancelGuidedProjectile(::JGLBEAKJCEJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGLBEAKJCEJ))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_CANCELGUIDEDPROJECTILE_OFFSET))(this, a1);
		}

		::System::Void FKIMDPOKEPI(::KFNPNPHCGJA a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFNPNPHCGJA))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_FKIMDPOKEPI_OFFSET))(this, a1);
		}

		::System::Void FHFMPGEAHJG(::BLEEAOLJPNA a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLEEAOLJPNA))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_FHFMPGEAHJG_OFFSET))(this, a1);
		}

		::System::Void ResetSimulationState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_RESETSIMULATIONSTATE_OFFSET))(this);
		}

		::System::Void AfterCreateResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_AFTERCREATERESOURCES_OFFSET))(this);
		}

		::System::Void BeforeExecutePasses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_BEFOREEXECUTEPASSES_OFFSET))(this);
		}

		::System::Void AfterExecutePasses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_AFTEREXECUTEPASSES_OFFSET))(this);
		}

	};
}
