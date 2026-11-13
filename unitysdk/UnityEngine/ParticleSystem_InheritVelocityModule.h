#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ParticleSystemInheritVelocityMode.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"
namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x6C8D40)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F7D0)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F768C0)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F790)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x3F76850)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F6E0)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3F76810)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_MODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F720)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x3F76830)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F7F0)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F768D0)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F7B0)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVE_OFFSET UNITYSDK_OFFSET(0x3F76890)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F700)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3F76820)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_MODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F740)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_MODE_OFFSET UNITYSDK_OFFSET(0x3F76840)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_InheritVelocityModule_TypeDefinitionIndex = 5239;

	struct alignas(8) ParticleSystem_InheritVelocityModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10
		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_ENABLED_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemInheritVelocityMode get_mode()
		{
			return ((::UnityEngine::ParticleSystemInheritVelocityMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::ParticleSystemInheritVelocityMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemInheritVelocityMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_MODE_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_curve()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVE_OFFSET))(this);
		}

		::System::Void set_curve(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVE_OFFSET))(this, a1);
		}

		::System::Single get_curveMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_curveMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVEMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_InheritVelocityModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_ENABLED_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_InheritVelocityModule, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_ENABLED_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::ParticleSystemInheritVelocityMode get_mode_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule a1)
		{
			return ((::UnityEngine::ParticleSystemInheritVelocityMode(*)(::UnityEngine::ParticleSystem_InheritVelocityModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_MODE_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_mode_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule a1, ::UnityEngine::ParticleSystemInheritVelocityMode a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_InheritVelocityModule, ::UnityEngine::ParticleSystemInheritVelocityMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_MODE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_curve_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_InheritVelocityModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_curve_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_InheritVelocityModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_curveMultiplier_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_InheritVelocityModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVEMULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_curveMultiplier_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_InheritVelocityModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVEMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

	};
}
