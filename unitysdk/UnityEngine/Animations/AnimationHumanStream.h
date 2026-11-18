#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AvatarIKGoal.h"
#include "unitysdk/UnityEngine/AvatarIKHint.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_GETGOALPOSITION_OFFSET UNITYSDK_OFFSET(0x9A9A40)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_GETGOALWEIGHTPOSITION_OFFSET UNITYSDK_OFFSET(0x9A9D40)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_GET_BODYPOSITION_OFFSET UNITYSDK_OFFSET(0x9A9870)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x363D90)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETBODYPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FE25260)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETBODYPOSITION_OFFSET UNITYSDK_OFFSET(0x9AA240)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETGOALPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FE25290)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETGOALPOSITION_OFFSET UNITYSDK_OFFSET(0x9AA2E0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETGOALWEIGHTPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FE252E0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETGOALWEIGHTPOSITION_OFFSET UNITYSDK_OFFSET(0x9AA3B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETBODYPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FE25270)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETBODYPOSITION_OFFSET UNITYSDK_OFFSET(0x9AA280)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETBODYROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FE25280)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETBODYROTATION_OFFSET UNITYSDK_OFFSET(0x9AA2B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FE252A0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALPOSITION_OFFSET UNITYSDK_OFFSET(0x9AA330)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FE252B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALROTATION_OFFSET UNITYSDK_OFFSET(0x9AA360)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALWEIGHTPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FE252C0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALWEIGHTPOSITION_OFFSET UNITYSDK_OFFSET(0x9AA390)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALWEIGHTROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FE252D0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALWEIGHTROTATION_OFFSET UNITYSDK_OFFSET(0x9AA3A0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETHINTPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FE252F0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETHINTPOSITION_OFFSET UNITYSDK_OFFSET(0x9AA3C0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETHINTWEIGHTPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FE25300)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETHINTWEIGHTPOSITION_OFFSET UNITYSDK_OFFSET(0x9AA3F0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATBODYWEIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FE25330)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATBODYWEIGHT_OFFSET UNITYSDK_OFFSET(0x9AA440)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATCLAMPWEIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FE25320)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATCLAMPWEIGHT_OFFSET UNITYSDK_OFFSET(0x9AA430)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATEYESWEIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FE25350)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATEYESWEIGHT_OFFSET UNITYSDK_OFFSET(0x9AA460)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATHEADWEIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FE25340)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATHEADWEIGHT_OFFSET UNITYSDK_OFFSET(0x9AA450)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FE25310)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATPOSITION_OFFSET UNITYSDK_OFFSET(0x9AA400)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSOLVEIK_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FE25360)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSOLVEIK_OFFSET UNITYSDK_OFFSET(0x9AA470)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETGOALPOSITION_OFFSET UNITYSDK_OFFSET(0x9A9AF0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETGOALROTATION_OFFSET UNITYSDK_OFFSET(0x9A9B90)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETGOALWEIGHTPOSITION_OFFSET UNITYSDK_OFFSET(0x9A9C20)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETGOALWEIGHTROTATION_OFFSET UNITYSDK_OFFSET(0x9A9CB0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETHINTPOSITION_OFFSET UNITYSDK_OFFSET(0x9A9DC0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETHINTWEIGHTPOSITION_OFFSET UNITYSDK_OFFSET(0x9A9E60)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATBODYWEIGHT_OFFSET UNITYSDK_OFFSET(0x9AA020)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATCLAMPWEIGHT_OFFSET UNITYSDK_OFFSET(0x9A9F90)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATEYESWEIGHT_OFFSET UNITYSDK_OFFSET(0x9AA140)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATHEADWEIGHT_OFFSET UNITYSDK_OFFSET(0x9AA0B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATPOSITION_OFFSET UNITYSDK_OFFSET(0x9A9EF0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SET_BODYPOSITION_OFFSET UNITYSDK_OFFSET(0x9A9910)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SET_BODYROTATION_OFFSET UNITYSDK_OFFSET(0x9A99B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SOLVEIK_OFFSET UNITYSDK_OFFSET(0x9AA1D0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_THROWIFINVALID_OFFSET UNITYSDK_OFFSET(0x9A9800)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationHumanStream_TypeDefinitionIndex = 6683;

	struct alignas(4) AnimationHumanStream
	{
		::System::IntPtr stream; // 0x10

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_GET_ISVALID_OFFSET))(this);
		}

		::System::Void ThrowIfInvalid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_THROWIFINVALID_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_bodyPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_GET_BODYPOSITION_OFFSET))(this);
		}

		::System::Void set_bodyPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SET_BODYPOSITION_OFFSET))(this, value);
		}

		::System::Void set_bodyRotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SET_BODYROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 GetGoalPosition(::UnityEngine::AvatarIKGoal index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_GETGOALPOSITION_OFFSET))(this, index);
		}

		::System::Void SetGoalPosition(::UnityEngine::AvatarIKGoal index, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETGOALPOSITION_OFFSET))(this, index, pos);
		}

		::System::Void SetGoalRotation(::UnityEngine::AvatarIKGoal index, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETGOALROTATION_OFFSET))(this, index, rot);
		}

		::System::Void SetGoalWeightPosition(::UnityEngine::AvatarIKGoal index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETGOALWEIGHTPOSITION_OFFSET))(this, index, value);
		}

		::System::Void SetGoalWeightRotation(::UnityEngine::AvatarIKGoal index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETGOALWEIGHTROTATION_OFFSET))(this, index, value);
		}

		::System::Single GetGoalWeightPosition(::UnityEngine::AvatarIKGoal index)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_GETGOALWEIGHTPOSITION_OFFSET))(this, index);
		}

		::System::Void SetHintPosition(::UnityEngine::AvatarIKHint index, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKHint, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETHINTPOSITION_OFFSET))(this, index, pos);
		}

		::System::Void SetHintWeightPosition(::UnityEngine::AvatarIKHint index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKHint, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETHINTWEIGHTPOSITION_OFFSET))(this, index, value);
		}

		::System::Void SetLookAtPosition(::UnityEngine::Vector3 lookAtPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATPOSITION_OFFSET))(this, lookAtPosition);
		}

		::System::Void SetLookAtClampWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATCLAMPWEIGHT_OFFSET))(this, weight);
		}

		::System::Void SetLookAtBodyWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATBODYWEIGHT_OFFSET))(this, weight);
		}

		::System::Void SetLookAtHeadWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATHEADWEIGHT_OFFSET))(this, weight);
		}

		::System::Void SetLookAtEyesWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATEYESWEIGHT_OFFSET))(this, weight);
		}

		::System::Void SolveIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SOLVEIK_OFFSET))(this);
		}

		::UnityEngine::Vector3 InternalGetBodyPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETBODYPOSITION_OFFSET))(this);
		}

		::System::Void InternalSetBodyPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETBODYPOSITION_OFFSET))(this, value);
		}

		::System::Void InternalSetBodyRotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETBODYROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 InternalGetGoalPosition(::UnityEngine::AvatarIKGoal index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETGOALPOSITION_OFFSET))(this, index);
		}

		::System::Void InternalSetGoalPosition(::UnityEngine::AvatarIKGoal index, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALPOSITION_OFFSET))(this, index, pos);
		}

		::System::Void InternalSetGoalRotation(::UnityEngine::AvatarIKGoal index, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALROTATION_OFFSET))(this, index, rot);
		}

		::System::Void InternalSetGoalWeightPosition(::UnityEngine::AvatarIKGoal index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALWEIGHTPOSITION_OFFSET))(this, index, value);
		}

		::System::Void InternalSetGoalWeightRotation(::UnityEngine::AvatarIKGoal index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALWEIGHTROTATION_OFFSET))(this, index, value);
		}

		::System::Single InternalGetGoalWeightPosition(::UnityEngine::AvatarIKGoal index)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETGOALWEIGHTPOSITION_OFFSET))(this, index);
		}

		::System::Void InternalSetHintPosition(::UnityEngine::AvatarIKHint index, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKHint, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETHINTPOSITION_OFFSET))(this, index, pos);
		}

		::System::Void InternalSetHintWeightPosition(::UnityEngine::AvatarIKHint index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKHint, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETHINTWEIGHTPOSITION_OFFSET))(this, index, value);
		}

		::System::Void InternalSetLookAtPosition(::UnityEngine::Vector3 lookAtPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATPOSITION_OFFSET))(this, lookAtPosition);
		}

		::System::Void InternalSetLookAtClampWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATCLAMPWEIGHT_OFFSET))(this, weight);
		}

		::System::Void InternalSetLookAtBodyWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATBODYWEIGHT_OFFSET))(this, weight);
		}

		::System::Void InternalSetLookAtHeadWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATHEADWEIGHT_OFFSET))(this, weight);
		}

		::System::Void InternalSetLookAtEyesWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATEYESWEIGHT_OFFSET))(this, weight);
		}

		::System::Void InternalSolveIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSOLVEIK_OFFSET))(this);
		}

		/*
		static ::System::Void InternalGetBodyPosition_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETBODYPOSITION_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void InternalSetBodyPosition_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETBODYPOSITION_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void InternalSetBodyRotation_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::Quaternion& value)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETBODYROTATION_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void InternalGetGoalPosition_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::AvatarIKGoal index, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::AvatarIKGoal, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETGOALPOSITION_INJECTED_OFFSET))(_unity_self, index, ret);
		}
		*/

		/*
		static ::System::Void InternalSetGoalPosition_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::AvatarIKGoal index, ::UnityEngine::Vector3& pos)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::AvatarIKGoal, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALPOSITION_INJECTED_OFFSET))(_unity_self, index, pos);
		}
		*/

		/*
		static ::System::Void InternalSetGoalRotation_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::AvatarIKGoal index, ::UnityEngine::Quaternion& rot)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::AvatarIKGoal, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALROTATION_INJECTED_OFFSET))(_unity_self, index, rot);
		}
		*/

		/*
		static ::System::Void InternalSetGoalWeightPosition_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::AvatarIKGoal index, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::AvatarIKGoal, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALWEIGHTPOSITION_INJECTED_OFFSET))(_unity_self, index, value);
		}
		*/

		/*
		static ::System::Void InternalSetGoalWeightRotation_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::AvatarIKGoal index, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::AvatarIKGoal, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALWEIGHTROTATION_INJECTED_OFFSET))(_unity_self, index, value);
		}
		*/

		/*
		static ::System::Single InternalGetGoalWeightPosition_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::AvatarIKGoal index)
		{
			return ((::System::Single(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETGOALWEIGHTPOSITION_INJECTED_OFFSET))(_unity_self, index);
		}
		*/

		/*
		static ::System::Void InternalSetHintPosition_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::AvatarIKHint index, ::UnityEngine::Vector3& pos)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::AvatarIKHint, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETHINTPOSITION_INJECTED_OFFSET))(_unity_self, index, pos);
		}
		*/

		/*
		static ::System::Void InternalSetHintWeightPosition_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::AvatarIKHint index, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::AvatarIKHint, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETHINTWEIGHTPOSITION_INJECTED_OFFSET))(_unity_self, index, value);
		}
		*/

		/*
		static ::System::Void InternalSetLookAtPosition_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::Vector3& lookAtPosition)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATPOSITION_INJECTED_OFFSET))(_unity_self, lookAtPosition);
		}
		*/

		/*
		static ::System::Void InternalSetLookAtClampWeight_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::System::Single weight)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATCLAMPWEIGHT_INJECTED_OFFSET))(_unity_self, weight);
		}
		*/

		/*
		static ::System::Void InternalSetLookAtBodyWeight_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::System::Single weight)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATBODYWEIGHT_INJECTED_OFFSET))(_unity_self, weight);
		}
		*/

		/*
		static ::System::Void InternalSetLookAtHeadWeight_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::System::Single weight)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATHEADWEIGHT_INJECTED_OFFSET))(_unity_self, weight);
		}
		*/

		/*
		static ::System::Void InternalSetLookAtEyesWeight_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::System::Single weight)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATEYESWEIGHT_INJECTED_OFFSET))(_unity_self, weight);
		}
		*/

		/*
		static ::System::Void InternalSolveIK_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSOLVEIK_INJECTED_OFFSET))(_unity_self);
		}
		*/
	};
}
