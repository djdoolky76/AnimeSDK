#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ParticleSystemSimulationSpace.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"
namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x6C8D40)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DAMPEN_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FE70)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DAMPEN_OFFSET UNITYSDK_OFFSET(0x3F76DA0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAGMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FFA0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAGMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F76E70)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAG_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FF60)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAG_OFFSET UNITYSDK_OFFSET(0x3F76E00)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FB70)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3F76B40)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FE30)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F76D80)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FC20)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F76BD0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITX_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FBE0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITX_OFFSET UNITYSDK_OFFSET(0x3F76B60)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FCD0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F76C60)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FC90)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITY_OFFSET UNITYSDK_OFFSET(0x3F76BF0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FD80)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F76CF0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FD40)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZ_OFFSET UNITYSDK_OFFSET(0x3F76C80)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMIT_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FDF0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMIT_OFFSET UNITYSDK_OFFSET(0x3F76D10)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLESIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FFE0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x3F76E90)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLEVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x207A0020)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET UNITYSDK_OFFSET(0x3F76EB0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FEB0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x3F76DC0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FEF0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SPACE_OFFSET UNITYSDK_OFFSET(0x3F76DE0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DAMPEN_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FE90)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DAMPEN_OFFSET UNITYSDK_OFFSET(0x3F76DB0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAGMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FFC0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAGMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F76E80)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAG_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FF80)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAG_OFFSET UNITYSDK_OFFSET(0x3F76E40)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FB90)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3F76B50)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FE50)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F76D90)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FC40)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F76BE0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITX_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FC00)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITX_OFFSET UNITYSDK_OFFSET(0x3F76BA0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FCF0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F76C70)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FCB0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITY_OFFSET UNITYSDK_OFFSET(0x3F76C30)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FDA0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F76D00)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FD60)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZ_OFFSET UNITYSDK_OFFSET(0x3F76CC0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMIT_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FE10)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMIT_OFFSET UNITYSDK_OFFSET(0x3F76D50)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLESIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x207A0000)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x3F76EA0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLEVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x207A0040)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET UNITYSDK_OFFSET(0x3F76EC0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FED0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x3F76DD0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079FF10)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SPACE_OFFSET UNITYSDK_OFFSET(0x3F76DF0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_LimitVelocityOverLifetimeModule_TypeDefinitionIndex = 5238;

	struct alignas(8) ParticleSystem_LimitVelocityOverLifetimeModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10
		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_ENABLED_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_limitX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITX_OFFSET))(this);
		}

		::System::Void set_limitX(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITX_OFFSET))(this, a1);
		}

		::System::Single get_limitXMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITXMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_limitXMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITXMULTIPLIER_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_limitY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITY_OFFSET))(this);
		}

		::System::Void set_limitY(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITY_OFFSET))(this, a1);
		}

		::System::Single get_limitYMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_limitYMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITYMULTIPLIER_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_limitZ()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZ_OFFSET))(this);
		}

		::System::Void set_limitZ(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZ_OFFSET))(this, a1);
		}

		::System::Single get_limitZMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_limitZMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZMULTIPLIER_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_limit()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMIT_OFFSET))(this);
		}

		::System::Void set_limit(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMIT_OFFSET))(this, a1);
		}

		::System::Single get_limitMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_limitMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Single get_dampen()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DAMPEN_OFFSET))(this);
		}

		::System::Void set_dampen(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DAMPEN_OFFSET))(this, a1);
		}

		::System::Boolean get_separateAxes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SEPARATEAXES_OFFSET))(this);
		}

		::System::Void set_separateAxes(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SEPARATEAXES_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemSimulationSpace get_space()
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SPACE_OFFSET))(this);
		}

		::System::Void set_space(::UnityEngine::ParticleSystemSimulationSpace a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SPACE_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_drag()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAG_OFFSET))(this);
		}

		::System::Void set_drag(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAG_OFFSET))(this, a1);
		}

		::System::Single get_dragMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAGMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_dragMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAGMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Boolean get_multiplyDragByParticleSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET))(this);
		}

		::System::Void set_multiplyDragByParticleSize(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET))(this, a1);
		}

		::System::Boolean get_multiplyDragByParticleVelocity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET))(this);
		}

		::System::Void set_multiplyDragByParticleVelocity(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_limitX_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITX_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_limitX_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITX_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_limitXMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITXMULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_limitXMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITXMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_limitY_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITY_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_limitY_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITY_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_limitYMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITYMULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_limitYMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITYMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_limitZ_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZ_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_limitZ_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZ_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_limitZMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZMULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_limitZMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_limit_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMIT_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_limit_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMIT_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_limitMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITMULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_limitMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_dampen_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DAMPEN_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_dampen_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DAMPEN_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean get_separateAxes_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SEPARATEAXES_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_separateAxes_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SEPARATEAXES_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::ParticleSystemSimulationSpace get_space_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1)
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SPACE_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_space_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystemSimulationSpace a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SPACE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_drag_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAG_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_drag_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAG_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_dragMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAGMULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_dragMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAGMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean get_multiplyDragByParticleSize_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLESIZE_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_multiplyDragByParticleSize_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLESIZE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean get_multiplyDragByParticleVelocity_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLEVELOCITY_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_multiplyDragByParticleVelocity_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLEVELOCITY_INJECTED_OFFSET))(a1, a2);
		}
		*/

	};
}
