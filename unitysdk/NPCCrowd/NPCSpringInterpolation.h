#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NPCCrowd/NPCQuaternionSpringState.h"
#include "unitysdk/NPCCrowd/NPCVectorSpringState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define NPCCROWD_NPCSPRINGINTERPOLATION_GENERICSPRINGINTERP_OFFSET UNITYSDK_OFFSET(0xFD40B40)
#define NPCCROWD_NPCSPRINGINTERPOLATION_NEGATEQUATERNION_OFFSET UNITYSDK_OFFSET(0xFD41850)
#define NPCCROWD_NPCSPRINGINTERPOLATION_NORMALIZEQUATERNION_OFFSET UNITYSDK_OFFSET(0xFD41940)
#define NPCCROWD_NPCSPRINGINTERPOLATION_QUATERNIONSPRINGINTERP_OFFSET UNITYSDK_OFFSET(0xFD3F7F0)
#define NPCCROWD_NPCSPRINGINTERPOLATION_RESETQUATERNIONSPRINGSTATE_OFFSET UNITYSDK_OFFSET(0xFD40DF0)
#define NPCCROWD_NPCSPRINGINTERPOLATION_RESETVECTORSPRINGSTATE_OFFSET UNITYSDK_OFFSET(0xFD40D60)
#define NPCCROWD_NPCSPRINGINTERPOLATION_SCALEQUATERNION_OFFSET UNITYSDK_OFFSET(0xFD418C0)
#define NPCCROWD_NPCSPRINGINTERPOLATION_SETQUATERNIONSPRINGSTATEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0xFD40ED0)
#define NPCCROWD_NPCSPRINGINTERPOLATION_SETVECTORSPRINGSTATEVELOCITY_OFFSET UNITYSDK_OFFSET(0xFD40E70)
#define NPCCROWD_NPCSPRINGINTERPOLATION_SPRINGDAMPER_OFFSET UNITYSDK_OFFSET(0xFD40F30)
#define NPCCROWD_NPCSPRINGINTERPOLATION_TOQUATERNION_OFFSET UNITYSDK_OFFSET(0xFD417E0)
#define NPCCROWD_NPCSPRINGINTERPOLATION_TOVECTOR3_OFFSET UNITYSDK_OFFSET(0xFD41760)
#define NPCCROWD_NPCSPRINGINTERPOLATION_TOVECTOR4_1_OFFSET UNITYSDK_OFFSET(0xFD416F0)
#define NPCCROWD_NPCSPRINGINTERPOLATION_TOVECTOR4_OFFSET UNITYSDK_OFFSET(0xFD41660)
#define NPCCROWD_NPCSPRINGINTERPOLATION_VECTORSPRINGINTERP_1_OFFSET UNITYSDK_OFFSET(0xFD403D0)
#define NPCCROWD_NPCSPRINGINTERPOLATION_VECTORSPRINGINTERP_OFFSET UNITYSDK_OFFSET(0xFD401B0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSpringInterpolation_TypeDefinitionIndex = 63752;

	class NPCSpringInterpolation : public ::System::Object
	{
	public:
		// static const ::System::Single TwoPI; // 0x0

		static ::UnityEngine::Vector3 VectorSpringInterp(::UnityEngine::Vector3 current, ::UnityEngine::Vector3 target, ::NPCCrowd::NPCVectorSpringState& springState, ::System::Single stiffness, ::System::Single criticalDampingFactor, ::System::Single deltaTime, ::System::Single mass, ::System::Single targetVelocityAmount, ::System::Boolean initializeFromTarget)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::NPCCrowd::NPCVectorSpringState&, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGINTERPOLATION_VECTORSPRINGINTERP_OFFSET))(current, target, springState, stiffness, criticalDampingFactor, deltaTime, mass, targetVelocityAmount, initializeFromTarget);
		}

		static ::UnityEngine::Vector3 VectorSpringInterp_1(::UnityEngine::Vector3 current, ::UnityEngine::Vector3 target, ::NPCCrowd::NPCVectorSpringState& springState, ::System::Single stiffness, ::System::Single criticalDampingFactor, ::System::Single deltaTime, ::System::Single mass, ::System::Single targetVelocityAmount, ::System::Boolean clamp, ::UnityEngine::Vector3 minValue, ::UnityEngine::Vector3 maxValue, ::System::Boolean initializeFromTarget)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::NPCCrowd::NPCVectorSpringState&, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGINTERPOLATION_VECTORSPRINGINTERP_1_OFFSET))(current, target, springState, stiffness, criticalDampingFactor, deltaTime, mass, targetVelocityAmount, clamp, minValue, maxValue, initializeFromTarget);
		}

		static ::UnityEngine::Quaternion QuaternionSpringInterp(::UnityEngine::Quaternion current, ::UnityEngine::Quaternion target, ::NPCCrowd::NPCQuaternionSpringState& springState, ::System::Single stiffness, ::System::Single criticalDampingFactor, ::System::Single deltaTime, ::System::Single mass, ::System::Single targetVelocityAmount, ::System::Boolean initializeFromTarget)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::NPCCrowd::NPCQuaternionSpringState&, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGINTERPOLATION_QUATERNIONSPRINGINTERP_OFFSET))(current, target, springState, stiffness, criticalDampingFactor, deltaTime, mass, targetVelocityAmount, initializeFromTarget);
		}

		static ::System::Void ResetVectorSpringState(::NPCCrowd::NPCVectorSpringState& springState)
		{
			return ((::System::Void(*)(::NPCCrowd::NPCVectorSpringState&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGINTERPOLATION_RESETVECTORSPRINGSTATE_OFFSET))(springState);
		}

		static ::System::Void ResetQuaternionSpringState(::NPCCrowd::NPCQuaternionSpringState& springState)
		{
			return ((::System::Void(*)(::NPCCrowd::NPCQuaternionSpringState&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGINTERPOLATION_RESETQUATERNIONSPRINGSTATE_OFFSET))(springState);
		}

		static ::System::Void SetVectorSpringStateVelocity(::NPCCrowd::NPCVectorSpringState& springState, ::UnityEngine::Vector3 velocity)
		{
			return ((::System::Void(*)(::NPCCrowd::NPCVectorSpringState&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGINTERPOLATION_SETVECTORSPRINGSTATEVELOCITY_OFFSET))(springState, velocity);
		}

		static ::System::Void SetQuaternionSpringStateAngularVelocity(::NPCCrowd::NPCQuaternionSpringState& springState, ::UnityEngine::Vector3 angularVelocity)
		{
			return ((::System::Void(*)(::NPCCrowd::NPCQuaternionSpringState&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGINTERPOLATION_SETQUATERNIONSPRINGSTATEANGULARVELOCITY_OFFSET))(springState, angularVelocity);
		}

		static ::System::Void GenericSpringInterp(::UnityEngine::Vector4& current, ::UnityEngine::Vector4 target, ::UnityEngine::Vector4& previousTarget, ::System::Boolean& previousTargetValid, ::UnityEngine::Vector4& velocity, ::System::Single stiffness, ::System::Single criticalDampingFactor, ::System::Single deltaTime, ::System::Single targetVelocityAmount, ::System::Single mass, ::System::Boolean initializeFromTarget)
		{
			return ((::System::Void(*)(::UnityEngine::Vector4&, ::UnityEngine::Vector4, ::UnityEngine::Vector4&, ::System::Boolean&, ::UnityEngine::Vector4&, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGINTERPOLATION_GENERICSPRINGINTERP_OFFSET))(current, target, previousTarget, previousTargetValid, velocity, stiffness, criticalDampingFactor, deltaTime, targetVelocityAmount, mass, initializeFromTarget);
		}

		static ::System::Void SpringDamper(::UnityEngine::Vector4& value, ::UnityEngine::Vector4& valueRate, ::UnityEngine::Vector4 targetValue, ::UnityEngine::Vector4 targetValueRate, ::System::Single deltaTime, ::System::Single undampedFrequency, ::System::Single dampingRatio)
		{
			return ((::System::Void(*)(::UnityEngine::Vector4&, ::UnityEngine::Vector4&, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGINTERPOLATION_SPRINGDAMPER_OFFSET))(value, valueRate, targetValue, targetValueRate, deltaTime, undampedFrequency, dampingRatio);
		}

		static ::UnityEngine::Vector4 ToVector4(::UnityEngine::Vector3 value)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGINTERPOLATION_TOVECTOR4_OFFSET))(value);
		}

		static ::UnityEngine::Vector4 ToVector4_1(::UnityEngine::Quaternion value)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGINTERPOLATION_TOVECTOR4_1_OFFSET))(value);
		}

		static ::UnityEngine::Vector3 ToVector3(::UnityEngine::Vector4 value)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGINTERPOLATION_TOVECTOR3_OFFSET))(value);
		}

		static ::UnityEngine::Quaternion ToQuaternion(::UnityEngine::Vector4 value)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGINTERPOLATION_TOQUATERNION_OFFSET))(value);
		}

		static ::UnityEngine::Quaternion NegateQuaternion(::UnityEngine::Quaternion value)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGINTERPOLATION_NEGATEQUATERNION_OFFSET))(value);
		}

		static ::UnityEngine::Quaternion ScaleQuaternion(::UnityEngine::Quaternion value, ::System::Single scale)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGINTERPOLATION_SCALEQUATERNION_OFFSET))(value, scale);
		}

		static ::UnityEngine::Quaternion NormalizeQuaternion(::UnityEngine::Quaternion value)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGINTERPOLATION_NORMALIZEQUATERNION_OFFSET))(value);
		}
	};
}
