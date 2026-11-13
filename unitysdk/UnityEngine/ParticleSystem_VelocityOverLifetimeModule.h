#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ParticleSystemSimulationSpace.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"
namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x6C8D40)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848790)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3F95C20)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848D40)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F960F0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETX_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848C20)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETX_OFFSET UNITYSDK_OFFSET(0x3F95FA0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848D80)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F96110)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETY_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848C90)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETY_OFFSET UNITYSDK_OFFSET(0x3F96010)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848DC0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F96130)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848D00)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZ_OFFSET UNITYSDK_OFFSET(0x3F96080)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848B30)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F95F40)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALX_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848A10)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALX_OFFSET UNITYSDK_OFFSET(0x3F95DF0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848B70)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F95F60)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALY_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848A80)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALY_OFFSET UNITYSDK_OFFSET(0x3F95E60)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848BB0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F95F80)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848AF0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZ_OFFSET UNITYSDK_OFFSET(0x3F95ED0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIALMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848E70)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIALMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F961C0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848E30)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIAL_OFFSET UNITYSDK_OFFSET(0x3F96150)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848F60)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPACE_OFFSET UNITYSDK_OFFSET(0x3F96270)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIERMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848F20)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIERMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F96250)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848EE0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIER_OFFSET UNITYSDK_OFFSET(0x3F961E0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848920)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F95D90)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848800)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_X_OFFSET UNITYSDK_OFFSET(0x3F95C40)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848960)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F95DB0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848870)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Y_OFFSET UNITYSDK_OFFSET(0x3F95CB0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x208489A0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F95DD0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x208488E0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Z_OFFSET UNITYSDK_OFFSET(0x3F95D20)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x208487B0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3F95C30)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848D60)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F96100)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETX_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848C40)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETX_OFFSET UNITYSDK_OFFSET(0x3F95FE0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848DA0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F96120)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETY_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848CB0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETY_OFFSET UNITYSDK_OFFSET(0x3F96050)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848DE0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F96140)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848D20)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZ_OFFSET UNITYSDK_OFFSET(0x3F960C0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848B50)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F95F50)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALX_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848A30)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALX_OFFSET UNITYSDK_OFFSET(0x3F95E30)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848B90)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F95F70)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALY_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848AA0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALY_OFFSET UNITYSDK_OFFSET(0x3F95EA0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848BD0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F95F90)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848B10)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZ_OFFSET UNITYSDK_OFFSET(0x3F95F10)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIALMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848E90)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIALMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F961D0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848E50)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIAL_OFFSET UNITYSDK_OFFSET(0x3F96190)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848F80)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPACE_OFFSET UNITYSDK_OFFSET(0x3F96280)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIERMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848F40)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIERMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F96260)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848F00)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIER_OFFSET UNITYSDK_OFFSET(0x3F96220)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848940)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F95DA0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848820)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_X_OFFSET UNITYSDK_OFFSET(0x3F95C80)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848980)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F95DC0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848890)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Y_OFFSET UNITYSDK_OFFSET(0x3F95CF0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x208489C0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F95DE0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x20848900)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Z_OFFSET UNITYSDK_OFFSET(0x3F95D60)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_VelocityOverLifetimeModule_TypeDefinitionIndex = 5237;

	struct alignas(8) ParticleSystem_VelocityOverLifetimeModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10
		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ENABLED_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_x()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_X_OFFSET))(this);
		}

		::System::Void set_x(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_X_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_y()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Y_OFFSET))(this);
		}

		::System::Void set_y(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Y_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_z()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Z_OFFSET))(this);
		}

		::System::Void set_z(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Z_OFFSET))(this, a1);
		}

		::System::Single get_xMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_XMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_xMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_XMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Single get_yMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_YMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_yMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_YMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Single get_zMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_zMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ZMULTIPLIER_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALX_OFFSET))(this);
		}

		::System::Void set_orbitalX(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALX_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALY_OFFSET))(this);
		}

		::System::Void set_orbitalY(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALY_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalZ()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZ_OFFSET))(this);
		}

		::System::Void set_orbitalZ(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZ_OFFSET))(this, a1);
		}

		::System::Single get_orbitalXMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALXMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalXMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALXMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Single get_orbitalYMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalYMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALYMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Single get_orbitalZMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalZMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZMULTIPLIER_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalOffsetX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETX_OFFSET))(this);
		}

		::System::Void set_orbitalOffsetX(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETX_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalOffsetY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETY_OFFSET))(this);
		}

		::System::Void set_orbitalOffsetY(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETY_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalOffsetZ()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZ_OFFSET))(this);
		}

		::System::Void set_orbitalOffsetZ(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZ_OFFSET))(this, a1);
		}

		::System::Single get_orbitalOffsetXMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETXMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalOffsetXMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETXMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Single get_orbitalOffsetYMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalOffsetYMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETYMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Single get_orbitalOffsetZMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalOffsetZMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZMULTIPLIER_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_radial()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIAL_OFFSET))(this);
		}

		::System::Void set_radial(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIAL_OFFSET))(this, a1);
		}

		::System::Single get_radialMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIALMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_radialMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIALMULTIPLIER_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_speedModifier()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIER_OFFSET))(this);
		}

		::System::Void set_speedModifier(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIER_OFFSET))(this, a1);
		}

		::System::Single get_speedModifierMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIERMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_speedModifierMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIERMULTIPLIER_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemSimulationSpace get_space()
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPACE_OFFSET))(this);
		}

		::System::Void set_space(::UnityEngine::ParticleSystemSimulationSpace a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPACE_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_x_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_X_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_x_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_y_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Y_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_y_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_z_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Z_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_z_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_xMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_XMULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_xMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_XMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_yMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_YMULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_yMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_YMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_zMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_zMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_orbitalX_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALX_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_orbitalX_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALX_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_orbitalY_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALY_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_orbitalY_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALY_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_orbitalZ_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZ_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_orbitalZ_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZ_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_orbitalXMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALXMULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_orbitalXMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALXMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_orbitalYMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALYMULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_orbitalYMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALYMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_orbitalZMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZMULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_orbitalZMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_orbitalOffsetX_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETX_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_orbitalOffsetX_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETX_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_orbitalOffsetY_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETY_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_orbitalOffsetY_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETY_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_orbitalOffsetZ_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZ_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_orbitalOffsetZ_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZ_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_orbitalOffsetXMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETXMULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_orbitalOffsetXMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETXMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_orbitalOffsetYMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETYMULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_orbitalOffsetYMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETYMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_orbitalOffsetZMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZMULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_orbitalOffsetZMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_radial_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIAL_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_radial_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIAL_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_radialMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIALMULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_radialMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIALMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_speedModifier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_speedModifier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_speedModifierMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIERMULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_speedModifierMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIERMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::ParticleSystemSimulationSpace get_space_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1)
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPACE_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_space_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystemSimulationSpace a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPACE_INJECTED_OFFSET))(a1, a2);
		}
		*/

	};
}
