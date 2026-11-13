#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ParticleSystemCollisionMode.h"
#include "unitysdk/UnityEngine/ParticleSystemCollisionQuality.h"
#include "unitysdk/UnityEngine/ParticleSystemCollisionType.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x6C8D40)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GETPLANE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E410)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GETPLANE_OFFSET UNITYSDK_OFFSET(0x3F75710)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_BOUNCEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079DFA0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_BOUNCEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F75480)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_BOUNCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079DF60)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_BOUNCE_OFFSET UNITYSDK_OFFSET(0x3F75410)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_COLLIDERFORCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E2F0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_COLLIDERFORCE_OFFSET UNITYSDK_OFFSET(0x3F75680)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_COLLIDESWITH_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E120)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_COLLIDESWITH_OFFSET UNITYSDK_OFFSET(0x3F75570)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_DAMPENMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079DEF0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_DAMPENMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F753F0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_DAMPEN_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079DEB0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_DAMPEN_OFFSET UNITYSDK_OFFSET(0x3F75380)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_ENABLEDYNAMICCOLLIDERS_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E170)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_ENABLEDYNAMICCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x3F755C0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079DDC0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3F75320)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_LIFETIMELOSSMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E050)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_LIFETIMELOSSMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F75510)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_LIFETIMELOSS_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E010)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_LIFETIMELOSS_OFFSET UNITYSDK_OFFSET(0x3F754A0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXCOLLISIONSHAPES_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E1B0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXCOLLISIONSHAPES_OFFSET UNITYSDK_OFFSET(0x3F755E0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXKILLSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E0D0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXKILLSPEED_OFFSET UNITYSDK_OFFSET(0x3F75550)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXPLANECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E430)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXPLANECOUNT_OFFSET UNITYSDK_OFFSET(0x3F75720)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MINKILLSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E090)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MINKILLSPEED_OFFSET UNITYSDK_OFFSET(0x3F75530)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079DE40)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x3F75360)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYCOLLISIONANGLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E330)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYCOLLISIONANGLE_OFFSET UNITYSDK_OFFSET(0x3F756A0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYPARTICLESIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E3B0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x3F756E0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYPARTICLESPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E370)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYPARTICLESPEED_OFFSET UNITYSDK_OFFSET(0x3F756C0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_QUALITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E1F0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0x3F75600)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_RADIUSSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E270)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_RADIUSSCALE_OFFSET UNITYSDK_OFFSET(0x3F75640)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_SENDCOLLISIONMESSAGES_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E2B0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_SENDCOLLISIONMESSAGES_OFFSET UNITYSDK_OFFSET(0x3F75660)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_TYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079DE00)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x3F75340)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_VOXELSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E230)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_VOXELSIZE_OFFSET UNITYSDK_OFFSET(0x3F75620)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SETPLANE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E3F0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SETPLANE_OFFSET UNITYSDK_OFFSET(0x3F75700)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_BOUNCEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079DFC0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_BOUNCEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F75490)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_BOUNCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079DF80)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_BOUNCE_OFFSET UNITYSDK_OFFSET(0x3F75450)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_COLLIDERFORCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E310)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_COLLIDERFORCE_OFFSET UNITYSDK_OFFSET(0x3F75690)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_COLLIDESWITH_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E150)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_COLLIDESWITH_OFFSET UNITYSDK_OFFSET(0x3F755A0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_DAMPENMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079DF10)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_DAMPENMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F75400)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_DAMPEN_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079DED0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_DAMPEN_OFFSET UNITYSDK_OFFSET(0x3F753C0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_ENABLEDYNAMICCOLLIDERS_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E190)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_ENABLEDYNAMICCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x3F755D0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079DDE0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3F75330)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_LIFETIMELOSSMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E070)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_LIFETIMELOSSMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F75520)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_LIFETIMELOSS_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E030)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_LIFETIMELOSS_OFFSET UNITYSDK_OFFSET(0x3F754E0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MAXCOLLISIONSHAPES_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E1D0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MAXCOLLISIONSHAPES_OFFSET UNITYSDK_OFFSET(0x3F755F0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MAXKILLSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E0F0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MAXKILLSPEED_OFFSET UNITYSDK_OFFSET(0x3F75560)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MINKILLSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E0B0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MINKILLSPEED_OFFSET UNITYSDK_OFFSET(0x3F75540)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079DE60)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MODE_OFFSET UNITYSDK_OFFSET(0x3F75370)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYCOLLISIONANGLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E350)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYCOLLISIONANGLE_OFFSET UNITYSDK_OFFSET(0x3F756B0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYPARTICLESIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E3D0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x3F756F0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYPARTICLESPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E390)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYPARTICLESPEED_OFFSET UNITYSDK_OFFSET(0x3F756D0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_QUALITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E210)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_QUALITY_OFFSET UNITYSDK_OFFSET(0x3F75610)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_RADIUSSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E290)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_RADIUSSCALE_OFFSET UNITYSDK_OFFSET(0x3F75650)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_SENDCOLLISIONMESSAGES_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E2D0)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_SENDCOLLISIONMESSAGES_OFFSET UNITYSDK_OFFSET(0x3F75670)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_TYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079DE20)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x3F75350)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_VOXELSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079E250)
#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_VOXELSIZE_OFFSET UNITYSDK_OFFSET(0x3F75630)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_CollisionModule_TypeDefinitionIndex = 5249;

	struct alignas(8) ParticleSystem_CollisionModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10
		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_ENABLED_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemCollisionType get_type()
		{
			return ((::UnityEngine::ParticleSystemCollisionType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::UnityEngine::ParticleSystemCollisionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemCollisionType))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_TYPE_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemCollisionMode get_mode()
		{
			return ((::UnityEngine::ParticleSystemCollisionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::ParticleSystemCollisionMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemCollisionMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MODE_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_dampen()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_DAMPEN_OFFSET))(this);
		}

		::System::Void set_dampen(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_DAMPEN_OFFSET))(this, a1);
		}

		::System::Single get_dampenMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_DAMPENMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_dampenMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_DAMPENMULTIPLIER_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_bounce()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_BOUNCE_OFFSET))(this);
		}

		::System::Void set_bounce(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_BOUNCE_OFFSET))(this, a1);
		}

		::System::Single get_bounceMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_BOUNCEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_bounceMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_BOUNCEMULTIPLIER_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_lifetimeLoss()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_LIFETIMELOSS_OFFSET))(this);
		}

		::System::Void set_lifetimeLoss(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_LIFETIMELOSS_OFFSET))(this, a1);
		}

		::System::Single get_lifetimeLossMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_LIFETIMELOSSMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_lifetimeLossMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_LIFETIMELOSSMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Single get_minKillSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MINKILLSPEED_OFFSET))(this);
		}

		::System::Void set_minKillSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MINKILLSPEED_OFFSET))(this, a1);
		}

		::System::Single get_maxKillSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXKILLSPEED_OFFSET))(this);
		}

		::System::Void set_maxKillSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MAXKILLSPEED_OFFSET))(this, a1);
		}

		::UnityEngine::LayerMask get_collidesWith()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_COLLIDESWITH_OFFSET))(this);
		}

		::System::Void set_collidesWith(::UnityEngine::LayerMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_COLLIDESWITH_OFFSET))(this, a1);
		}

		::System::Boolean get_enableDynamicColliders()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_ENABLEDYNAMICCOLLIDERS_OFFSET))(this);
		}

		::System::Void set_enableDynamicColliders(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_ENABLEDYNAMICCOLLIDERS_OFFSET))(this, a1);
		}

		::System::Int32 get_maxCollisionShapes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXCOLLISIONSHAPES_OFFSET))(this);
		}

		::System::Void set_maxCollisionShapes(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MAXCOLLISIONSHAPES_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemCollisionQuality get_quality()
		{
			return ((::UnityEngine::ParticleSystemCollisionQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_QUALITY_OFFSET))(this);
		}

		::System::Void set_quality(::UnityEngine::ParticleSystemCollisionQuality a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemCollisionQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_QUALITY_OFFSET))(this, a1);
		}

		::System::Single get_voxelSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_VOXELSIZE_OFFSET))(this);
		}

		::System::Void set_voxelSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_VOXELSIZE_OFFSET))(this, a1);
		}

		::System::Single get_radiusScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_RADIUSSCALE_OFFSET))(this);
		}

		::System::Void set_radiusScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_RADIUSSCALE_OFFSET))(this, a1);
		}

		::System::Boolean get_sendCollisionMessages()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_SENDCOLLISIONMESSAGES_OFFSET))(this);
		}

		::System::Void set_sendCollisionMessages(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_SENDCOLLISIONMESSAGES_OFFSET))(this, a1);
		}

		::System::Single get_colliderForce()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_COLLIDERFORCE_OFFSET))(this);
		}

		::System::Void set_colliderForce(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_COLLIDERFORCE_OFFSET))(this, a1);
		}

		::System::Boolean get_multiplyColliderForceByCollisionAngle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYCOLLISIONANGLE_OFFSET))(this);
		}

		::System::Void set_multiplyColliderForceByCollisionAngle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYCOLLISIONANGLE_OFFSET))(this, a1);
		}

		::System::Boolean get_multiplyColliderForceByParticleSpeed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYPARTICLESPEED_OFFSET))(this);
		}

		::System::Void set_multiplyColliderForceByParticleSpeed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYPARTICLESPEED_OFFSET))(this, a1);
		}

		::System::Boolean get_multiplyColliderForceByParticleSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYPARTICLESIZE_OFFSET))(this);
		}

		::System::Void set_multiplyColliderForceByParticleSize(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYPARTICLESIZE_OFFSET))(this, a1);
		}

		::System::Void SetPlane(::System::Int32 a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SETPLANE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* GetPlane(::System::Int32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GETPLANE_OFFSET))(this, a1);
		}

		::System::Int32 get_maxPlaneCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXPLANECOUNT_OFFSET))(this);
		}

		/*
		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_CollisionModule a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_CollisionModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_ENABLED_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_ENABLED_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::ParticleSystemCollisionType get_type_Injected(::UnityEngine::ParticleSystem_CollisionModule a1)
		{
			return ((::UnityEngine::ParticleSystemCollisionType(*)(::UnityEngine::ParticleSystem_CollisionModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_TYPE_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_type_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::UnityEngine::ParticleSystemCollisionType a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::UnityEngine::ParticleSystemCollisionType))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_TYPE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::ParticleSystemCollisionMode get_mode_Injected(::UnityEngine::ParticleSystem_CollisionModule a1)
		{
			return ((::UnityEngine::ParticleSystemCollisionMode(*)(::UnityEngine::ParticleSystem_CollisionModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MODE_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_mode_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::UnityEngine::ParticleSystemCollisionMode a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::UnityEngine::ParticleSystemCollisionMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MODE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_dampen_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_DAMPEN_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_dampen_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_DAMPEN_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_dampenMultiplier_Injected(::UnityEngine::ParticleSystem_CollisionModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_CollisionModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_DAMPENMULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_dampenMultiplier_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_DAMPENMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_bounce_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_BOUNCE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_bounce_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_BOUNCE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_bounceMultiplier_Injected(::UnityEngine::ParticleSystem_CollisionModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_CollisionModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_BOUNCEMULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_bounceMultiplier_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_BOUNCEMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_lifetimeLoss_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_LIFETIMELOSS_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_lifetimeLoss_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_LIFETIMELOSS_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_lifetimeLossMultiplier_Injected(::UnityEngine::ParticleSystem_CollisionModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_CollisionModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_LIFETIMELOSSMULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_lifetimeLossMultiplier_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_LIFETIMELOSSMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_minKillSpeed_Injected(::UnityEngine::ParticleSystem_CollisionModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_CollisionModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MINKILLSPEED_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_minKillSpeed_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MINKILLSPEED_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_maxKillSpeed_Injected(::UnityEngine::ParticleSystem_CollisionModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_CollisionModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXKILLSPEED_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_maxKillSpeed_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MAXKILLSPEED_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_collidesWith_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::UnityEngine::LayerMask a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_COLLIDESWITH_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_collidesWith_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::UnityEngine::LayerMask a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_COLLIDESWITH_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean get_enableDynamicColliders_Injected(::UnityEngine::ParticleSystem_CollisionModule a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_CollisionModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_ENABLEDYNAMICCOLLIDERS_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_enableDynamicColliders_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_ENABLEDYNAMICCOLLIDERS_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Int32 get_maxCollisionShapes_Injected(::UnityEngine::ParticleSystem_CollisionModule a1)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_CollisionModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXCOLLISIONSHAPES_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_maxCollisionShapes_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MAXCOLLISIONSHAPES_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::ParticleSystemCollisionQuality get_quality_Injected(::UnityEngine::ParticleSystem_CollisionModule a1)
		{
			return ((::UnityEngine::ParticleSystemCollisionQuality(*)(::UnityEngine::ParticleSystem_CollisionModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_QUALITY_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_quality_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::UnityEngine::ParticleSystemCollisionQuality a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::UnityEngine::ParticleSystemCollisionQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_QUALITY_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_voxelSize_Injected(::UnityEngine::ParticleSystem_CollisionModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_CollisionModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_VOXELSIZE_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_voxelSize_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_VOXELSIZE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_radiusScale_Injected(::UnityEngine::ParticleSystem_CollisionModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_CollisionModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_RADIUSSCALE_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_radiusScale_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_RADIUSSCALE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean get_sendCollisionMessages_Injected(::UnityEngine::ParticleSystem_CollisionModule a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_CollisionModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_SENDCOLLISIONMESSAGES_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_sendCollisionMessages_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_SENDCOLLISIONMESSAGES_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_colliderForce_Injected(::UnityEngine::ParticleSystem_CollisionModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_CollisionModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_COLLIDERFORCE_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_colliderForce_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_COLLIDERFORCE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean get_multiplyColliderForceByCollisionAngle_Injected(::UnityEngine::ParticleSystem_CollisionModule a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_CollisionModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYCOLLISIONANGLE_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_multiplyColliderForceByCollisionAngle_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYCOLLISIONANGLE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean get_multiplyColliderForceByParticleSpeed_Injected(::UnityEngine::ParticleSystem_CollisionModule a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_CollisionModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYPARTICLESPEED_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_multiplyColliderForceByParticleSpeed_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYPARTICLESPEED_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean get_multiplyColliderForceByParticleSize_Injected(::UnityEngine::ParticleSystem_CollisionModule a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_CollisionModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MULTIPLYCOLLIDERFORCEBYPARTICLESIZE_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_multiplyColliderForceByParticleSize_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SET_MULTIPLYCOLLIDERFORCEBYPARTICLESIZE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void SetPlane_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::System::Int32 a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CollisionModule, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_SETPLANE_INJECTED_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::UnityEngine::Transform* GetPlane_Injected(::UnityEngine::ParticleSystem_CollisionModule a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::ParticleSystem_CollisionModule, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GETPLANE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Int32 get_maxPlaneCount_Injected(::UnityEngine::ParticleSystem_CollisionModule a1)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_CollisionModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE_GET_MAXPLANECOUNT_INJECTED_OFFSET))(a1);
		}
		*/

	};
}
