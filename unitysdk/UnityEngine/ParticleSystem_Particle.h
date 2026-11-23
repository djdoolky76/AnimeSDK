#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/A32676FCB736C8E8.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GETCURRENTSIZE_OFFSET UNITYSDK_OFFSET(0x41ADD80)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x40EAF00)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_ANGULARVELOCITY3D_OFFSET UNITYSDK_OFFSET(0x41ADDD0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x2328C50)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x3959F40)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x1C28000)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_REMAININGLIFETIME_OFFSET UNITYSDK_OFFSET(0x2328C50)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_ROTATION3D_OFFSET UNITYSDK_OFFSET(0x41ADE10)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x1C068F0)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0x2328C40)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0x41ADE50)
#define UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x3959F30)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_Particle_TypeDefinitionIndex = 21002;

	struct alignas(4) ParticleSystem_Particle
	{
		::UnityEngine::Vector3 m_Position; // 0x10
		::UnityEngine::Vector3 m_Velocity; // 0x1C
		::UnityEngine::Vector3 m_AnimatedVelocity; // 0x28
		::UnityEngine::Vector3 m_InitialVelocity; // 0x34
		::UnityEngine::Vector3 m_AxisOfRotation; // 0x40
		::UnityEngine::Vector3 m_Rotation; // 0x4C
		::UnityEngine::Vector3 m_AngularVelocity; // 0x58
		::UnityEngine::Vector3 m_StartSize; // 0x64
		::UnityEngine::A32676FCB736C8E8 m_StartColor; // 0x70
		::System::UInt32 m_RandomSeed; // 0x74
		::System::UInt32 m_ParentRandomSeed; // 0x78
		::System::Single m_Lifetime; // 0x7C
		::System::Single m_StartLifetime; // 0x80
		::System::Int32 m_MeshIndex; // 0x84
		::System::Single m_EmitAccumulator0; // 0x88
		::System::Single m_EmitAccumulator1; // 0x8C
		::System::UInt32 m_Flags; // 0x90

		::System::Void set_lifetime(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_LIFETIME_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector3 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_POSITION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_velocity(::UnityEngine::Vector3 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_VELOCITY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_remainingLifetime(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_REMAININGLIFETIME_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_startLifetime(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_STARTLIFETIME_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_startColor(::UnityEngine::A32676FCB736C8E8 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::A32676FCB736C8E8))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_STARTCOLOR_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_randomSeed(::System::UInt32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_RANDOMSEED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_startSize(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_STARTSIZE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_rotation3D(::UnityEngine::Vector3 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_ROTATION3D_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_angularVelocity3D(::UnityEngine::Vector3 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_SET_ANGULARVELOCITY3D_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single GetCurrentSize(::UnityEngine::ParticleSystem* EED59063818612F0)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PARTICLE_GETCURRENTSIZE_OFFSET))(this, EED59063818612F0);
		}
	};
}
